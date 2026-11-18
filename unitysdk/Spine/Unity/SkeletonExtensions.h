#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Color32.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Spine { class Attachment; }
namespace Spine { class Bone; }
namespace Spine { class BonePose; }
namespace Spine { class PointAttachment; }
namespace Spine { class Skeleton; }
namespace Spine { class Slot; }
namespace Spine { class VertexAttachment; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Transform; }

#define SPINE_UNITY_SKELETONEXTENSIONS_GETCOLORTINTBLACK_OFFSET UNITYSDK_OFFSET(0x1FF43790)
#define SPINE_UNITY_SKELETONEXTENSIONS_GETCOLOR_OFFSET UNITYSDK_OFFSET(0x1FF43760)
#define SPINE_UNITY_SKELETONEXTENSIONS_GETLOCALPOSITION_1_OFFSET UNITYSDK_OFFSET(0x1FF43B10)
#define SPINE_UNITY_SKELETONEXTENSIONS_GETLOCALPOSITION_OFFSET UNITYSDK_OFFSET(0x1FF43AE0)
#define SPINE_UNITY_SKELETONEXTENSIONS_GETLOCALQUATERNION_1_OFFSET UNITYSDK_OFFSET(0x1FF440B0)
#define SPINE_UNITY_SKELETONEXTENSIONS_GETLOCALQUATERNION_OFFSET UNITYSDK_OFFSET(0x1FF44030)
#define SPINE_UNITY_SKELETONEXTENSIONS_GETLOCALSCALE_OFFSET UNITYSDK_OFFSET(0x1FF44120)
#define SPINE_UNITY_SKELETONEXTENSIONS_GETLOCALVERTICES_OFFSET UNITYSDK_OFFSET(0x1FF44610)
#define SPINE_UNITY_SKELETONEXTENSIONS_GETMATERIAL_OFFSET UNITYSDK_OFFSET(0x1FF44470)
#define SPINE_UNITY_SKELETONEXTENSIONS_GETMATRIX4X4_1_OFFSET UNITYSDK_OFFSET(0x1FF43990)
#define SPINE_UNITY_SKELETONEXTENSIONS_GETMATRIX4X4_OFFSET UNITYSDK_OFFSET(0x1FF43900)
#define SPINE_UNITY_SKELETONEXTENSIONS_GETQUATERNION_1_OFFSET UNITYSDK_OFFSET(0x1FF43FC0)
#define SPINE_UNITY_SKELETONEXTENSIONS_GETQUATERNION_OFFSET UNITYSDK_OFFSET(0x1FF43F40)
#define SPINE_UNITY_SKELETONEXTENSIONS_GETSKELETONSPACEPOSITION_1_OFFSET UNITYSDK_OFFSET(0x1FF43B50)
#define SPINE_UNITY_SKELETONEXTENSIONS_GETSKELETONSPACEPOSITION_2_OFFSET UNITYSDK_OFFSET(0x1FF43B80)
#define SPINE_UNITY_SKELETONEXTENSIONS_GETSKELETONSPACEPOSITION_OFFSET UNITYSDK_OFFSET(0x1FF43B40)
#define SPINE_UNITY_SKELETONEXTENSIONS_GETWORLDPOSITION_1_OFFSET UNITYSDK_OFFSET(0x1FF43D00)
#define SPINE_UNITY_SKELETONEXTENSIONS_GETWORLDPOSITION_2_OFFSET UNITYSDK_OFFSET(0x1FF43E10)
#define SPINE_UNITY_SKELETONEXTENSIONS_GETWORLDPOSITION_3_OFFSET UNITYSDK_OFFSET(0x1FF43C80)
#define SPINE_UNITY_SKELETONEXTENSIONS_GETWORLDPOSITION_4_OFFSET UNITYSDK_OFFSET(0x1FF43D90)
#define SPINE_UNITY_SKELETONEXTENSIONS_GETWORLDPOSITION_5_OFFSET UNITYSDK_OFFSET(0x1FF43EB0)
#define SPINE_UNITY_SKELETONEXTENSIONS_GETWORLDPOSITION_6_OFFSET UNITYSDK_OFFSET(0x1FF44B60)
#define SPINE_UNITY_SKELETONEXTENSIONS_GETWORLDPOSITION_7_OFFSET UNITYSDK_OFFSET(0x1FF44C40)
#define SPINE_UNITY_SKELETONEXTENSIONS_GETWORLDPOSITION_OFFSET UNITYSDK_OFFSET(0x1FF43BF0)
#define SPINE_UNITY_SKELETONEXTENSIONS_GETWORLDTOLOCALMATRIX_1_OFFSET UNITYSDK_OFFSET(0x1FF441F0)
#define SPINE_UNITY_SKELETONEXTENSIONS_GETWORLDTOLOCALMATRIX_OFFSET UNITYSDK_OFFSET(0x1FF44160)
#define SPINE_UNITY_SKELETONEXTENSIONS_GETWORLDVERTICES_OFFSET UNITYSDK_OFFSET(0x1FF44980)
#define SPINE_UNITY_SKELETONEXTENSIONS_SETCOLOR_1_OFFSET UNITYSDK_OFFSET(0x1FF43850)
#define SPINE_UNITY_SKELETONEXTENSIONS_SETCOLOR_OFFSET UNITYSDK_OFFSET(0x1FF43810)
#define SPINE_UNITY_SKELETONEXTENSIONS_SETLOCALPOSITION_1_OFFSET UNITYSDK_OFFSET(0x1FF43A40)
#define SPINE_UNITY_SKELETONEXTENSIONS_SETLOCALPOSITION_2_OFFSET UNITYSDK_OFFSET(0x1FF43A70)
#define SPINE_UNITY_SKELETONEXTENSIONS_SETLOCALPOSITION_3_OFFSET UNITYSDK_OFFSET(0x1FF43AB0)
#define SPINE_UNITY_SKELETONEXTENSIONS_SETLOCALPOSITION_OFFSET UNITYSDK_OFFSET(0x1FF43A10)
#define SPINE_UNITY_SKELETONEXTENSIONS_SETLOCALSCALE_OFFSET UNITYSDK_OFFSET(0x1FF438D0)
#define SPINE_UNITY_SKELETONEXTENSIONS_SETPOSITIONSKELETONSPACE_OFFSET UNITYSDK_OFFSET(0x1FF44390)
#define SPINE_UNITY_SKELETONEXTENSIONS_WORLDTOLOCAL_1_OFFSET UNITYSDK_OFFSET(0x1FF44300)
#define SPINE_UNITY_SKELETONEXTENSIONS_WORLDTOLOCAL_OFFSET UNITYSDK_OFFSET(0x1FF44270)

