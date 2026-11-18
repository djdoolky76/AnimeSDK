#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/Inherit.h"
#include "unitysdk/Spine/Physics.h"
#include "unitysdk/System/Object.h"

namespace Spine { class Bone; }
namespace Spine { class Skeleton; }
namespace System { class String; }

#define SPINE_BONEPOSE_GET_A_OFFSET UNITYSDK_OFFSET(0x1FA17210)
#define SPINE_BONEPOSE_GET_B_OFFSET UNITYSDK_OFFSET(0x1FA17230)
#define SPINE_BONEPOSE_GET_C_OFFSET UNITYSDK_OFFSET(0x1FA17250)
#define SPINE_BONEPOSE_GET_D_OFFSET UNITYSDK_OFFSET(0x1FA17270)
#define SPINE_BONEPOSE_GET_INHERIT_OFFSET UNITYSDK_OFFSET(0x1FA15CF0)
#define SPINE_BONEPOSE_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0x1FA15C30)
#define SPINE_BONEPOSE_GET_SCALEX_OFFSET UNITYSDK_OFFSET(0x1FA15C50)
#define SPINE_BONEPOSE_GET_SCALEY_OFFSET UNITYSDK_OFFSET(0x1FA15C70)
#define SPINE_BONEPOSE_GET_SHEARX_OFFSET UNITYSDK_OFFSET(0x1FA15CB0)
#define SPINE_BONEPOSE_GET_SHEARY_OFFSET UNITYSDK_OFFSET(0x1FA15CD0)
#define SPINE_BONEPOSE_GET_WORLDROTATIONX_OFFSET UNITYSDK_OFFSET(0x1FA172D0)
#define SPINE_BONEPOSE_GET_WORLDROTATIONY_OFFSET UNITYSDK_OFFSET(0x1FA17350)
#define SPINE_BONEPOSE_GET_WORLDSCALEX_OFFSET UNITYSDK_OFFSET(0x1FA173D0)
#define SPINE_BONEPOSE_GET_WORLDSCALEY_OFFSET UNITYSDK_OFFSET(0x1FA173F0)
#define SPINE_BONEPOSE_GET_WORLDX_OFFSET UNITYSDK_OFFSET(0x1FA17290)
#define SPINE_BONEPOSE_GET_WORLDY_OFFSET UNITYSDK_OFFSET(0x1FA172B0)
#define SPINE_BONEPOSE_GET_X_OFFSET UNITYSDK_OFFSET(0x1FA15BE0)
#define SPINE_BONEPOSE_GET_Y_OFFSET UNITYSDK_OFFSET(0x1FA15C00)
#define SPINE_BONEPOSE_LOCALTOWORLDROTATION_OFFSET UNITYSDK_OFFSET(0x1FA17730)
#define SPINE_BONEPOSE_LOCALTOWORLD_OFFSET UNITYSDK_OFFSET(0x1FA17490)
#define SPINE_BONEPOSE_MODIFYLOCAL_OFFSET UNITYSDK_OFFSET(0x1FA170B0)
#define SPINE_BONEPOSE_MODIFYWORLD_OFFSET UNITYSDK_OFFSET(0x1FA171E0)
#define SPINE_BONEPOSE_PARENTTOWORLD_OFFSET UNITYSDK_OFFSET(0x1FA17580)
#define SPINE_BONEPOSE_RESETWORLD_OFFSET UNITYSDK_OFFSET(0x1FA17100)
#define SPINE_BONEPOSE_ROTATEWORLD_OFFSET UNITYSDK_OFFSET(0x1FA17860)
#define SPINE_BONEPOSE_SETPOSITION_OFFSET UNITYSDK_OFFSET(0x1FA15C20)
#define SPINE_BONEPOSE_SETSCALE_1_OFFSET UNITYSDK_OFFSET(0x1FA15CA0)
#define SPINE_BONEPOSE_SETSCALE_OFFSET UNITYSDK_OFFSET(0x1FA15C90)
#define SPINE_BONEPOSE_SET_1_OFFSET UNITYSDK_OFFSET(0x1FA16E70)
#define SPINE_BONEPOSE_SET_2_OFFSET UNITYSDK_OFFSET(0x1FA16B90)
#define SPINE_BONEPOSE_SET_A_OFFSET UNITYSDK_OFFSET(0x1FA17220)
#define SPINE_BONEPOSE_SET_B_OFFSET UNITYSDK_OFFSET(0x1FA17240)
#define SPINE_BONEPOSE_SET_C_OFFSET UNITYSDK_OFFSET(0x1FA17260)
#define SPINE_BONEPOSE_SET_D_OFFSET UNITYSDK_OFFSET(0x1FA17280)
#define SPINE_BONEPOSE_SET_INHERIT_OFFSET UNITYSDK_OFFSET(0x1FA15D00)
#define SPINE_BONEPOSE_SET_OFFSET UNITYSDK_OFFSET(0x1FA15B30)
#define SPINE_BONEPOSE_SET_ROTATION_OFFSET UNITYSDK_OFFSET(0x1FA15C40)
#define SPINE_BONEPOSE_SET_SCALEX_OFFSET UNITYSDK_OFFSET(0x1FA15C60)
#define SPINE_BONEPOSE_SET_SCALEY_OFFSET UNITYSDK_OFFSET(0x1FA15C80)
#define SPINE_BONEPOSE_SET_SHEARX_OFFSET UNITYSDK_OFFSET(0x1FA15CC0)
#define SPINE_BONEPOSE_SET_SHEARY_OFFSET UNITYSDK_OFFSET(0x1FA15CE0)
#define SPINE_BONEPOSE_SET_WORLDX_OFFSET UNITYSDK_OFFSET(0x1FA172A0)
#define SPINE_BONEPOSE_SET_WORLDY_OFFSET UNITYSDK_OFFSET(0x1FA172C0)
#define SPINE_BONEPOSE_SET_X_OFFSET UNITYSDK_OFFSET(0x1FA15BF0)
#define SPINE_BONEPOSE_SET_Y_OFFSET UNITYSDK_OFFSET(0x1FA15C10)
#define SPINE_BONEPOSE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FA17910)
#define SPINE_BONEPOSE_UPDATELOCALTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1FA165A0)
#define SPINE_BONEPOSE_UPDATEWORLDTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1FA15D40)
#define SPINE_BONEPOSE_UPDATE_OFFSET UNITYSDK_OFFSET(0x1FA15D10)
#define SPINE_BONEPOSE_VALIDATELOCALTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1FA17080)
#define SPINE_BONEPOSE_WORLDTOLOCALROTATION_OFFSET UNITYSDK_OFFSET(0x1FA17600)
#define SPINE_BONEPOSE_WORLDTOLOCAL_OFFSET UNITYSDK_OFFSET(0x1FA17410)
#define SPINE_BONEPOSE_WORLDTOPARENT_OFFSET UNITYSDK_OFFSET(0x1FA174D0)
#define SPINE_BONEPOSE__CTOR_OFFSET UNITYSDK_OFFSET(0x1FA17940)

