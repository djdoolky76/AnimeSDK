#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/RTIDHandle.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define RPG_CUSTOMRP_RPGDEPTHOFFIELD_COCDESCRIPTOR_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDEB0E0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int RPGDepthOfField_CoCDescriptor_TypeDefinitionIndex = 38732;

	class RPGDepthOfField_CoCDescriptor : public ::System::Object
	{
	public:
		::RPG::CustomRP::RTIDHandle rtID; // 0x10
		::UnityEngine::Vector4 RenderTargetSize; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGDEPTHOFFIELD_COCDESCRIPTOR_CTOR_OFFSET))(this);
		}

	};
}
