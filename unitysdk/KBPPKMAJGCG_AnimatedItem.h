#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }

#define KBPPKMAJGCG_ANIMATEDITEM_CTOR_OFFSET UNITYSDK_OFFSET(0xB327870)
#define KBPPKMAJGCG_ANIMATEDITEM_GET_ANIMATEDINSTANCEMATRIXLISTS_OFFSET UNITYSDK_OFFSET(0xB327B90)
#define KBPPKMAJGCG_ANIMATEDITEM_GET_ARGSBUFFER_OFFSET UNITYSDK_OFFSET(0xB327BE0)
#define KBPPKMAJGCG_ANIMATEDITEM_GET_CURRENTINSTANCECOUNT_OFFSET UNITYSDK_OFFSET(0xB327C20)
#define KBPPKMAJGCG_ANIMATEDITEM_GET_CURVEBOUNDSINITIALIZED_OFFSET UNITYSDK_OFFSET(0xB327C90)
#define KBPPKMAJGCG_ANIMATEDITEM_GET_INSTANCEBOUNDS_OFFSET UNITYSDK_OFFSET(0xB327C40)
#define KBPPKMAJGCG_ANIMATEDITEM_GET_INSTANCEMATRIXBUFFER_OFFSET UNITYSDK_OFFSET(0xB327BC0)
#define KBPPKMAJGCG_ANIMATEDITEM_GET_INSTANCERELATIVEDATABUFFER_OFFSET UNITYSDK_OFFSET(0xB327CB0)
#define KBPPKMAJGCG_ANIMATEDITEM_GET_LASTBOUNDSUPDATEFRAME_OFFSET UNITYSDK_OFFSET(0xB327C70)
#define KBPPKMAJGCG_ANIMATEDITEM_GET_LASTINSTANCECOUNT_OFFSET UNITYSDK_OFFSET(0xB327BA0)
#define KBPPKMAJGCG_ANIMATEDITEM_GET_MATERIALS_OFFSET UNITYSDK_OFFSET(0xB324140)
#define KBPPKMAJGCG_ANIMATEDITEM_GET_MESH_OFFSET UNITYSDK_OFFSET(0xB324220)
#define KBPPKMAJGCG_ANIMATEDITEM_GET_PERCENTAGEOFLINEBUFFER_OFFSET UNITYSDK_OFFSET(0xB327C00)
#define KBPPKMAJGCG_ANIMATEDITEM_GET_SUBMESHCOUNT_OFFSET UNITYSDK_OFFSET(0xB324300)
#define KBPPKMAJGCG_ANIMATEDITEM_OFMPPGBNONB_OFFSET UNITYSDK_OFFSET(0xB3262A0)
#define KBPPKMAJGCG_ANIMATEDITEM_SET_ARGSBUFFER_OFFSET UNITYSDK_OFFSET(0xB327BF0)
#define KBPPKMAJGCG_ANIMATEDITEM_SET_CURRENTINSTANCECOUNT_OFFSET UNITYSDK_OFFSET(0xB327C30)
#define KBPPKMAJGCG_ANIMATEDITEM_SET_CURVEBOUNDSINITIALIZED_OFFSET UNITYSDK_OFFSET(0xB327CA0)
#define KBPPKMAJGCG_ANIMATEDITEM_SET_INSTANCEBOUNDS_OFFSET UNITYSDK_OFFSET(0xB327C60)
#define KBPPKMAJGCG_ANIMATEDITEM_SET_INSTANCEMATRIXBUFFER_OFFSET UNITYSDK_OFFSET(0xB327BD0)
#define KBPPKMAJGCG_ANIMATEDITEM_SET_INSTANCERELATIVEDATABUFFER_OFFSET UNITYSDK_OFFSET(0xB327CC0)
#define KBPPKMAJGCG_ANIMATEDITEM_SET_LASTBOUNDSUPDATEFRAME_OFFSET UNITYSDK_OFFSET(0xB327C80)
#define KBPPKMAJGCG_ANIMATEDITEM_SET_LASTINSTANCECOUNT_OFFSET UNITYSDK_OFFSET(0xB327BB0)
#define KBPPKMAJGCG_ANIMATEDITEM_SET_MATERIALS_OFFSET UNITYSDK_OFFSET(0xB327B80)
#define KBPPKMAJGCG_ANIMATEDITEM_SET_MESH_OFFSET UNITYSDK_OFFSET(0xB327B70)
#define KBPPKMAJGCG_ANIMATEDITEM_SET_PERCENTAGEOFLINEBUFFER_OFFSET UNITYSDK_OFFSET(0xB327C10)

