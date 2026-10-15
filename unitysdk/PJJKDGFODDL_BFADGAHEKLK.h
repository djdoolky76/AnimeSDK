#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Pet/PetLineupShape.h"
#include "unitysdk/System/Object.h"
class IFEEMEAJMEJ;
namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PJJKDGFODDL_BFADGAHEKLK_CTOR_OFFSET UNITYSDK_OFFSET(0xC290120)

	class PJJKDGFODDL_BFADGAHEKLK : public ::System::Object
	{
	public:
		::System::Action* LDEDOFNOIPK; // 0x10
		::IFEEMEAJMEJ* DCFKJCMODKJ; // 0x18
		::System::Collections::Generic::List_1<::System::Object*>* JJJNPLOLJGE; // 0x20
		::RPG::GameCore::GameEntity* OFHDAHHPNPJ; // 0x28
		::RPG::Client::Pet::PetLineupShape GJBOKLDCKEG; // 0x30
		::System::UInt32 FJKDAFHKPGC; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJJKDGFODDL_BFADGAHEKLK_CTOR_OFFSET))(this);
		}

	};
