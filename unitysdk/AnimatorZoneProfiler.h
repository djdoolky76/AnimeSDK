#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/AnimatorZoneProfiler_ScopeDisposable.h"

namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define ANIMATORZONEPROFILER_BEGIN_OFFSET UNITYSDK_OFFSET(0x12675CA0)
#define ANIMATORZONEPROFILER_CLEAR_OFFSET UNITYSDK_OFFSET(0x12676990)
#define ANIMATORZONEPROFILER_END_OFFSET UNITYSDK_OFFSET(0x12676230)
#define ANIMATORZONEPROFILER_ENSURECAPACITY_OFFSET UNITYSDK_OFFSET(0x12675980)
#define ANIMATORZONEPROFILER_GETSHORTPREFABNAME_OFFSET UNITYSDK_OFFSET(0x126767D0)
#define ANIMATORZONEPROFILER_GET_USEANIMATORZONEPROFILER_OFFSET UNITYSDK_OFFSET(0x12676B20)
#define ANIMATORZONEPROFILER_SAVEDATATOFILE_OFFSET UNITYSDK_OFFSET(0x12676BE0)
#define ANIMATORZONEPROFILER_SCOPE_OFFSET UNITYSDK_OFFSET(0x12676880)
#define ANIMATORZONEPROFILER_SET_USEANIMATORZONEPROFILER_OFFSET UNITYSDK_OFFSET(0x12676B80)
#define ANIMATORZONEPROFILER__CCTOR_OFFSET UNITYSDK_OFFSET(0x12677E10)

inline static constexpr unsigned int AnimatorZoneProfiler_TypeDefinitionIndex = 38396;

class AnimatorZoneProfiler : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Object*>** StaticGet__rows()
	{
		return (::Il2CppArray<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneProfiler_TypeDefinitionIndex)->GetStaticField(0x30B30);
	}
	static ::System::Object** StaticGet__rowsLock()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneProfiler_TypeDefinitionIndex)->GetStaticField(0x30B38);
	}
	static ::System::Single* StaticGet_SkipSmallCostThreshold()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneProfiler_TypeDefinitionIndex)->GetStaticField(0xA4E0);
	}
	static ::System::Int32* StaticGet__rowCount()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneProfiler_TypeDefinitionIndex)->GetStaticField(0xA4E4);
	}
	static ::System::Boolean* StaticGet_AutoSaveWhenReplay()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneProfiler_TypeDefinitionIndex)->GetStaticField(0xA4E8);
	}
	static ::System::Boolean* StaticGet__useAnimatorZoneProfiler()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneProfiler_TypeDefinitionIndex)->GetStaticField(0xA4E9);
	}
	static ::System::Text::StringBuilder** StaticGet__scratch()
	{
		return (::System::Text::StringBuilder**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneProfiler_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::Il2CppArray<::System::Object*>** StaticGet__stackArr()
	{
		return (::Il2CppArray<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneProfiler_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Int32* StaticGet__stackTop()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneProfiler_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ANIMATORZONEPROFILER__CCTOR_OFFSET))();
	}

	static ::System::Void EnsureCapacity(::System::Int32 rowCapacity, ::System::Int32 stackCapacity)
	{
		return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ANIMATORZONEPROFILER_ENSURECAPACITY_OFFSET))(rowCapacity, stackCapacity);
	}

	static ::System::Void Begin(::System::String* functionName, ::System::UInt32 entityID, ::System::String* animatorName)
	{
		return ((::System::Void(*)(::System::String*, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + ANIMATORZONEPROFILER_BEGIN_OFFSET))(functionName, entityID, animatorName);
	}

	static ::System::Void End()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ANIMATORZONEPROFILER_END_OFFSET))();
	}

	static ::System::String* GetShortPrefabName(::System::String* path)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + ANIMATORZONEPROFILER_GETSHORTPREFABNAME_OFFSET))(path);
	}

	static ::AnimatorZoneProfiler_ScopeDisposable Scope(::System::String* functionName, ::System::UInt32 entityID, ::System::String* animatorName)
	{
		return ((::AnimatorZoneProfiler_ScopeDisposable(*)(::System::String*, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + ANIMATORZONEPROFILER_SCOPE_OFFSET))(functionName, entityID, animatorName);
	}

	static ::System::Void Clear()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ANIMATORZONEPROFILER_CLEAR_OFFSET))();
	}

	static ::System::Boolean get_UseAnimatorZoneProfiler()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ANIMATORZONEPROFILER_GET_USEANIMATORZONEPROFILER_OFFSET))();
	}

	static ::System::Void set_UseAnimatorZoneProfiler(::System::Boolean value)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + ANIMATORZONEPROFILER_SET_USEANIMATORZONEPROFILER_OFFSET))(value);
	}

	static ::System::String* SaveDataToFile(::System::String* filePrefix)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + ANIMATORZONEPROFILER_SAVEDATATOFILE_OFFSET))(filePrefix);
	}
};
