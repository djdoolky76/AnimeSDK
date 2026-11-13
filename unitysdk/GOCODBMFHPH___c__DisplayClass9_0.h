#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GOCODBMFHPH;
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Action; }
namespace System { class Object; }

#define GOCODBMFHPH___C__DISPLAYCLASS9_0_CTOR_OFFSET UNITYSDK_OFFSET(0x187AED80)
#define GOCODBMFHPH___C__DISPLAYCLASS9_0___EXECUTESWITCHPHASE_B__0_OFFSET UNITYSDK_OFFSET(0x187AEEC0)
#define GOCODBMFHPH___C__DISPLAYCLASS9_0___EXECUTESWITCHPHASE_B__1_OFFSET UNITYSDK_OFFSET(0x187AF030)
#define GOCODBMFHPH___C__DISPLAYCLASS9_0___EXECUTESWITCHPHASE_B__2_OFFSET UNITYSDK_OFFSET(0x187AF170)

inline static constexpr unsigned int GOCODBMFHPH___c__DisplayClass9_0_TypeDefinitionIndex = 78633;

	class GOCODBMFHPH___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::System::Action* onFinish; // 0x10
		::GOCODBMFHPH* __4__this; // 0x18
		::System::Object* phaseEnterParam; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOCODBMFHPH___C__DISPLAYCLASS9_0_CTOR_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* __ExecuteSwitchPhase_b__0()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOCODBMFHPH___C__DISPLAYCLASS9_0___EXECUTESWITCHPHASE_B__0_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* __ExecuteSwitchPhase_b__1()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOCODBMFHPH___C__DISPLAYCLASS9_0___EXECUTESWITCHPHASE_B__1_OFFSET))(this);
		}

		::System::Void __ExecuteSwitchPhase_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOCODBMFHPH___C__DISPLAYCLASS9_0___EXECUTESWITCHPHASE_B__2_OFFSET))(this);
		}

	};
