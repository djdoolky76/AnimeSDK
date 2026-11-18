#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_OVERLAYOUTLINECONFIG_GET_ANIMPARAMSDICT_OFFSET UNITYSDK_OFFSET(0x16544420)
#define MOLEMOLE_CONFIG_OVERLAYOUTLINECONFIG_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x16544740)
#define MOLEMOLE_CONFIG_OVERLAYOUTLINECONFIG_SETANIMPARAMSDIRTY_OFFSET UNITYSDK_OFFSET(0x165446F0)
#define MOLEMOLE_CONFIG_OVERLAYOUTLINECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16544790)

namespace MoleMole::Config
{
	inline static constexpr unsigned int OverlayOutlineConfig_TypeDefinitionIndex = 38856;

	class OverlayOutlineConfig : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Boolean overrideInitConfig; // 0x58
		::System::Boolean enableOutline; // 0x59
		::System::Boolean enableOverlay; // 0x5A
		::System::Byte _padding0[0x5];
		::System::String* OverlayMaterialPath; // 0x60
		::System::Boolean OccludedByDepth; // 0x68
		::System::Boolean OutlinePerObject; // 0x69
		::System::Boolean OccludedByDepthPerObject; // 0x6A
		::System::Boolean OccludedByCharacters; // 0x6B
		::System::Boolean ForceVisible; // 0x6C
		::System::Boolean IsBattleOutline; // 0x6D
		::System::Byte _padding1[0x2];
		::System::Single OutlineFadeInTime; // 0x70
		::System::Single OutlineFadeOutTime; // 0x74
		::System::Boolean UseLODGroup; // 0x78
		::System::Byte _padding2[0x3];
		::System::Single OutlineColorIntensity; // 0x7C
		::System::Single OutlineThickness; // 0x80
		::System::Boolean DrawOverlayBeforeOpaquePostProcess; // 0x84
		::System::Boolean EnableFade; // 0x85
		::System::Byte _padding3[0x2];
		::System::Single FadeTime; // 0x88
		::System::Byte _padding4[0x4];
		::System::Collections::Generic::List_1<::System::Object*>* AnimParamsList; // 0x90
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* _animParamsDictCache; // 0x98
		::System::Boolean _animParamsDictDirty; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_OVERLAYOUTLINECONFIG__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* get_AnimParamsDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_OVERLAYOUTLINECONFIG_GET_ANIMPARAMSDICT_OFFSET))(this);
		}

		::System::Void SetAnimParamsDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_OVERLAYOUTLINECONFIG_SETANIMPARAMSDIRTY_OFFSET))(this);
		}

		::System::Void OnValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_OVERLAYOUTLINECONFIG_ONVALIDATE_OFFSET))(this);
		}
	};
}
