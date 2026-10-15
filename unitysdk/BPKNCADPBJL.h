#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueMagicMountType.h"
#include "unitysdk/System/Object.h"

#define BPKNCADPBJL_KFDKJEKBFEM_OFFSET UNITYSDK_OFFSET(0x1D9CD700)
#define BPKNCADPBJL_LNMKGFCPNIF_OFFSET UNITYSDK_OFFSET(0x1D9CD710)

inline static constexpr unsigned int BPKNCADPBJL_TypeDefinitionIndex = 15476;

	class BPKNCADPBJL : public ::System::Object
	{
	public:
		static ::System::Boolean KFDKJEKBFEM(::RPG::GameCore::RogueMagicMountType a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::RogueMagicMountType))((::PBYTE)hIl2Cpp + BPKNCADPBJL_KFDKJEKBFEM_OFFSET))(a1);
		}

		static ::System::Boolean LNMKGFCPNIF(::RPG::GameCore::RogueMagicMountType a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::RogueMagicMountType))((::PBYTE)hIl2Cpp + BPKNCADPBJL_LNMKGFCPNIF_OFFSET))(a1);
		}

	};
