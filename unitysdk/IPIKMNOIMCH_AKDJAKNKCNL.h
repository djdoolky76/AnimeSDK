#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PIOMHDMPINF.h"

namespace UnityEngine { class Transform; }

#define IPIKMNOIMCH_AKDJAKNKCNL_LBJEOHBBBPN_OFFSET UNITYSDK_OFFSET(0x13827120)
#define IPIKMNOIMCH_AKDJAKNKCNL__CTOR_OFFSET UNITYSDK_OFFSET(0x13827270)

inline static constexpr unsigned int IPIKMNOIMCH_AKDJAKNKCNL_TypeDefinitionIndex = 70378;

class IPIKMNOIMCH_AKDJAKNKCNL : public ::PIOMHDMPINF
{
public:
	::UnityEngine::Transform* JCFNKFNFOMI; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPIKMNOIMCH_AKDJAKNKCNL__CTOR_OFFSET))(this);
	}

	::System::Boolean LBJEOHBBBPN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IPIKMNOIMCH_AKDJAKNKCNL_LBJEOHBBBPN_OFFSET))(this);
	}
};
