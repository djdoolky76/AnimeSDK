#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FCGOFEIHBAI.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class GOJHCIAEGOH;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define JDLEOFCGHAD_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x19547670)
#define JDLEOFCGHAD_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x195473F0)
#define JDLEOFCGHAD_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x19547400)
#define JDLEOFCGHAD_FINALIZE_OFFSET UNITYSDK_OFFSET(0x195474C0)
#define JDLEOFCGHAD_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x195475F0)
#define JDLEOFCGHAD_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x19547A50)
#define JDLEOFCGHAD_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x195477A0)
#define JDLEOFCGHAD_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x19547040)
#define JDLEOFCGHAD_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x19547C80)
#define JDLEOFCGHAD_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x19547020)
#define JDLEOFCGHAD_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x19547300)
#define JDLEOFCGHAD__CTOR_OFFSET UNITYSDK_OFFSET(0x19547750)

inline static constexpr unsigned int JDLEOFCGHAD_TypeDefinitionIndex = 12623;

class JDLEOFCGHAD : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x18
	::System::Action* PLDOELOOFLL; // 0x20
	::Il2CppArray<::GOJHCIAEGOH*>* OJMBOGGMIKO; // 0x28
	::FCGOFEIHBAI DHDJDGFNBOA; // 0x30
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDLEOFCGHAD__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JDLEOFCGHAD_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDLEOFCGHAD_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDLEOFCGHAD_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDLEOFCGHAD_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + JDLEOFCGHAD_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + JDLEOFCGHAD_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDLEOFCGHAD_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + JDLEOFCGHAD_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::GOJHCIAEGOH* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::GOJHCIAEGOH*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JDLEOFCGHAD_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDLEOFCGHAD_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDLEOFCGHAD_CHLEALKAOJO_OFFSET))(this);
	}
};
