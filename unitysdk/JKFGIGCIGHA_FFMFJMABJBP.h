#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define JKFGIGCIGHA_FFMFJMABJBP_EGOKDPAIOFM_OFFSET UNITYSDK_OFFSET(0x17B2D190)
#define JKFGIGCIGHA_FFMFJMABJBP__CTOR_OFFSET UNITYSDK_OFFSET(0x17B2D180)

inline static constexpr unsigned int JKFGIGCIGHA_FFMFJMABJBP_TypeDefinitionIndex = 71639;

class JKFGIGCIGHA_FFMFJMABJBP : public ::System::Object
{
public:
	::System::Action* BLLNHDIDKPA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKFGIGCIGHA_FFMFJMABJBP__CTOR_OFFSET))(this);
	}

	::System::Void EGOKDPAIOFM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKFGIGCIGHA_FFMFJMABJBP_EGOKDPAIOFM_OFFSET))(this);
	}
};
