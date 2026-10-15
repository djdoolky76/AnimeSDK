#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
class CarFlowIntersectionRule;
namespace System { class String; }

#define CARFLOWINTERSECTIONRULEGROUP_CTOR_OFFSET UNITYSDK_OFFSET(0xDCE3AA0)
#define CARFLOWINTERSECTIONRULEGROUP_GDNHAHJPJDE_OFFSET UNITYSDK_OFFSET(0xDCE35C0)
#define CARFLOWINTERSECTIONRULEGROUP_GOMNJJFHDDB_OFFSET UNITYSDK_OFFSET(0xDCE3A10)

inline static constexpr unsigned int CarFlowIntersectionRuleGroup_TypeDefinitionIndex = 47069;

	class CarFlowIntersectionRuleGroup : public ::System::Object
	{
	public:
		::System::String* RuleName; // 0x10
		::Il2CppArray<::CarFlowIntersectionRule*>* Rules; // 0x18
		::System::Boolean Active; // 0x20
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector2 Duration; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CARFLOWINTERSECTIONRULEGROUP_CTOR_OFFSET))(this);
		}

		::System::Void GDNHAHJPJDE(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CARFLOWINTERSECTIONRULEGROUP_GDNHAHJPJDE_OFFSET))(this, a1);
		}

		::System::Void GOMNJJFHDDB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CARFLOWINTERSECTIONRULEGROUP_GOMNJJFHDDB_OFFSET))(this);
		}

	};
