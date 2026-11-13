#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace XLua { class LuaEnv; }
namespace XLua { class ObjectTranslator; }

#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___CCTOR_OFFSET UNITYSDK_OFFSET(0xE7BC420)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___CTOR_OFFSET UNITYSDK_OFFSET(0xE7BC490)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INIT_OFFSET UNITYSDK_OFFSET(0xE5DD5B0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_00_OFFSET UNITYSDK_OFFSET(0xE7BB9D0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_01_OFFSET UNITYSDK_OFFSET(0xE7BB9E0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_02_OFFSET UNITYSDK_OFFSET(0xE7BB9F0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_03_OFFSET UNITYSDK_OFFSET(0xE7BBA00)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_04_OFFSET UNITYSDK_OFFSET(0xE7BBB00)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_05_OFFSET UNITYSDK_OFFSET(0xE7BBB10)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_06_OFFSET UNITYSDK_OFFSET(0xE7BBB20)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_07_OFFSET UNITYSDK_OFFSET(0xE7BBB30)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_08_OFFSET UNITYSDK_OFFSET(0xE7BBB40)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_09_OFFSET UNITYSDK_OFFSET(0xE7BBB50)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_10_OFFSET UNITYSDK_OFFSET(0xE7BBB60)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_11_OFFSET UNITYSDK_OFFSET(0xE7BBD40)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_12_OFFSET UNITYSDK_OFFSET(0xE7BBE40)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_13_OFFSET UNITYSDK_OFFSET(0xE7BBE50)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_14_OFFSET UNITYSDK_OFFSET(0xE7BBE60)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_15_OFFSET UNITYSDK_OFFSET(0xE7BBE70)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_16_OFFSET UNITYSDK_OFFSET(0xE7BBE80)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_17_OFFSET UNITYSDK_OFFSET(0xE7BBE90)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_18_OFFSET UNITYSDK_OFFSET(0xE7BBEA0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_19_OFFSET UNITYSDK_OFFSET(0xE7BBEB0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_20_OFFSET UNITYSDK_OFFSET(0xE7BBEC0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_21_OFFSET UNITYSDK_OFFSET(0xE7BBFC0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_22_OFFSET UNITYSDK_OFFSET(0xE7BBFD0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_23_OFFSET UNITYSDK_OFFSET(0xE7BBFE0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_24_OFFSET UNITYSDK_OFFSET(0xE7BBFF0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_25_OFFSET UNITYSDK_OFFSET(0xE7BC000)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_26_OFFSET UNITYSDK_OFFSET(0xE7BC010)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_27_OFFSET UNITYSDK_OFFSET(0xE7BC110)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_28_OFFSET UNITYSDK_OFFSET(0xE7BC2F0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_29_OFFSET UNITYSDK_OFFSET(0xE7BC3F0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_30_OFFSET UNITYSDK_OFFSET(0xE7BC400)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_31_OFFSET UNITYSDK_OFFSET(0xE7BC410)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_00_OFFSET UNITYSDK_OFFSET(0xE5DDB80)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_01_OFFSET UNITYSDK_OFFSET(0xE5EE2D0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_02_OFFSET UNITYSDK_OFFSET(0xE5FF530)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_03_OFFSET UNITYSDK_OFFSET(0xE60E120)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_04_OFFSET UNITYSDK_OFFSET(0xE61D910)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_05_OFFSET UNITYSDK_OFFSET(0xE62B910)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_06_OFFSET UNITYSDK_OFFSET(0xE639910)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_07_OFFSET UNITYSDK_OFFSET(0xE648680)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_08_OFFSET UNITYSDK_OFFSET(0xE657100)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_09_OFFSET UNITYSDK_OFFSET(0xE667640)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_10_OFFSET UNITYSDK_OFFSET(0xE677690)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_11_OFFSET UNITYSDK_OFFSET(0xE6868F0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_12_OFFSET UNITYSDK_OFFSET(0xE694B30)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_13_OFFSET UNITYSDK_OFFSET(0xE6A27E0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_14_OFFSET UNITYSDK_OFFSET(0xE6B25F0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_15_OFFSET UNITYSDK_OFFSET(0xE6C0FC0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_16_OFFSET UNITYSDK_OFFSET(0xE6D0360)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_17_OFFSET UNITYSDK_OFFSET(0xE6DF2D0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_18_OFFSET UNITYSDK_OFFSET(0xE6EDB40)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_19_OFFSET UNITYSDK_OFFSET(0xE6FC320)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_20_OFFSET UNITYSDK_OFFSET(0xE70BDE0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_21_OFFSET UNITYSDK_OFFSET(0xE7190A0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_22_OFFSET UNITYSDK_OFFSET(0xE729180)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_23_OFFSET UNITYSDK_OFFSET(0xE738A00)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_24_OFFSET UNITYSDK_OFFSET(0xE7478E0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_25_OFFSET UNITYSDK_OFFSET(0xE755400)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_26_OFFSET UNITYSDK_OFFSET(0xE7644F0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_27_OFFSET UNITYSDK_OFFSET(0xE7739F0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_28_OFFSET UNITYSDK_OFFSET(0xE781E30)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_29_OFFSET UNITYSDK_OFFSET(0xE790070)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_30_OFFSET UNITYSDK_OFFSET(0xE79E2B0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_31_OFFSET UNITYSDK_OFFSET(0xE7AD000)

