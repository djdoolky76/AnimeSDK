#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChenLingBattle/GamePhase.h"
class GOCODBMFHPH;
namespace RPG::Client { class LuaUIGameFlowContext; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Object; }

#define LGJDODEHJJG_CTOR_OFFSET UNITYSDK_OFFSET(0xB692990)
#define LGJDODEHJJG_ONENTER_OFFSET UNITYSDK_OFFSET(0xB6929A0)
#define LGJDODEHJJG_ONLEAVE_OFFSET UNITYSDK_OFFSET(0xB692C20)

inline static constexpr unsigned int LGJDODEHJJG_TypeDefinitionIndex = 76310;

	class LGJDODEHJJG : public ::RPG::Client::ChenLingBattle::GamePhase
	{
	public:
		::RPG::Client::LuaUIGameFlowContext* GGGBPNGFKPJ; // 0x18
		::System::Void _ctor(::GOCODBMFHPH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GOCODBMFHPH*))((::PBYTE)hIl2Cpp + LGJDODEHJJG_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* OnEnter(::System::Object* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LGJDODEHJJG_ONENTER_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* OnLeave()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGJDODEHJJG_ONLEAVE_OFFSET))(this);
		}

	};
