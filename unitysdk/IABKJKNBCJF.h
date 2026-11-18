#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIHollowChessPieceParticle; }
namespace MoleMole::Config { class HollowChessboardParticleConfig; }
namespace System { class String; }

#define IABKJKNBCJF_SPAWN_OFFSET UNITYSDK_OFFSET(0xEA0EF20)
#define IABKJKNBCJF__CTOR_OFFSET UNITYSDK_OFFSET(0xEA0EFF0)

inline static constexpr unsigned int IABKJKNBCJF_TypeDefinitionIndex = 45922;

class IABKJKNBCJF : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IABKJKNBCJF__CTOR_OFFSET))(this);
	}

	::MoleMole::UIHollowChessPieceParticle* Spawn(::System::String* AGFILKMHDJG, ::MoleMole::Config::HollowChessboardParticleConfig* HDJPBBPKFNN)
	{
		return ((::MoleMole::UIHollowChessPieceParticle*(*)(::PVOID, ::System::String*, ::MoleMole::Config::HollowChessboardParticleConfig*))((::PBYTE)hIl2Cpp + IABKJKNBCJF_SPAWN_OFFSET))(this, AGFILKMHDJG, HDJPBBPKFNN);
	}
};
