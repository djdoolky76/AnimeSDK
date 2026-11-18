#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LOEOKOBPNBA.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class MorphBallPhysicsMiddleware; }

#define FFDGBHCPJIE_GIDLPKDLECH_OFFSET UNITYSDK_OFFSET(0x140EDEB0)
#define FFDGBHCPJIE_JLEGHNGEBOG_OFFSET UNITYSDK_OFFSET(0x140EDD90)
#define FFDGBHCPJIE_OKEDOCPENDA_OFFSET UNITYSDK_OFFSET(0x140EDF30)
#define FFDGBHCPJIE__CTOR_OFFSET UNITYSDK_OFFSET(0x140EDFB0)

inline static constexpr unsigned int FFDGBHCPJIE_TypeDefinitionIndex = 47949;

class FFDGBHCPJIE : public ::LOEOKOBPNBA
{
public:
	::MoleMole::MorphBallPhysicsMiddleware* KELKELDMLJO; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFDGBHCPJIE__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector3 JLEGHNGEBOG()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + FFDGBHCPJIE_JLEGHNGEBOG_OFFSET))(this);
	}

	::UnityEngine::Vector3 GIDLPKDLECH()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + FFDGBHCPJIE_GIDLPKDLECH_OFFSET))(this);
	}

	::UnityEngine::Vector3 OKEDOCPENDA()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + FFDGBHCPJIE_OKEDOCPENDA_OFFSET))(this);
	}
};
