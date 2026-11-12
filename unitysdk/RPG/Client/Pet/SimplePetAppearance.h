#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class String; }

#define RPG_CLIENT_PET_SIMPLEPETAPPEARANCE_CTOR_OFFSET UNITYSDK_OFFSET(0xE518990)
#define RPG_CLIENT_PET_SIMPLEPETAPPEARANCE_GET_FIGUREPATH_OFFSET UNITYSDK_OFFSET(0xE518A70)
#define RPG_CLIENT_PET_SIMPLEPETAPPEARANCE_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xE518A60)
#define RPG_CLIENT_PET_SIMPLEPETAPPEARANCE_GET_SUMMONUNITID_OFFSET UNITYSDK_OFFSET(0xE5189E0)
#define RPG_CLIENT_PET_SIMPLEPETAPPEARANCE_GET_UI3DIDLESHOW_OFFSET UNITYSDK_OFFSET(0xE518A50)
#define RPG_CLIENT_PET_SIMPLEPETAPPEARANCE_GET_UI3DMANIKINJSONPATH_OFFSET UNITYSDK_OFFSET(0xE518A40)
#define RPG_CLIENT_PET_SIMPLEPETAPPEARANCE_GET_UI3DMODELHEADOFFSET_OFFSET UNITYSDK_OFFSET(0xE518A20)
#define RPG_CLIENT_PET_SIMPLEPETAPPEARANCE_GET_UI3DMODELOFFSET_OFFSET UNITYSDK_OFFSET(0xE518A00)
#define RPG_CLIENT_PET_SIMPLEPETAPPEARANCE_GET_UI3DMODELPATH_OFFSET UNITYSDK_OFFSET(0xE5189F0)

namespace RPG::Client::Pet
{
	inline static constexpr unsigned int SimplePetAppearance_TypeDefinitionIndex = 78045;

	class SimplePetAppearance : public ::System::Object
	{
	public:
		::System::String* _IconPath_k__BackingField; // 0x10
		::System::String* _UI3DModelPath_k__BackingField; // 0x18
		::System::String* _UI3DManikinJsonPath_k__BackingField; // 0x20
		::System::String* _UI3DIdleShow_k__BackingField; // 0x28
		::System::String* _FigurePath_k__BackingField; // 0x30
		::UnityEngine::Vector3 _UI3DModelHeadOffset_k__BackingField; // 0x38
		::UnityEngine::Vector3 _UI3DModelOffset_k__BackingField; // 0x44
		::System::UInt32 _SummonUnitId_k__BackingField; // 0x50
		::System::Void _ctor(::System::UInt32 a1, ::System::String* a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::System::String* a5, ::System::String* a6, ::System::String* a7, ::System::String* a8)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_SIMPLEPETAPPEARANCE_CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::UInt32 get_SummonUnitId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_SIMPLEPETAPPEARANCE_GET_SUMMONUNITID_OFFSET))(this);
		}

		::System::String* get_UI3DModelPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_SIMPLEPETAPPEARANCE_GET_UI3DMODELPATH_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_UI3DModelOffset()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_SIMPLEPETAPPEARANCE_GET_UI3DMODELOFFSET_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_UI3DModelHeadOffset()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_SIMPLEPETAPPEARANCE_GET_UI3DMODELHEADOFFSET_OFFSET))(this);
		}

		::System::String* get_UI3DManikinJsonPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_SIMPLEPETAPPEARANCE_GET_UI3DMANIKINJSONPATH_OFFSET))(this);
		}

		::System::String* get_UI3DIdleShow()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_SIMPLEPETAPPEARANCE_GET_UI3DIDLESHOW_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_SIMPLEPETAPPEARANCE_GET_ICONPATH_OFFSET))(this);
		}

		::System::String* get_FigurePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_SIMPLEPETAPPEARANCE_GET_FIGUREPATH_OFFSET))(this);
		}

	};
}
