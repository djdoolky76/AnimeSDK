#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class NEJLIGKNHCC;
class NEJLIGKNHCC_GONOHDPNHKO;
namespace Collections::Pooled { template <typename T1, typename T2> class PooledDictionary_2; }

#define NEJLIGKNHCC___C__DISPLAYCLASS30_0_CTOR_OFFSET UNITYSDK_OFFSET(0xBB65670)

	class NEJLIGKNHCC___c__DisplayClass30_0 : public ::System::Object
	{
	public:
		::NEJLIGKNHCC* __4__this; // 0x10
		::Collections::Pooled::PooledDictionary_2<::System::Int64, ::UnityEngine::Vector3>* occupiedCandidates; // 0x18
		::NEJLIGKNHCC_GONOHDPNHKO* candidatePool; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEJLIGKNHCC___C__DISPLAYCLASS30_0_CTOR_OFFSET))(this);
		}

	};
