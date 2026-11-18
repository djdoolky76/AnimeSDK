#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KDKPDGNDJDN;
namespace System { class Action; }

#define KDKPDGNDJDN_LGIGKBMKNDJ_ACBLEFBJJAC_OFFSET UNITYSDK_OFFSET(0x12980350)
#define KDKPDGNDJDN_LGIGKBMKNDJ_CCDFAJEHPJM_OFFSET UNITYSDK_OFFSET(0x12980370)
#define KDKPDGNDJDN_LGIGKBMKNDJ__CTOR_OFFSET UNITYSDK_OFFSET(0x12980090)

inline static constexpr unsigned int KDKPDGNDJDN_LGIGKBMKNDJ_TypeDefinitionIndex = 38475;

class KDKPDGNDJDN_LGIGKBMKNDJ : public ::System::Object
{
public:
	::KDKPDGNDJDN* KLHPEBKNIFB; // 0x10
	::System::Action* EJGDHCIBCJH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDKPDGNDJDN_LGIGKBMKNDJ__CTOR_OFFSET))(this);
	}

	::System::Void ACBLEFBJJAC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDKPDGNDJDN_LGIGKBMKNDJ_ACBLEFBJJAC_OFFSET))(this);
	}

	::System::Void CCDFAJEHPJM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDKPDGNDJDN_LGIGKBMKNDJ_CCDFAJEHPJM_OFFSET))(this);
	}
};
