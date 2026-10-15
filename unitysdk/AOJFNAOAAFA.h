#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CPGFPBIGNBI;
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AOJFNAOAAFA_CTOR_OFFSET UNITYSDK_OFFSET(0x158B12E0)
#define AOJFNAOAAFA_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x158B0EC0)
#define AOJFNAOAAFA_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x158B0D10)
#define AOJFNAOAAFA_LEODPLLEGJO_OFFSET UNITYSDK_OFFSET(0x158B0D80)

	class AOJFNAOAAFA : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::CPGFPBIGNBI*>* ECMFFNPIHGD; // 0x10
		::System::Collections::Generic::List_1<::CPGFPBIGNBI*>* JMMMLKCHILN; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOJFNAOAAFA_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOJFNAOAAFA_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void LEODPLLEGJO(::RPG::GameCore::GameEntity* a1, ::CPGFPBIGNBI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::CPGFPBIGNBI*))((::PBYTE)hIl2Cpp + AOJFNAOAAFA_LEODPLLEGJO_OFFSET))(this, a1, a2);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AOJFNAOAAFA_JLANKNHFKCN_OFFSET))(this, a1);
		}

	};
