#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
class CLFIGBPHLHI;

#define RPG_CLIENT_MOTIONS_MONOMONTIONINSPECTOR_CTOR_OFFSET UNITYSDK_OFFSET(0xD8B6DC0)

namespace RPG::Client::Motions
{
	inline static constexpr unsigned int MonoMontionInspector_TypeDefinitionIndex = 73491;

	class MonoMontionInspector : public ::UnityEngine::MonoBehaviour
	{
	public:
		::CLFIGBPHLHI* Motion; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOTIONS_MONOMONTIONINSPECTOR_CTOR_OFFSET))(this);
		}

	};
}
