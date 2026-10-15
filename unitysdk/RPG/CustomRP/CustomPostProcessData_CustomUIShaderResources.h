#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace UnityEngine { class Shader; }

#define RPG_CUSTOMRP_CUSTOMPOSTPROCESSDATA_CUSTOMUISHADERRESOURCES_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC23150)

namespace RPG::CustomRP
{
	class CustomPostProcessData_CustomUIShaderResources : public ::System::Object
	{
	public:
		::UnityEngine::Shader* uber; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CUSTOMPOSTPROCESSDATA_CUSTOMUISHADERRESOURCES_CTOR_OFFSET))(this);
		}

	};
}
