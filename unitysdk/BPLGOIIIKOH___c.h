#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightEquipItemData; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define BPLGOIIIKOH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xC1A9280)
#define BPLGOIIIKOH___C_CTOR_OFFSET UNITYSDK_OFFSET(0xC1A92C0)
#define BPLGOIIIKOH___C__UPDATEROLE_B__2_0_OFFSET UNITYSDK_OFFSET(0xC1A92D0)

inline static constexpr unsigned int BPLGOIIIKOH___c_TypeDefinitionIndex = 64957;

	class BPLGOIIIKOH___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::UInt32>** StaticGet___9__2_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0xBDA0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xBDA8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BPLGOIIIKOH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPLGOIIIKOH___C_CTOR_OFFSET))(this);
		}

		::System::UInt32 _UpdateRole_b__2_0(::RPG::Client::GridFightEquipItemData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + BPLGOIIIKOH___C__UPDATEROLE_B__2_0_OFFSET))(this, a1);
		}

	};
