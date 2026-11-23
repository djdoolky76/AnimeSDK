#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"
#include "unitysdk/UnityEngine/Vector3.h"

class ADF8713CB0CBAE91;

#define AED6BDB09EF9B1F6__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int AED6BDB09EF9B1F6_TypeDefinitionIndex = 1052;

class AED6BDB09EF9B1F6 : public ::E379DE61A548837D
{
public:
	::ADF8713CB0CBAE91* ECC2C8C1BB93DFD8; // 0x38
	::UnityEngine::Vector3 A6D815BDB74CADAC; // 0x40
	::UnityEngine::Vector3 EC9E929DFDBAC3E9; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AED6BDB09EF9B1F6__CTOR_OFFSET))(this);
	}
};
