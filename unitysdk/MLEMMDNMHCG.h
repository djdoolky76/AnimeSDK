#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftEffectType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueTuple_3.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
class GMDIBFIGIEG;
class HOBCIDMKOFM;
class JJEHILJOIEK;
class MHGMGKGDLOC;
class PHCMIJEDENP;
class PMOMFDCLALP;
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define MLEMMDNMHCG_AGCJJFEDKPG_OFFSET UNITYSDK_OFFSET(0x1D6F3750)
#define MLEMMDNMHCG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6EEEB0)
#define MLEMMDNMHCG_GET_TALENTPATHS_OFFSET UNITYSDK_OFFSET(0x1D6F1EC0)
#define MLEMMDNMHCG_GMCHONCAKEA_OFFSET UNITYSDK_OFFSET(0x1D6F1ED0)
#define MLEMMDNMHCG_HEFHOPKDNMH_OFFSET UNITYSDK_OFFSET(0x1D6F3040)
#define MLEMMDNMHCG_IAPBOJAHMFB_OFFSET UNITYSDK_OFFSET(0x1D6F30D0)
#define MLEMMDNMHCG_JEPMMICCBII_OFFSET UNITYSDK_OFFSET(0x1D6F4010)
#define MLEMMDNMHCG_KEAENOMHGIA_OFFSET UNITYSDK_OFFSET(0x1D6F20A0)
#define MLEMMDNMHCG_LDIMFKDFHCL_OFFSET UNITYSDK_OFFSET(0x1D6F2D00)
#define MLEMMDNMHCG_MAFFBABEDPI_OFFSET UNITYSDK_OFFSET(0x1D6F3E50)
#define MLEMMDNMHCG_NJAFNONOAKL_OFFSET UNITYSDK_OFFSET(0x1D6F2760)

inline static constexpr unsigned int MLEMMDNMHCG_TypeDefinitionIndex = 42853;

	class MLEMMDNMHCG : public ::System::Object
	{
	public:
		::JJEHILJOIEK* GLBMJMPEFHF; // 0x10
		::System::Collections::Generic::IReadOnlyList_1<::PHCMIJEDENP*>* _TalentPaths_k__BackingField; // 0x18
		::System::Void _ctor(::System::Collections::Generic::IReadOnlyList_1<::PHCMIJEDENP*>* a1, ::JJEHILJOIEK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::PHCMIJEDENP*>*, ::JJEHILJOIEK*))((::PBYTE)hIl2Cpp + MLEMMDNMHCG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::IReadOnlyList_1<::PHCMIJEDENP*>* get_TalentPaths()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::PHCMIJEDENP*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLEMMDNMHCG_GET_TALENTPATHS_OFFSET))(this);
		}

		::PHCMIJEDENP* GMCHONCAKEA(::System::UInt32 a1)
		{
			return ((::PHCMIJEDENP*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MLEMMDNMHCG_GMCHONCAKEA_OFFSET))(this, a1);
		}

		::GMDIBFIGIEG* KEAENOMHGIA(::System::UInt32 a1)
		{
			return ((::GMDIBFIGIEG*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MLEMMDNMHCG_KEAENOMHGIA_OFFSET))(this, a1);
		}

		::System::Nullable_1<::System::Collections::Generic::KeyValuePair_2<::PHCMIJEDENP*, ::GMDIBFIGIEG*>> NJAFNONOAKL(::System::UInt32 a1)
		{
			return ((::System::Nullable_1<::System::Collections::Generic::KeyValuePair_2<::PHCMIJEDENP*, ::GMDIBFIGIEG*>>(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MLEMMDNMHCG_NJAFNONOAKL_OFFSET))(this, a1);
		}

		::System::Nullable_1<::UnityEngine::Vector2Int> LDIMFKDFHCL()
		{
			return ((::System::Nullable_1<::UnityEngine::Vector2Int>(*)(::PVOID))((::PBYTE)hIl2Cpp + MLEMMDNMHCG_LDIMFKDFHCL_OFFSET))(this);
		}

		::HOBCIDMKOFM* IAPBOJAHMFB()
		{
			return ((::HOBCIDMKOFM*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLEMMDNMHCG_IAPBOJAHMFB_OFFSET))(this);
		}

		::System::Nullable_1<::System::Int32> MAFFBABEDPI()
		{
			return ((::System::Nullable_1<::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + MLEMMDNMHCG_MAFFBABEDPI_OFFSET))(this);
		}

		::PMOMFDCLALP* JEPMMICCBII()
		{
			return ((::PMOMFDCLALP*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLEMMDNMHCG_JEPMMICCBII_OFFSET))(this);
		}

		::MHGMGKGDLOC* HEFHOPKDNMH(::RPG::Client::MechCraft::MechCraftEffectType a1)
		{
			return ((::MHGMGKGDLOC*(*)(::PVOID, ::RPG::Client::MechCraft::MechCraftEffectType))((::PBYTE)hIl2Cpp + MLEMMDNMHCG_HEFHOPKDNMH_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_3<::PHCMIJEDENP*, ::GMDIBFIGIEG*, ::MHGMGKGDLOC*>>* AGCJJFEDKPG(::RPG::Client::MechCraft::MechCraftEffectType a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_3<::PHCMIJEDENP*, ::GMDIBFIGIEG*, ::MHGMGKGDLOC*>>*(*)(::PVOID, ::RPG::Client::MechCraft::MechCraftEffectType))((::PBYTE)hIl2Cpp + MLEMMDNMHCG_AGCJJFEDKPG_OFFSET))(this, a1);
		}

	};
