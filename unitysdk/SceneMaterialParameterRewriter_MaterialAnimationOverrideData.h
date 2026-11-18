#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SCENEMATERIALPARAMETERREWRITER_MATERIALANIMATIONOVERRIDEDATA_APPLY_OFFSET UNITYSDK_OFFSET(0x1E156850)
#define SCENEMATERIALPARAMETERREWRITER_MATERIALANIMATIONOVERRIDEDATA_CLEARMPB_OFFSET UNITYSDK_OFFSET(0x1E1568F0)
#define SCENEMATERIALPARAMETERREWRITER_MATERIALANIMATIONOVERRIDEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1E156990)

inline static constexpr unsigned int SceneMaterialParameterRewriter_MaterialAnimationOverrideData_TypeDefinitionIndex = 26794;

class SceneMaterialParameterRewriter_MaterialAnimationOverrideData : public ::System::Object
{
public:
	::Il2CppArray<::System::Object*>* renderList; // 0x10
	::Il2CppArray<::System::Object*>* propertyList; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENEMATERIALPARAMETERREWRITER_MATERIALANIMATIONOVERRIDEDATA__CTOR_OFFSET))(this);
	}

	::System::Void Apply()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENEMATERIALPARAMETERREWRITER_MATERIALANIMATIONOVERRIDEDATA_APPLY_OFFSET))(this);
	}

	::System::Void ClearMPB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENEMATERIALPARAMETERREWRITER_MATERIALANIMATIONOVERRIDEDATA_CLEARMPB_OFFSET))(this);
	}
};
