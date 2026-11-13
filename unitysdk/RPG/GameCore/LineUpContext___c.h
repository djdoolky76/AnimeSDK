#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HIJGDJLAOKI;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_GAMECORE_LINEUPCONTEXT___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1925B640)
#define RPG_GAMECORE_LINEUPCONTEXT___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1925B680)
#define RPG_GAMECORE_LINEUPCONTEXT___C__GETMONSTERWAVESTAGECOUNT_B__2_0_OFFSET UNITYSDK_OFFSET(0x1925B690)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LineUpContext___c_TypeDefinitionIndex = 57512;

	class LineUpContext___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.GameCore", "<>c")->GetStaticField(0x71A20);
		}

		static ::System::Func_2<::HIJGDJLAOKI*, ::System::Boolean>** StaticGet___9__2_0()
		{
			return (::System::Func_2<::HIJGDJLAOKI*, ::System::Boolean>**)UnitySDK::FromName("RPG.GameCore", "<>c")->GetStaticField(0x71A28);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEUPCONTEXT___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEUPCONTEXT___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetMonsterWaveStageCount_b__2_0(::HIJGDJLAOKI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HIJGDJLAOKI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEUPCONTEXT___C__GETMONSTERWAVESTAGECOUNT_B__2_0_OFFSET))(this, a1);
		}

	};
}
