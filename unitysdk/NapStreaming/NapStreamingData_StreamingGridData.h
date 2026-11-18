#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/NapStreaming/AdditionLockLevel.h"
#include "unitysdk/NapStreaming/POIMODE.h"
#include "unitysdk/NapStreaming/StreamingLayer.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace NapStreaming { class NapStreamingData; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }

#define NAPSTREAMING_NAPSTREAMINGDATA_STREAMINGGRIDDATA_ADDITIONALPOSUPDATE_OFFSET UNITYSDK_OFFSET(0xF162B20)
#define NAPSTREAMING_NAPSTREAMINGDATA_STREAMINGGRIDDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF1644D0)
#define NAPSTREAMING_NAPSTREAMINGDATA_STREAMINGGRIDDATA_INIT_OFFSET UNITYSDK_OFFSET(0xF164880)
#define NAPSTREAMING_NAPSTREAMINGDATA_STREAMINGGRIDDATA_SAFEINSTANTIATE_OFFSET UNITYSDK_OFFSET(0xF164980)
#define NAPSTREAMING_NAPSTREAMINGDATA_STREAMINGGRIDDATA_SETVISIBLE_OFFSET UNITYSDK_OFFSET(0xF163ED0)
#define NAPSTREAMING_NAPSTREAMINGDATA_STREAMINGGRIDDATA_SWITCHTOHLOD_OFFSET UNITYSDK_OFFSET(0xF161810)
#define NAPSTREAMING_NAPSTREAMINGDATA_STREAMINGGRIDDATA_SWITCHTOLOADING_OFFSET UNITYSDK_OFFSET(0xF161120)
#define NAPSTREAMING_NAPSTREAMINGDATA_STREAMINGGRIDDATA_SWITCHTOUNLOAD_OFFSET UNITYSDK_OFFSET(0xF161E90)
#define NAPSTREAMING_NAPSTREAMINGDATA_STREAMINGGRIDDATA_UNLOADHLOD_OFFSET UNITYSDK_OFFSET(0xF162010)
#define NAPSTREAMING_NAPSTREAMINGDATA_STREAMINGGRIDDATA_UNLOADOBJECTS_OFFSET UNITYSDK_OFFSET(0xF1622C0)
#define NAPSTREAMING_NAPSTREAMINGDATA_STREAMINGGRIDDATA_WAITANDUNLOADONDISPOSE_OFFSET UNITYSDK_OFFSET(0xF164B80)
#define NAPSTREAMING_NAPSTREAMINGDATA_STREAMINGGRIDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xF164C00)
#define NAPSTREAMING_NAPSTREAMINGDATA_STREAMINGGRIDDATA__SWITCHTOHLOD_B__22_0_OFFSET UNITYSDK_OFFSET(0xF164C10)
#define NAPSTREAMING_NAPSTREAMINGDATA_STREAMINGGRIDDATA__SWITCHTOHLOD_B__22_1_OFFSET UNITYSDK_OFFSET(0xF164E10)
#define NAPSTREAMING_NAPSTREAMINGDATA_STREAMINGGRIDDATA__SWITCHTOLOADING_B__26_0_OFFSET UNITYSDK_OFFSET(0xF165000)
#define NAPSTREAMING_NAPSTREAMINGDATA_STREAMINGGRIDDATA__SWITCHTOLOADING_B__26_1_OFFSET UNITYSDK_OFFSET(0xF165320)
#define NAPSTREAMING_NAPSTREAMINGDATA_STREAMINGGRIDDATA__SWITCHTOLOADING_B__26_2_OFFSET UNITYSDK_OFFSET(0xF165520)
#define NAPSTREAMING_NAPSTREAMINGDATA_STREAMINGGRIDDATA__SWITCHTOLOADING_B__26_3_OFFSET UNITYSDK_OFFSET(0xF165130)

namespace NapStreaming
{
	inline static constexpr unsigned int NapStreamingData_StreamingGridData_TypeDefinitionIndex = 60756;

