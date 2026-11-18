#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T> class EventHandler_1; }
namespace System::Threading::Tasks { class UnobservedTaskExceptionEventArgs; }

#define MOLEMOLE_GAMEENGINE___C_AJCKCMJMPIK_OFFSET UNITYSDK_OFFSET(0x1A8F7D10)
#define MOLEMOLE_GAMEENGINE___C_MLMMHDOEPJE_OFFSET UNITYSDK_OFFSET(0x1A8F7C90)
#define MOLEMOLE_GAMEENGINE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A8F7C40)
#define MOLEMOLE_GAMEENGINE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8F7C80)

namespace MoleMole
{
	inline static constexpr unsigned int GameEngine___c_TypeDefinitionIndex = 81901;

	class GameEngine___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__122_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(GameEngine___c_TypeDefinitionIndex)->GetStaticField(0x4E940);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(GameEngine___c_TypeDefinitionIndex)->GetStaticField(0x4E948);
		}
		static ::System::EventHandler_1<::System::Threading::Tasks::UnobservedTaskExceptionEventArgs*>** StaticGet___9__88_0()
		{
			return (::System::EventHandler_1<::System::Threading::Tasks::UnobservedTaskExceptionEventArgs*>**)Il2CppClass::FromTypeDefinitionIndex(GameEngine___c_TypeDefinitionIndex)->GetStaticField(0x4E950);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE___C__CTOR_OFFSET))(this);
		}

		::System::Void MLMMHDOEPJE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE___C_MLMMHDOEPJE_OFFSET))(this);
		}

		::System::Void AJCKCMJMPIK(::System::Object* PIIPCLCCOIG, ::System::Threading::Tasks::UnobservedTaskExceptionEventArgs* NNEIALKMJAJ)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Threading::Tasks::UnobservedTaskExceptionEventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE___C_AJCKCMJMPIK_OFFSET))(this, PIIPCLCCOIG, NNEIALKMJAJ);
		}
	};
}