inline static constexpr unsigned int KBPPKMAJGCG_AnimatedItem_TypeDefinitionIndex = 70325;

	class KBPPKMAJGCG_AnimatedItem : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* GameObject; // 0x10
		::UnityEngine::Vector3 LossyScale; // 0x18
		::System::Boolean EnableInstancing; // 0x24
		::System::Byte _padding0[0x3];
		::UnityEngine::Mesh* _Mesh; // 0x28
		::Il2CppArray<::UnityEngine::Material*>* _Materials; // 0x30
		::System::Collections::Generic::List_1<::System::Object*>* AnimatedInstances; // 0x38
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*>* _AnimatedInstanceMatrixLists; // 0x40
		::System::Int32 _lastInstanceCount; // 0x48
		::System::Byte _padding1[0x4];
		::UnityEngine::ComputeBuffer* _InstanceMatrixBuffer; // 0x50
		::UnityEngine::ComputeBuffer* _ArgsBuffer; // 0x58
		::UnityEngine::ComputeBuffer* _PercentageOfLineBuffer; // 0x60
		::System::Int32 _CurrentInstanceCount; // 0x68
		::UnityEngine::Bounds _InstanceBounds; // 0x6C
		::System::Int32 _lastBoundsUpdateFrame; // 0x84
		::System::Boolean _curveBoundsInitialized; // 0x88
		::System::Byte _padding2[0x7];
		::UnityEngine::ComputeBuffer* _instanceRelativeDataBuffer; // 0x90
		::System::Void _ctor(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + KBPPKMAJGCG_ANIMATEDITEM_CTOR_OFFSET))(this, a1);
		}

		::UnityEngine::Mesh* get_Mesh()
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBPPKMAJGCG_ANIMATEDITEM_GET_MESH_OFFSET))(this);
		}

		::System::Void set_Mesh(::UnityEngine::Mesh* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + KBPPKMAJGCG_ANIMATEDITEM_SET_MESH_OFFSET))(this, a1);
		}

		::Il2CppArray<::UnityEngine::Material*>* get_Materials()
		{
			return ((::Il2CppArray<::UnityEngine::Material*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBPPKMAJGCG_ANIMATEDITEM_GET_MATERIALS_OFFSET))(this);
		}

		::System::Void set_Materials(::Il2CppArray<::UnityEngine::Material*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + KBPPKMAJGCG_ANIMATEDITEM_SET_MATERIALS_OFFSET))(this, a1);
		}

		::System::Int32 get_SubMeshCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KBPPKMAJGCG_ANIMATEDITEM_GET_SUBMESHCOUNT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*>* get_AnimatedInstanceMatrixLists()
		{
			return ((::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBPPKMAJGCG_ANIMATEDITEM_GET_ANIMATEDINSTANCEMATRIXLISTS_OFFSET))(this);
		}

		::System::Int32 get_LastInstanceCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KBPPKMAJGCG_ANIMATEDITEM_GET_LASTINSTANCECOUNT_OFFSET))(this);
		}

		::System::Void set_LastInstanceCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KBPPKMAJGCG_ANIMATEDITEM_SET_LASTINSTANCECOUNT_OFFSET))(this, a1);
		}

		::UnityEngine::ComputeBuffer* get_InstanceMatrixBuffer()
		{
			return ((::UnityEngine::ComputeBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBPPKMAJGCG_ANIMATEDITEM_GET_INSTANCEMATRIXBUFFER_OFFSET))(this);
		}

		::System::Void set_InstanceMatrixBuffer(::UnityEngine::ComputeBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ComputeBuffer*))((::PBYTE)hIl2Cpp + KBPPKMAJGCG_ANIMATEDITEM_SET_INSTANCEMATRIXBUFFER_OFFSET))(this, a1);
		}

		::UnityEngine::ComputeBuffer* get_ArgsBuffer()
		{
			return ((::UnityEngine::ComputeBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBPPKMAJGCG_ANIMATEDITEM_GET_ARGSBUFFER_OFFSET))(this);
		}

		::System::Void set_ArgsBuffer(::UnityEngine::ComputeBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ComputeBuffer*))((::PBYTE)hIl2Cpp + KBPPKMAJGCG_ANIMATEDITEM_SET_ARGSBUFFER_OFFSET))(this, a1);
		}

		::UnityEngine::ComputeBuffer* get_PercentageOfLineBuffer()
		{
			return ((::UnityEngine::ComputeBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBPPKMAJGCG_ANIMATEDITEM_GET_PERCENTAGEOFLINEBUFFER_OFFSET))(this);
		}

		::System::Void set_PercentageOfLineBuffer(::UnityEngine::ComputeBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ComputeBuffer*))((::PBYTE)hIl2Cpp + KBPPKMAJGCG_ANIMATEDITEM_SET_PERCENTAGEOFLINEBUFFER_OFFSET))(this, a1);
		}

		::System::Int32 get_CurrentInstanceCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KBPPKMAJGCG_ANIMATEDITEM_GET_CURRENTINSTANCECOUNT_OFFSET))(this);
		}

		::System::Void set_CurrentInstanceCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KBPPKMAJGCG_ANIMATEDITEM_SET_CURRENTINSTANCECOUNT_OFFSET))(this, a1);
		}

		::UnityEngine::Bounds get_InstanceBounds()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + KBPPKMAJGCG_ANIMATEDITEM_GET_INSTANCEBOUNDS_OFFSET))(this);
		}

		::System::Void set_InstanceBounds(::UnityEngine::Bounds a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + KBPPKMAJGCG_ANIMATEDITEM_SET_INSTANCEBOUNDS_OFFSET))(this, a1);
		}

		::System::Int32 get_LastBoundsUpdateFrame()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KBPPKMAJGCG_ANIMATEDITEM_GET_LASTBOUNDSUPDATEFRAME_OFFSET))(this);
		}

		::System::Void set_LastBoundsUpdateFrame(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KBPPKMAJGCG_ANIMATEDITEM_SET_LASTBOUNDSUPDATEFRAME_OFFSET))(this, a1);
		}

		::System::Boolean get_CurveBoundsInitialized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KBPPKMAJGCG_ANIMATEDITEM_GET_CURVEBOUNDSINITIALIZED_OFFSET))(this);
		}

		::System::Void set_CurveBoundsInitialized(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KBPPKMAJGCG_ANIMATEDITEM_SET_CURVEBOUNDSINITIALIZED_OFFSET))(this, a1);
		}

		::UnityEngine::ComputeBuffer* get_InstanceRelativeDataBuffer()
		{
			return ((::UnityEngine::ComputeBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBPPKMAJGCG_ANIMATEDITEM_GET_INSTANCERELATIVEDATABUFFER_OFFSET))(this);
		}

		::System::Void set_InstanceRelativeDataBuffer(::UnityEngine::ComputeBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ComputeBuffer*))((::PBYTE)hIl2Cpp + KBPPKMAJGCG_ANIMATEDITEM_SET_INSTANCERELATIVEDATABUFFER_OFFSET))(this, a1);
		}

		::System::Void OFMPPGBNONB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBPPKMAJGCG_ANIMATEDITEM_OFMPPGBNONB_OFFSET))(this);
		}

	};
