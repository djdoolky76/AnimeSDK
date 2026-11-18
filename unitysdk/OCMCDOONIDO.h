#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GLJAGCLOONF.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class AKIIBAKCEBN;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define OCMCDOONIDO_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x18E28260)
#define OCMCDOONIDO_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x18E28020)
#define OCMCDOONIDO_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x18E281A0)
#define OCMCDOONIDO_FINALIZE_OFFSET UNITYSDK_OFFSET(0x18E28340)
#define OCMCDOONIDO_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x18E28030)
#define OCMCDOONIDO_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x18E284C0)
#define OCMCDOONIDO_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x18E28720)
#define OCMCDOONIDO_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x18E27C70)
#define OCMCDOONIDO_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x18E28700)
#define OCMCDOONIDO_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x18E27C50)
#define OCMCDOONIDO_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x18E27F30)
#define OCMCDOONIDO__CTOR_OFFSET UNITYSDK_OFFSET(0x18E28470)

inline static constexpr unsigned int OCMCDOONIDO_TypeDefinitionIndex = 15832;

class OCMCDOONIDO : public ::System::Object
{
public:
	::Il2CppArray<::AKIIBAKCEBN*>* OJMBOGGMIKO; // 0x10
	::GLJAGCLOONF DHDJDGFNBOA; // 0x18
	::System::Action* PLDOELOOFLL; // 0x30
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCMCDOONIDO__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OCMCDOONIDO_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCMCDOONIDO_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + OCMCDOONIDO_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + OCMCDOONIDO_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCMCDOONIDO_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCMCDOONIDO_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCMCDOONIDO_FINALIZE_OFFSET))(this);
	}

	::AKIIBAKCEBN* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::AKIIBAKCEBN*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OCMCDOONIDO_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCMCDOONIDO_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCMCDOONIDO_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + OCMCDOONIDO_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
