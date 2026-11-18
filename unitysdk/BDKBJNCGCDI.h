#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJEJBPGJPJN.h"
#include "unitysdk/KAAFCLHNIBE.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }
template <typename T> class DBMAHDDGMHM_1;
template <typename T> class IHECGHKOIPM_1;
template <typename T> class LJHFMILANJA_1;

#define BDKBJNCGCDI_CGGNBIEKGEN_OFFSET UNITYSDK_OFFSET(0x1506A440)
#define BDKBJNCGCDI_JALFMACCMIO_OFFSET UNITYSDK_OFFSET(0x1506A450)
#define BDKBJNCGCDI_KPCNFDONIGP_OFFSET UNITYSDK_OFFSET(0x1506A430)
#define BDKBJNCGCDI_MEDJELJGNAA_OFFSET UNITYSDK_OFFSET(0x1506A620)
#define BDKBJNCGCDI_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x15069F40)
#define BDKBJNCGCDI__CTOR_OFFSET UNITYSDK_OFFSET(0x1506A390)

inline static constexpr unsigned int BDKBJNCGCDI_TypeDefinitionIndex = 63742;

class BDKBJNCGCDI : public ::JJEJBPGJPJN
{
public:
	::System::Collections::Generic::IReadOnlyDictionary_2<::KAAFCLHNIBE, ::IHECGHKOIPM_1<::System::Boolean>*>* _NBMDLHNMAOM_k__BackingField; // 0x88
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::DBMAHDDGMHM_1<::System::Boolean>*>* ONPDNCKLFGC; // 0x90
	::LJHFMILANJA_1<::System::Boolean>* FHFMJHNDAKI; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDKBJNCGCDI__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDKBJNCGCDI_ONCREATEPROPERTY_OFFSET))(this);
	}

	::System::Void KPCNFDONIGP(::System::Collections::Generic::IReadOnlyDictionary_2<::KAAFCLHNIBE, ::IHECGHKOIPM_1<::System::Boolean>*>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyDictionary_2<::KAAFCLHNIBE, ::IHECGHKOIPM_1<::System::Boolean>*>*))((::PBYTE)hIl2Cpp + BDKBJNCGCDI_KPCNFDONIGP_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Collections::Generic::IReadOnlyDictionary_2<::KAAFCLHNIBE, ::IHECGHKOIPM_1<::System::Boolean>*>* CGGNBIEKGEN()
	{
		return ((::System::Collections::Generic::IReadOnlyDictionary_2<::KAAFCLHNIBE, ::IHECGHKOIPM_1<::System::Boolean>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDKBJNCGCDI_CGGNBIEKGEN_OFFSET))(this);
	}

	::DBMAHDDGMHM_1<::System::Boolean>* JALFMACCMIO(::System::Int32 HHEGANCPILH, ::System::Boolean CGEMLHFPINP)
	{
		return ((::DBMAHDDGMHM_1<::System::Boolean>*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + BDKBJNCGCDI_JALFMACCMIO_OFFSET))(this, HHEGANCPILH, CGEMLHFPINP);
	}

	::System::Void MEDJELJGNAA(::System::Int32 HHEGANCPILH, ::System::Boolean CGEMLHFPINP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + BDKBJNCGCDI_MEDJELJGNAA_OFFSET))(this, HHEGANCPILH, CGEMLHFPINP);
	}
};
