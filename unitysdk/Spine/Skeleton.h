#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/Physics.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace Spine { class Attachment; }
namespace Spine { class Bone; }
namespace Spine { class DrawOrder; }
namespace Spine { class IConstraint; }
namespace Spine { class IPosedInternal; }
namespace Spine { class PhysicsConstraint; }
namespace Spine { class SkeletonClipping; }
namespace Spine { class SkeletonData; }
namespace Spine { class Skin; }
namespace Spine { class Slot; }
namespace Spine { template <typename T> class ExposedList_1; }
namespace System { class String; }

#define SPINE_SKELETON_CONSTRAINED_OFFSET UNITYSDK_OFFSET(0x1FDCF770)
#define SPINE_SKELETON_FINDBONE_OFFSET UNITYSDK_OFFSET(0x1FDCFFA0)
#define SPINE_SKELETON_FINDSLOT_OFFSET UNITYSDK_OFFSET(0x1FDD00D0)
#define SPINE_SKELETON_GETATTACHMENT_1_OFFSET UNITYSDK_OFFSET(0x1FDD0470)
#define SPINE_SKELETON_GETATTACHMENT_OFFSET UNITYSDK_OFFSET(0x1FDD03C0)
#define SPINE_SKELETON_GETBOUNDS_OFFSET UNITYSDK_OFFSET(0x1FDD0730)
#define SPINE_SKELETON_GETCOLOR_OFFSET UNITYSDK_OFFSET(0x1FDD0D70)
#define SPINE_SKELETON_GET_BONES_OFFSET UNITYSDK_OFFSET(0x1FDCFF30)
#define SPINE_SKELETON_GET_CONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x1FDD0710)
#define SPINE_SKELETON_GET_DATA_OFFSET UNITYSDK_OFFSET(0x1FDCFF20)
#define SPINE_SKELETON_GET_DRAWORDER_OFFSET UNITYSDK_OFFSET(0x1FDD01F0)
#define SPINE_SKELETON_GET_GRAVITYX_OFFSET UNITYSDK_OFFSET(0x1FDD0EB0)
#define SPINE_SKELETON_GET_GRAVITYY_OFFSET UNITYSDK_OFFSET(0x1FDD0ED0)
#define SPINE_SKELETON_GET_PHYSICSCONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x1FDD0720)
#define SPINE_SKELETON_GET_ROOTBONE_OFFSET UNITYSDK_OFFSET(0x1FDCFF50)
#define SPINE_SKELETON_GET_SCALEX_OFFSET UNITYSDK_OFFSET(0x1FDD0DC0)
#define SPINE_SKELETON_GET_SCALEY_OFFSET UNITYSDK_OFFSET(0x1FDD0DE0)
#define SPINE_SKELETON_GET_SKIN_OFFSET UNITYSDK_OFFSET(0x1FDD0200)
#define SPINE_SKELETON_GET_SLOTS_OFFSET UNITYSDK_OFFSET(0x1FDD00C0)
#define SPINE_SKELETON_GET_TIME_OFFSET UNITYSDK_OFFSET(0x1FDD1130)
#define SPINE_SKELETON_GET_UPDATECACHELIST_OFFSET UNITYSDK_OFFSET(0x1FDCFF40)
#define SPINE_SKELETON_GET_WINDX_OFFSET UNITYSDK_OFFSET(0x1FDD0E70)
#define SPINE_SKELETON_GET_WINDY_OFFSET UNITYSDK_OFFSET(0x1FDD0E90)
#define SPINE_SKELETON_GET_X_OFFSET UNITYSDK_OFFSET(0x1FDD0E20)
#define SPINE_SKELETON_GET_Y_OFFSET UNITYSDK_OFFSET(0x1FDD0E40)
#define SPINE_SKELETON_PHYSICSROTATE_OFFSET UNITYSDK_OFFSET(0x1FDD0FB0)
#define SPINE_SKELETON_PHYSICSTRANSLATE_OFFSET UNITYSDK_OFFSET(0x1FDD0EF0)
#define SPINE_SKELETON_SETATTACHMENT_OFFSET UNITYSDK_OFFSET(0x1FDD0530)
#define SPINE_SKELETON_SETCOLOR_1_OFFSET UNITYSDK_OFFSET(0x1FDD0D90)
#define SPINE_SKELETON_SETCOLOR_OFFSET UNITYSDK_OFFSET(0x1FDD0D80)
#define SPINE_SKELETON_SETPOSITION_OFFSET UNITYSDK_OFFSET(0x1FDD0E60)
#define SPINE_SKELETON_SETSCALE_OFFSET UNITYSDK_OFFSET(0x1FDD0E10)
#define SPINE_SKELETON_SETSKIN_1_OFFSET UNITYSDK_OFFSET(0x1FDD0220)
#define SPINE_SKELETON_SETSKIN_OFFSET UNITYSDK_OFFSET(0x1FDD0320)
#define SPINE_SKELETON_SETUPPOSEBONES_OFFSET UNITYSDK_OFFSET(0x1FDCFCC0)
#define SPINE_SKELETON_SETUPPOSESLOTS_OFFSET UNITYSDK_OFFSET(0x1FDCFE90)
#define SPINE_SKELETON_SETUPPOSE_OFFSET UNITYSDK_OFFSET(0x1FDCFCA0)
#define SPINE_SKELETON_SET_GRAVITYX_OFFSET UNITYSDK_OFFSET(0x1FDD0EC0)
#define SPINE_SKELETON_SET_GRAVITYY_OFFSET UNITYSDK_OFFSET(0x1FDD0EE0)
#define SPINE_SKELETON_SET_SCALEX_OFFSET UNITYSDK_OFFSET(0x1FDD0DD0)
#define SPINE_SKELETON_SET_SCALEY_OFFSET UNITYSDK_OFFSET(0x1FDD0E00)
#define SPINE_SKELETON_SET_SKIN_OFFSET UNITYSDK_OFFSET(0x1FDD0210)
#define SPINE_SKELETON_SET_TIME_OFFSET UNITYSDK_OFFSET(0x1FDD1140)
#define SPINE_SKELETON_SET_WINDX_OFFSET UNITYSDK_OFFSET(0x1FDD0E80)
#define SPINE_SKELETON_SET_WINDY_OFFSET UNITYSDK_OFFSET(0x1FDD0EA0)
#define SPINE_SKELETON_SET_X_OFFSET UNITYSDK_OFFSET(0x1FDD0E30)
#define SPINE_SKELETON_SET_Y_OFFSET UNITYSDK_OFFSET(0x1FDD0E50)
#define SPINE_SKELETON_SORTBONE_OFFSET UNITYSDK_OFFSET(0x1FDCF6E0)
#define SPINE_SKELETON_SORTRESET_OFFSET UNITYSDK_OFFSET(0x1FDCF900)
#define SPINE_SKELETON_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FDD1170)
#define SPINE_SKELETON_UPDATECACHE_OFFSET UNITYSDK_OFFSET(0x1FDCDF80)
#define SPINE_SKELETON_UPDATEWORLDTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1FDCF9A0)
#define SPINE_SKELETON_UPDATE_OFFSET UNITYSDK_OFFSET(0x1FDD1150)
#define SPINE_SKELETON__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FDD1190)
#define SPINE_SKELETON__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FDCEB80)
#define SPINE_SKELETON__CTOR_OFFSET UNITYSDK_OFFSET(0x1FDCD660)

