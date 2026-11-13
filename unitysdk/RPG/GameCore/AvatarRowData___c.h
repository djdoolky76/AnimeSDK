#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DGMNKINFKFH.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_GAMECORE_AVATARROWDATA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1A011440)
#define RPG_GAMECORE_AVATARROWDATA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1A011480)
#define RPG_GAMECORE_AVATARROWDATA___C__INITFROMAVATARDATA_B__28_0_OFFSET UNITYSDK_OFFSET(0x1A011490)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarRowData___c_TypeDefinitionIndex = 58155;

	class AvatarRowData___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::DGMNKINFKFH, ::System::UInt32>** StaticGet___9__28_0()
		{
			return (::System::Func_2<::DGMNKINFKFH, ::System::UInt32>**)UnitySDK::FromName("RPG.GameCore", "<>c")->GetStaticField(0x67020);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.GameCore", "<>c")->GetStaticField(0x67028);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA___C_CTOR_OFFSET))(this);
		}

		::System::UInt32 _InitFromAvatarData_b__28_0(::DGMNKINFKFH a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::DGMNKINFKFH))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA___C__INITFROMAVATARDATA_B__28_0_OFFSET))(this, a1);
		}

	};
}
