#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DILFPDDAGGN.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class IENEIEIKJHC;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define ANDCMNFNAIL_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1A164990)
#define ANDCMNFNAIL_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1A164710)
#define ANDCMNFNAIL_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1A164720)
#define ANDCMNFNAIL_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A1647E0)
#define ANDCMNFNAIL_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1A164910)
#define ANDCMNFNAIL_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1A164B40)
#define ANDCMNFNAIL_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1A164DE0)
#define ANDCMNFNAIL_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1A1643C0)
#define ANDCMNFNAIL_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1A164DC0)
#define ANDCMNFNAIL_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1A1643A0)
#define ANDCMNFNAIL_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1A164620)
#define ANDCMNFNAIL__CTOR_OFFSET UNITYSDK_OFFSET(0x1A164A70)

inline static constexpr unsigned int ANDCMNFNAIL_TypeDefinitionIndex = 13261;

class ANDCMNFNAIL : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::String*>* LHINHLCKHNE; // 0x10
	::System::Action* PLDOELOOFLL; // 0x18
	::Il2CppArray<::IENEIEIKJHC*>* OJMBOGGMIKO; // 0x20
	::DILFPDDAGGN DHDJDGFNBOA; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* FLBOKGKPECD; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANDCMNFNAIL__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANDCMNFNAIL_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANDCMNFNAIL_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANDCMNFNAIL_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANDCMNFNAIL_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + ANDCMNFNAIL_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + ANDCMNFNAIL_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANDCMNFNAIL_BHLAEBMEOLO_OFFSET))(this);
	}

	::IENEIEIKJHC* IFDPKDOFOJD(::System::String* MGMDLMBEDJF)
	{
		return ((::IENEIEIKJHC*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ANDCMNFNAIL_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANDCMNFNAIL_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANDCMNFNAIL_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + ANDCMNFNAIL_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
