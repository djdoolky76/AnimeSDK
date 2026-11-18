#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define BNDIBFGHLKF_KHOIGKBOFHC_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0xFF8F110)
#define BNDIBFGHLKF_KHOIGKBOFHC__CTOR_OFFSET UNITYSDK_OFFSET(0xFF8F100)

inline static constexpr unsigned int BNDIBFGHLKF_KHOIGKBOFHC_TypeDefinitionIndex = 77905;

class BNDIBFGHLKF_KHOIGKBOFHC : public ::System::Object
{
public:
	::System::String* GDGGMIJHAJJ; // 0x10
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x18
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNDIBFGHLKF_KHOIGKBOFHC__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNDIBFGHLKF_KHOIGKBOFHC_PNGOHNLELDJ_OFFSET))(this);
	}
};
