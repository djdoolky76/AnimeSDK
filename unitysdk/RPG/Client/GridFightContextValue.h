#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class FADHEIGJENF;
class FIIJNPBFJBG;
class FPGNLIEPKCA;
namespace RPG::Client { class GridFightEquipItemConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTCONTEXTVALUE_CTOR_OFFSET UNITYSDK_OFFSET(0xDA9FBB0)
#define RPG_CLIENT_GRIDFIGHTCONTEXTVALUE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDA9F710)
#define RPG_CLIENT_GRIDFIGHTCONTEXTVALUE_GETTRAITTEMPLATEID_OFFSET UNITYSDK_OFFSET(0xDA9FB20)
#define RPG_CLIENT_GRIDFIGHTCONTEXTVALUE_GET_ITEM_OFFSET UNITYSDK_OFFSET(0xDA9F980)
#define RPG_CLIENT_GRIDFIGHTCONTEXTVALUE_GET_MOONGAMESUBTRAITID_OFFSET UNITYSDK_OFFSET(0xDA9FB00)
#define RPG_CLIENT_GRIDFIGHTCONTEXTVALUE_GET_VALUEMAP_OFFSET UNITYSDK_OFFSET(0xDA9F870)
#define RPG_CLIENT_GRIDFIGHTCONTEXTVALUE_SET_ITEM_OFFSET UNITYSDK_OFFSET(0xDA9FA60)
#define RPG_CLIENT_GRIDFIGHTCONTEXTVALUE_SET_MOONGAMESUBTRAITID_OFFSET UNITYSDK_OFFSET(0xDA9FB10)
#define RPG_CLIENT_GRIDFIGHTCONTEXTVALUE_SYNCELATIONTEMPLATEID_OFFSET UNITYSDK_OFFSET(0xDA9ED70)
#define RPG_CLIENT_GRIDFIGHTCONTEXTVALUE_SYNCMOONGAMESUBTRAITID_OFFSET UNITYSDK_OFFSET(0xDA9F230)
#define RPG_CLIENT_GRIDFIGHTCONTEXTVALUE_SYNC_1_OFFSET UNITYSDK_OFFSET(0xDA9EF30)
#define RPG_CLIENT_GRIDFIGHTCONTEXTVALUE_SYNC_2_OFFSET UNITYSDK_OFFSET(0xDA9F0A0)
#define RPG_CLIENT_GRIDFIGHTCONTEXTVALUE_SYNC_OFFSET UNITYSDK_OFFSET(0xDA9EBC0)
#define RPG_CLIENT_GRIDFIGHTCONTEXTVALUE_TRYGETVALUE_OFFSET UNITYSDK_OFFSET(0xDA9F8B0)
#define RPG_CLIENT_GRIDFIGHTCONTEXTVALUE_UPDATE_OFFSET UNITYSDK_OFFSET(0xDA9F280)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightContextValue_TypeDefinitionIndex = 67433;

	class GridFightContextValue : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::FixPoint>* _ValueMap; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _TraitIDToTemplateID; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemConfig*>* BasicEquipConfigs; // 0x20
		::System::UInt32 _MoonGameSubTraitId_k__BackingField; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONTEXTVALUE_CTOR_OFFSET))(this);
		}

		::System::Void Sync(::FIIJNPBFJBG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FIIJNPBFJBG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONTEXTVALUE_SYNC_OFFSET))(this, a1);
		}

		::System::Void Sync_1(::System::Collections::Generic::IDictionary_2<::System::String*, ::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONTEXTVALUE_SYNC_1_OFFSET))(this, a1);
		}

		::System::Void Sync_2(::FPGNLIEPKCA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FPGNLIEPKCA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONTEXTVALUE_SYNC_2_OFFSET))(this, a1);
		}

		::System::Void SyncElationTemplateID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONTEXTVALUE_SYNCELATIONTEMPLATEID_OFFSET))(this, a1);
		}

		::System::Void SyncMoonGameSubTraitId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONTEXTVALUE_SYNCMOONGAMESUBTRAITID_OFFSET))(this, a1);
		}

		::System::Void Update(::FADHEIGJENF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FADHEIGJENF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONTEXTVALUE_UPDATE_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONTEXTVALUE_DISPOSE_OFFSET))(this);
		}

		::System::Collections::Generic::IDictionary_2<::System::String*, ::RPG::GameCore::FixPoint>* get_ValueMap()
		{
			return ((::System::Collections::Generic::IDictionary_2<::System::String*, ::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONTEXTVALUE_GET_VALUEMAP_OFFSET))(this);
		}

		::System::Boolean TryGetValue(::System::String* a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONTEXTVALUE_TRYGETVALUE_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::FixPoint get_Item(::System::String* a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONTEXTVALUE_GET_ITEM_OFFSET))(this, a1);
		}

		::System::Void set_Item(::System::String* a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONTEXTVALUE_SET_ITEM_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_MoonGameSubTraitId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONTEXTVALUE_GET_MOONGAMESUBTRAITID_OFFSET))(this);
		}

		::System::Void set_MoonGameSubTraitId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONTEXTVALUE_SET_MOONGAMESUBTRAITID_OFFSET))(this, a1);
		}

		::System::UInt32 GetTraitTemplateID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONTEXTVALUE_GETTRAITTEMPLATEID_OFFSET))(this, a1);
		}

	};
}
