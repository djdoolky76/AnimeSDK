#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HKHAKEGOLDK.h"
#include "unitysdk/RPG/Client/SequentialPanelContainer/EdgeDirection.h"
#include "unitysdk/System/ValueTuple_2.h"

#define MABIMELMEFF_AACLJANIILC_OFFSET UNITYSDK_OFFSET(0xB837970)
#define MABIMELMEFF_CTOR_OFFSET UNITYSDK_OFFSET(0xB8379D0)

inline static constexpr unsigned int MABIMELMEFF_TypeDefinitionIndex = 74764;

	class MABIMELMEFF : public ::HKHAKEGOLDK
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MABIMELMEFF_CTOR_OFFSET))(this);
		}

		::System::ValueTuple_2<::RPG::Client::SequentialPanelContainer::EdgeDirection, ::RPG::Client::SequentialPanelContainer::EdgeDirection> AACLJANIILC(::RPG::Client::SequentialPanelContainer::EdgeDirection a1, ::RPG::Client::SequentialPanelContainer::EdgeDirection a2)
		{
			return ((::System::ValueTuple_2<::RPG::Client::SequentialPanelContainer::EdgeDirection, ::RPG::Client::SequentialPanelContainer::EdgeDirection>(*)(::PVOID, ::RPG::Client::SequentialPanelContainer::EdgeDirection, ::RPG::Client::SequentialPanelContainer::EdgeDirection))((::PBYTE)hIl2Cpp + MABIMELMEFF_AACLJANIILC_OFFSET))(this, a1, a2);
		}

	};
