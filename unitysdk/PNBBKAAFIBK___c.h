#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightEquipItemData; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define PNBBKAAFIBK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xCC64B10)
#define PNBBKAAFIBK___C_CTOR_OFFSET UNITYSDK_OFFSET(0xCC64B50)
#define PNBBKAAFIBK___C__TRYCRAFTFORTRAITEFFECT_B__10_0_OFFSET UNITYSDK_OFFSET(0xCC64B60)

inline static constexpr unsigned int PNBBKAAFIBK___c_TypeDefinitionIndex = 67125;

	class PNBBKAAFIBK___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::Boolean>** StaticGet___9__10_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x738F0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x738F8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PNBBKAAFIBK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNBBKAAFIBK___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _TryCraftForTraitEffect_b__10_0(::RPG::Client::GridFightEquipItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + PNBBKAAFIBK___C__TRYCRAFTFORTRAITEFFECT_B__10_0_OFFSET))(this, a1);
		}

	};
