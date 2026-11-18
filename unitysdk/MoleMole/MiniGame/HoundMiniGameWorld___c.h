#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PECOJLPGNBM;
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_MINIGAME_HOUNDMINIGAMEWORLD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1042AB70)
#define MOLEMOLE_MINIGAME_HOUNDMINIGAMEWORLD___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1042ABB0)
#define MOLEMOLE_MINIGAME_HOUNDMINIGAMEWORLD___C__SETPLAYERMULTIPLAYSTATE_B__31_0_OFFSET UNITYSDK_OFFSET(0x1042ABC0)
#define MOLEMOLE_MINIGAME_HOUNDMINIGAMEWORLD___C__SETPLAYERMULTIPLAYSTATE_B__31_1_OFFSET UNITYSDK_OFFSET(0x1042ABE0)

namespace MoleMole::MiniGame
{
	inline static constexpr unsigned int HoundMiniGameWorld___c_TypeDefinitionIndex = 75175;

	class HoundMiniGameWorld___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HoundMiniGameWorld___c_TypeDefinitionIndex)->GetStaticField(0x3BEE0);
		}
		static ::System::Func_2<::PECOJLPGNBM*, ::System::Boolean>** StaticGet___9__31_1()
		{
			return (::System::Func_2<::PECOJLPGNBM*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(HoundMiniGameWorld___c_TypeDefinitionIndex)->GetStaticField(0x3BEE8);
		}
		static ::System::Func_2<::PECOJLPGNBM*, ::System::Boolean>** StaticGet___9__31_0()
		{
			return (::System::Func_2<::PECOJLPGNBM*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(HoundMiniGameWorld___c_TypeDefinitionIndex)->GetStaticField(0x3BEF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_HOUNDMINIGAMEWORLD___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_HOUNDMINIGAMEWORLD___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _SetPlayerMultiPlayState_b__31_0(::PECOJLPGNBM* val)
		{
			return ((::System::Boolean(*)(::PVOID, ::PECOJLPGNBM*))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_HOUNDMINIGAMEWORLD___C__SETPLAYERMULTIPLAYSTATE_B__31_0_OFFSET))(this, val);
		}

		::System::Boolean _SetPlayerMultiPlayState_b__31_1(::PECOJLPGNBM* val)
		{
			return ((::System::Boolean(*)(::PVOID, ::PECOJLPGNBM*))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_HOUNDMINIGAMEWORLD___C__SETPLAYERMULTIPLAYSTATE_B__31_1_OFFSET))(this, val);
		}
	};
}
