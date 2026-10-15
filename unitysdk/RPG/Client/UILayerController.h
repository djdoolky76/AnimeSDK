#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class ParticleSystemRenderer; }

#define RPG_CLIENT_UILAYERCONTROLLER_CAKFPBEPCMN_OFFSET UNITYSDK_OFFSET(0xE3A7CE0)
#define RPG_CLIENT_UILAYERCONTROLLER_CTOR_OFFSET UNITYSDK_OFFSET(0xE3A8130)
#define RPG_CLIENT_UILAYERCONTROLLER_EGKODBPPJHM_OFFSET UNITYSDK_OFFSET(0xE3A7E50)
#define RPG_CLIENT_UILAYERCONTROLLER_GET_BASELAYER_OFFSET UNITYSDK_OFFSET(0xE3A80A0)
#define RPG_CLIENT_UILAYERCONTROLLER_JPAEFBJIKFA_OFFSET UNITYSDK_OFFSET(0xE3A7FB0)
#define RPG_CLIENT_UILAYERCONTROLLER_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0xE3A7E00)
#define RPG_CLIENT_UILAYERCONTROLLER_SET_BASELAYER_OFFSET UNITYSDK_OFFSET(0xE3A80E0)
#define RPG_CLIENT_UILAYERCONTROLLER_START_OFFSET UNITYSDK_OFFSET(0xE3A7C90)

namespace RPG::Client
{
	inline static constexpr unsigned int UILayerController_TypeDefinitionIndex = 73071;

	class UILayerController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Int32 MaxLayer; // 0x18
		::System::Int32 _BaseLayer; // 0x1C
		::System::Collections::Generic::List_1<::System::Object*>* _LayerInfos; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UILAYERCONTROLLER_CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UILAYERCONTROLLER_START_OFFSET))(this);
		}

		::System::Void OnValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UILAYERCONTROLLER_ONVALIDATE_OFFSET))(this);
		}

		::System::Void CAKFPBEPCMN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UILAYERCONTROLLER_CAKFPBEPCMN_OFFSET))(this);
		}

		::System::Void EGKODBPPJHM(::System::Collections::Generic::List_1<::UnityEngine::Canvas*>* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Canvas*>*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UILAYERCONTROLLER_EGKODBPPJHM_OFFSET))(this, a1, a2);
		}

		::System::Void JPAEFBJIKFA(::System::Collections::Generic::List_1<::UnityEngine::ParticleSystemRenderer*>* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::ParticleSystemRenderer*>*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UILAYERCONTROLLER_JPAEFBJIKFA_OFFSET))(this, a1, a2);
		}

		::System::Int32 get_BaseLayer()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UILAYERCONTROLLER_GET_BASELAYER_OFFSET))(this);
		}

		::System::Void set_BaseLayer(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UILAYERCONTROLLER_SET_BASELAYER_OFFSET))(this, a1);
		}

	};
}