namespace Spine
{
	inline static constexpr unsigned int Skeleton_TypeDefinitionIndex = 33050;

	class Skeleton : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Int32>** StaticGet_quadTriangles()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Skeleton_TypeDefinitionIndex)->GetStaticField(0x29A30);
		}
		::Spine::ExposedList_1<::Spine::IPosedInternal*>* resetCache; // 0x10
		::Spine::Skin* skin; // 0x18
		::Spine::ExposedList_1<::Spine::PhysicsConstraint*>* physics; // 0x20
		::Spine::ExposedList_1<::Spine::Slot*>* slots; // 0x28
		::Spine::ExposedList_1<::Spine::Bone*>* bones; // 0x30
		::Spine::ExposedList_1<::System::Object*>* updateCache; // 0x38
		::Spine::ExposedList_1<::Spine::IConstraint*>* constraints; // 0x40
		::Spine::SkeletonData* data; // 0x48
		::Spine::DrawOrder* drawOrder; // 0x50
		::System::Int32 update; // 0x58
		::System::Single y; // 0x5C
		::System::Single gravityY; // 0x60
		::System::Single scaleX; // 0x64
		::System::Single gravityX; // 0x68
		::System::Single scaleY; // 0x6C
		::System::Single windX; // 0x70
		::System::Single x; // 0x74
		::System::Single windY; // 0x78
		::UnityEngine::Color color; // 0x7C
		::System::Single time; // 0x8C

		::System::Void _ctor(::Spine::SkeletonData* data)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::SkeletonData*))((::PBYTE)hIl2Cpp + SPINE_SKELETON__CTOR_OFFSET))(this, data);
		}

		::System::Void _ctor_1(::Spine::Skeleton* skeleton)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Skeleton*))((::PBYTE)hIl2Cpp + SPINE_SKELETON__CTOR_1_OFFSET))(this, skeleton);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SPINE_SKELETON__CCTOR_OFFSET))();
		}

		::System::Void UpdateCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETON_UPDATECACHE_OFFSET))(this);
		}

		::System::Void Constrained(::Spine::IPosedInternal* obj)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::IPosedInternal*))((::PBYTE)hIl2Cpp + SPINE_SKELETON_CONSTRAINED_OFFSET))(this, obj);
		}

		::System::Void SortBone(::Spine::Bone* bone)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Bone*))((::PBYTE)hIl2Cpp + SPINE_SKELETON_SORTBONE_OFFSET))(this, bone);
		}

		::System::Void SortReset(::Spine::ExposedList_1<::Spine::Bone*>* bones)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::ExposedList_1<::Spine::Bone*>*))((::PBYTE)hIl2Cpp + SPINE_SKELETON_SORTRESET_OFFSET))(this, bones);
		}

		::System::Void UpdateWorldTransform(::Spine::Physics physics)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Physics))((::PBYTE)hIl2Cpp + SPINE_SKELETON_UPDATEWORLDTRANSFORM_OFFSET))(this, physics);
		}

		::System::Void SetupPose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETON_SETUPPOSE_OFFSET))(this);
		}

		::System::Void SetupPoseBones()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETON_SETUPPOSEBONES_OFFSET))(this);
		}

		::System::Void SetupPoseSlots()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETON_SETUPPOSESLOTS_OFFSET))(this);
		}

		::Spine::SkeletonData* get_Data()
		{
			return ((::Spine::SkeletonData*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETON_GET_DATA_OFFSET))(this);
		}

		::Spine::ExposedList_1<::Spine::Bone*>* get_Bones()
		{
			return ((::Spine::ExposedList_1<::Spine::Bone*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETON_GET_BONES_OFFSET))(this);
		}

		::Spine::ExposedList_1<::System::Object*>* get_UpdateCacheList()
		{
			return ((::Spine::ExposedList_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETON_GET_UPDATECACHELIST_OFFSET))(this);
		}

		::Spine::Bone* get_RootBone()
		{
			return ((::Spine::Bone*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETON_GET_ROOTBONE_OFFSET))(this);
		}

		::Spine::Bone* FindBone(::System::String* boneName)
		{
			return ((::Spine::Bone*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_SKELETON_FINDBONE_OFFSET))(this, boneName);
		}

		::Spine::ExposedList_1<::Spine::Slot*>* get_Slots()
		{
			return ((::Spine::ExposedList_1<::Spine::Slot*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETON_GET_SLOTS_OFFSET))(this);
		}

		::Spine::Slot* FindSlot(::System::String* slotName)
		{
			return ((::Spine::Slot*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_SKELETON_FINDSLOT_OFFSET))(this, slotName);
		}

		::Spine::DrawOrder* get_DrawOrder()
		{
			return ((::Spine::DrawOrder*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETON_GET_DRAWORDER_OFFSET))(this);
		}

		::Spine::Skin* get_Skin()
		{
			return ((::Spine::Skin*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETON_GET_SKIN_OFFSET))(this);
		}

		::System::Void set_Skin(::Spine::Skin* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Skin*))((::PBYTE)hIl2Cpp + SPINE_SKELETON_SET_SKIN_OFFSET))(this, value);
		}

		::System::Void SetSkin(::System::String* skinName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_SKELETON_SETSKIN_OFFSET))(this, skinName);
		}

		::System::Void SetSkin_1(::Spine::Skin* newSkin)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Skin*))((::PBYTE)hIl2Cpp + SPINE_SKELETON_SETSKIN_1_OFFSET))(this, newSkin);
		}

		::Spine::Attachment* GetAttachment(::System::String* slotName, ::System::String* placeholder)
		{
			return ((::Spine::Attachment*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_SKELETON_GETATTACHMENT_OFFSET))(this, slotName, placeholder);
		}

		::Spine::Attachment* GetAttachment_1(::System::Int32 slotIndex, ::System::String* placeholder)
		{
			return ((::Spine::Attachment*(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_SKELETON_GETATTACHMENT_1_OFFSET))(this, slotIndex, placeholder);
		}

		::System::Void SetAttachment(::System::String* slotName, ::System::String* placeholder)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_SKELETON_SETATTACHMENT_OFFSET))(this, slotName, placeholder);
		}

		::Spine::ExposedList_1<::Spine::IConstraint*>* get_Constraints()
		{
			return ((::Spine::ExposedList_1<::Spine::IConstraint*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETON_GET_CONSTRAINTS_OFFSET))(this);
		}

		::Spine::ExposedList_1<::Spine::PhysicsConstraint*>* get_PhysicsConstraints()
		{
			return ((::Spine::ExposedList_1<::Spine::PhysicsConstraint*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETON_GET_PHYSICSCONSTRAINTS_OFFSET))(this);
		}

		::System::Void GetBounds(::System::Single& x, ::System::Single& y, ::System::Single& width, ::System::Single& height, ::Il2CppArray<::System::Single>*& vertexBuffer, ::Spine::SkeletonClipping* clipper)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single&, ::System::Single&, ::System::Single&, ::System::Single&, ::Il2CppArray<::System::Single>*&, ::Spine::SkeletonClipping*))((::PBYTE)hIl2Cpp + SPINE_SKELETON_GETBOUNDS_OFFSET))(this, x, y, width, height, vertexBuffer, clipper);
		}

		::UnityEngine::Color GetColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETON_GETCOLOR_OFFSET))(this);
		}

		::System::Void SetColor(::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + SPINE_SKELETON_SETCOLOR_OFFSET))(this, color);
		}

		::System::Void SetColor_1(::System::Single r, ::System::Single g, ::System::Single b, ::System::Single a)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_SKELETON_SETCOLOR_1_OFFSET))(this, r, g, b, a);
		}

		::System::Single get_ScaleX()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETON_GET_SCALEX_OFFSET))(this);
		}

		::System::Void set_ScaleX(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_SKELETON_SET_SCALEX_OFFSET))(this, value);
		}

		::System::Single get_ScaleY()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETON_GET_SCALEY_OFFSET))(this);
		}

		::System::Void set_ScaleY(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_SKELETON_SET_SCALEY_OFFSET))(this, value);
		}

		::System::Void SetScale(::System::Single scaleX, ::System::Single scaleY)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_SKELETON_SETSCALE_OFFSET))(this, scaleX, scaleY);
		}

		::System::Single get_X()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETON_GET_X_OFFSET))(this);
		}

		::System::Void set_X(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_SKELETON_SET_X_OFFSET))(this, value);
		}

		::System::Single get_Y()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETON_GET_Y_OFFSET))(this);
		}

		::System::Void set_Y(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_SKELETON_SET_Y_OFFSET))(this, value);
		}

		::System::Void SetPosition(::System::Single x, ::System::Single y)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_SKELETON_SETPOSITION_OFFSET))(this, x, y);
		}

		::System::Single get_WindX()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETON_GET_WINDX_OFFSET))(this);
		}

		::System::Void set_WindX(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_SKELETON_SET_WINDX_OFFSET))(this, value);
		}

		::System::Single get_WindY()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETON_GET_WINDY_OFFSET))(this);
		}

		::System::Void set_WindY(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_SKELETON_SET_WINDY_OFFSET))(this, value);
		}

		::System::Single get_GravityX()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETON_GET_GRAVITYX_OFFSET))(this);
		}

		::System::Void set_GravityX(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_SKELETON_SET_GRAVITYX_OFFSET))(this, value);
		}

		::System::Single get_GravityY()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETON_GET_GRAVITYY_OFFSET))(this);
		}

		::System::Void set_GravityY(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_SKELETON_SET_GRAVITYY_OFFSET))(this, value);
		}

		::System::Void PhysicsTranslate(::System::Single x, ::System::Single y)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_SKELETON_PHYSICSTRANSLATE_OFFSET))(this, x, y);
		}

		::System::Void PhysicsRotate(::System::Single x, ::System::Single y, ::System::Single degrees)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_SKELETON_PHYSICSROTATE_OFFSET))(this, x, y, degrees);
		}

		::System::Single get_Time()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETON_GET_TIME_OFFSET))(this);
		}

		::System::Void set_Time(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_SKELETON_SET_TIME_OFFSET))(this, value);
		}

		::System::Void Update(::System::Single delta)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_SKELETON_UPDATE_OFFSET))(this, delta);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETON_TOSTRING_OFFSET))(this);
		}
	};
}
