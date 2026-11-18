#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/NHDODLEPOIA_LGIMMGBOMBA.h"

class LIGDBLKDFIF;
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Converter_2; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Predicate_1; }

#define MOLEMOLE_UIZENKOVLOTTERYGAMEPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12FA9F70)
#define MOLEMOLE_UIZENKOVLOTTERYGAMEPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12FA9FB0)
#define MOLEMOLE_UIZENKOVLOTTERYGAMEPAGECONTROLLER___C__INITREWARDPREVIEW_B__23_0_OFFSET UNITYSDK_OFFSET(0x12FA9FC0)
#define MOLEMOLE_UIZENKOVLOTTERYGAMEPAGECONTROLLER___C__INITREWARDPREVIEW_B__23_1_OFFSET UNITYSDK_OFFSET(0x12FA9FF0)
#define MOLEMOLE_UIZENKOVLOTTERYGAMEPAGECONTROLLER___C__ISLASTAVATARMAYDIEANDGAMEEND_B__34_0_OFFSET UNITYSDK_OFFSET(0x12FAA010)
#define MOLEMOLE_UIZENKOVLOTTERYGAMEPAGECONTROLLER___C__SENDREQUEST_B__67_1_OFFSET UNITYSDK_OFFSET(0x12FAA020)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovLotteryGamePageController___c_TypeDefinitionIndex = 57269;

	class UIZenkovLotteryGamePageController___c : public ::System::Object
	{
	public:
		static ::System::Converter_2<::LIGDBLKDFIF*, ::System::Int32>** StaticGet___9__23_1()
		{
			return (::System::Converter_2<::LIGDBLKDFIF*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIZenkovLotteryGamePageController___c_TypeDefinitionIndex)->GetStaticField(0x358A0);
		}
		static ::System::Action** StaticGet___9__67_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIZenkovLotteryGamePageController___c_TypeDefinitionIndex)->GetStaticField(0x358A8);
		}
		static ::System::Predicate_1<::LIGDBLKDFIF*>** StaticGet___9__23_0()
		{
			return (::System::Predicate_1<::LIGDBLKDFIF*>**)Il2CppClass::FromTypeDefinitionIndex(UIZenkovLotteryGamePageController___c_TypeDefinitionIndex)->GetStaticField(0x358B0);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIZenkovLotteryGamePageController___c_TypeDefinitionIndex)->GetStaticField(0x358B8);
		}
		static ::System::Func_2<::System::Object*, ::System::Boolean>** StaticGet___9__34_0()
		{
			return (::System::Func_2<::System::Object*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIZenkovLotteryGamePageController___c_TypeDefinitionIndex)->GetStaticField(0x358C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVLOTTERYGAMEPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVLOTTERYGAMEPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _InitRewardPreview_b__23_0(::LIGDBLKDFIF* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::LIGDBLKDFIF*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVLOTTERYGAMEPAGECONTROLLER___C__INITREWARDPREVIEW_B__23_0_OFFSET))(this, x);
		}

		::System::Int32 _InitRewardPreview_b__23_1(::LIGDBLKDFIF* x)
		{
			return ((::System::Int32(*)(::PVOID, ::LIGDBLKDFIF*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVLOTTERYGAMEPAGECONTROLLER___C__INITREWARDPREVIEW_B__23_1_OFFSET))(this, x);
		}

		::System::Boolean _IsLastAvatarMayDieAndGameEnd_b__34_0(::NHDODLEPOIA_LGIMMGBOMBA x)
		{
			return ((::System::Boolean(*)(::PVOID, ::NHDODLEPOIA_LGIMMGBOMBA))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVLOTTERYGAMEPAGECONTROLLER___C__ISLASTAVATARMAYDIEANDGAMEEND_B__34_0_OFFSET))(this, x);
		}

		::System::Void _SendRequest_b__67_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVLOTTERYGAMEPAGECONTROLLER___C__SENDREQUEST_B__67_1_OFFSET))(this);
		}
	};
}
