#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/LCCHKMDNHHB.h"
#include "unitysdk/System/Object.h"

class JJKGMENHMPP;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define GPEENDOAOLA_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x152D3290)
#define GPEENDOAOLA_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x152D3010)
#define GPEENDOAOLA_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x152D3020)
#define GPEENDOAOLA_FINALIZE_OFFSET UNITYSDK_OFFSET(0x152D30E0)
#define GPEENDOAOLA_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x152D3210)
#define GPEENDOAOLA_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x152D36B0)
#define GPEENDOAOLA_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x152D3440)
#define GPEENDOAOLA_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x152D2CD0)
#define GPEENDOAOLA_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x152D3690)
#define GPEENDOAOLA_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x152D2CB0)
#define GPEENDOAOLA_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x152D2F30)
#define GPEENDOAOLA__CTOR_OFFSET UNITYSDK_OFFSET(0x152D3370)

inline static constexpr unsigned int GPEENDOAOLA_TypeDefinitionIndex = 13045;

class GPEENDOAOLA : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::String*>* LHINHLCKHNE; // 0x10
	::LCCHKMDNHHB DHDJDGFNBOA; // 0x18
	::System::Action* PLDOELOOFLL; // 0x30
	::Il2CppArray<::JJKGMENHMPP*>* OJMBOGGMIKO; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* FLBOKGKPECD; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPEENDOAOLA__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GPEENDOAOLA_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPEENDOAOLA_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPEENDOAOLA_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPEENDOAOLA_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + GPEENDOAOLA_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + GPEENDOAOLA_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPEENDOAOLA_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + GPEENDOAOLA_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPEENDOAOLA_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPEENDOAOLA_CHLEALKAOJO_OFFSET))(this);
	}

	::JJKGMENHMPP* IFDPKDOFOJD(::System::String* MCOHLHMKLIP)
	{
		return ((::JJKGMENHMPP*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GPEENDOAOLA_IFDPKDOFOJD_OFFSET))(this, MCOHLHMKLIP);
	}
};
