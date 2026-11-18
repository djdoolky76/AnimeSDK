#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::HollowChessboard { class HollowChessboardEffectEventBase; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_HOLLOWCHESSBOARDPARTICLEMODULECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x190B5020)

namespace MoleMole::Config
{
	inline static constexpr unsigned int HollowChessboardParticleModuleConfig_TypeDefinitionIndex = 72113;

	class HollowChessboardParticleModuleConfig : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowChessboardEffectEventBase*>* EffectEvents; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HOLLOWCHESSBOARDPARTICLEMODULECONFIG__CTOR_OFFSET))(this);
		}
	};
}
