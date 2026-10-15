#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MLKDDLHNNHH.h"
class JKOHLFGNONN;
namespace UnityEngine { class Coroutine; }

#define JKOHLFGNONN_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB227190)
#define JKOHLFGNONN_CTOR_OFFSET UNITYSDK_OFFSET(0xB227420)
#define JKOHLFGNONN_EPJFIHHDMAK_OFFSET UNITYSDK_OFFSET(0xB227310)
#define JKOHLFGNONN_KMNEJMOJEPC_OFFSET UNITYSDK_OFFSET(0xB2273C0)
#define JKOHLFGNONN_ONCLEAR_OFFSET UNITYSDK_OFFSET(0xB227370)
#define JKOHLFGNONN_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xB227220)

inline static constexpr unsigned int JKOHLFGNONN_TypeDefinitionIndex = 80846;

	class JKOHLFGNONN : public ::MLKDDLHNNHH
	{
	public:
		::UnityEngine::Coroutine* NAEJCNNMAKA; // 0x20
		::System::Single HBDJCFFDGDD; // 0x28
		::System::Boolean BEMMCKLJICI; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKOHLFGNONN_CTOR_OFFSET))(this);
		}

		static ::JKOHLFGNONN* BPLPBPMEODA(::System::Single a1)
		{
			return ((::JKOHLFGNONN*(*)(::System::Single))((::PBYTE)hIl2Cpp + JKOHLFGNONN_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKOHLFGNONN_ONEXECUTE_OFFSET))(this);
		}

		::System::Void EPJFIHHDMAK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKOHLFGNONN_EPJFIHHDMAK_OFFSET))(this);
		}

		::System::Void OnClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKOHLFGNONN_ONCLEAR_OFFSET))(this);
		}

		::System::Void KMNEJMOJEPC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKOHLFGNONN_KMNEJMOJEPC_OFFSET))(this);
		}

	};
