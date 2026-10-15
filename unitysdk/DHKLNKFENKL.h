#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HKHAKEGOLDK.h"
#include "unitysdk/RPG/Client/SequentialPanelContainer/EdgeDirection.h"
#include "unitysdk/System/ValueTuple_2.h"

#define DHKLNKFENKL_AACLJANIILC_OFFSET UNITYSDK_OFFSET(0xEBE7420)
#define DHKLNKFENKL_CTOR_OFFSET UNITYSDK_OFFSET(0xEBE74A0)

inline static constexpr unsigned int DHKLNKFENKL_TypeDefinitionIndex = 74761;

	class DHKLNKFENKL : public ::HKHAKEGOLDK
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHKLNKFENKL_CTOR_OFFSET))(this);
		}

		::System::ValueTuple_2<::RPG::Client::SequentialPanelContainer::EdgeDirection, ::RPG::Client::SequentialPanelContainer::EdgeDirection> AACLJANIILC(::RPG::Client::SequentialPanelContainer::EdgeDirection a1, ::RPG::Client::SequentialPanelContainer::EdgeDirection a2)
		{
			return ((::System::ValueTuple_2<::RPG::Client::SequentialPanelContainer::EdgeDirection, ::RPG::Client::SequentialPanelContainer::EdgeDirection>(*)(::PVOID, ::RPG::Client::SequentialPanelContainer::EdgeDirection, ::RPG::Client::SequentialPanelContainer::EdgeDirection))((::PBYTE)hIl2Cpp + DHKLNKFENKL_AACLJANIILC_OFFSET))(this, a1, a2);
		}

	};
