#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/DirectorUpdateMode.h"
namespace System { class Array; }
namespace System { class String; }
namespace UnityEngine { class IExposedPropertyTable; }
namespace UnityEngine::Pooled { template <typename T> class PooledList_1; }

#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_BATCHEVALUATEGRAPHINTERNAL_OFFSET UNITYSDK_OFFSET(0x203DC2D0)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_BATCHEVALUATEGRAPH_OFFSET UNITYSDK_OFFSET(0x203DC290)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_CONNECTINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x203DC510)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_CONNECTINTERNAL_OFFSET UNITYSDK_OFFSET(0x3F6AC40)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_CREATEPLAYABLEHANDLE_INJECTED_OFFSET UNITYSDK_OFFSET(0x203DC4B0)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_CREATEPLAYABLEHANDLE_OFFSET UNITYSDK_OFFSET(0x3F6ABF0)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_CREATESCRIPTOUTPUTINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x203DC4D0)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_CREATESCRIPTOUTPUTINTERNAL_OFFSET UNITYSDK_OFFSET(0x3F6AC20)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_CREATE_INJECTED_OFFSET UNITYSDK_OFFSET(0x203DC320)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_CREATE_OFFSET UNITYSDK_OFFSET(0x203DC2E0)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_DESTROYPLAYABLEINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x203DC550)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_DESTROYPLAYABLEINTERNAL_OFFSET UNITYSDK_OFFSET(0x3D72740)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_DESTROY_INJECTED_OFFSET UNITYSDK_OFFSET(0x203DC340)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_DESTROY_OFFSET UNITYSDK_OFFSET(0x3F6AB30)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_DISCONNECTINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x203DC530)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_DISCONNECTINTERNAL_OFFSET UNITYSDK_OFFSET(0x3D72770)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_EVALUATE_INJECTED_OFFSET UNITYSDK_OFFSET(0x203DC400)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_EVALUATE_OFFSET UNITYSDK_OFFSET(0x3F6AB90)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_GETOUTPUTCOUNT_INJECTED_OFFSET UNITYSDK_OFFSET(0x203DC4A0)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_GETOUTPUTCOUNT_OFFSET UNITYSDK_OFFSET(0x3F6ABE0)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_GETOUTPUTINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x203DC4F0)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_GETOUTPUTINTERNAL_OFFSET UNITYSDK_OFFSET(0x3F6AC30)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_GETOUTPUT_OFFSET UNITYSDK_OFFSET(0x3F6AAB0)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_GETPLAYABLECOUNT_INJECTED_OFFSET UNITYSDK_OFFSET(0x203DC460)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_GETPLAYABLECOUNT_OFFSET UNITYSDK_OFFSET(0x3F6ABC0)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_GETRESOLVER_INJECTED_OFFSET UNITYSDK_OFFSET(0x203DC440)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_GETRESOLVER_OFFSET UNITYSDK_OFFSET(0x3F6ABB0)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_GETROOTPLAYABLECOUNT_INJECTED_OFFSET UNITYSDK_OFFSET(0x203DC480)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_GETROOTPLAYABLECOUNT_OFFSET UNITYSDK_OFFSET(0x3F6ABD0)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_GETROOTPLAYABLEINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x203DC4E0)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_GETROOTPLAYABLEINTERNAL_OFFSET UNITYSDK_OFFSET(0x3F6AA70)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_GETROOTPLAYABLE_OFFSET UNITYSDK_OFFSET(0x3F6AA70)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_ISDONE_INJECTED_OFFSET UNITYSDK_OFFSET(0x203DC3A0)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_ISDONE_OFFSET UNITYSDK_OFFSET(0x3F6AB60)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_ISPLAYING_INJECTED_OFFSET UNITYSDK_OFFSET(0x203DC380)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_ISPLAYING_OFFSET UNITYSDK_OFFSET(0x3F6AB50)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_ISVALID_INJECTED_OFFSET UNITYSDK_OFFSET(0x203DC360)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_ISVALID_OFFSET UNITYSDK_OFFSET(0x3F6AB40)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_PLAY_INJECTED_OFFSET UNITYSDK_OFFSET(0x203DC3C0)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_PLAY_OFFSET UNITYSDK_OFFSET(0x3F6AB70)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_SETTIMEUPDATEMODE_INJECTED_OFFSET UNITYSDK_OFFSET(0x203DC420)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_SETTIMEUPDATEMODE_OFFSET UNITYSDK_OFFSET(0x3F6ABA0)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_STOP_INJECTED_OFFSET UNITYSDK_OFFSET(0x203DC3E0)
#define UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_STOP_OFFSET UNITYSDK_OFFSET(0x3F6AB80)

namespace UnityEngine::Playables
{
	inline static constexpr unsigned int PlayableGraph_TypeDefinitionIndex = 4925;

