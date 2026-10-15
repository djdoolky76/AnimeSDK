#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ExpeditionBattleBuff; }

#define NEEDINKCEHF_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xBB5A010)
#define NEEDINKCEHF_CTOR_OFFSET UNITYSDK_OFFSET(0xBB5A1F0)

inline static constexpr unsigned int NEEDINKCEHF_TypeDefinitionIndex = 63862;

	class NEEDINKCEHF : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEEDINKCEHF_CTOR_OFFSET))(this);
		}

		::RPG::Client::ExpeditionBattleBuff* BPLPBPMEODA(::System::UInt32 a1)
		{
			return ((::RPG::Client::ExpeditionBattleBuff*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NEEDINKCEHF_BPLPBPMEODA_OFFSET))(this, a1);
		}

	};
