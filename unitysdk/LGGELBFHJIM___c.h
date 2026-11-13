#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::TeamTowers { class TeamTowersDepartmentData; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define LGGELBFHJIM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BCA52F0)
#define LGGELBFHJIM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1BCA5330)
#define LGGELBFHJIM___C__GET_PVECOMPLETE_B__24_0_OFFSET UNITYSDK_OFFSET(0x1BCA5340)

inline static constexpr unsigned int LGGELBFHJIM___c_TypeDefinitionIndex = 81811;

	class LGGELBFHJIM___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::TeamTowers::TeamTowersDepartmentData*, ::System::Boolean>** StaticGet___9__24_0()
		{
			return (::System::Func_2<::RPG::Client::TeamTowers::TeamTowersDepartmentData*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x62B70);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x62B78);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LGGELBFHJIM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGGELBFHJIM___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _get_PveComplete_b__24_0(::RPG::Client::TeamTowers::TeamTowersDepartmentData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TeamTowers::TeamTowersDepartmentData*))((::PBYTE)hIl2Cpp + LGGELBFHJIM___C__GET_PVECOMPLETE_B__24_0_OFFSET))(this, a1);
		}

	};
