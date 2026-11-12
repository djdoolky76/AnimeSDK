#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightTraitEffectBase.h"
class MGBHKCMHDOK;
namespace RPG::Client { class GridFightTrait; }
namespace RPG::Client { class GridFightTraitSubTraitConfig; }
namespace RPG::Client { class IGridFightTraitEffect; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTMOONGAMETRAITEFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0xDC0AA90)
#define RPG_CLIENT_GRIDFIGHTMOONGAMETRAITEFFECT_GETALLSUBTRAITCONFIGS_OFFSET UNITYSDK_OFFSET(0xDC0ABC0)
#define RPG_CLIENT_GRIDFIGHTMOONGAMETRAITEFFECT_GET_CURRENTSUBTRAITCONFIG_OFFSET UNITYSDK_OFFSET(0xDC0B130)
#define RPG_CLIENT_GRIDFIGHTMOONGAMETRAITEFFECT_GET_ISSUBTRAITACTIVE_OFFSET UNITYSDK_OFFSET(0xDC0AEF0)
#define RPG_CLIENT_GRIDFIGHTMOONGAMETRAITEFFECT_GET_SUBTRAITEFFECTS_OFFSET UNITYSDK_OFFSET(0xDC0B730)
#define RPG_CLIENT_GRIDFIGHTMOONGAMETRAITEFFECT_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xDC0B950)
#define RPG_CLIENT_GRIDFIGHTMOONGAMETRAITEFFECT__ENSUREINIT_OFFSET UNITYSDK_OFFSET(0xDC0B210)
#define RPG_CLIENT_GRIDFIGHTMOONGAMETRAITEFFECT__GETSUBTRAITID_OFFSET UNITYSDK_OFFSET(0xDC0AF40)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightMoonGameTraitEffect_TypeDefinitionIndex = 67218;

	class GridFightMoonGameTraitEffect : public ::RPG::Client::GridFightTraitEffectBase
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::GridFightTraitSubTraitConfig*>* _SubTraitConfigs; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::IGridFightTraitEffect*>*>* _SubTraitEffects; // 0x38
		::System::UInt32 _CachedSubTraitId; // 0x40
		::System::Void _ctor(::System::UInt32 a1, ::RPG::Client::GridFightTrait* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMOONGAMETRAITEFFECT_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitSubTraitConfig*>* GetAllSubTraitConfigs()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitSubTraitConfig*>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMOONGAMETRAITEFFECT_GETALLSUBTRAITCONFIGS_OFFSET))();
		}

		::System::Boolean get_IsSubTraitActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMOONGAMETRAITEFFECT_GET_ISSUBTRAITACTIVE_OFFSET))(this);
		}

		::RPG::Client::GridFightTraitSubTraitConfig* get_CurrentSubTraitConfig()
		{
			return ((::RPG::Client::GridFightTraitSubTraitConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMOONGAMETRAITEFFECT_GET_CURRENTSUBTRAITCONFIG_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::IGridFightTraitEffect*>* get_SubTraitEffects()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::IGridFightTraitEffect*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMOONGAMETRAITEFFECT_GET_SUBTRAITEFFECTS_OFFSET))(this);
		}

		::System::Void OnUpdate(::MGBHKCMHDOK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MGBHKCMHDOK*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMOONGAMETRAITEFFECT_ONUPDATE_OFFSET))(this, a1);
		}

		::System::UInt32 _GetSubTraitId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMOONGAMETRAITEFFECT__GETSUBTRAITID_OFFSET))(this);
		}

		::System::Void _EnsureInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMOONGAMETRAITEFFECT__ENSUREINIT_OFFSET))(this);
		}

	};
}
