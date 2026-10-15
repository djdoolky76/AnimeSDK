#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HBCMHADMLOP.h"
class KPOBNILOOKO_DOPNLNNMIEM;
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KPOBNILOOKO_AEEKJMLKKLH_OFFSET UNITYSDK_OFFSET(0xB5C8B30)
#define KPOBNILOOKO_CTOR_OFFSET UNITYSDK_OFFSET(0xB5C9220)
#define KPOBNILOOKO_FPJOIGNNIAB_OFFSET UNITYSDK_OFFSET(0xB5C8320)
#define KPOBNILOOKO_HPNKDJDJMLN_OFFSET UNITYSDK_OFFSET(0xB5C9080)
#define KPOBNILOOKO_ONINIT_OFFSET UNITYSDK_OFFSET(0xB5C81E0)
#define KPOBNILOOKO_ONUNINIT_OFFSET UNITYSDK_OFFSET(0xB5C8220)
#define KPOBNILOOKO_PEJIBJMDHPH_OFFSET UNITYSDK_OFFSET(0xB5C8E50)

inline static constexpr unsigned int KPOBNILOOKO_TypeDefinitionIndex = 73337;

	class KPOBNILOOKO : public ::HBCMHADMLOP
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* HHAAOGJBFHD; // 0x20
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::System::Object*>* FCBNHELBMMM; // 0x28
		::System::Collections::Generic::List_1<::System::Object*>* JBJEHKEBCJI; // 0x30
		::System::Boolean AINFEIKOOAA; // 0x38
		::System::Boolean IMLAADIJHMD; // 0x39
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPOBNILOOKO_CTOR_OFFSET))(this);
		}

		::System::Void OnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPOBNILOOKO_ONINIT_OFFSET))(this);
		}

		::System::Void OnUninit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPOBNILOOKO_ONUNINIT_OFFSET))(this);
		}

		::System::Void AEEKJMLKKLH(::System::String* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a3, ::System::Int32 a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + KPOBNILOOKO_AEEKJMLKKLH_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void PEJIBJMDHPH(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + KPOBNILOOKO_PEJIBJMDHPH_OFFSET))(this, a1, a2);
		}

		::System::Void FPJOIGNNIAB(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KPOBNILOOKO_FPJOIGNNIAB_OFFSET))(this, a1);
		}

		::KPOBNILOOKO_DOPNLNNMIEM* HPNKDJDJMLN(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
		{
			return ((::KPOBNILOOKO_DOPNLNNMIEM*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + KPOBNILOOKO_HPNKDJDJMLN_OFFSET))(this, a1, a2);
		}

	};
