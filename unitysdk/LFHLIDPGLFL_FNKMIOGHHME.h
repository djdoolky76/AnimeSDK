#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LFHLIDPGLFL;
namespace System { class Action; }

#define LFHLIDPGLFL_FNKMIOGHHME_EFOPKMHEINF_OFFSET UNITYSDK_OFFSET(0x11F07F30)
#define LFHLIDPGLFL_FNKMIOGHHME__CTOR_OFFSET UNITYSDK_OFFSET(0x11F07F20)

inline static constexpr unsigned int LFHLIDPGLFL_FNKMIOGHHME_TypeDefinitionIndex = 38769;

class LFHLIDPGLFL_FNKMIOGHHME : public ::System::Object
{
public:
	::LFHLIDPGLFL* KLHPEBKNIFB; // 0x10
	::System::Action* LPLMINCCDOL; // 0x18
	::System::Action* JJMIIBPCOMM; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFHLIDPGLFL_FNKMIOGHHME__CTOR_OFFSET))(this);
	}

	::System::Void EFOPKMHEINF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFHLIDPGLFL_FNKMIOGHHME_EFOPKMHEINF_OFFSET))(this);
	}
};
