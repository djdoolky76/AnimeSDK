#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define JLDACECJJCF_LEFEAJJBPDO_MFMIINGGKBJ_OFFSET UNITYSDK_OFFSET(0x152A7230)
#define JLDACECJJCF_LEFEAJJBPDO__CTOR_OFFSET UNITYSDK_OFFSET(0x152A7220)

inline static constexpr unsigned int JLDACECJJCF_LEFEAJJBPDO_TypeDefinitionIndex = 89777;

class JLDACECJJCF_LEFEAJJBPDO : public ::System::Object
{
public:
	::System::Action* NLNILOMOMFD; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLDACECJJCF_LEFEAJJBPDO__CTOR_OFFSET))(this);
	}

	::System::Void MFMIINGGKBJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLDACECJJCF_LEFEAJJBPDO_MFMIINGGKBJ_OFFSET))(this);
	}
};
