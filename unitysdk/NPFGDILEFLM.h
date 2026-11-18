#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/MHCHHEHAEND.h"
#include "unitysdk/System/Object.h"

class IDEBDPICDJA;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define NPFGDILEFLM_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x191270B0)
#define NPFGDILEFLM_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x19126E30)
#define NPFGDILEFLM_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x19126E40)
#define NPFGDILEFLM_FINALIZE_OFFSET UNITYSDK_OFFSET(0x19126F00)
#define NPFGDILEFLM_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x19127030)
#define NPFGDILEFLM_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x19127490)
#define NPFGDILEFLM_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x191271E0)
#define NPFGDILEFLM_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x19126A90)
#define NPFGDILEFLM_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x191276C0)
#define NPFGDILEFLM_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x19126A70)
#define NPFGDILEFLM_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x19126D50)
#define NPFGDILEFLM__CTOR_OFFSET UNITYSDK_OFFSET(0x19127190)

inline static constexpr unsigned int NPFGDILEFLM_TypeDefinitionIndex = 15285;

class NPFGDILEFLM : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::MHCHHEHAEND DHDJDGFNBOA; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x30
	::Il2CppArray<::IDEBDPICDJA*>* OJMBOGGMIKO; // 0x38
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPFGDILEFLM__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPFGDILEFLM_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPFGDILEFLM_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPFGDILEFLM_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPFGDILEFLM_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + NPFGDILEFLM_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + NPFGDILEFLM_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPFGDILEFLM_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + NPFGDILEFLM_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::IDEBDPICDJA* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::IDEBDPICDJA*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPFGDILEFLM_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPFGDILEFLM_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPFGDILEFLM_NAMKJOJBAOA_OFFSET))(this);
	}
};
