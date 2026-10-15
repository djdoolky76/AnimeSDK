#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class IdleLiveAvatarPropertyConfigRow; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define NOMGKHJMAKK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xBCEDBA0)
#define NOMGKHJMAKK___C_CTOR_OFFSET UNITYSDK_OFFSET(0xBCEDBE0)
#define NOMGKHJMAKK___C___REGISTERPROPERTYFORMULAS_B__8_0_OFFSET UNITYSDK_OFFSET(0xBCEDBF0)

inline static constexpr unsigned int NOMGKHJMAKK___c_TypeDefinitionIndex = 75126;

	class NOMGKHJMAKK___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::GameCore::IdleLiveAvatarPropertyConfigRow*, ::System::Boolean>** StaticGet___9__8_0()
		{
			return (::System::Func_2<::RPG::GameCore::IdleLiveAvatarPropertyConfigRow*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x534D0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x534D8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NOMGKHJMAKK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOMGKHJMAKK___C_CTOR_OFFSET))(this);
		}

		::System::Boolean __RegisterPropertyFormulas_b__8_0(::RPG::GameCore::IdleLiveAvatarPropertyConfigRow* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::IdleLiveAvatarPropertyConfigRow*))((::PBYTE)hIl2Cpp + NOMGKHJMAKK___C___REGISTERPROPERTYFORMULAS_B__8_0_OFFSET))(this, a1);
		}

	};
