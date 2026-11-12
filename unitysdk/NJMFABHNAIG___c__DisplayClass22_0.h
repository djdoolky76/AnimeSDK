#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NJMFABHNAIG;
namespace RPG::Client::ActivityIdleLive { class IdleLiveNode; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { template <typename T> class Func_1; }

#define NJMFABHNAIG___C__DISPLAYCLASS22_0_CTOR_OFFSET UNITYSDK_OFFSET(0xC501300)
#define NJMFABHNAIG___C__DISPLAYCLASS22_0__ASYNCREQUESTSTARTNODE_B__0_OFFSET UNITYSDK_OFFSET(0xC502200)
#define NJMFABHNAIG___C__DISPLAYCLASS22_0__ASYNCREQUESTSTARTNODE_B__3_OFFSET UNITYSDK_OFFSET(0xC502290)

inline static constexpr unsigned int NJMFABHNAIG___c__DisplayClass22_0_TypeDefinitionIndex = 77480;

	class NJMFABHNAIG___c__DisplayClass22_0 : public ::System::Object
	{
	public:
		::System::Func_1<::RPG::Client::Promises::IPromise*>* onRspReceived; // 0x10
		::RPG::Client::ActivityIdleLive::IdleLiveNode* node; // 0x18
		::NJMFABHNAIG* __4__this; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJMFABHNAIG___C__DISPLAYCLASS22_0_CTOR_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _AsyncRequestStartNode_b__0()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJMFABHNAIG___C__DISPLAYCLASS22_0__ASYNCREQUESTSTARTNODE_B__0_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _AsyncRequestStartNode_b__3(::System::UInt32 a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NJMFABHNAIG___C__DISPLAYCLASS22_0__ASYNCREQUESTSTARTNODE_B__3_OFFSET))(this, a1);
		}

	};
