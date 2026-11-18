#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MOLEMOLE_MONOMAINCITYNPCMOVEINSPECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x135BDDB0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoMainCityNpcMoveInspector_TypeDefinitionIndex = 52403;

	class MonoMainCityNpcMoveInspector : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMAINCITYNPCMOVEINSPECTOR__CTOR_OFFSET))(this);
		}
	};
}
