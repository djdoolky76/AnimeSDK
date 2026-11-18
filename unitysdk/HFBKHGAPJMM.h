#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AOELFECICOD.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class JFOGKNLPCKH;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define HFBKHGAPJMM_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x15A89790)
#define HFBKHGAPJMM_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x15A89520)
#define HFBKHGAPJMM_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x15A896D0)
#define HFBKHGAPJMM_FINALIZE_OFFSET UNITYSDK_OFFSET(0x15A89870)
#define HFBKHGAPJMM_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x15A89530)
#define HFBKHGAPJMM_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x15A899F0)
#define HFBKHGAPJMM_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x15A89170)
#define HFBKHGAPJMM_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x15A89C60)
#define HFBKHGAPJMM_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x15A89150)
#define HFBKHGAPJMM_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x15A89430)
#define HFBKHGAPJMM__CTOR_OFFSET UNITYSDK_OFFSET(0x15A899A0)

inline static constexpr unsigned int HFBKHGAPJMM_TypeDefinitionIndex = 10485;

class HFBKHGAPJMM : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::AOELFECICOD DHDJDGFNBOA; // 0x18
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x30
	::Il2CppArray<::JFOGKNLPCKH*>* OJMBOGGMIKO; // 0x38
	::System::Int32 IJDGGCANOFI; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFBKHGAPJMM__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HFBKHGAPJMM_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFBKHGAPJMM_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + HFBKHGAPJMM_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + HFBKHGAPJMM_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFBKHGAPJMM_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFBKHGAPJMM_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFBKHGAPJMM_FINALIZE_OFFSET))(this);
	}

	::JFOGKNLPCKH* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::JFOGKNLPCKH*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HFBKHGAPJMM_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFBKHGAPJMM_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFBKHGAPJMM_NAMKJOJBAOA_OFFSET))(this);
	}
};
