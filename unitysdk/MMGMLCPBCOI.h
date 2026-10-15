#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MMGMLCPBCOI_CTOR_OFFSET UNITYSDK_OFFSET(0xB9C49F0)

	class MMGMLCPBCOI : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* OBNHCGIDDDC; // 0x10
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* HODNMBAEKPG; // 0x18
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* ILIPCNCIPBB; // 0x20
		::System::Void _ctor(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + MMGMLCPBCOI_CTOR_OFFSET))(this, a1, a2, a3);
		}

	};
