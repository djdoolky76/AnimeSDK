#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BatchAnimationGraph;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine::Rendering { class BAGraphLayerTemplate; }
namespace UnityEngine::Rendering { class BatchAnimation; }
namespace UnityEngine::Rendering { class BatchAnimationBoneMask; }
namespace UnityEngine::Rendering { class BatchAnimationClip; }
namespace UnityEngine::Rendering { class BatchAnimationInstance; }

#define BATCHANIMATIONGRAPH_ADDCLIP_OFFSET UNITYSDK_OFFSET(0x1A1AB960)
#define BATCHANIMATIONGRAPH_ADDMASKCLIP_OFFSET UNITYSDK_OFFSET(0x1A1AC1B0)
#define BATCHANIMATIONGRAPH_BABINIT_OFFSET UNITYSDK_OFFSET(0x1A1AB6D0)
#define BATCHANIMATIONGRAPH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1A1ACF70)
#define BATCHANIMATIONGRAPH_CTOR_OFFSET UNITYSDK_OFFSET(0x1A1ACE80)
#define BATCHANIMATIONGRAPH_ENABLELAYER_OFFSET UNITYSDK_OFFSET(0x1A1AB7B0)
#define BATCHANIMATIONGRAPH_ENABLEMASKLAYER_OFFSET UNITYSDK_OFFSET(0x1A1AC330)
#define BATCHANIMATIONGRAPH_GETCLIPCOUNT_OFFSET UNITYSDK_OFFSET(0x1A1ABB10)
#define BATCHANIMATIONGRAPH_GETWALKSTOPSTATE_OFFSET UNITYSDK_OFFSET(0x1A1ACA60)
#define BATCHANIMATIONGRAPH_GET_OFFSET UNITYSDK_OFFSET(0x1A1AB2F0)
#define BATCHANIMATIONGRAPH_HASMASKCLIP_OFFSET UNITYSDK_OFFSET(0x1A1AC150)
#define BATCHANIMATIONGRAPH_INIT_OFFSET UNITYSDK_OFFSET(0x1A1AB450)
#define BATCHANIMATIONGRAPH_ISANIMVALID_OFFSET UNITYSDK_OFFSET(0x1A1AB900)
#define BATCHANIMATIONGRAPH_ISVALID_OFFSET UNITYSDK_OFFSET(0x1A1AB870)
#define BATCHANIMATIONGRAPH_PLAYCLIPS_OFFSET UNITYSDK_OFFSET(0x1A1ABB30)
#define BATCHANIMATIONGRAPH_PLAYCLIP_OFFSET UNITYSDK_OFFSET(0x1A1ABD50)
#define BATCHANIMATIONGRAPH_PLAYLAYERCLIPALL_OFFSET UNITYSDK_OFFSET(0x1A1AC6E0)
#define BATCHANIMATIONGRAPH_PLAYLAYERCLIP_OFFSET UNITYSDK_OFFSET(0x1A1AC390)
#define BATCHANIMATIONGRAPH_PLAYLAYER_OFFSET UNITYSDK_OFFSET(0x1A1AB890)
#define BATCHANIMATIONGRAPH_PLAYWALKSTOP_OFFSET UNITYSDK_OFFSET(0x1A1AC940)
#define BATCHANIMATIONGRAPH_RECYCLE_OFFSET UNITYSDK_OFFSET(0x1A1AB330)
#define BATCHANIMATIONGRAPH_RESET_OFFSET UNITYSDK_OFFSET(0x1A1AB370)
#define BATCHANIMATIONGRAPH_SETCLIPFADEIN_OFFSET UNITYSDK_OFFSET(0x1A1ABA50)
#define BATCHANIMATIONGRAPH_SETSTATECLIP_OFFSET UNITYSDK_OFFSET(0x1A1ACC60)
#define BATCHANIMATIONGRAPH_STARTWALKSTOPSTATE_OFFSET UNITYSDK_OFFSET(0x1A1AC9B0)
#define BATCHANIMATIONGRAPH_TOSTOP_OFFSET UNITYSDK_OFFSET(0x1A1ACBB0)
#define BATCHANIMATIONGRAPH_TOWALK_OFFSET UNITYSDK_OFFSET(0x1A1ACB00)

