#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NCBOENDMDIC;
namespace RPG::Client::Promises { template <typename T> class Promise_1; }

#define JGDCIMPJDNN___C__DISPLAYCLASS3_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB192360)
#define JGDCIMPJDNN___C__DISPLAYCLASS3_0___WAITMISSIONDATAREADY_B__0_OFFSET UNITYSDK_OFFSET(0xB1923F0)

inline static constexpr unsigned int JGDCIMPJDNN___c__DisplayClass3_0_TypeDefinitionIndex = 80521;

	class JGDCIMPJDNN___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::NCBOENDMDIC* rsp; // 0x10
		::RPG::Client::Promises::Promise_1<::NCBOENDMDIC*>* promise; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGDCIMPJDNN___C__DISPLAYCLASS3_0_CTOR_OFFSET))(this);
		}

		::System::Void __WaitMissionDataReady_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGDCIMPJDNN___C__DISPLAYCLASS3_0___WAITMISSIONDATAREADY_B__0_OFFSET))(this);
		}

	};
