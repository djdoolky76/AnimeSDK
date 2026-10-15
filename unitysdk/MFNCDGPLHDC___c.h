#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightEquipItemData; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MFNCDGPLHDC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xB90D280)
#define MFNCDGPLHDC___C_CTOR_OFFSET UNITYSDK_OFFSET(0xB90D2C0)
#define MFNCDGPLHDC___C__CREATEGAMEREFROLE_B__2_0_OFFSET UNITYSDK_OFFSET(0xB90D530)

inline static constexpr unsigned int MFNCDGPLHDC___c_TypeDefinitionIndex = 65270;

	class MFNCDGPLHDC___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemData*>** StaticGet___9__2_0()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemData*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6F7F0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6F7F8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MFNCDGPLHDC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFNCDGPLHDC___C_CTOR_OFFSET))(this);
		}

		::RPG::Client::GridFightEquipItemData* _CreateGameRefRole_b__2_0(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MFNCDGPLHDC___C__CREATEGAMEREFROLE_B__2_0_OFFSET))(this, a1);
		}

	};
