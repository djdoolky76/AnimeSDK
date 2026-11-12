#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NADABFJHEHM.h"
namespace RPG::Client { class AnniversaryCollectionPanelData; }

#define NKNHLLEFDOM_CTOR_OFFSET UNITYSDK_OFFSET(0xC523C00)
#define NKNHLLEFDOM_MNFDJHCGKNE_OFFSET UNITYSDK_OFFSET(0xC523C10)

inline static constexpr unsigned int NKNHLLEFDOM_TypeDefinitionIndex = 63806;

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
