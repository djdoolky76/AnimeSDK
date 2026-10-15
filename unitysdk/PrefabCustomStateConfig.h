#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/ShadowCastingMode.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/OKLBEPJCBJG.h"

#define PREFABCUSTOMSTATECONFIG_AWAKE_OFFSET UNITYSDK_OFFSET(0xC39B420)
#define PREFABCUSTOMSTATECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0xC39BF20)
#define PREFABCUSTOMSTATECONFIG_GETGAMEOBJECTSTATEBIT_OFFSET UNITYSDK_OFFSET(0xC39B4A0)
#define PREFABCUSTOMSTATECONFIG_GET_CUSTOMOBJCOLOR_OFFSET UNITYSDK_OFFSET(0xC39BCB0)
#define PREFABCUSTOMSTATECONFIG_GET_TERRAINRATEPEROBJ_OFFSET UNITYSDK_OFFSET(0xC39BEA0)
#define PREFABCUSTOMSTATECONFIG_INITCOMPONENT_OFFSET UNITYSDK_OFFSET(0xC39B6B0)
#define PREFABCUSTOMSTATECONFIG_KDGPOCALLLO_OFFSET UNITYSDK_OFFSET(0xC39B700)
#define PREFABCUSTOMSTATECONFIG_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0xC39B8F0)
#define PREFABCUSTOMSTATECONFIG_PERSISTENTDATA_OFFSET UNITYSDK_OFFSET(0xC39B8A0)
#define PREFABCUSTOMSTATECONFIG_SET_CUSTOMOBJCOLOR_OFFSET UNITYSDK_OFFSET(0xC39BCC0)
#define PREFABCUSTOMSTATECONFIG_SET_TERRAINRATEPEROBJ_OFFSET UNITYSDK_OFFSET(0xC39BEB0)

	class PrefabCustomStateConfig : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean EnableShadowCastingMode; // 0x18
		::System::Byte _padding0[0x3];
		::UnityEngine::Rendering::ShadowCastingMode shadowCastingMode; // 0x1C
		::System::Boolean EnableCustomColor; // 0x20
		::System::Byte _padding1[0x3];
		::UnityEngine::Color _ObjColor; // 0x24
		::System::Boolean MEBFHFGBPGJ; // 0x34
		::System::Byte _padding2[0x3];
		::System::Int32 NNKMIKNIELL; // 0x38
		::System::Boolean EnableCustomTerrainRatePerObj; // 0x3C
		::System::Byte _padding3[0x3];
		::System::Single _TerrainRatePerObj; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PREFABCUSTOMSTATECONFIG_CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PREFABCUSTOMSTATECONFIG_AWAKE_OFFSET))(this);
		}

		::System::Void KDGPOCALLLO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PREFABCUSTOMSTATECONFIG_KDGPOCALLLO_OFFSET))(this);
		}

		::System::Int32 GetGameObjectStateBit()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PREFABCUSTOMSTATECONFIG_GETGAMEOBJECTSTATEBIT_OFFSET))(this);
		}

		::System::Void PersistentData(::OKLBEPJCBJG a1)
		{
			return ((::System::Void(*)(::PVOID, ::OKLBEPJCBJG))((::PBYTE)hIl2Cpp + PREFABCUSTOMSTATECONFIG_PERSISTENTDATA_OFFSET))(this, a1);
		}

		::System::Void InitComponent(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PREFABCUSTOMSTATECONFIG_INITCOMPONENT_OFFSET))(this, a1);
		}

		::System::Void OnValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PREFABCUSTOMSTATECONFIG_ONVALIDATE_OFFSET))(this);
		}

		::UnityEngine::Color get_CustomObjColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + PREFABCUSTOMSTATECONFIG_GET_CUSTOMOBJCOLOR_OFFSET))(this);
		}

		::System::Void set_CustomObjColor(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + PREFABCUSTOMSTATECONFIG_SET_CUSTOMOBJCOLOR_OFFSET))(this, a1);
		}

		::System::Single get_TerrainRatePerObj()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PREFABCUSTOMSTATECONFIG_GET_TERRAINRATEPEROBJ_OFFSET))(this);
		}

		::System::Void set_TerrainRatePerObj(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PREFABCUSTOMSTATECONFIG_SET_TERRAINRATEPEROBJ_OFFSET))(this, a1);
		}

	};
