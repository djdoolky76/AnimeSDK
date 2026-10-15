#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/XLua/LuaBase.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class BACCOPOCMPC;
class OONGDLIDJJJ;
namespace RPG::GameCore { class ConsiderationAxisConfig; }
namespace XLua { class LuaBase; }
namespace XLua { class LuaEnv; }

#define XLUA_CSOBJECTWRAP_RPGCLIENTICONSIDERATIONAXISLUAHACKBRIDGE_CTOR_OFFSET UNITYSDK_OFFSET(0x149128D0)
#define XLUA_CSOBJECTWRAP_RPGCLIENTICONSIDERATIONAXISLUAHACKBRIDGE_RPG_CLIENT_ICONSIDERATIONAXISLUAHACK_END_SCORE_OFFSET UNITYSDK_OFFSET(0x14912E80)
#define XLUA_CSOBJECTWRAP_RPGCLIENTICONSIDERATIONAXISLUAHACKBRIDGE_RPG_CLIENT_ICONSIDERATIONAXISLUAHACK_END_SETUP_OFFSET UNITYSDK_OFFSET(0x14913940)
#define XLUA_CSOBJECTWRAP_RPGCLIENTICONSIDERATIONAXISLUAHACKBRIDGE_RPG_CLIENT_ICONSIDERATIONAXISLUAHACK_START_SCORE_OFFSET UNITYSDK_OFFSET(0x149128E0)
#define XLUA_CSOBJECTWRAP_RPGCLIENTICONSIDERATIONAXISLUAHACKBRIDGE_RPG_CLIENT_ICONSIDERATIONAXISLUAHACK_START_SETUP_OFFSET UNITYSDK_OFFSET(0x149133C0)
#define XLUA_CSOBJECTWRAP_RPGCLIENTICONSIDERATIONAXISLUAHACKBRIDGE___CREATE_OFFSET UNITYSDK_OFFSET(0x14912880)

namespace XLua::CSObjectWrap
{
	inline static constexpr unsigned int RPGClientIConsiderationAxisLuaHackBridge_TypeDefinitionIndex = 50805;

	class RPGClientIConsiderationAxisLuaHackBridge : public ::XLua::LuaBase
	{
	public:
		::System::Void _ctor(::System::Int32 a1, ::XLua::LuaEnv* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::XLua::LuaEnv*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_RPGCLIENTICONSIDERATIONAXISLUAHACKBRIDGE_CTOR_OFFSET))(this, a1, a2);
		}

		static ::XLua::LuaBase* __Create(::System::Int32 a1, ::XLua::LuaEnv* a2)
		{
			return ((::XLua::LuaBase*(*)(::System::Int32, ::XLua::LuaEnv*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_RPGCLIENTICONSIDERATIONAXISLUAHACKBRIDGE___CREATE_OFFSET))(a1, a2);
		}

		::System::Boolean RPG_Client_IConsiderationAxisLuaHack_start_score(::RPG::GameCore::ConsiderationAxisConfig* a1, ::OONGDLIDJJJ* a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ConsiderationAxisConfig*, ::OONGDLIDJJJ*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_RPGCLIENTICONSIDERATIONAXISLUAHACKBRIDGE_RPG_CLIENT_ICONSIDERATIONAXISLUAHACK_START_SCORE_OFFSET))(this, a1, a2, a3);
		}

		::RPG::GameCore::FixPoint RPG_Client_IConsiderationAxisLuaHack_end_score(::RPG::GameCore::ConsiderationAxisConfig* a1, ::OONGDLIDJJJ* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::ConsiderationAxisConfig*, ::OONGDLIDJJJ*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_RPGCLIENTICONSIDERATIONAXISLUAHACKBRIDGE_RPG_CLIENT_ICONSIDERATIONAXISLUAHACK_END_SCORE_OFFSET))(this, a1, a2);
		}

		::System::Boolean RPG_Client_IConsiderationAxisLuaHack_start_setup(::RPG::GameCore::ConsiderationAxisConfig* a1, ::BACCOPOCMPC* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ConsiderationAxisConfig*, ::BACCOPOCMPC*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_RPGCLIENTICONSIDERATIONAXISLUAHACKBRIDGE_RPG_CLIENT_ICONSIDERATIONAXISLUAHACK_START_SETUP_OFFSET))(this, a1, a2);
		}

		::System::Void RPG_Client_IConsiderationAxisLuaHack_end_setup(::RPG::GameCore::ConsiderationAxisConfig* a1, ::BACCOPOCMPC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConsiderationAxisConfig*, ::BACCOPOCMPC*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_RPGCLIENTICONSIDERATIONAXISLUAHACKBRIDGE_RPG_CLIENT_ICONSIDERATIONAXISLUAHACK_END_SETUP_OFFSET))(this, a1, a2);
		}

	};
}
