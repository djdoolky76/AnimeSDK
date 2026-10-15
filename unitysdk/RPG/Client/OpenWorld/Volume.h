#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/OpenWorld/VolumeBase.h"
class FECDLDCCHPN;
class LJFHKAJPFNE;
namespace RPG::Client { class Stage; }
namespace RPG::GameCore { class FilterVolumeData; }
namespace RPG::GameCore { class StageVolumeComponentData; }
namespace RPG::GameCore { class StageVolumeConfig; }
namespace RPG::GameCore { class StageVolumeConfigV2WithTAData; }
namespace RPG::GameCore { class StreamingBlockVolumeComponentEditorData; }
namespace RPG::GameCore { class StreamingSceneObjLodScaleVolumeComponentData; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_OPENWORLD_VOLUME_CTOR_OFFSET UNITYSDK_OFFSET(0xDA0F770)
#define RPG_CLIENT_OPENWORLD_VOLUME_FROMSTAGECONFIG_1_OFFSET UNITYSDK_OFFSET(0xDA0E8B0)
#define RPG_CLIENT_OPENWORLD_VOLUME_FROMSTAGECONFIG_OFFSET UNITYSDK_OFFSET(0xDA0D8B0)
#define RPG_CLIENT_OPENWORLD_VOLUME_GET_ATTACHREGIONVOLUMEINDEX_OFFSET UNITYSDK_OFFSET(0xDA0F750)
#define RPG_CLIENT_OPENWORLD_VOLUME_GET_ATTACHREGION_OFFSET UNITYSDK_OFFSET(0xDA0F730)
#define RPG_CLIENT_OPENWORLD_VOLUME_GET_OWNERSTAGE_OFFSET UNITYSDK_OFFSET(0xDA0F710)
#define RPG_CLIENT_OPENWORLD_VOLUME_LEGLFLJLHOJ_OFFSET UNITYSDK_OFFSET(0xDA0DE30)
#define RPG_CLIENT_OPENWORLD_VOLUME_LKINOKFJPCL_OFFSET UNITYSDK_OFFSET(0xDA0EEE0)
#define RPG_CLIENT_OPENWORLD_VOLUME_LMCEDCHJKFF_OFFSET UNITYSDK_OFFSET(0xDA0E4E0)
#define RPG_CLIENT_OPENWORLD_VOLUME_NLCAAMLMPME_OFFSET UNITYSDK_OFFSET(0xDA0E340)
#define RPG_CLIENT_OPENWORLD_VOLUME_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xDA0EDD0)
#define RPG_CLIENT_OPENWORLD_VOLUME_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xDA0ED50)
#define RPG_CLIENT_OPENWORLD_VOLUME_ONENABLE_OFFSET UNITYSDK_OFFSET(0xDA0ECC0)
#define RPG_CLIENT_OPENWORLD_VOLUME_SET_ATTACHREGIONVOLUMEINDEX_OFFSET UNITYSDK_OFFSET(0xDA0F760)
#define RPG_CLIENT_OPENWORLD_VOLUME_SET_ATTACHREGION_OFFSET UNITYSDK_OFFSET(0xDA0F740)
#define RPG_CLIENT_OPENWORLD_VOLUME_SET_OWNERSTAGE_OFFSET UNITYSDK_OFFSET(0xDA0F720)

namespace RPG::Client::OpenWorld
{
	class Volume : public ::RPG::Client::OpenWorld::VolumeBase
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::StageVolumeComponentData*>* StageVolumeComponents; // 0xF0
		::System::Collections::Generic::List_1<::RPG::GameCore::StreamingBlockVolumeComponentEditorData*>* BlockVolumeList; // 0xF8
		::System::Collections::Generic::List_1<::FECDLDCCHPN*>* VolumeComponents; // 0x100
		::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::System::Single>* VolumeToSceneObjectsLodScaleEditor; // 0x108
		::System::Boolean EMHAACACFOM; // 0x110
		::System::Byte _padding0[0x7];
		::RPG::Client::Stage* _OwnerStage_k__BackingField; // 0x118
		::System::UInt32 _AttachRegion_k__BackingField; // 0x120
		::System::UInt32 _AttachRegionVolumeIndex_k__BackingField; // 0x124
		::RPG::GameCore::FilterVolumeData* FilterVolumeData; // 0x128
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_VOLUME_CTOR_OFFSET))(this);
		}

		::System::Void FromStageConfig(::RPG::GameCore::StageVolumeConfig* a1, ::LJFHKAJPFNE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StageVolumeConfig*, ::LJFHKAJPFNE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_VOLUME_FROMSTAGECONFIG_OFFSET))(this, a1, a2);
		}

		::System::Void FromStageConfig_1(::RPG::GameCore::StageVolumeConfigV2WithTAData* a1, ::LJFHKAJPFNE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StageVolumeConfigV2WithTAData*, ::LJFHKAJPFNE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_VOLUME_FROMSTAGECONFIG_1_OFFSET))(this, a1, a2);
		}

		::System::Void NLCAAMLMPME(::RPG::GameCore::StreamingSceneObjLodScaleVolumeComponentData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StreamingSceneObjLodScaleVolumeComponentData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_VOLUME_NLCAAMLMPME_OFFSET))(this, a1);
		}

		::System::Void LEGLFLJLHOJ(::Il2CppArray<::RPG::GameCore::StageVolumeComponentData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::StageVolumeComponentData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_VOLUME_LEGLFLJLHOJ_OFFSET))(this, a1);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_VOLUME_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_VOLUME_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_VOLUME_ONDESTROY_OFFSET))(this);
		}

		::System::Void LKINOKFJPCL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_VOLUME_LKINOKFJPCL_OFFSET))(this, a1);
		}

		::System::Void LMCEDCHJKFF(::LJFHKAJPFNE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LJFHKAJPFNE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_VOLUME_LMCEDCHJKFF_OFFSET))(this, a1);
		}

		::RPG::Client::Stage* get_OwnerStage()
		{
			return ((::RPG::Client::Stage*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_VOLUME_GET_OWNERSTAGE_OFFSET))(this);
		}

		::System::Void set_OwnerStage(::RPG::Client::Stage* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Stage*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_VOLUME_SET_OWNERSTAGE_OFFSET))(this, a1);
		}

		::System::UInt32 get_AttachRegion()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_VOLUME_GET_ATTACHREGION_OFFSET))(this);
		}

		::System::Void set_AttachRegion(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_VOLUME_SET_ATTACHREGION_OFFSET))(this, a1);
		}

		::System::UInt32 get_AttachRegionVolumeIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_VOLUME_GET_ATTACHREGIONVOLUMEINDEX_OFFSET))(this);
		}

		::System::Void set_AttachRegionVolumeIndex(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_VOLUME_SET_ATTACHREGIONVOLUMEINDEX_OFFSET))(this, a1);
		}

	};
}