namespace XLua::CSObjectWrap
{
	inline static constexpr unsigned int XLua_Gen_Initer_Register___TypeDefinitionIndex = 52787;

	class XLua_Gen_Initer_Register__ : public ::System::Object
	{
	public:
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___CTOR_OFFSET))(this);
		}

		static ::System::Void Init(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INIT_OFFSET))(a1, a2);
		}

		static ::System::Void WrapInit_00(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_00_OFFSET))(a1, a2);
		}

		static ::System::Void InterfaceInit_00(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_00_OFFSET))(a1, a2);
		}

		static ::System::Void WrapInit_01(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_01_OFFSET))(a1, a2);
		}

		static ::System::Void InterfaceInit_01(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_01_OFFSET))(a1, a2);
		}

		static ::System::Void WrapInit_02(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_02_OFFSET))(a1, a2);
		}

		static ::System::Void InterfaceInit_02(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_02_OFFSET))(a1, a2);
		}

		static ::System::Void WrapInit_03(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_03_OFFSET))(a1, a2);
		}

		static ::System::Void InterfaceInit_03(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_03_OFFSET))(a1, a2);
		}

		static ::System::Void WrapInit_04(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_04_OFFSET))(a1, a2);
		}

		static ::System::Void InterfaceInit_04(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_04_OFFSET))(a1, a2);
		}

		static ::System::Void WrapInit_05(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_05_OFFSET))(a1, a2);
		}

		static ::System::Void InterfaceInit_05(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_05_OFFSET))(a1, a2);
		}

		static ::System::Void WrapInit_06(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_06_OFFSET))(a1, a2);
		}

		static ::System::Void InterfaceInit_06(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_06_OFFSET))(a1, a2);
		}

		static ::System::Void WrapInit_07(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_07_OFFSET))(a1, a2);
		}

		static ::System::Void InterfaceInit_07(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_07_OFFSET))(a1, a2);
		}

		static ::System::Void WrapInit_08(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_08_OFFSET))(a1, a2);
		}

		static ::System::Void InterfaceInit_08(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_08_OFFSET))(a1, a2);
		}

		static ::System::Void WrapInit_09(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_09_OFFSET))(a1, a2);
		}

		static ::System::Void InterfaceInit_09(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_09_OFFSET))(a1, a2);
		}

		static ::System::Void WrapInit_10(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_10_OFFSET))(a1, a2);
		}

		static ::System::Void InterfaceInit_10(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_10_OFFSET))(a1, a2);
		}

		static ::System::Void WrapInit_11(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_11_OFFSET))(a1, a2);
		}

		static ::System::Void InterfaceInit_11(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_11_OFFSET))(a1, a2);
		}

		static ::System::Void WrapInit_12(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_12_OFFSET))(a1, a2);
		}

		static ::System::Void InterfaceInit_12(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_12_OFFSET))(a1, a2);
		}

		static ::System::Void WrapInit_13(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_13_OFFSET))(a1, a2);
		}

		static ::System::Void InterfaceInit_13(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_13_OFFSET))(a1, a2);
		}

		static ::System::Void WrapInit_14(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_14_OFFSET))(a1, a2);
		}

		static ::System::Void InterfaceInit_14(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_14_OFFSET))(a1, a2);
		}

		static ::System::Void WrapInit_15(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_15_OFFSET))(a1, a2);
		}

		static ::System::Void InterfaceInit_15(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_15_OFFSET))(a1, a2);
		}

		static ::System::Void WrapInit_16(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_16_OFFSET))(a1, a2);
		}

		static ::System::Void InterfaceInit_16(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_16_OFFSET))(a1, a2);
		}

		static ::System::Void WrapInit_17(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_17_OFFSET))(a1, a2);
		}

		static ::System::Void InterfaceInit_17(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_17_OFFSET))(a1, a2);
		}

		static ::System::Void WrapInit_18(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_18_OFFSET))(a1, a2);
		}

		static ::System::Void InterfaceInit_18(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_18_OFFSET))(a1, a2);
		}

		static ::System::Void WrapInit_19(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_19_OFFSET))(a1, a2);
		}

		static ::System::Void InterfaceInit_19(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_19_OFFSET))(a1, a2);
		}

		static ::System::Void WrapInit_20(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_20_OFFSET))(a1, a2);
		}

		static ::System::Void InterfaceInit_20(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_20_OFFSET))(a1, a2);
		}

		static ::System::Void WrapInit_21(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_21_OFFSET))(a1, a2);
		}

		static ::System::Void InterfaceInit_21(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_21_OFFSET))(a1, a2);
		}

		static ::System::Void WrapInit_22(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_22_OFFSET))(a1, a2);
		}

		static ::System::Void InterfaceInit_22(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_22_OFFSET))(a1, a2);
		}

		static ::System::Void WrapInit_23(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_23_OFFSET))(a1, a2);
		}

		static ::System::Void InterfaceInit_23(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_23_OFFSET))(a1, a2);
		}

		static ::System::Void WrapInit_24(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_24_OFFSET))(a1, a2);
		}

		static ::System::Void InterfaceInit_24(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_24_OFFSET))(a1, a2);
		}

		static ::System::Void WrapInit_25(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_25_OFFSET))(a1, a2);
		}

		static ::System::Void InterfaceInit_25(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_25_OFFSET))(a1, a2);
		}

		static ::System::Void WrapInit_26(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_26_OFFSET))(a1, a2);
		}

		static ::System::Void InterfaceInit_26(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_26_OFFSET))(a1, a2);
		}

		static ::System::Void WrapInit_27(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_27_OFFSET))(a1, a2);
		}

		static ::System::Void InterfaceInit_27(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_27_OFFSET))(a1, a2);
		}

		static ::System::Void WrapInit_28(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_28_OFFSET))(a1, a2);
		}

		static ::System::Void InterfaceInit_28(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_28_OFFSET))(a1, a2);
		}

		static ::System::Void WrapInit_29(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_29_OFFSET))(a1, a2);
		}

		static ::System::Void InterfaceInit_29(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_29_OFFSET))(a1, a2);
		}

		static ::System::Void WrapInit_30(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_30_OFFSET))(a1, a2);
		}

		static ::System::Void InterfaceInit_30(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_30_OFFSET))(a1, a2);
		}

		static ::System::Void WrapInit_31(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_31_OFFSET))(a1, a2);
		}

		static ::System::Void InterfaceInit_31(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_31_OFFSET))(a1, a2);
		}

	};
}
