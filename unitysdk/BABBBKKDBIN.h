#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BAMIOFOKCEB.h"
#include "unitysdk/OCKCNOOHILK.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyCollection_1; }

#define BABBBKKDBIN_CTOR_OFFSET UNITYSDK_OFFSET(0x199BF640)
#define BABBBKKDBIN_ECMDHBGGPFJ_OFFSET UNITYSDK_OFFSET(0x199BEAB0)
#define BABBBKKDBIN_EIBHHOPHJCK_OFFSET UNITYSDK_OFFSET(0x199BEBC0)
#define BABBBKKDBIN_GCCPIHBMFBM_OFFSET UNITYSDK_OFFSET(0x199BF500)
#define BABBBKKDBIN_GET_CURRENTCYCLEID_OFFSET UNITYSDK_OFFSET(0x199BEA90)
#define BABBBKKDBIN_JPGLPLPMEAE_OFFSET UNITYSDK_OFFSET(0x199BED30)
#define BABBBKKDBIN_LLHLOLOBEBC_OFFSET UNITYSDK_OFFSET(0x199BEAF0)
#define BABBBKKDBIN_NIMINCMIMEE_OFFSET UNITYSDK_OFFSET(0x199BF5A0)
#define BABBBKKDBIN_PDHOOKDBHDF_OFFSET UNITYSDK_OFFSET(0x199BF350)
#define BABBBKKDBIN_SET_CURRENTCYCLEID_OFFSET UNITYSDK_OFFSET(0x199BEAA0)

inline static constexpr unsigned int BABBBKKDBIN_TypeDefinitionIndex = 77076;

	class BABBBKKDBIN : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::OCKCNOOHILK>* BMFCOHKNDNH; // 0x10
		::BAMIOFOKCEB _CurrentCycleId_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BABBBKKDBIN_CTOR_OFFSET))(this);
		}

		::BAMIOFOKCEB get_CurrentCycleId()
		{
			return ((::BAMIOFOKCEB(*)(::PVOID))((::PBYTE)hIl2Cpp + BABBBKKDBIN_GET_CURRENTCYCLEID_OFFSET))(this);
		}

		::System::Void set_CurrentCycleId(::BAMIOFOKCEB a1)
		{
			return ((::System::Void(*)(::PVOID, ::BAMIOFOKCEB))((::PBYTE)hIl2Cpp + BABBBKKDBIN_SET_CURRENTCYCLEID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyCollection_1<::OCKCNOOHILK>* ECMDHBGGPFJ()
		{
			return ((::System::Collections::Generic::IReadOnlyCollection_1<::OCKCNOOHILK>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BABBBKKDBIN_ECMDHBGGPFJ_OFFSET))(this);
		}

		::System::Boolean LLHLOLOBEBC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BABBBKKDBIN_LLHLOLOBEBC_OFFSET))(this);
		}

		::System::Boolean EIBHHOPHJCK(::BAMIOFOKCEB a1, ::System::Collections::Generic::IEnumerable_1<::OCKCNOOHILK>* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::BAMIOFOKCEB, ::System::Collections::Generic::IEnumerable_1<::OCKCNOOHILK>*))((::PBYTE)hIl2Cpp + BABBBKKDBIN_EIBHHOPHJCK_OFFSET))(this, a1, a2);
		}

		::System::Boolean PDHOOKDBHDF(::BAMIOFOKCEB a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BAMIOFOKCEB))((::PBYTE)hIl2Cpp + BABBBKKDBIN_PDHOOKDBHDF_OFFSET))(this, a1);
		}

		::System::Boolean GCCPIHBMFBM(::OCKCNOOHILK a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OCKCNOOHILK))((::PBYTE)hIl2Cpp + BABBBKKDBIN_GCCPIHBMFBM_OFFSET))(this, a1);
		}

		::System::Boolean NIMINCMIMEE(::OCKCNOOHILK a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OCKCNOOHILK))((::PBYTE)hIl2Cpp + BABBBKKDBIN_NIMINCMIMEE_OFFSET))(this, a1);
		}

		static ::System::Boolean JPGLPLPMEAE(::System::Collections::Generic::IEnumerable_1<::OCKCNOOHILK>* a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::IEnumerable_1<::OCKCNOOHILK>*, ::System::Object*))((::PBYTE)hIl2Cpp + BABBBKKDBIN_JPGLPLPMEAE_OFFSET))(a1, a2);
		}

	};
