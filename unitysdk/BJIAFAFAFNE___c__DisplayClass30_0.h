#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CakeRace/CakeRaceUIType.h"
#include "unitysdk/System/Object.h"
class BJIAFAFAFNE;
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Object; }

#define BJIAFAFAFNE___C__DISPLAYCLASS30_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB7A0100)
#define BJIAFAFAFNE___C__DISPLAYCLASS30_0__TRYASYNCSWITCHSECTIONUI_B__0_OFFSET UNITYSDK_OFFSET(0xB7A0850)
#define BJIAFAFAFNE___C__DISPLAYCLASS30_0__TRYASYNCSWITCHSECTIONUI_B__1_OFFSET UNITYSDK_OFFSET(0xB7A0880)
#define BJIAFAFAFNE___C__DISPLAYCLASS30_0__TRYASYNCSWITCHSECTIONUI_B__2_OFFSET UNITYSDK_OFFSET(0xB7A08B0)

inline static constexpr unsigned int BJIAFAFAFNE___c__DisplayClass30_0_TypeDefinitionIndex = 76458;

	class BJIAFAFAFNE___c__DisplayClass30_0 : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Object*>* args; // 0x10
		::BJIAFAFAFNE* __4__this; // 0x18
		::RPG::Client::CakeRace::CakeRaceUIType uiType; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJIAFAFAFNE___C__DISPLAYCLASS30_0_CTOR_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _TryAsyncSwitchSectionUI_b__0()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJIAFAFAFNE___C__DISPLAYCLASS30_0__TRYASYNCSWITCHSECTIONUI_B__0_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _TryAsyncSwitchSectionUI_b__1()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJIAFAFAFNE___C__DISPLAYCLASS30_0__TRYASYNCSWITCHSECTIONUI_B__1_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _TryAsyncSwitchSectionUI_b__2()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJIAFAFAFNE___C__DISPLAYCLASS30_0__TRYASYNCSWITCHSECTIONUI_B__2_OFFSET))(this);
		}

	};
