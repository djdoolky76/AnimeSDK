#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::MiniGame::BangbooPartyGame { class MonoMarcelBlock; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PCNJIFBMMIG_KJBEJHALAGO__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFD6CE0)

inline static constexpr unsigned int PCNJIFBMMIG_KJBEJHALAGO_TypeDefinitionIndex = 92052;

class PCNJIFBMMIG_KJBEJHALAGO : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::MoleMole::MiniGame::BangbooPartyGame::MonoMarcelBlock*>* OKFALKNNGDL; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCNJIFBMMIG_KJBEJHALAGO__CTOR_OFFSET))(this);
	}
};
