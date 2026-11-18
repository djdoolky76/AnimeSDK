#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/INapLevel_CommonStateChangeEffect.h"
#include "unitysdk/NapLevelStateChangeUV_PagedAxis.h"
#include "unitysdk/NapLevelStateChangeUV_PagedMoveMode.h"
#include "unitysdk/NapLevelStateChangeUV_ScaleAxis.h"
#include "unitysdk/NapLevelStateChangeUV_UvSwitchMode.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

#define NAPLEVELSTATECHANGEUV_APPLYOFFSETTORENDERER_OFFSET UNITYSDK_OFFSET(0x1CECB130)
#define NAPLEVELSTATECHANGEUV_APPLYPAGEDOFFSET_OFFSET UNITYSDK_OFFSET(0x1CECCB90)
#define NAPLEVELSTATECHANGEUV_APPLYPAGEDSTATENORMALIZED_OFFSET UNITYSDK_OFFSET(0x1CECB3B0)
#define NAPLEVELSTATECHANGEUV_APPLYSCALESTATENORMALIZED_OFFSET UNITYSDK_OFFSET(0x1CECAD10)
#define NAPLEVELSTATECHANGEUV_APPLYSCALE_OFFSET UNITYSDK_OFFSET(0x1CECD530)
#define NAPLEVELSTATECHANGEUV_APPLYSTATE_OFFSET UNITYSDK_OFFSET(0x1CECAAD0)
#define NAPLEVELSTATECHANGEUV_AWAKE_OFFSET UNITYSDK_OFFSET(0x1CECA5A0)
#define NAPLEVELSTATECHANGEUV_CALCULATEQUADRANTOFFSET_OFFSET UNITYSDK_OFFSET(0x1CECB040)
#define NAPLEVELSTATECHANGEUV_CANAPPLYUVCHANGE_OFFSET UNITYSDK_OFFSET(0x1CECAD80)
#define NAPLEVELSTATECHANGEUV_CLAMPTOMOVERANGE_OFFSET UNITYSDK_OFFSET(0x1CECC920)
#define NAPLEVELSTATECHANGEUV_CLAMPTOSCALERANGE_OFFSET UNITYSDK_OFFSET(0x1CECD420)
#define NAPLEVELSTATECHANGEUV_CONTAINSSTATEMATERIAL_OFFSET UNITYSDK_OFFSET(0x1CECD230)
#define NAPLEVELSTATECHANGEUV_ENSUREINITIALIZED_OFFSET UNITYSDK_OFFSET(0x1CECA5F0)
#define NAPLEVELSTATECHANGEUV_ENSUREPAGEDOFFSETINITIALIZED_OFFSET UNITYSDK_OFFSET(0x1CECC890)
#define NAPLEVELSTATECHANGEUV_ENSURESCALEINITIALIZED_OFFSET UNITYSDK_OFFSET(0x1CECCE00)
#define NAPLEVELSTATECHANGEUV_GETMOVERANGEMAX_OFFSET UNITYSDK_OFFSET(0x1CECD910)
#define NAPLEVELSTATECHANGEUV_GETMOVERANGEMIN_OFFSET UNITYSDK_OFFSET(0x1CECCDB0)
#define NAPLEVELSTATECHANGEUV_GETSCALEAXISVALUE_OFFSET UNITYSDK_OFFSET(0x1CECD040)
#define NAPLEVELSTATECHANGEUV_GETSCALERANGEMAX_OFFSET UNITYSDK_OFFSET(0x1CECDA00)
#define NAPLEVELSTATECHANGEUV_GETSCALERANGEMIN_OFFSET UNITYSDK_OFFSET(0x1CECD9B0)
#define NAPLEVELSTATECHANGEUV_GETUVOFFSETPROPERTYID_OFFSET UNITYSDK_OFFSET(0x1CECD1A0)
#define NAPLEVELSTATECHANGEUV_GET_ISNOTPAGEDORSCALEMODE_OFFSET UNITYSDK_OFFSET(0x1CECA550)
#define NAPLEVELSTATECHANGEUV_GET_ISPAGEDMODE_OFFSET UNITYSDK_OFFSET(0x1CECA490)
#define NAPLEVELSTATECHANGEUV_GET_ISPAGEDORSCALEMODE_OFFSET UNITYSDK_OFFSET(0x1CECA500)
#define NAPLEVELSTATECHANGEUV_GET_ISSCALEMODE_OFFSET UNITYSDK_OFFSET(0x1CECA4A0)
#define NAPLEVELSTATECHANGEUV_GET_ISUVMODE_OFFSET UNITYSDK_OFFSET(0x1CECA4B0)
#define NAPLEVELSTATECHANGEUV_ISDISTANCEKEY_OFFSET UNITYSDK_OFFSET(0x1CECDCF0)
#define NAPLEVELSTATECHANGEUV_ISNEGATIVESCALEAXIS_OFFSET UNITYSDK_OFFSET(0x1CECD960)
#define NAPLEVELSTATECHANGEUV_ISTIMEKEY_OFFSET UNITYSDK_OFFSET(0x1CECDDC0)
#define NAPLEVELSTATECHANGEUV_MOVEBYDISTANCEANDTIME_OFFSET UNITYSDK_OFFSET(0x1CECB900)
#define NAPLEVELSTATECHANGEUV_MOVEBYNORMALIZEDDISTANCEANDTIME_OFFSET UNITYSDK_OFFSET(0x1CECB430)
#define NAPLEVELSTATECHANGEUV_MOVESCALEBYNORMALIZEDVALUEANDTIME_OFFSET UNITYSDK_OFFSET(0x1CECBA40)
#define NAPLEVELSTATECHANGEUV_MOVESCALETOVALUEWITHTIME_OFFSET UNITYSDK_OFFSET(0x1CECBDA0)
#define NAPLEVELSTATECHANGEUV_MOVETOOFFSETWITHTIME_OFFSET UNITYSDK_OFFSET(0x1CECB5F0)
#define NAPLEVELSTATECHANGEUV_NORMALIZEDDISTANCETOOFFSET_OFFSET UNITYSDK_OFFSET(0x1CECB4E0)
#define NAPLEVELSTATECHANGEUV_NORMALIZEDVALUETOSCALE_OFFSET UNITYSDK_OFFSET(0x1CECBC00)
#define NAPLEVELSTATECHANGEUV_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1CECA910)
#define NAPLEVELSTATECHANGEUV_ONSTATECHANGE_1_OFFSET UNITYSDK_OFFSET(0x1CECDE90)
#define NAPLEVELSTATECHANGEUV_ONSTATECHANGE_OFFSET UNITYSDK_OFFSET(0x1CECAA70)
#define NAPLEVELSTATECHANGEUV_RESETUVOFFSET_OFFSET UNITYSDK_OFFSET(0x1CECBFD0)
#define NAPLEVELSTATECHANGEUV_SETPAGEDSTATE01_OFFSET UNITYSDK_OFFSET(0x1CECB980)
#define NAPLEVELSTATECHANGEUV_SMOOTHVALUEROUTINE_OFFSET UNITYSDK_OFFSET(0x1CECCC20)
#define NAPLEVELSTATECHANGEUV_SNAPOFFSETTOSTEP_OFFSET UNITYSDK_OFFSET(0x1CECCA20)
#define NAPLEVELSTATECHANGEUV_STARTSMOOTHVALUETWEEN_OFFSET UNITYSDK_OFFSET(0x1CECD770)
#define NAPLEVELSTATECHANGEUV_STEPMOVEROUTINE_OFFSET UNITYSDK_OFFSET(0x1CECCD00)
#define NAPLEVELSTATECHANGEUV_STOPEDITORSMOOTHVALUETWEEN_OFFSET UNITYSDK_OFFSET(0x1CECD0C0)
#define NAPLEVELSTATECHANGEUV_STOPMOVECOROUTINE_OFFSET UNITYSDK_OFFSET(0x1CECA960)
#define NAPLEVELSTATECHANGEUV_TRYAPPLYPAGEDSTRINGCOMMAND_OFFSET UNITYSDK_OFFSET(0x1CECC830)
#define NAPLEVELSTATECHANGEUV_TRYAPPLYSTATESTRINGCOMMAND_OFFSET UNITYSDK_OFFSET(0x1CECC050)
#define NAPLEVELSTATECHANGEUV_TRYGETSHAREDMATERIALS_OFFSET UNITYSDK_OFFSET(0x1CECD100)
#define NAPLEVELSTATECHANGEUV_TRYPARSEFLOAT_OFFSET UNITYSDK_OFFSET(0x1CECDA50)
#define NAPLEVELSTATECHANGEUV_TRYPARSEKEYVALUEFLOAT_OFFSET UNITYSDK_OFFSET(0x1CECDB10)
#define NAPLEVELSTATECHANGEUV_TRYPARSENORMALIZEDVALUECOMMAND_OFFSET UNITYSDK_OFFSET(0x1CECC160)
#define NAPLEVELSTATECHANGEUV__CTOR_OFFSET UNITYSDK_OFFSET(0x1CECDF20)

