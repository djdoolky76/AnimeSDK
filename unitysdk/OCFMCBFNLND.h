#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PKEJBHFMHCB.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelTeamType.h"
class HAJDFCHFBGN;
class KAKADGHNMFK;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define OCFMCBFNLND_BDNFOLGGEIP_OFFSET UNITYSDK_OFFSET(0xBD606B0)
#define OCFMCBFNLND_CTOR_OFFSET UNITYSDK_OFFSET(0xBD605B0)
#define OCFMCBFNLND_LEEPJIGMNDK_OFFSET UNITYSDK_OFFSET(0xBD60630)
#define OCFMCBFNLND_NODPBIKOJCF_OFFSET UNITYSDK_OFFSET(0xBD60780)

	class OCFMCBFNLND : public ::PKEJBHFMHCB
	{
	public:
		::HAJDFCHFBGN* LLGAFJEJLEA; // 0x28
		::System::Void _ctor(::HAJDFCHFBGN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HAJDFCHFBGN*))((::PBYTE)hIl2Cpp + OCFMCBFNLND_CTOR_OFFSET))(this, a1);
		}

		::KAKADGHNMFK* LEEPJIGMNDK()
		{
			return ((::KAKADGHNMFK*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCFMCBFNLND_LEEPJIGMNDK_OFFSET))(this);
		}

		::RPG::GameCore::ChimeraDuelTeamType BDNFOLGGEIP()
		{
			return ((::RPG::GameCore::ChimeraDuelTeamType(*)(::PVOID))((::PBYTE)hIl2Cpp + OCFMCBFNLND_BDNFOLGGEIP_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Int32>* NODPBIKOJCF(::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Int32>*(*)(::PVOID, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*))((::PBYTE)hIl2Cpp + OCFMCBFNLND_NODPBIKOJCF_OFFSET))(this, a1);
		}

	};
