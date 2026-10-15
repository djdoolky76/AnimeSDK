#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NADABFJHEHM.h"
namespace RPG::Client { class AnniversaryCollectionPanelData; }

#define NKNHLLEFDOM_CTOR_OFFSET UNITYSDK_OFFSET(0xBC3F520)
#define NKNHLLEFDOM_MNFDJHCGKNE_OFFSET UNITYSDK_OFFSET(0xBC3F530)

inline static constexpr unsigned int NKNHLLEFDOM_TypeDefinitionIndex = 62393;

	class NKNHLLEFDOM : public ::NADABFJHEHM
	{
	public:
		::System::Void _ctor(::RPG::Client::AnniversaryCollectionPanelData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AnniversaryCollectionPanelData*))((::PBYTE)hIl2Cpp + NKNHLLEFDOM_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean MNFDJHCGKNE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NKNHLLEFDOM_MNFDJHCGKNE_OFFSET))(this);
		}

	};
