#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightEquipItemData; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define BDMNPIBNFAN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x162F7910)
#define BDMNPIBNFAN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x162F7950)
#define BDMNPIBNFAN___C__TICKROUND_B__3_0_OFFSET UNITYSDK_OFFSET(0x162F7960)

inline static constexpr unsigned int BDMNPIBNFAN___c_TypeDefinitionIndex = 64373;

	class BDMNPIBNFAN___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::Boolean>** StaticGet___9__3_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x69180);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x69188);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BDMNPIBNFAN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDMNPIBNFAN___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _TickRound_b__3_0(::RPG::Client::GridFightEquipItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + BDMNPIBNFAN___C__TICKROUND_B__3_0_OFFSET))(this, a1);
		}

	};
