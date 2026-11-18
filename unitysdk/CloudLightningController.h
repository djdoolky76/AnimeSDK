#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CloudLightningVolume.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class Object; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Texture2D; }

#define CLOUDLIGHTNINGCONTROLLER_CLEARGLOBAL_OFFSET UNITYSDK_OFFSET(0x1E354AC0)
#define CLOUDLIGHTNINGCONTROLLER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1E354EF0)
#define CLOUDLIGHTNINGCONTROLLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1E354A70)
#define CLOUDLIGHTNINGCONTROLLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1E354300)
#define CLOUDLIGHTNINGCONTROLLER_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1E354E00)
#define CLOUDLIGHTNINGCONTROLLER_RANDOMRANGE_OFFSET UNITYSDK_OFFSET(0x1E354380)
#define CLOUDLIGHTNINGCONTROLLER_SPAWNAT_OFFSET UNITYSDK_OFFSET(0x1E355200)
#define CLOUDLIGHTNINGCONTROLLER_SYNCTOGLOBAL_OFFSET UNITYSDK_OFFSET(0x1E354460)
#define CLOUDLIGHTNINGCONTROLLER_TRYSPAWN_OFFSET UNITYSDK_OFFSET(0x1E3550A0)
#define CLOUDLIGHTNINGCONTROLLER_UPDATESLOTS_OFFSET UNITYSDK_OFFSET(0x1E354F70)
#define CLOUDLIGHTNINGCONTROLLER_XORSHIFT01_OFFSET UNITYSDK_OFFSET(0x1E3559E0)
#define CLOUDLIGHTNINGCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3563B0)
#define CLOUDLIGHTNINGCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E355A50)

inline static constexpr unsigned int CloudLightningController_TypeDefinitionIndex = 26163;

class CloudLightningController : public ::UnityEngine::MonoBehaviour
{
public:
	static ::System::Int32* StaticGet_CloudLightningTexId()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CloudLightningController_TypeDefinitionIndex)->GetStaticField(0x6360);
	}
	static ::System::Int32* StaticGet_CloudLightningEndPosVarArrayId()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CloudLightningController_TypeDefinitionIndex)->GetStaticField(0x6364);
	}
	static ::System::Int32* StaticGet_CloudLightningStartPosWidthArrayId()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CloudLightningController_TypeDefinitionIndex)->GetStaticField(0x6368);
	}
	static ::System::Int32* StaticGet_CloudLightningCountId()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CloudLightningController_TypeDefinitionIndex)->GetStaticField(0x636C);
	}
	static ::System::Int32* StaticGet_CloudLightningEdgeSoftnessId()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CloudLightningController_TypeDefinitionIndex)->GetStaticField(0x6370);
	}
	static ::System::Int32* StaticGet_CloudLightningColorArrayId()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CloudLightningController_TypeDefinitionIndex)->GetStaticField(0x6374);
	}
	static ::System::Int32* StaticGet_CloudLightningDepthFadeId()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CloudLightningController_TypeDefinitionIndex)->GetStaticField(0x6378);
	}
	static ::System::Int32* StaticGet_CloudLightningAtlasRowsId()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CloudLightningController_TypeDefinitionIndex)->GetStaticField(0x637C);
	}
	// static const ::System::Int32 MaxLightningLights = 0x4; // 0x0
	// static const ::System::Int32 MaxVolumes = 0x4; // 0x0
	::Il2CppArray<::CloudLightningVolume>* volumes; // 0x18
	::System::Int32 maxSimultaneous; // 0x20
	::UnityEngine::Vector2 spawnInterval; // 0x24
	::UnityEngine::Vector2 duration; // 0x2C
	::UnityEngine::Color lightningColor; // 0x34
	::UnityEngine::Vector2 intensityRange; // 0x44
	::System::Byte _padding0[0x4];
	::Il2CppArray<::UnityEngine::AnimationCurve*>* intensityCurves; // 0x50
	::UnityEngine::Texture2D* lightningAtlas; // 0x58
	::System::Int32 atlasRows; // 0x60
	::UnityEngine::Vector2 lengthRange; // 0x64
	::UnityEngine::Vector2 widthRange; // 0x6C
	::System::Single directionSpread; // 0x74
	::System::Single edgeSoftness; // 0x78
	::System::Single depthFade; // 0x7C
	::System::Boolean debug; // 0x80
	::System::Byte _padding1[0x7];
	::Il2CppArray<::System::Object*>* slots; // 0x88
	::System::Single nextSpawnTimer; // 0x90
	::System::UInt32 rngState; // 0x94
	::Il2CppArray<::UnityEngine::Vector4>* startPosWidthArray; // 0x98
	::Il2CppArray<::UnityEngine::Vector4>* endPosVarArray; // 0xA0
	::Il2CppArray<::UnityEngine::Vector4>* colorArray; // 0xA8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLOUDLIGHTNINGCONTROLLER__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLOUDLIGHTNINGCONTROLLER__CCTOR_OFFSET))();
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLOUDLIGHTNINGCONTROLLER_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLOUDLIGHTNINGCONTROLLER_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnValidate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLOUDLIGHTNINGCONTROLLER_ONVALIDATE_OFFSET))(this);
	}

	::System::Void LateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLOUDLIGHTNINGCONTROLLER_LATEUPDATE_OFFSET))(this);
	}

	::System::Void UpdateSlots(::System::Single dt)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLOUDLIGHTNINGCONTROLLER_UPDATESLOTS_OFFSET))(this, dt);
	}

	::System::Void TrySpawn(::System::Single dt)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLOUDLIGHTNINGCONTROLLER_TRYSPAWN_OFFSET))(this, dt);
	}

	::System::Void SpawnAt(::System::Int32 index)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLOUDLIGHTNINGCONTROLLER_SPAWNAT_OFFSET))(this, index);
	}

	::System::Void SyncToGlobal()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLOUDLIGHTNINGCONTROLLER_SYNCTOGLOBAL_OFFSET))(this);
	}

	::System::Void ClearGlobal()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLOUDLIGHTNINGCONTROLLER_CLEARGLOBAL_OFFSET))(this);
	}

	::System::Single RandomRange(::System::Single min, ::System::Single max)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLOUDLIGHTNINGCONTROLLER_RANDOMRANGE_OFFSET))(this, min, max);
	}

	::System::Single XorShift01()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLOUDLIGHTNINGCONTROLLER_XORSHIFT01_OFFSET))(this);
	}
};
