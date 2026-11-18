#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EPAGLIDMHLO.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Config { class ConfigCurveCtrlLocalPosNode; }
namespace UnityEngine { class Transform; }

#define FIFKHHFLOAN_DFJPMOOOLHM_OFFSET UNITYSDK_OFFSET(0x174FD410)
#define FIFKHHFLOAN_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x174FD000)
#define FIFKHHFLOAN_PCEPOEIOFBN_OFFSET UNITYSDK_OFFSET(0x174FD0B0)
#define FIFKHHFLOAN__CTOR_OFFSET UNITYSDK_OFFSET(0x174FDB30)

inline static constexpr unsigned int FIFKHHFLOAN_TypeDefinitionIndex = 40017;

class FIFKHHFLOAN : public ::EPAGLIDMHLO
{
public:
	::MoleMole::Config::ConfigCurveCtrlLocalPosNode* GKELJPDNGNP; // 0x48
	::UnityEngine::Transform* ACDOKEGBJAO; // 0x50
	::System::Single JJBDDALOOOM; // 0x58
	::UnityEngine::Vector3 FKKALNBFKEI; // 0x5C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIFKHHFLOAN__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIFKHHFLOAN_OJENCMOGDKL_OFFSET))(this);
	}

	::System::Void PCEPOEIOFBN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIFKHHFLOAN_PCEPOEIOFBN_OFFSET))(this);
	}

	::System::Void DFJPMOOOLHM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIFKHHFLOAN_DFJPMOOOLHM_OFFSET))(this);
	}
};
