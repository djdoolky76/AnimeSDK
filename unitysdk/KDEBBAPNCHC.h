#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/OEGGOLELOGJ.h"
#include "unitysdk/System/Object.h"

class DEGMAELIDJP;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define KDEBBAPNCHC_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x19556680)
#define KDEBBAPNCHC_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x19556440)
#define KDEBBAPNCHC_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x195565C0)
#define KDEBBAPNCHC_FINALIZE_OFFSET UNITYSDK_OFFSET(0x19556760)
#define KDEBBAPNCHC_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x19556450)
#define KDEBBAPNCHC_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x19556AD0)
#define KDEBBAPNCHC_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x19556900)
#define KDEBBAPNCHC_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x19556090)
#define KDEBBAPNCHC_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x195568E0)
#define KDEBBAPNCHC_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x19556070)
#define KDEBBAPNCHC_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x19556350)
#define KDEBBAPNCHC__CTOR_OFFSET UNITYSDK_OFFSET(0x19556890)

inline static constexpr unsigned int KDEBBAPNCHC_TypeDefinitionIndex = 13250;

class KDEBBAPNCHC : public ::System::Object
{
public:
	::Il2CppArray<::DEGMAELIDJP*>* OJMBOGGMIKO; // 0x10
	::OEGGOLELOGJ DHDJDGFNBOA; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x30
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x38
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDEBBAPNCHC__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KDEBBAPNCHC_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDEBBAPNCHC_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + KDEBBAPNCHC_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + KDEBBAPNCHC_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDEBBAPNCHC_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDEBBAPNCHC_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDEBBAPNCHC_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDEBBAPNCHC_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDEBBAPNCHC_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + KDEBBAPNCHC_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::DEGMAELIDJP* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::DEGMAELIDJP*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KDEBBAPNCHC_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
