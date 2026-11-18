#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/APGOFENBBDA.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class IFGDPGDLDOJ;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define FDNPDFDHFBM_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x17AB1B30)
#define FDNPDFDHFBM_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x17AB18F0)
#define FDNPDFDHFBM_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x17AB1A70)
#define FDNPDFDHFBM_FINALIZE_OFFSET UNITYSDK_OFFSET(0x17AB1C10)
#define FDNPDFDHFBM_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x17AB1900)
#define FDNPDFDHFBM_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x17AB1D90)
#define FDNPDFDHFBM_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x17AB1FE0)
#define FDNPDFDHFBM_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x17AB1540)
#define FDNPDFDHFBM_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x17AB1FC0)
#define FDNPDFDHFBM_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x17AB1520)
#define FDNPDFDHFBM_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x17AB1800)
#define FDNPDFDHFBM__CTOR_OFFSET UNITYSDK_OFFSET(0x17AB1D40)

inline static constexpr unsigned int FDNPDFDHFBM_TypeDefinitionIndex = 12329;

class FDNPDFDHFBM : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::APGOFENBBDA DHDJDGFNBOA; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x30
	::System::Action* PLDOELOOFLL; // 0x38
	::Il2CppArray<::IFGDPGDLDOJ*>* OJMBOGGMIKO; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDNPDFDHFBM__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FDNPDFDHFBM_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDNPDFDHFBM_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + FDNPDFDHFBM_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + FDNPDFDHFBM_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDNPDFDHFBM_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDNPDFDHFBM_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDNPDFDHFBM_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDNPDFDHFBM_CHLEALKAOJO_OFFSET))(this);
	}

	::IFGDPGDLDOJ* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::IFGDPGDLDOJ*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FDNPDFDHFBM_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + FDNPDFDHFBM_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDNPDFDHFBM_NAMKJOJBAOA_OFFSET))(this);
	}
};
