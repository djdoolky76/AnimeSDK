#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GOCODBMFHPH;
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Action; }
namespace System { class Object; }

#define GOCODBMFHPH___C__DISPLAYCLASS9_0_CTOR_OFFSET UNITYSDK_OFFSET(0x15B1E900)
#define GOCODBMFHPH___C__DISPLAYCLASS9_0___EXECUTESWITCHPHASE_B__0_OFFSET UNITYSDK_OFFSET(0x15B1EA40)
#define GOCODBMFHPH___C__DISPLAYCLASS9_0___EXECUTESWITCHPHASE_B__1_OFFSET UNITYSDK_OFFSET(0x15B1EBB0)
#define GOCODBMFHPH___C__DISPLAYCLASS9_0___EXECUTESWITCHPHASE_B__2_OFFSET UNITYSDK_OFFSET(0x15B1ECF0)

inline static constexpr unsigned int GOCODBMFHPH___c__DisplayClass9_0_TypeDefinitionIndex = 76302;

	class GOCODBMFHPH___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::System::Action* onFinish; // 0x10
		::System::Object* phaseEnterParam; // 0x18
		::GOCODBMFHPH* __4__this; // 0x20
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
