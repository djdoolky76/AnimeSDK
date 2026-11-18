#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Cysharp::Threading::Tasks { class UniTaskCompletionSource; }

#define AGBFEJMILMI_CAFDAOJKBDC_OBIONGLHANG_OFFSET UNITYSDK_OFFSET(0x154EFB40)
#define AGBFEJMILMI_CAFDAOJKBDC_PILCLJMFBLA_OFFSET UNITYSDK_OFFSET(0x154EFB80)
#define AGBFEJMILMI_CAFDAOJKBDC__CTOR_OFFSET UNITYSDK_OFFSET(0x154EFB30)

inline static constexpr unsigned int AGBFEJMILMI_CAFDAOJKBDC_TypeDefinitionIndex = 73243;

class AGBFEJMILMI_CAFDAOJKBDC : public ::System::Object
{
public:
	::Cysharp::Threading::Tasks::UniTaskCompletionSource* KFKLBNDJHFF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGBFEJMILMI_CAFDAOJKBDC__CTOR_OFFSET))(this);
	}

	::System::Void OBIONGLHANG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGBFEJMILMI_CAFDAOJKBDC_OBIONGLHANG_OFFSET))(this);
	}

	::System::Void PILCLJMFBLA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGBFEJMILMI_CAFDAOJKBDC_PILCLJMFBLA_OFFSET))(this);
	}
};
