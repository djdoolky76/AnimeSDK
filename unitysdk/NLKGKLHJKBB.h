#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelBuffType.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class ChimeraDuelEffectConfig; }
namespace System { class String; }

#define NLKGKLHJKBB_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB31DE0)

inline static constexpr unsigned int NLKGKLHJKBB_TypeDefinitionIndex = 42909;

	class NLKGKLHJKBB : public ::System::Object
	{
	public:
		::System::String* GFNAPNFFGPJ; // 0x10
		::RPG::GameCore::ChimeraDuelEffectConfig* HPBAMMEFDMK; // 0x18
		::System::Int32 GICAACBGEIP; // 0x20
		::System::UInt32 BOKJJKFCFME; // 0x24
		::RPG::GameCore::ChimeraDuelBuffType LMIODAHFGOA; // 0x28
		::System::Int32 IEHPFADHJFD; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLKGKLHJKBB_CTOR_OFFSET))(this);
		}

	};
