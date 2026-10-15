#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HKHAKEGOLDK.h"
#include "unitysdk/RPG/Client/SequentialPanelContainer/EdgeDirection.h"
#include "unitysdk/System/ValueTuple.h"

#define NPOHGAAMCPB_AACLJANIILC_OFFSET UNITYSDK_OFFSET(0xBD12660)
#define NPOHGAAMCPB_CTOR_OFFSET UNITYSDK_OFFSET(0xBD126E0)

inline static constexpr unsigned int NPOHGAAMCPB_TypeDefinitionIndex = 74762;

	class NPOHGAAMCPB : public ::HKHAKEGOLDK
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPOHGAAMCPB_CTOR_OFFSET))(this);
		}

		::System::ValueTuple AACLJANIILC(::RPG::Client::SequentialPanelContainer::EdgeDirection a1, ::RPG::Client::SequentialPanelContainer::EdgeDirection a2)
		{
			return ((::System::ValueTuple(*)(::PVOID, ::RPG::Client::SequentialPanelContainer::EdgeDirection, ::RPG::Client::SequentialPanelContainer::EdgeDirection))((::PBYTE)hIl2Cpp + NPOHGAAMCPB_AACLJANIILC_OFFSET))(this, a1, a2);
		}

	};
