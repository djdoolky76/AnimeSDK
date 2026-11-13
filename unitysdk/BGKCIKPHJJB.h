#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MLKDDLHNNHH.h"
class BGKCIKPHJJB;
namespace UnityEngine { class Coroutine; }

#define BGKCIKPHJJB_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x151CAE40)
#define BGKCIKPHJJB_CTOR_OFFSET UNITYSDK_OFFSET(0x151CB0D0)
#define BGKCIKPHJJB_EPJFIHHDMAK_OFFSET UNITYSDK_OFFSET(0x151CAFC0)
#define BGKCIKPHJJB_KMNEJMOJEPC_OFFSET UNITYSDK_OFFSET(0x151CB070)
#define BGKCIKPHJJB_ONCLEAR_OFFSET UNITYSDK_OFFSET(0x151CB020)
#define BGKCIKPHJJB_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x151CAED0)

inline static constexpr unsigned int BGKCIKPHJJB_TypeDefinitionIndex = 80103;

	class BGKCIKPHJJB : public ::MLKDDLHNNHH
	{
	public:
		::UnityEngine::Coroutine* NAEJCNNMAKA; // 0x20
		::System::Boolean BEMMCKLJICI; // 0x28
		::System::Byte _padding0[0x3];
		::System::Single HBDJCFFDGDD; // 0x2C
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
