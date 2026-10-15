#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/INLKLJJDHLN.h"
class FEIFOFMFBKN;
class NHJHGJEIFOE;
namespace RPG::GameCore { class FiveDimDestructiblePropConfig; }

#define ALODFAGDOLL_BPFPFNOFCNG_OFFSET UNITYSDK_OFFSET(0x1C89DE30)
#define ALODFAGDOLL_CLFDCJIHPKN_OFFSET UNITYSDK_OFFSET(0x1C89DCF0)
#define ALODFAGDOLL_DGHAGEDANAP_OFFSET UNITYSDK_OFFSET(0x1C89DA40)
#define ALODFAGDOLL_IPMMKKCFPJP_OFFSET UNITYSDK_OFFSET(0x1C89D950)
#define ALODFAGDOLL_LPHKBJGFKMD_OFFSET UNITYSDK_OFFSET(0x1C89DBB0)

inline static constexpr unsigned int ALODFAGDOLL_TypeDefinitionIndex = 42755;

	class ALODFAGDOLL : public ::System::Object
	{
	public:
		static ::NHJHGJEIFOE* IPMMKKCFPJP(::FEIFOFMFBKN* a1)
		{
			return ((::NHJHGJEIFOE*(*)(::FEIFOFMFBKN*))((::PBYTE)hIl2Cpp + ALODFAGDOLL_IPMMKKCFPJP_OFFSET))(a1);
		}

		static ::System::Boolean DGHAGEDANAP(::FEIFOFMFBKN* a1)
		{
			return ((::System::Boolean(*)(::FEIFOFMFBKN*))((::PBYTE)hIl2Cpp + ALODFAGDOLL_DGHAGEDANAP_OFFSET))(a1);
		}

		static ::System::Void LPHKBJGFKMD(::FEIFOFMFBKN* a1, ::RPG::GameCore::FiveDimDestructiblePropConfig* a2, ::INLKLJJDHLN a3)
		{
			return ((::System::Void(*)(::FEIFOFMFBKN*, ::RPG::GameCore::FiveDimDestructiblePropConfig*, ::INLKLJJDHLN))((::PBYTE)hIl2Cpp + ALODFAGDOLL_LPHKBJGFKMD_OFFSET))(a1, a2, a3);
		}

		static ::System::Void CLFDCJIHPKN(::FEIFOFMFBKN* a1, ::RPG::GameCore::FiveDimDestructiblePropConfig* a2, ::INLKLJJDHLN a3)
		{
			return ((::System::Void(*)(::FEIFOFMFBKN*, ::RPG::GameCore::FiveDimDestructiblePropConfig*, ::INLKLJJDHLN))((::PBYTE)hIl2Cpp + ALODFAGDOLL_CLFDCJIHPKN_OFFSET))(a1, a2, a3);
		}

		static ::System::Void BPFPFNOFCNG(::FEIFOFMFBKN* a1)
		{
			return ((::System::Void(*)(::FEIFOFMFBKN*))((::PBYTE)hIl2Cpp + ALODFAGDOLL_BPFPFNOFCNG_OFFSET))(a1);
		}

	};