	struct alignas(4) PlayableGraph
	{
		::System::IntPtr m_Handle; // 0x10
		::System::UInt32 m_Version; // 0x18
		/*
		::UnityEngine::Playables::Playable GetRootPlayable(::System::Int32 a1)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_GETROOTPLAYABLE_OFFSET))(this, a1);
		}
		*/

		/*
		::UnityEngine::Playables::PlayableOutput GetOutput(::System::Int32 a1)
		{
			return ((::UnityEngine::Playables::PlayableOutput(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_GETOUTPUT_OFFSET))(this, a1);
		}
		*/

		/*
		static ::System::Void BatchEvaluateGraph(::UnityEngine::Pooled::PooledList_1<::UnityEngine::Playables::PlayableGraph>* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::Pooled::PooledList_1<::UnityEngine::Playables::PlayableGraph>*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_BATCHEVALUATEGRAPH_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::UnityEngine::Playables::PlayableGraph Create(::System::String* a1)
		{
			return ((::UnityEngine::Playables::PlayableGraph(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_CREATE_OFFSET))(a1);
		}
		*/

		::System::Void Destroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_DESTROY_OFFSET))(this);
		}

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_ISVALID_OFFSET))(this);
		}

		::System::Boolean IsPlaying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_ISPLAYING_OFFSET))(this);
		}

		::System::Boolean IsDone()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_ISDONE_OFFSET))(this);
		}

		::System::Void Play()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_PLAY_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_STOP_OFFSET))(this);
		}

		::System::Void Evaluate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_EVALUATE_OFFSET))(this, a1);
		}

		static ::System::Void BatchEvaluateGraphInternal(::System::Array* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::System::Array*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_BATCHEVALUATEGRAPHINTERNAL_OFFSET))(a1, a2);
		}

		::System::Void SetTimeUpdateMode(::UnityEngine::Playables::DirectorUpdateMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::DirectorUpdateMode))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_SETTIMEUPDATEMODE_OFFSET))(this, a1);
		}

		::UnityEngine::IExposedPropertyTable* GetResolver()
		{
			return ((::UnityEngine::IExposedPropertyTable*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_GETRESOLVER_OFFSET))(this);
		}

		::System::Int32 GetPlayableCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_GETPLAYABLECOUNT_OFFSET))(this);
		}

		::System::Int32 GetRootPlayableCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_GETROOTPLAYABLECOUNT_OFFSET))(this);
		}

		::System::Int32 GetOutputCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_GETOUTPUTCOUNT_OFFSET))(this);
		}

		/*
		::UnityEngine::Playables::PlayableHandle CreatePlayableHandle()
		{
			return ((::UnityEngine::Playables::PlayableHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_CREATEPLAYABLEHANDLE_OFFSET))(this);
		}
		*/

		/*
		::System::Boolean CreateScriptOutputInternal(::System::String* a1, ::UnityEngine::Playables::PlayableOutputHandle a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::UnityEngine::Playables::PlayableOutputHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_CREATESCRIPTOUTPUTINTERNAL_OFFSET))(this, a1, a2);
		}
		*/

		/*
		::UnityEngine::Playables::PlayableHandle GetRootPlayableInternal(::System::Int32 a1)
		{
			return ((::UnityEngine::Playables::PlayableHandle(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_GETROOTPLAYABLEINTERNAL_OFFSET))(this, a1);
		}
		*/

		/*
		::System::Boolean GetOutputInternal(::System::Int32 a1, ::UnityEngine::Playables::PlayableOutputHandle a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::UnityEngine::Playables::PlayableOutputHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_GETOUTPUTINTERNAL_OFFSET))(this, a1, a2);
		}
		*/

		/*
		::System::Boolean ConnectInternal(::UnityEngine::Playables::PlayableHandle a1, ::System::Int32 a2, ::UnityEngine::Playables::PlayableHandle a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Playables::PlayableHandle, ::System::Int32, ::UnityEngine::Playables::PlayableHandle, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_CONNECTINTERNAL_OFFSET))(this, a1, a2, a3, a4);
		}
		*/

		/*
		::System::Void DisconnectInternal(::UnityEngine::Playables::PlayableHandle a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableHandle, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_DISCONNECTINTERNAL_OFFSET))(this, a1, a2);
		}
		*/

		/*
		::System::Void DestroyPlayableInternal(::UnityEngine::Playables::PlayableHandle a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_DESTROYPLAYABLEINTERNAL_OFFSET))(this, a1);
		}
		*/

		/*
		static ::System::Void Create_Injected(::System::String* a1, ::UnityEngine::Playables::PlayableGraph a2)
		{
			return ((::System::Void(*)(::System::String*, ::UnityEngine::Playables::PlayableGraph))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_CREATE_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void Destroy_Injected(::UnityEngine::Playables::PlayableGraph a1)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableGraph))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_DESTROY_INJECTED_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Boolean IsValid_Injected(::UnityEngine::Playables::PlayableGraph a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Playables::PlayableGraph))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_ISVALID_INJECTED_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Boolean IsPlaying_Injected(::UnityEngine::Playables::PlayableGraph a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Playables::PlayableGraph))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_ISPLAYING_INJECTED_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Boolean IsDone_Injected(::UnityEngine::Playables::PlayableGraph a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Playables::PlayableGraph))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_ISDONE_INJECTED_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Void Play_Injected(::UnityEngine::Playables::PlayableGraph a1)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableGraph))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_PLAY_INJECTED_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Void Stop_Injected(::UnityEngine::Playables::PlayableGraph a1)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableGraph))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_STOP_INJECTED_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Void Evaluate_Injected(::UnityEngine::Playables::PlayableGraph a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableGraph, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_EVALUATE_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void SetTimeUpdateMode_Injected(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::Playables::DirectorUpdateMode a2)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Playables::DirectorUpdateMode))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_SETTIMEUPDATEMODE_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::UnityEngine::IExposedPropertyTable* GetResolver_Injected(::UnityEngine::Playables::PlayableGraph a1)
		{
			return ((::UnityEngine::IExposedPropertyTable*(*)(::UnityEngine::Playables::PlayableGraph))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_GETRESOLVER_INJECTED_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Int32 GetPlayableCount_Injected(::UnityEngine::Playables::PlayableGraph a1)
		{
			return ((::System::Int32(*)(::UnityEngine::Playables::PlayableGraph))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_GETPLAYABLECOUNT_INJECTED_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Int32 GetRootPlayableCount_Injected(::UnityEngine::Playables::PlayableGraph a1)
		{
			return ((::System::Int32(*)(::UnityEngine::Playables::PlayableGraph))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_GETROOTPLAYABLECOUNT_INJECTED_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Int32 GetOutputCount_Injected(::UnityEngine::Playables::PlayableGraph a1)
		{
			return ((::System::Int32(*)(::UnityEngine::Playables::PlayableGraph))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_GETOUTPUTCOUNT_INJECTED_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Void CreatePlayableHandle_Injected(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::Playables::PlayableHandle a2)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Playables::PlayableHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_CREATEPLAYABLEHANDLE_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean CreateScriptOutputInternal_Injected(::UnityEngine::Playables::PlayableGraph a1, ::System::String* a2, ::UnityEngine::Playables::PlayableOutputHandle a3)
		{
			return ((::System::Boolean(*)(::UnityEngine::Playables::PlayableGraph, ::System::String*, ::UnityEngine::Playables::PlayableOutputHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_CREATESCRIPTOUTPUTINTERNAL_INJECTED_OFFSET))(a1, a2, a3);
		}
		*/

		/*
		static ::System::Void GetRootPlayableInternal_Injected(::UnityEngine::Playables::PlayableGraph a1, ::System::Int32 a2, ::UnityEngine::Playables::PlayableHandle a3)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableGraph, ::System::Int32, ::UnityEngine::Playables::PlayableHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_GETROOTPLAYABLEINTERNAL_INJECTED_OFFSET))(a1, a2, a3);
		}
		*/

		/*
		static ::System::Boolean GetOutputInternal_Injected(::UnityEngine::Playables::PlayableGraph a1, ::System::Int32 a2, ::UnityEngine::Playables::PlayableOutputHandle a3)
		{
			return ((::System::Boolean(*)(::UnityEngine::Playables::PlayableGraph, ::System::Int32, ::UnityEngine::Playables::PlayableOutputHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_GETOUTPUTINTERNAL_INJECTED_OFFSET))(a1, a2, a3);
		}
		*/

		/*
		static ::System::Boolean ConnectInternal_Injected(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::Playables::PlayableHandle a2, ::System::Int32 a3, ::UnityEngine::Playables::PlayableHandle a4, ::System::Int32 a5)
		{
			return ((::System::Boolean(*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Playables::PlayableHandle, ::System::Int32, ::UnityEngine::Playables::PlayableHandle, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_CONNECTINTERNAL_INJECTED_OFFSET))(a1, a2, a3, a4, a5);
		}
		*/

		/*
		static ::System::Void DisconnectInternal_Injected(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::Playables::PlayableHandle a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Playables::PlayableHandle, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_DISCONNECTINTERNAL_INJECTED_OFFSET))(a1, a2, a3);
		}
		*/

		/*
		static ::System::Void DestroyPlayableInternal_Injected(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::Playables::PlayableHandle a2)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Playables::PlayableHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEGRAPH_DESTROYPLAYABLEINTERNAL_INJECTED_OFFSET))(a1, a2);
		}
		*/

	};
}
