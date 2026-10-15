#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FixStrecthDimension.h"
#include "unitysdk/RPG/Client/ParameterCondition.h"
#include "unitysdk/RPG/Client/ParticleInitialData.h"
#include "unitysdk/RPG/Client/StretchMode.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class String; }

#define RPG_CLIENT_FIXSTRETCHPARTICLE_CTOR_OFFSET UNITYSDK_OFFSET(0xD03DA90)
#define RPG_CLIENT_FIXSTRETCHPARTICLE_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0xD03DA40)
#define RPG_CLIENT_FIXSTRETCHPARTICLE_LAILPBJOEIN_OFFSET UNITYSDK_OFFSET(0xD03DA30)

namespace RPG::Client
{
	class FixStretchParticle
	{
	public:
		::RPG::Client::FixStrecthDimension Dimension; // 0x30
		::RPG::Client::StretchMode CurrentStretchMode; // 0x34
		::RPG::Client::StretchMode CurrentStretchMode2; // 0x38
		::UnityEngine::Vector3 InitialParticleScale; // 0x3C
		::RPG::Client::ParticleInitialData _ParticleInitialData; // 0x48
		::RPG::Client::ParameterCondition ParameterConditions; // 0x70
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIXSTRETCHPARTICLE_CTOR_OFFSET))(this);
		}

		::System::Boolean LAILPBJOEIN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIXSTRETCHPARTICLE_LAILPBJOEIN_OFFSET))(this);
		}

		::System::String* GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIXSTRETCHPARTICLE_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}

	};
}
