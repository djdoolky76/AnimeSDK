#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace BansheeGz::BGSpline::Components { class BGCcSplitterPolyline; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESROUTERENDERERVIEW___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD418130)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESROUTERENDERERVIEW___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD418170)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESROUTERENDERERVIEW___C__BINDCOMPONENTS_B__2_0_OFFSET UNITYSDK_OFFSET(0xD418180)

namespace RPG::Client::LittleGame::ChenLingFes
{
	inline static constexpr unsigned int ChenLingFesRouteRendererView___c_TypeDefinitionIndex = 77791;

	class ChenLingFesRouteRendererView___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::BansheeGz::BGSpline::Components::BGCcSplitterPolyline*, ::System::Boolean>** StaticGet___9__2_0()
		{
			return (::System::Func_2<::BansheeGz::BGSpline::Components::BGCcSplitterPolyline*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client.LittleGame.ChenLingFes", "<>c")->GetStaticField(0x2DE50);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.LittleGame.ChenLingFes", "<>c")->GetStaticField(0x2DE58);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESROUTERENDERERVIEW___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESROUTERENDERERVIEW___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _BindComponents_b__2_0(::BansheeGz::BGSpline::Components::BGCcSplitterPolyline* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BansheeGz::BGSpline::Components::BGCcSplitterPolyline*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESROUTERENDERERVIEW___C__BINDCOMPONENTS_B__2_0_OFFSET))(this, a1);
		}

	};
}
