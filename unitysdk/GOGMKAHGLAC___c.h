#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PDHLJJCMEDJ.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Converter_2; }

#define GOGMKAHGLAC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x15B25060)
#define GOGMKAHGLAC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x15B250A0)
#define GOGMKAHGLAC___C__ONTASKBEGIN_B__2_0_OFFSET UNITYSDK_OFFSET(0x15B250B0)

inline static constexpr unsigned int GOGMKAHGLAC___c_TypeDefinitionIndex = 58739;

	class GOGMKAHGLAC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6E6E0);
		}

		static ::System::Converter_2<::RPG::GameCore::GameEntity*, ::PDHLJJCMEDJ>** StaticGet___9__2_0()
		{
			return (::System::Converter_2<::RPG::GameCore::GameEntity*, ::PDHLJJCMEDJ>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6E6E8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOGMKAHGLAC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOGMKAHGLAC___C_CTOR_OFFSET))(this);
		}

		::PDHLJJCMEDJ _OnTaskBegin_b__2_0(::RPG::GameCore::GameEntity* a1)
		{
			return ((::PDHLJJCMEDJ(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + GOGMKAHGLAC___C__ONTASKBEGIN_B__2_0_OFFSET))(this, a1);
		}

	};
