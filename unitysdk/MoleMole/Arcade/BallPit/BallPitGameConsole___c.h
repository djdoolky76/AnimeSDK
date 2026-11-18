#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_ARCADE_BALLPIT_BALLPITGAMECONSOLE___C_JPMLGLACAIK_OFFSET UNITYSDK_OFFSET(0x1EB5BE30)
#define MOLEMOLE_ARCADE_BALLPIT_BALLPITGAMECONSOLE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB5BDE0)
#define MOLEMOLE_ARCADE_BALLPIT_BALLPITGAMECONSOLE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB5BE20)

namespace MoleMole::Arcade::BallPit
{
	inline static constexpr unsigned int BallPitGameConsole___c_TypeDefinitionIndex = 94943;

	class BallPitGameConsole___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(BallPitGameConsole___c_TypeDefinitionIndex)->GetStaticField(0x52910);
		}
		static ::System::Func_2<::System::String*, ::System::String*>** StaticGet___9__85_0()
		{
			return (::System::Func_2<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(BallPitGameConsole___c_TypeDefinitionIndex)->GetStaticField(0x52918);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLPIT_BALLPITGAMECONSOLE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLPIT_BALLPITGAMECONSOLE___C__CTOR_OFFSET))(this);
		}

		::System::String* JPMLGLACAIK(::System::String* IJKOLMELBBC)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLPIT_BALLPITGAMECONSOLE___C_JPMLGLACAIK_OFFSET))(this, IJKOLMELBBC);
		}
	};
}