	class NapStreamingData_StreamingGridData : public ::System::Object
	{
	public:
		::System::Boolean hasHlod; // 0x10
		::System::Byte _padding0[0x7];
		::System::String* hlodPathHash; // 0x18
		::System::String* originObjectPathHash; // 0x20
		::UnityEngine::Bounds bounds; // 0x28
		::NapStreaming::StreamingLayer layer; // 0x40
		::System::Boolean isMobileOff; // 0x44
		::System::Byte _padding1[0x3];
		::System::Int32 poiIndex; // 0x48
		::NapStreaming::POIMODE poiMode; // 0x4C
		::Foundation::AssetPath hlodPath; // 0x50
		::Foundation::AssetPath originObjectPath; // 0x60
		::UnityEngine::GameObject* originObject; // 0x70
		::Foundation::AssetRequestHandle originHandle; // 0x78
		::UnityEngine::GameObject* hlod; // 0x98
		::Foundation::AssetRequestHandle hlodHandle; // 0xA0
		::NapStreaming::NapStreamingData* streamingData; // 0xC0
		::System::Int32 gridIndex; // 0xC8
		::System::Single boundHalfSize; // 0xCC
		::Foundation::Coroutine::CoroutineHandle disposeUnloadHandle; // 0xD0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGDATA_STREAMINGGRIDDATA__CTOR_OFFSET))(this);
		}

		::System::Void Init(::NapStreaming::NapStreamingData* data, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::NapStreaming::NapStreamingData*, ::System::Int32))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGDATA_STREAMINGGRIDDATA_INIT_OFFSET))(this, data, index);
		}

		::UnityEngine::GameObject* SafeInstantiate(::UnityEngine::Object* o)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGDATA_STREAMINGGRIDDATA_SAFEINSTANTIATE_OFFSET))(this, o);
		}

		::System::Void UnloadHLOD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGDATA_STREAMINGGRIDDATA_UNLOADHLOD_OFFSET))(this);
		}

		::System::Void UnloadObjects()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGDATA_STREAMINGGRIDDATA_UNLOADOBJECTS_OFFSET))(this);
		}

		::System::Void SwitchToHLOD(::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGDATA_STREAMINGGRIDDATA_SWITCHTOHLOD_OFFSET))(this, callback);
		}

		::System::Void SwitchToUnload()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGDATA_STREAMINGGRIDDATA_SWITCHTOUNLOAD_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Single>* WaitAndUnloadOnDispose()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGDATA_STREAMINGGRIDDATA_WAITANDUNLOADONDISPOSE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGDATA_STREAMINGGRIDDATA_DISPOSE_OFFSET))(this);
		}

		::System::Void SwitchToLoading()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGDATA_STREAMINGGRIDDATA_SWITCHTOLOADING_OFFSET))(this);
		}

		::System::Void SetVisible(::System::Boolean isVisible)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGDATA_STREAMINGGRIDDATA_SETVISIBLE_OFFSET))(this, isVisible);
		}

		::NapStreaming::AdditionLockLevel AdditionalPosUpdate(::UnityEngine::Vector3 cameraPos, ::System::Single loadDistance, ::System::Single hlodLoadDistance, ::System::Single unloadDistance, ::System::Boolean isVisible, ::System::Boolean needLoad, ::System::Boolean& addToCheck)
		{
			return ((::NapStreaming::AdditionLockLevel(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Boolean&))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGDATA_STREAMINGGRIDDATA_ADDITIONALPOSUPDATE_OFFSET))(this, cameraPos, loadDistance, hlodLoadDistance, unloadDistance, isVisible, needLoad, addToCheck);
		}

		::System::Void _SwitchToHLOD_b__22_0(::UnityEngine::Object* o, ::Foundation::AssetRequestHandle a)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGDATA_STREAMINGGRIDDATA__SWITCHTOHLOD_B__22_0_OFFSET))(this, o, a);
		}

		::System::Void _SwitchToHLOD_b__22_1(::UnityEngine::Object* o, ::Foundation::AssetRequestHandle a)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGDATA_STREAMINGGRIDDATA__SWITCHTOHLOD_B__22_1_OFFSET))(this, o, a);
		}

		::System::Void _SwitchToLoading_b__26_0(::UnityEngine::Object* asset, ::Foundation::AssetRequestHandle handle)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGDATA_STREAMINGGRIDDATA__SWITCHTOLOADING_B__26_0_OFFSET))(this, asset, handle);
		}

		::System::Void _SwitchToLoading_b__26_3(::UnityEngine::Object* o)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGDATA_STREAMINGGRIDDATA__SWITCHTOLOADING_B__26_3_OFFSET))(this, o);
		}

		::System::Void _SwitchToLoading_b__26_1(::UnityEngine::Object* o, ::Foundation::AssetRequestHandle a)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGDATA_STREAMINGGRIDDATA__SWITCHTOLOADING_B__26_1_OFFSET))(this, o, a);
		}

		::System::Void _SwitchToLoading_b__26_2(::UnityEngine::Object* o, ::Foundation::AssetRequestHandle a)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGDATA_STREAMINGGRIDDATA__SWITCHTOLOADING_B__26_2_OFFSET))(this, o, a);
		}
	};
}