namespace Spine
{
	inline static constexpr unsigned int BonePose_TypeDefinitionIndex = 32984;

	class BonePose : public ::System::Object
	{
	public:
		::Spine::Bone* bone; // 0x10
		::System::Single b; // 0x18
		::System::Single worldY; // 0x1C
		::System::Int32 local; // 0x20
		::System::Single a; // 0x24
		::System::Single shearY; // 0x28
		::System::Int32 world; // 0x2C
		::System::Single rotation; // 0x30
		::Spine::Inherit inherit; // 0x34
		::System::Single y; // 0x38
		::System::Single scaleX; // 0x3C
		::System::Single x; // 0x40
		::System::Single worldX; // 0x44
		::System::Single d; // 0x48
		::System::Single scaleY; // 0x4C
		::System::Single c; // 0x50
		::System::Single shearX; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONEPOSE__CTOR_OFFSET))(this);
		}

		::System::Void Set(::Spine::BonePose* pose)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::BonePose*))((::PBYTE)hIl2Cpp + SPINE_BONEPOSE_SET_OFFSET))(this, pose);
		}

		::System::Single get_X()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONEPOSE_GET_X_OFFSET))(this);
		}

		::System::Void set_X(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_BONEPOSE_SET_X_OFFSET))(this, value);
		}

		::System::Single get_Y()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONEPOSE_GET_Y_OFFSET))(this);
		}

		::System::Void set_Y(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_BONEPOSE_SET_Y_OFFSET))(this, value);
		}

		::System::Void SetPosition(::System::Single x, ::System::Single y)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_BONEPOSE_SETPOSITION_OFFSET))(this, x, y);
		}

		::System::Single get_Rotation()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONEPOSE_GET_ROTATION_OFFSET))(this);
		}

		::System::Void set_Rotation(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_BONEPOSE_SET_ROTATION_OFFSET))(this, value);
		}

		::System::Single get_ScaleX()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONEPOSE_GET_SCALEX_OFFSET))(this);
		}

		::System::Void set_ScaleX(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_BONEPOSE_SET_SCALEX_OFFSET))(this, value);
		}

		::System::Single get_ScaleY()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONEPOSE_GET_SCALEY_OFFSET))(this);
		}

		::System::Void set_ScaleY(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_BONEPOSE_SET_SCALEY_OFFSET))(this, value);
		}

		::System::Void SetScale(::System::Single scaleX, ::System::Single scaleY)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_BONEPOSE_SETSCALE_OFFSET))(this, scaleX, scaleY);
		}

		::System::Void SetScale_1(::System::Single scale)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_BONEPOSE_SETSCALE_1_OFFSET))(this, scale);
		}

		::System::Single get_ShearX()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONEPOSE_GET_SHEARX_OFFSET))(this);
		}

		::System::Void set_ShearX(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_BONEPOSE_SET_SHEARX_OFFSET))(this, value);
		}

		::System::Single get_ShearY()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONEPOSE_GET_SHEARY_OFFSET))(this);
		}

		::System::Void set_ShearY(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_BONEPOSE_SET_SHEARY_OFFSET))(this, value);
		}

		::Spine::Inherit get_Inherit()
		{
			return ((::Spine::Inherit(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONEPOSE_GET_INHERIT_OFFSET))(this);
		}

		::System::Void set_Inherit(::Spine::Inherit value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Inherit))((::PBYTE)hIl2Cpp + SPINE_BONEPOSE_SET_INHERIT_OFFSET))(this, value);
		}

		::System::Void Update(::Spine::Skeleton* skeleton, ::Spine::Physics physics)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Skeleton*, ::Spine::Physics))((::PBYTE)hIl2Cpp + SPINE_BONEPOSE_UPDATE_OFFSET))(this, skeleton, physics);
		}

		::System::Void UpdateWorldTransform(::Spine::Skeleton* skeleton)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Skeleton*))((::PBYTE)hIl2Cpp + SPINE_BONEPOSE_UPDATEWORLDTRANSFORM_OFFSET))(this, skeleton);
		}

		::System::Void UpdateLocalTransform(::Spine::Skeleton* skeleton)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Skeleton*))((::PBYTE)hIl2Cpp + SPINE_BONEPOSE_UPDATELOCALTRANSFORM_OFFSET))(this, skeleton);
		}

		::System::Void Set_1(::System::Single ra, ::System::Single rb, ::System::Single rc, ::System::Single rd)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_BONEPOSE_SET_1_OFFSET))(this, ra, rb, rc, rd);
		}

		::System::Void Set_2(::System::Single ra, ::System::Single rb, ::System::Single rc, ::System::Single rd, ::System::Single ro)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_BONEPOSE_SET_2_OFFSET))(this, ra, rb, rc, rd, ro);
		}

		::System::Void ValidateLocalTransform(::Spine::Skeleton* skeleton)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Skeleton*))((::PBYTE)hIl2Cpp + SPINE_BONEPOSE_VALIDATELOCALTRANSFORM_OFFSET))(this, skeleton);
		}

		::System::Void ModifyLocal(::Spine::Skeleton* skeleton)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Skeleton*))((::PBYTE)hIl2Cpp + SPINE_BONEPOSE_MODIFYLOCAL_OFFSET))(this, skeleton);
		}

		::System::Void ModifyWorld(::Spine::Skeleton* skeleton)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Skeleton*))((::PBYTE)hIl2Cpp + SPINE_BONEPOSE_MODIFYWORLD_OFFSET))(this, skeleton);
		}

		::System::Void ResetWorld(::Spine::Skeleton* skeleton, ::System::Int32 update)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Skeleton*, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_BONEPOSE_RESETWORLD_OFFSET))(this, skeleton, update);
		}

		::System::Single get_A()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONEPOSE_GET_A_OFFSET))(this);
		}

		::System::Void set_A(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_BONEPOSE_SET_A_OFFSET))(this, value);
		}

		::System::Single get_B()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONEPOSE_GET_B_OFFSET))(this);
		}

		::System::Void set_B(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_BONEPOSE_SET_B_OFFSET))(this, value);
		}

		::System::Single get_C()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONEPOSE_GET_C_OFFSET))(this);
		}

		::System::Void set_C(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_BONEPOSE_SET_C_OFFSET))(this, value);
		}

		::System::Single get_D()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONEPOSE_GET_D_OFFSET))(this);
		}

		::System::Void set_D(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_BONEPOSE_SET_D_OFFSET))(this, value);
		}

		::System::Single get_WorldX()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONEPOSE_GET_WORLDX_OFFSET))(this);
		}

		::System::Void set_WorldX(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_BONEPOSE_SET_WORLDX_OFFSET))(this, value);
		}

		::System::Single get_WorldY()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONEPOSE_GET_WORLDY_OFFSET))(this);
		}

		::System::Void set_WorldY(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_BONEPOSE_SET_WORLDY_OFFSET))(this, value);
		}

		::System::Single get_WorldRotationX()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONEPOSE_GET_WORLDROTATIONX_OFFSET))(this);
		}

		::System::Single get_WorldRotationY()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONEPOSE_GET_WORLDROTATIONY_OFFSET))(this);
		}

		::System::Single get_WorldScaleX()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONEPOSE_GET_WORLDSCALEX_OFFSET))(this);
		}

		::System::Single get_WorldScaleY()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONEPOSE_GET_WORLDSCALEY_OFFSET))(this);
		}

		::System::Void WorldToLocal(::System::Single worldX, ::System::Single worldY, ::System::Single& localX, ::System::Single& localY)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + SPINE_BONEPOSE_WORLDTOLOCAL_OFFSET))(this, worldX, worldY, localX, localY);
		}

		::System::Void LocalToWorld(::System::Single localX, ::System::Single localY, ::System::Single& worldX, ::System::Single& worldY)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + SPINE_BONEPOSE_LOCALTOWORLD_OFFSET))(this, localX, localY, worldX, worldY);
		}

		::System::Void WorldToParent(::System::Single worldX, ::System::Single worldY, ::System::Single& parentX, ::System::Single& parentY)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + SPINE_BONEPOSE_WORLDTOPARENT_OFFSET))(this, worldX, worldY, parentX, parentY);
		}

		::System::Void ParentToWorld(::System::Single parentX, ::System::Single parentY, ::System::Single& worldX, ::System::Single& worldY)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + SPINE_BONEPOSE_PARENTTOWORLD_OFFSET))(this, parentX, parentY, worldX, worldY);
		}

		::System::Single WorldToLocalRotation(::System::Single worldRotation)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_BONEPOSE_WORLDTOLOCALROTATION_OFFSET))(this, worldRotation);
		}

		::System::Single LocalToWorldRotation(::System::Single localRotation)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_BONEPOSE_LOCALTOWORLDROTATION_OFFSET))(this, localRotation);
		}

		::System::Void RotateWorld(::System::Single degrees)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_BONEPOSE_ROTATEWORLD_OFFSET))(this, degrees);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONEPOSE_TOSTRING_OFFSET))(this);
		}
	};
}
