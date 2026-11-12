#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JEDNHJILJKL;
namespace RPG::Client { class ActivityRewardCountCollection; }

#define AKPCNJCFFCI_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x163C5F60)
#define AKPCNJCFFCI_CTOR_OFFSET UNITYSDK_OFFSET(0x163C5F10)

inline static constexpr unsigned int AKPCNJCFFCI_TypeDefinitionIndex = 63195;

	class AKPCNJCFFCI : public ::System::Object
	{
	public:
		::RPG::Client::ActivityRewardCountCollection* JOBLGLDNJNL; // 0x10
		::System::Void _ctor(::RPG::Client::ActivityRewardCountCollection* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityRewardCountCollection*))((::PBYTE)hIl2Cpp + AKPCNJCFFCI_CTOR_OFFSET))(this, a1);
		}

		::JEDNHJILJKL* BPLPBPMEODA(::System::UInt32 a1)
		{
			return ((::JEDNHJILJKL*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKPCNJCFFCI_BPLPBPMEODA_OFFSET))(this, a1);
		}

	};