inline static constexpr unsigned int BatchAnimationGraph_TypeDefinitionIndex = 38389;

	class BatchAnimationGraph : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* _maskIndex; // 0x10
		::UnityEngine::Rendering::BatchAnimation* _baCache; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* _clipIndex; // 0x20
		::System::UInt32 _LayerMask; // 0x28
		::System::Int32 _CurrentMaskState; // 0x2C
		::System::Int32 _CurrentPlayState; // 0x30
		static ::UnityEngine::Rendering::BAGraphLayerTemplate** StaticGet__graphTemplate()
		{
			return (::UnityEngine::Rendering::BAGraphLayerTemplate**)UnitySDK::FromName("", "BatchAnimationGraph")->GetStaticField(0x1F490);
		}

		static ::System::Boolean* StaticGet_GpuCacheAllClips()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "BatchAnimationGraph")->GetStaticField(0x69E0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BATCHANIMATIONGRAPH_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BATCHANIMATIONGRAPH_CCTOR_OFFSET))();
		}

		static ::BatchAnimationGraph* Get()
		{
			return ((::BatchAnimationGraph*(*)())((::PBYTE)hIl2Cpp + BATCHANIMATIONGRAPH_GET_OFFSET))();
		}

		static ::System::Void Recycle(::BatchAnimationGraph* a1)
		{
			return ((::System::Void(*)(::BatchAnimationGraph*))((::PBYTE)hIl2Cpp + BATCHANIMATIONGRAPH_RECYCLE_OFFSET))(a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BATCHANIMATIONGRAPH_RESET_OFFSET))(this);
		}

		static ::System::Void Init()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BATCHANIMATIONGRAPH_INIT_OFFSET))();
		}

		::System::Void BABInit(::UnityEngine::Rendering::BatchAnimation* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimation*, ::System::UInt32))((::PBYTE)hIl2Cpp + BATCHANIMATIONGRAPH_BABINIT_OFFSET))(this, a1, a2);
		}

		::System::Void EnableLayer(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + BATCHANIMATIONGRAPH_ENABLELAYER_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BATCHANIMATIONGRAPH_ISVALID_OFFSET))(this);
		}

		::System::Boolean PlayLayer(::System::Boolean a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + BATCHANIMATIONGRAPH_PLAYLAYER_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsAnimValid(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BATCHANIMATIONGRAPH_ISANIMVALID_OFFSET))(this, a1);
		}

		::System::Int32 AddClip(::System::String* a1, ::UnityEngine::Rendering::BatchAnimationClip* a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::UnityEngine::Rendering::BatchAnimationClip*, ::System::Int32))((::PBYTE)hIl2Cpp + BATCHANIMATIONGRAPH_ADDCLIP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetClipFadeIn(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + BATCHANIMATIONGRAPH_SETCLIPFADEIN_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetClipCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BATCHANIMATIONGRAPH_GETCLIPCOUNT_OFFSET))(this);
		}

		::System::Void PlayClips(::System::String* a1, ::System::Single a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + BATCHANIMATIONGRAPH_PLAYCLIPS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PlayClip(::UnityEngine::Rendering::BatchAnimationInstance* a1, ::System::String* a2, ::System::Single a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimationInstance*, ::System::String*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + BATCHANIMATIONGRAPH_PLAYCLIP_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean HasMaskClip(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BATCHANIMATIONGRAPH_HASMASKCLIP_OFFSET))(this, a1);
		}

		::System::Void AddMaskClip(::System::String* a1, ::UnityEngine::Rendering::BatchAnimationClip* a2, ::UnityEngine::Rendering::BatchAnimationBoneMask* a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Rendering::BatchAnimationClip*, ::UnityEngine::Rendering::BatchAnimationBoneMask*, ::System::Single))((::PBYTE)hIl2Cpp + BATCHANIMATIONGRAPH_ADDMASKCLIP_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EnableMaskLayer(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BATCHANIMATIONGRAPH_ENABLEMASKLAYER_OFFSET))(this, a1);
		}

		::System::Void PlayLayerClip(::UnityEngine::Rendering::BatchAnimationInstance* a1, ::System::String* a2, ::System::Boolean a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimationInstance*, ::System::String*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + BATCHANIMATIONGRAPH_PLAYLAYERCLIP_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void PlayLayerClipAll(::System::String* a1, ::System::Boolean a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + BATCHANIMATIONGRAPH_PLAYLAYERCLIPALL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PlayWalkStop(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BATCHANIMATIONGRAPH_PLAYWALKSTOP_OFFSET))(this, a1);
		}

		::System::Void StartWalkStopState(::UnityEngine::Rendering::BatchAnimationInstance* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimationInstance*, ::System::Int32))((::PBYTE)hIl2Cpp + BATCHANIMATIONGRAPH_STARTWALKSTOPSTATE_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetWalkStopState(::UnityEngine::Rendering::BatchAnimationInstance* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimationInstance*))((::PBYTE)hIl2Cpp + BATCHANIMATIONGRAPH_GETWALKSTOPSTATE_OFFSET))(this, a1);
		}

		::System::Void ToWalk(::UnityEngine::Rendering::BatchAnimationInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimationInstance*))((::PBYTE)hIl2Cpp + BATCHANIMATIONGRAPH_TOWALK_OFFSET))(this, a1);
		}

		::System::Void ToStop(::UnityEngine::Rendering::BatchAnimationInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimationInstance*))((::PBYTE)hIl2Cpp + BATCHANIMATIONGRAPH_TOSTOP_OFFSET))(this, a1);
		}

		::System::Void SetStateClip(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + BATCHANIMATIONGRAPH_SETSTATECLIP_OFFSET))(this, a1, a2);
		}

	};