namespace Spine::Unity
{
	inline static constexpr unsigned int SkeletonExtensions_TypeDefinitionIndex = 38221;

	class SkeletonExtensions : public ::System::Object
	{
	public:
		// static const ::System::Single ByteToFloat; // 0x0

		static ::UnityEngine::Color GetColor(::Spine::Slot* s)
		{
			return ((::UnityEngine::Color(*)(::Spine::Slot*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_GETCOLOR_OFFSET))(s);
		}

		static ::UnityEngine::Color GetColorTintBlack(::Spine::Slot* s)
		{
			return ((::UnityEngine::Color(*)(::Spine::Slot*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_GETCOLORTINTBLACK_OFFSET))(s);
		}

		static ::System::Void SetColor(::Spine::Slot* slot, ::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::Spine::Slot*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_SETCOLOR_OFFSET))(slot, color);
		}

		static ::System::Void SetColor_1(::Spine::Slot* slot, ::UnityEngine::Color32 color)
		{
			return ((::System::Void(*)(::Spine::Slot*, ::UnityEngine::Color32))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_SETCOLOR_1_OFFSET))(slot, color);
		}

		static ::System::Void SetLocalScale(::Spine::Skeleton* skeleton, ::UnityEngine::Vector2 scale)
		{
			return ((::System::Void(*)(::Spine::Skeleton*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_SETLOCALSCALE_OFFSET))(skeleton, scale);
		}

		static ::UnityEngine::Matrix4x4 GetMatrix4x4(::Spine::Bone* bone)
		{
			return ((::UnityEngine::Matrix4x4(*)(::Spine::Bone*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_GETMATRIX4X4_OFFSET))(bone);
		}

		static ::UnityEngine::Matrix4x4 GetMatrix4x4_1(::Spine::BonePose* bonePose)
		{
			return ((::UnityEngine::Matrix4x4(*)(::Spine::BonePose*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_GETMATRIX4X4_1_OFFSET))(bonePose);
		}

		static ::System::Void SetLocalPosition(::Spine::Bone* bone, ::UnityEngine::Vector2 position)
		{
			return ((::System::Void(*)(::Spine::Bone*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_SETLOCALPOSITION_OFFSET))(bone, position);
		}

		static ::System::Void SetLocalPosition_1(::Spine::BonePose* bonePose, ::UnityEngine::Vector2 position)
		{
			return ((::System::Void(*)(::Spine::BonePose*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_SETLOCALPOSITION_1_OFFSET))(bonePose, position);
		}

		static ::System::Void SetLocalPosition_2(::Spine::Bone* bone, ::UnityEngine::Vector3 position)
		{
			return ((::System::Void(*)(::Spine::Bone*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_SETLOCALPOSITION_2_OFFSET))(bone, position);
		}

		static ::System::Void SetLocalPosition_3(::Spine::BonePose* bonePose, ::UnityEngine::Vector3 position)
		{
			return ((::System::Void(*)(::Spine::BonePose*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_SETLOCALPOSITION_3_OFFSET))(bonePose, position);
		}

		static ::UnityEngine::Vector2 GetLocalPosition(::Spine::Bone* bone)
		{
			return ((::UnityEngine::Vector2(*)(::Spine::Bone*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_GETLOCALPOSITION_OFFSET))(bone);
		}

		static ::UnityEngine::Vector2 GetLocalPosition_1(::Spine::BonePose* bonePose)
		{
			return ((::UnityEngine::Vector2(*)(::Spine::BonePose*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_GETLOCALPOSITION_1_OFFSET))(bonePose);
		}

		static ::UnityEngine::Vector2 GetSkeletonSpacePosition(::Spine::Bone* bone)
		{
			return ((::UnityEngine::Vector2(*)(::Spine::Bone*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_GETSKELETONSPACEPOSITION_OFFSET))(bone);
		}

		static ::UnityEngine::Vector2 GetSkeletonSpacePosition_1(::Spine::BonePose* bonePose)
		{
			return ((::UnityEngine::Vector2(*)(::Spine::BonePose*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_GETSKELETONSPACEPOSITION_1_OFFSET))(bonePose);
		}

		static ::UnityEngine::Vector2 GetSkeletonSpacePosition_2(::Spine::Bone* bone, ::UnityEngine::Vector2 boneLocal)
		{
			return ((::UnityEngine::Vector2(*)(::Spine::Bone*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_GETSKELETONSPACEPOSITION_2_OFFSET))(bone, boneLocal);
		}

		static ::UnityEngine::Vector3 GetWorldPosition(::Spine::Bone* bone, ::UnityEngine::Transform* spineGameObjectTransform)
		{
			return ((::UnityEngine::Vector3(*)(::Spine::Bone*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_GETWORLDPOSITION_OFFSET))(bone, spineGameObjectTransform);
		}

		static ::UnityEngine::Vector3 GetWorldPosition_1(::Spine::Bone* bone, ::UnityEngine::Transform* spineGameObjectTransform, ::System::Single positionScale)
		{
			return ((::UnityEngine::Vector3(*)(::Spine::Bone*, ::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_GETWORLDPOSITION_1_OFFSET))(bone, spineGameObjectTransform, positionScale);
		}

		static ::UnityEngine::Vector3 GetWorldPosition_2(::Spine::Bone* bone, ::UnityEngine::Transform* spineGameObjectTransform, ::System::Single positionScale, ::UnityEngine::Vector2 positionOffset)
		{
			return ((::UnityEngine::Vector3(*)(::Spine::Bone*, ::UnityEngine::Transform*, ::System::Single, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_GETWORLDPOSITION_2_OFFSET))(bone, spineGameObjectTransform, positionScale, positionOffset);
		}

		static ::UnityEngine::Vector3 GetWorldPosition_3(::Spine::BonePose* bonePose, ::UnityEngine::Transform* spineGameObjectTransform)
		{
			return ((::UnityEngine::Vector3(*)(::Spine::BonePose*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_GETWORLDPOSITION_3_OFFSET))(bonePose, spineGameObjectTransform);
		}

		static ::UnityEngine::Vector3 GetWorldPosition_4(::Spine::BonePose* bonePose, ::UnityEngine::Transform* spineGameObjectTransform, ::System::Single positionScale)
		{
			return ((::UnityEngine::Vector3(*)(::Spine::BonePose*, ::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_GETWORLDPOSITION_4_OFFSET))(bonePose, spineGameObjectTransform, positionScale);
		}

		static ::UnityEngine::Vector3 GetWorldPosition_5(::Spine::BonePose* bonePose, ::UnityEngine::Transform* spineGameObjectTransform, ::System::Single positionScale, ::UnityEngine::Vector2 positionOffset)
		{
			return ((::UnityEngine::Vector3(*)(::Spine::BonePose*, ::UnityEngine::Transform*, ::System::Single, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_GETWORLDPOSITION_5_OFFSET))(bonePose, spineGameObjectTransform, positionScale, positionOffset);
		}

		static ::UnityEngine::Quaternion GetQuaternion(::Spine::Bone* bone)
		{
			return ((::UnityEngine::Quaternion(*)(::Spine::Bone*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_GETQUATERNION_OFFSET))(bone);
		}

		static ::UnityEngine::Quaternion GetQuaternion_1(::Spine::BonePose* bonePose)
		{
			return ((::UnityEngine::Quaternion(*)(::Spine::BonePose*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_GETQUATERNION_1_OFFSET))(bonePose);
		}

		static ::UnityEngine::Quaternion GetLocalQuaternion(::Spine::Bone* bone)
		{
			return ((::UnityEngine::Quaternion(*)(::Spine::Bone*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_GETLOCALQUATERNION_OFFSET))(bone);
		}

		static ::UnityEngine::Quaternion GetLocalQuaternion_1(::Spine::BonePose* bonePose)
		{
			return ((::UnityEngine::Quaternion(*)(::Spine::BonePose*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_GETLOCALQUATERNION_1_OFFSET))(bonePose);
		}

		static ::UnityEngine::Vector2 GetLocalScale(::Spine::Skeleton* skeleton)
		{
			return ((::UnityEngine::Vector2(*)(::Spine::Skeleton*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_GETLOCALSCALE_OFFSET))(skeleton);
		}

		static ::System::Void GetWorldToLocalMatrix(::Spine::Bone* bone, ::System::Single& ia, ::System::Single& ib, ::System::Single& ic, ::System::Single& id)
		{
			return ((::System::Void(*)(::Spine::Bone*, ::System::Single&, ::System::Single&, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_GETWORLDTOLOCALMATRIX_OFFSET))(bone, ia, ib, ic, id);
		}

		static ::System::Void GetWorldToLocalMatrix_1(::Spine::BonePose* bonePose, ::System::Single& ia, ::System::Single& ib, ::System::Single& ic, ::System::Single& id)
		{
			return ((::System::Void(*)(::Spine::BonePose*, ::System::Single&, ::System::Single&, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_GETWORLDTOLOCALMATRIX_1_OFFSET))(bonePose, ia, ib, ic, id);
		}

		static ::UnityEngine::Vector2 WorldToLocal(::Spine::Bone* bone, ::UnityEngine::Vector2 worldPosition)
		{
			return ((::UnityEngine::Vector2(*)(::Spine::Bone*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_WORLDTOLOCAL_OFFSET))(bone, worldPosition);
		}

		static ::UnityEngine::Vector2 WorldToLocal_1(::Spine::BonePose* bonePose, ::UnityEngine::Vector2 worldPosition)
		{
			return ((::UnityEngine::Vector2(*)(::Spine::BonePose*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_WORLDTOLOCAL_1_OFFSET))(bonePose, worldPosition);
		}

		static ::UnityEngine::Vector2 SetPositionSkeletonSpace(::Spine::Bone* bone, ::UnityEngine::Vector2 skeletonSpacePosition)
		{
			return ((::UnityEngine::Vector2(*)(::Spine::Bone*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_SETPOSITIONSKELETONSPACE_OFFSET))(bone, skeletonSpacePosition);
		}

		static ::UnityEngine::Material* GetMaterial(::Spine::Attachment* a)
		{
			return ((::UnityEngine::Material*(*)(::Spine::Attachment*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_GETMATERIAL_OFFSET))(a);
		}

		static ::Il2CppArray<::UnityEngine::Vector2>* GetLocalVertices(::Spine::VertexAttachment* va, ::Spine::Skeleton* skeleton, ::Spine::Slot* slot, ::Il2CppArray<::UnityEngine::Vector2>* buffer)
		{
			return ((::Il2CppArray<::UnityEngine::Vector2>*(*)(::Spine::VertexAttachment*, ::Spine::Skeleton*, ::Spine::Slot*, ::Il2CppArray<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_GETLOCALVERTICES_OFFSET))(va, skeleton, slot, buffer);
		}

		static ::Il2CppArray<::UnityEngine::Vector2>* GetWorldVertices(::Spine::VertexAttachment* a, ::Spine::Skeleton* skeleton, ::Spine::Slot* slot, ::Il2CppArray<::UnityEngine::Vector2>* buffer)
		{
			return ((::Il2CppArray<::UnityEngine::Vector2>*(*)(::Spine::VertexAttachment*, ::Spine::Skeleton*, ::Spine::Slot*, ::Il2CppArray<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_GETWORLDVERTICES_OFFSET))(a, skeleton, slot, buffer);
		}

		static ::UnityEngine::Vector3 GetWorldPosition_6(::Spine::PointAttachment* attachment, ::Spine::Slot* slot, ::UnityEngine::Transform* spineGameObjectTransform)
		{
			return ((::UnityEngine::Vector3(*)(::Spine::PointAttachment*, ::Spine::Slot*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_GETWORLDPOSITION_6_OFFSET))(attachment, slot, spineGameObjectTransform);
		}

		static ::UnityEngine::Vector3 GetWorldPosition_7(::Spine::PointAttachment* attachment, ::Spine::Bone* bone, ::UnityEngine::Transform* spineGameObjectTransform)
		{
			return ((::UnityEngine::Vector3(*)(::Spine::PointAttachment*, ::Spine::Bone*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_GETWORLDPOSITION_7_OFFSET))(attachment, bone, spineGameObjectTransform);
		}
	};
}
