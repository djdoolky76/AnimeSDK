#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RogueGambleBaseFunc.h"
class HKOEAOPNEAC;
namespace RPG::Client { class LuaUIController; }
namespace RPG::Client { class RogueGamblePersonaSlotMachineFunc; }

#define RPG_CLIENT_ROGUEGAMBLEPERSONASLOTMACHINEFUNC_CREATE_OFFSET UNITYSDK_OFFSET(0x1CBF9770)
#define RPG_CLIENT_ROGUEGAMBLEPERSONASLOTMACHINEFUNC_CTOR_OFFSET UNITYSDK_OFFSET(0x1CBF9810)
#define RPG_CLIENT_ROGUEGAMBLEPERSONASLOTMACHINEFUNC_OPENFUNCUIPAGE_OFFSET UNITYSDK_OFFSET(0x1CBF98B0)
#define RPG_CLIENT_ROGUEGAMBLEPERSONASLOTMACHINEFUNC__SETMACHINETYPE_OFFSET UNITYSDK_OFFSET(0x1CBF9A10)
#define RPG_CLIENT_ROGUEGAMBLEPERSONASLOTMACHINEFUNC__SETROLLRANGE_OFFSET UNITYSDK_OFFSET(0x1CBF9820)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueGamblePersonaSlotMachineFunc_TypeDefinitionIndex = 69168;

	class RogueGamblePersonaSlotMachineFunc : public ::RPG::Client::RogueGambleBaseFunc
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEPERSONASLOTMACHINEFUNC_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::RogueGamblePersonaSlotMachineFunc* Create(::HKOEAOPNEAC* a1)
		{
			return ((::RPG::Client::RogueGamblePersonaSlotMachineFunc*(*)(::HKOEAOPNEAC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEPERSONASLOTMACHINEFUNC_CREATE_OFFSET))(a1);
		}

		::RPG::Client::LuaUIController* OpenFuncUIPage(::System::UInt32 a1)
		{
			return ((::RPG::Client::LuaUIController*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEPERSONASLOTMACHINEFUNC_OPENFUNCUIPAGE_OFFSET))(this, a1);
		}

		::System::Void _SetMachineType()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEPERSONASLOTMACHINEFUNC__SETMACHINETYPE_OFFSET))(this);
		}

		::System::Void _SetRollRange(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEPERSONASLOTMACHINEFUNC__SETROLLRANGE_OFFSET))(this, a1, a2);
		}

	};
}
