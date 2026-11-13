#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define HIPPLENBUILDERSTATUSASSET_STATGRADECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1AF59820)

inline static constexpr unsigned int HipplenBuilderStatusAsset_StatGradeConfig_TypeDefinitionIndex = 48259;

	class HipplenBuilderStatusAsset_StatGradeConfig : public ::System::Object
	{
	public:
		::System::String* GradeName; // 0x10
		::System::Int32 GadeReqMin; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERSTATUSASSET_STATGRADECONFIG_CTOR_OFFSET))(this);
		}

	};
