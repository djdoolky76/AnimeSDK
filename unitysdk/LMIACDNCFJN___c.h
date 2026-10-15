#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightEquipItemData; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define LMIACDNCFJN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xB783810)
#define LMIACDNCFJN___C_CTOR_OFFSET UNITYSDK_OFFSET(0xB783850)
#define LMIACDNCFJN___C__IMPORTCURGAMESESSIONDATA_B__10_0_OFFSET UNITYSDK_OFFSET(0xB783860)

	class LMIACDNCFJN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x69600);
		}

		static ::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::UInt32>** StaticGet___9__10_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x69608);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LMIACDNCFJN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMIACDNCFJN___C_CTOR_OFFSET))(this);
		}

		::System::UInt32 _ImportCurGameSessionData_b__10_0(::RPG::Client::GridFightEquipItemData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + LMIACDNCFJN___C__IMPORTCURGAMESESSIONDATA_B__10_0_OFFSET))(this, a1);
		}

	};
