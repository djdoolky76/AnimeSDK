#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace UnityEngine::AI { class RVOAgent; }

#define HNDIJDAJBNH_CTOR_OFFSET UNITYSDK_OFFSET(0x1CAED110)

	class HNDIJDAJBNH : public ::System::Object
	{
	public:
		::UnityEngine::AI::RVOAgent* PMDPABEHAKJ; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNDIJDAJBNH_CTOR_OFFSET))(this);
		}

	};
