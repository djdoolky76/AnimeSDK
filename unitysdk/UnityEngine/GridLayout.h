#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Behaviour.h"
#include "unitysdk/UnityEngine/EDF2B20DF77FE472.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define UNITYENGINE_GRIDLAYOUT_A58489D706D20EA7_OFFSET UNITYSDK_OFFSET(0x418E9D0)
#define UNITYENGINE_GRIDLAYOUT_B33A6CDD2984D9B5_OFFSET UNITYSDK_OFFSET(0x418EA30)
#define UNITYENGINE_GRIDLAYOUT_BDB5353FD0D0795C_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define UNITYENGINE_GRIDLAYOUT__CTOR_OFFSET UNITYSDK_OFFSET(0x40E9D70)

namespace UnityEngine
{
	inline static constexpr unsigned int GridLayout_TypeDefinitionIndex = 21542;

	class GridLayout : public ::UnityEngine::Behaviour
	{
	public:
		::System::Void BDB5353FD0D0795C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GRIDLAYOUT_BDB5353FD0D0795C_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GRIDLAYOUT__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 B33A6CDD2984D9B5(::UnityEngine::EDF2B20DF77FE472 F4917BD5FC3440BE)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::EDF2B20DF77FE472))((::PBYTE)hIl2Cpp + UNITYENGINE_GRIDLAYOUT_B33A6CDD2984D9B5_OFFSET))(this, F4917BD5FC3440BE);
		}

		::System::Void A58489D706D20EA7(::UnityEngine::EDF2B20DF77FE472& F4917BD5FC3440BE, ::UnityEngine::Vector3& FEC8DC0392823C8D)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EDF2B20DF77FE472&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_GRIDLAYOUT_A58489D706D20EA7_OFFSET))(this, F4917BD5FC3440BE, FEC8DC0392823C8D);
		}
	};
}