inline static constexpr unsigned int NapLevelStateChangeUV_TypeDefinitionIndex = 26623;

class NapLevelStateChangeUV : public ::INapLevel_CommonStateChangeEffect
{
public:
	// static const ::System::String* DefaultUvOffsetProperty; // 0x0
	::UnityEngine::Renderer* _targetRenderer; // 0x48
	::Il2CppArray<::UnityEngine::Material*>* _stateMaterials; // 0x50
	::System::String* _uvOffsetProperty; // 0x58
	::NapLevelStateChangeUV_UvSwitchMode _switchMode; // 0x60
	::NapLevelStateChangeUV_PagedAxis _pagedAxis; // 0x64
	::NapLevelStateChangeUV_PagedMoveMode _pagedMoveMode; // 0x68
	::System::Single _stepDistance; // 0x6C
	::System::Single _moveDuration; // 0x70
	::UnityEngine::Vector2 _moveRange; // 0x74
	::System::Byte _padding0[0x4];
	::UnityEngine::Transform* _scaleTarget; // 0x80
	::NapLevelStateChangeUV_ScaleAxis _scaleAxis; // 0x88
	::System::Single _scaleDuration; // 0x8C
	::UnityEngine::Vector2 _scaleRange; // 0x90
	::UnityEngine::MaterialPropertyBlock* _propertyBlock; // 0x98
	::System::Collections::Generic::List_1<::UnityEngine::Material*>* _sharedMaterialsCache; // 0xA0
	::UnityEngine::Coroutine* _moveCoroutine; // 0xA8
	::System::Single _currentPagedOffset; // 0xB0
	::System::Boolean _pagedOffsetInitialized; // 0xB4
	::System::Byte _padding1[0x3];
	::System::Single _currentScale; // 0xB8
	::System::Boolean _scaleInitialized; // 0xBC
	::System::Boolean _hasWarnedMissingRenderer; // 0xBD
	::System::Boolean _hasWarnedMissingStateMaterials; // 0xBE

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPLEVELSTATECHANGEUV__CTOR_OFFSET))(this);
	}

	::System::Boolean get_IsPagedMode()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPLEVELSTATECHANGEUV_GET_ISPAGEDMODE_OFFSET))(this);
	}

	::System::Boolean get_IsScaleMode()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPLEVELSTATECHANGEUV_GET_ISSCALEMODE_OFFSET))(this);
	}

	::System::Boolean get_IsUvMode()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPLEVELSTATECHANGEUV_GET_ISUVMODE_OFFSET))(this);
	}

	::System::Boolean get_IsPagedOrScaleMode()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPLEVELSTATECHANGEUV_GET_ISPAGEDORSCALEMODE_OFFSET))(this);
	}

	::System::Boolean get_IsNotPagedOrScaleMode()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPLEVELSTATECHANGEUV_GET_ISNOTPAGEDORSCALEMODE_OFFSET))(this);
	}

	::System::Void Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPLEVELSTATECHANGEUV_AWAKE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPLEVELSTATECHANGEUV_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnStateChange(::System::Int32 from, ::System::Int32 to)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NAPLEVELSTATECHANGEUV_ONSTATECHANGE_OFFSET))(this, from, to);
	}

	::System::Void ApplyState(::System::Int32 state)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAPLEVELSTATECHANGEUV_APPLYSTATE_OFFSET))(this, state);
	}

	::System::Void MoveByNormalizedDistanceAndTime(::System::Single normalizedDistance01, ::System::Single moveTime)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NAPLEVELSTATECHANGEUV_MOVEBYNORMALIZEDDISTANCEANDTIME_OFFSET))(this, normalizedDistance01, moveTime);
	}

	::System::Void MoveByDistanceAndTime(::System::Single moveDistance, ::System::Single moveTime)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NAPLEVELSTATECHANGEUV_MOVEBYDISTANCEANDTIME_OFFSET))(this, moveDistance, moveTime);
	}

	::System::Void SetPagedState01(::System::Single normalizedState)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NAPLEVELSTATECHANGEUV_SETPAGEDSTATE01_OFFSET))(this, normalizedState);
	}

	::System::Void MoveScaleByNormalizedValueAndTime(::System::Single normalizedValue01, ::System::Single moveTime)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NAPLEVELSTATECHANGEUV_MOVESCALEBYNORMALIZEDVALUEANDTIME_OFFSET))(this, normalizedValue01, moveTime);
	}

	::System::Void ResetUvOffset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPLEVELSTATECHANGEUV_RESETUVOFFSET_OFFSET))(this);
	}

	::System::Boolean TryApplyStateStringCommand(::System::String* command)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NAPLEVELSTATECHANGEUV_TRYAPPLYSTATESTRINGCOMMAND_OFFSET))(this, command);
	}

	::System::Boolean TryApplyPagedStringCommand(::System::String* command)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NAPLEVELSTATECHANGEUV_TRYAPPLYPAGEDSTRINGCOMMAND_OFFSET))(this, command);
	}

	::System::Void MoveToOffsetWithTime(::System::Single targetOffset, ::System::Single moveTime)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NAPLEVELSTATECHANGEUV_MOVETOOFFSETWITHTIME_OFFSET))(this, targetOffset, moveTime);
	}

	::System::Void ApplyPagedStateNormalized(::System::Single normalizedState)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NAPLEVELSTATECHANGEUV_APPLYPAGEDSTATENORMALIZED_OFFSET))(this, normalizedState);
	}

	::System::Void ApplyScaleStateNormalized(::System::Single normalizedState)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NAPLEVELSTATECHANGEUV_APPLYSCALESTATENORMALIZED_OFFSET))(this, normalizedState);
	}

	::System::Void EnsureInitialized()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPLEVELSTATECHANGEUV_ENSUREINITIALIZED_OFFSET))(this);
	}

	::System::Void EnsurePagedOffsetInitialized()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPLEVELSTATECHANGEUV_ENSUREPAGEDOFFSETINITIALIZED_OFFSET))(this);
	}

	::System::Void EnsureScaleInitialized()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPLEVELSTATECHANGEUV_ENSURESCALEINITIALIZED_OFFSET))(this);
	}

	::System::Void StopMoveCoroutine()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPLEVELSTATECHANGEUV_STOPMOVECOROUTINE_OFFSET))(this);
	}

	::System::Boolean CanApplyUvChange()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPLEVELSTATECHANGEUV_CANAPPLYUVCHANGE_OFFSET))(this);
	}

	::System::Boolean TryGetSharedMaterials()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPLEVELSTATECHANGEUV_TRYGETSHAREDMATERIALS_OFFSET))(this);
	}

	::System::Void ApplyOffsetToRenderer(::System::Single offsetU, ::System::Single offsetV)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NAPLEVELSTATECHANGEUV_APPLYOFFSETTORENDERER_OFFSET))(this, offsetU, offsetV);
	}

	::System::Void ApplyPagedOffset(::System::Single pagedOffset)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NAPLEVELSTATECHANGEUV_APPLYPAGEDOFFSET_OFFSET))(this, pagedOffset);
	}

	::System::Collections::IEnumerator* StepMoveRoutine(::System::Single targetOffset, ::System::Single moveTime)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NAPLEVELSTATECHANGEUV_STEPMOVEROUTINE_OFFSET))(this, targetOffset, moveTime);
	}

	::System::Void MoveScaleToValueWithTime(::System::Single targetScale, ::System::Single moveTime)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NAPLEVELSTATECHANGEUV_MOVESCALETOVALUEWITHTIME_OFFSET))(this, targetScale, moveTime);
	}

	::UnityEngine::Coroutine* StartSmoothValueTween(::System::Single startValue, ::System::Single targetValue, ::System::Single moveTime, ::System::Action_1<::System::Single>* applyValue)
	{
		return ((::UnityEngine::Coroutine*(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + NAPLEVELSTATECHANGEUV_STARTSMOOTHVALUETWEEN_OFFSET))(this, startValue, targetValue, moveTime, applyValue);
	}

	::System::Collections::IEnumerator* SmoothValueRoutine(::System::Single startValue, ::System::Single targetValue, ::System::Single moveTime, ::System::Action_1<::System::Single>* applyValue)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + NAPLEVELSTATECHANGEUV_SMOOTHVALUEROUTINE_OFFSET))(this, startValue, targetValue, moveTime, applyValue);
	}

	::System::Void StopEditorSmoothValueTween()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPLEVELSTATECHANGEUV_STOPEDITORSMOOTHVALUETWEEN_OFFSET))(this);
	}

	::System::Void ApplyScale(::System::Single scaleValue)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NAPLEVELSTATECHANGEUV_APPLYSCALE_OFFSET))(this, scaleValue);
	}

	::System::Single SnapOffsetToStep(::System::Single offset)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NAPLEVELSTATECHANGEUV_SNAPOFFSETTOSTEP_OFFSET))(this, offset);
	}

	::System::Single NormalizedDistanceToOffset(::System::Single normalizedDistance)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NAPLEVELSTATECHANGEUV_NORMALIZEDDISTANCETOOFFSET_OFFSET))(this, normalizedDistance);
	}

	::System::Single NormalizedValueToScale(::System::Single normalizedValue)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NAPLEVELSTATECHANGEUV_NORMALIZEDVALUETOSCALE_OFFSET))(this, normalizedValue);
	}

	static ::System::Boolean TryParseFloat(::System::String* value, ::System::Single& result)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::Single&))((::PBYTE)hIl2Cpp + NAPLEVELSTATECHANGEUV_TRYPARSEFLOAT_OFFSET))(value, result);
	}

	static ::System::Boolean TryParseNormalizedValueCommand(::System::String* command, ::System::Single& normalizedDistance, ::System::Single& moveTime, ::System::Boolean& hasMoveTime)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::Single&, ::System::Single&, ::System::Boolean&))((::PBYTE)hIl2Cpp + NAPLEVELSTATECHANGEUV_TRYPARSENORMALIZEDVALUECOMMAND_OFFSET))(command, normalizedDistance, moveTime, hasMoveTime);
	}

	static ::System::Boolean TryParseKeyValueFloat(::System::String* part, ::System::String*& key, ::System::Single& value)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::String*&, ::System::Single&))((::PBYTE)hIl2Cpp + NAPLEVELSTATECHANGEUV_TRYPARSEKEYVALUEFLOAT_OFFSET))(part, key, value);
	}

	static ::System::Boolean IsDistanceKey(::System::String* key)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + NAPLEVELSTATECHANGEUV_ISDISTANCEKEY_OFFSET))(key);
	}

	static ::System::Boolean IsTimeKey(::System::String* key)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + NAPLEVELSTATECHANGEUV_ISTIMEKEY_OFFSET))(key);
	}

	::System::Single ClampToMoveRange(::System::Single value)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NAPLEVELSTATECHANGEUV_CLAMPTOMOVERANGE_OFFSET))(this, value);
	}

	::System::Single GetMoveRangeMin()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPLEVELSTATECHANGEUV_GETMOVERANGEMIN_OFFSET))(this);
	}

	::System::Single GetMoveRangeMax()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPLEVELSTATECHANGEUV_GETMOVERANGEMAX_OFFSET))(this);
	}

	::System::Single ClampToScaleRange(::System::Single value)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NAPLEVELSTATECHANGEUV_CLAMPTOSCALERANGE_OFFSET))(this, value);
	}

	::System::Single GetScaleRangeMin()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPLEVELSTATECHANGEUV_GETSCALERANGEMIN_OFFSET))(this);
	}

	::System::Single GetScaleRangeMax()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPLEVELSTATECHANGEUV_GETSCALERANGEMAX_OFFSET))(this);
	}

	::System::Single GetScaleAxisValue(::UnityEngine::Vector3 localScale)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NAPLEVELSTATECHANGEUV_GETSCALEAXISVALUE_OFFSET))(this, localScale);
	}

	::System::Boolean IsNegativeScaleAxis()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPLEVELSTATECHANGEUV_ISNEGATIVESCALEAXIS_OFFSET))(this);
	}

	::System::Int32 GetUvOffsetPropertyId()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPLEVELSTATECHANGEUV_GETUVOFFSETPROPERTYID_OFFSET))(this);
	}

	static ::UnityEngine::Vector2 CalculateQuadrantOffset(::System::Int32 state)
	{
		return ((::UnityEngine::Vector2(*)(::System::Int32))((::PBYTE)hIl2Cpp + NAPLEVELSTATECHANGEUV_CALCULATEQUADRANTOFFSET_OFFSET))(state);
	}

	::System::Boolean ContainsStateMaterial(::UnityEngine::Material* material)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + NAPLEVELSTATECHANGEUV_CONTAINSSTATEMATERIAL_OFFSET))(this, material);
	}

	::System::Void OnStateChange_1(::System::String* from, ::System::String* to)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + NAPLEVELSTATECHANGEUV_ONSTATECHANGE_1_OFFSET))(this, from, to);
	}
};
