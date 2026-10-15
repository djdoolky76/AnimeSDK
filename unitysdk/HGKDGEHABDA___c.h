#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightEquipItemData; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define HGKDGEHABDA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x15CA8A70)
#define HGKDGEHABDA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x15CA8AB0)
#define HGKDGEHABDA___C__UPDATEROLE_B__4_0_OFFSET UNITYSDK_OFFSET(0x15CA8AC0)

	class HGKDGEHABDA___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::UInt32>** StaticGet___9__4_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x15250);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x15258);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HGKDGEHABDA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGKDGEHABDA___C_CTOR_OFFSET))(this);
		}

		::System::UInt32 _UpdateRole_b__4_0(::RPG::Client::GridFightEquipItemData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + HGKDGEHABDA___C__UPDATEROLE_B__4_0_OFFSET))(this, a1);
		}

	};
