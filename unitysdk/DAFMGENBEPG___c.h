#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightEquipItemData; }
namespace System { class Object; }
namespace System { template <typename T> class Predicate_1; }

#define DAFMGENBEPG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xE9258B0)
#define DAFMGENBEPG___C_CTOR_OFFSET UNITYSDK_OFFSET(0xE9258F0)
#define DAFMGENBEPG___C__UPDATEADDITEM_B__4_0_OFFSET UNITYSDK_OFFSET(0xE925900)
#define DAFMGENBEPG___C__UPDATEADDITEM_B__4_1_OFFSET UNITYSDK_OFFSET(0xE925920)

inline static constexpr unsigned int DAFMGENBEPG___c_TypeDefinitionIndex = 67182;

	class DAFMGENBEPG___c : public ::System::Object
	{
	public:
		static ::System::Predicate_1<::RPG::Client::GridFightEquipItemData*>** StaticGet___9__4_0()
		{
			return (::System::Predicate_1<::RPG::Client::GridFightEquipItemData*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x477A0);
		}

		static ::System::Predicate_1<::RPG::Client::GridFightEquipItemData*>** StaticGet___9__4_1()
		{
			return (::System::Predicate_1<::RPG::Client::GridFightEquipItemData*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x477A8);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x477B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DAFMGENBEPG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAFMGENBEPG___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _UpdateAddItem_b__4_0(::RPG::Client::GridFightEquipItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + DAFMGENBEPG___C__UPDATEADDITEM_B__4_0_OFFSET))(this, a1);
		}

		::System::Boolean _UpdateAddItem_b__4_1(::RPG::Client::GridFightEquipItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + DAFMGENBEPG___C__UPDATEADDITEM_B__4_1_OFFSET))(this, a1);
		}

	};
