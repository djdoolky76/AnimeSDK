#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PJHKDJEGJOG;
namespace System { class Action; }

#define AOKFPNKJOON_HNIMHEIPNON_EKAAOIPJOBK_OFFSET UNITYSDK_OFFSET(0x13600D40)
#define AOKFPNKJOON_HNIMHEIPNON__CTOR_OFFSET UNITYSDK_OFFSET(0x13600D30)

inline static constexpr unsigned int AOKFPNKJOON_HNIMHEIPNON_TypeDefinitionIndex = 51462;

class AOKFPNKJOON_HNIMHEIPNON : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10
	::System::Action* DLMJCFBENGB; // 0x18
	::PJHKDJEGJOG* AAOCANGHBDG; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOKFPNKJOON_HNIMHEIPNON__CTOR_OFFSET))(this);
	}

	::System::Void EKAAOIPJOBK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOKFPNKJOON_HNIMHEIPNON_EKAAOIPJOBK_OFFSET))(this);
	}
};
