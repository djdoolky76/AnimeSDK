#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define PIOGONCBKIF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xC275240)
#define PIOGONCBKIF___C_CTOR_OFFSET UNITYSDK_OFFSET(0xC275280)
#define PIOGONCBKIF___C__SETUPVIEW_B__5_1_OFFSET UNITYSDK_OFFSET(0xC275290)

	class PIOGONCBKIF___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::GameCore::FixPoint, ::System::Object*>** StaticGet___9__5_1()
		{
			return (::System::Func_2<::RPG::GameCore::FixPoint, ::System::Object*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6F890);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6F898);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIOGONCBKIF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIOGONCBKIF___C_CTOR_OFFSET))(this);
		}

		::System::Object* _SetupView_b__5_1(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Object*(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + PIOGONCBKIF___C__SETUPVIEW_B__5_1_OFFSET))(this, a1);
		}

	};
