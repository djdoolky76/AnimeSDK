#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MLKDDLHNNHH.h"
class BGKCIKPHJJB;
namespace UnityEngine { class Coroutine; }

#define BGKCIKPHJJB_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xBB15740)
#define BGKCIKPHJJB_CTOR_OFFSET UNITYSDK_OFFSET(0xBB159D0)
#define BGKCIKPHJJB_EPJFIHHDMAK_OFFSET UNITYSDK_OFFSET(0xBB158C0)
#define BGKCIKPHJJB_KMNEJMOJEPC_OFFSET UNITYSDK_OFFSET(0xBB15970)
#define BGKCIKPHJJB_ONCLEAR_OFFSET UNITYSDK_OFFSET(0xBB15920)
#define BGKCIKPHJJB_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xBB157D0)

inline static constexpr unsigned int BGKCIKPHJJB_TypeDefinitionIndex = 80104;

	class BGKCIKPHJJB : public ::MLKDDLHNNHH
	{
	public:
		::UnityEngine::Coroutine* NAEJCNNMAKA; // 0x20
		::System::Single HBDJCFFDGDD; // 0x28
		::System::Boolean BEMMCKLJICI; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGKCIKPHJJB_CTOR_OFFSET))(this);
		}

		static ::BGKCIKPHJJB* BPLPBPMEODA(::System::Single a1)
		{
			return ((::BGKCIKPHJJB*(*)(::System::Single))((::PBYTE)hIl2Cpp + BGKCIKPHJJB_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGKCIKPHJJB_ONEXECUTE_OFFSET))(this);
		}

		::System::Void EPJFIHHDMAK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGKCIKPHJJB_EPJFIHHDMAK_OFFSET))(this);
		}

		::System::Void OnClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGKCIKPHJJB_ONCLEAR_OFFSET))(this);
		}

		::System::Void KMNEJMOJEPC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGKCIKPHJJB_KMNEJMOJEPC_OFFSET))(this);
		}

	};
