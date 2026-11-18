#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJEJBPGJPJN.h"

namespace System { template <typename T> class Action_1; }
template <typename T> class IHECGHKOIPM_1;
template <typename T> class LJHFMILANJA_1;

#define OHGHGCCCHPL_MCCEHJLHDFO_OFFSET UNITYSDK_OFFSET(0x11B2D9A0)
#define OHGHGCCCHPL_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x11B2D800)
#define OHGHGCCCHPL__CTOR_OFFSET UNITYSDK_OFFSET(0x11B2D990)

inline static constexpr unsigned int OHGHGCCCHPL_TypeDefinitionIndex = 47923;

class OHGHGCCCHPL : public ::JJEJBPGJPJN
{
public:
	::System::Action_1<::System::Int32>* KCMCFIBMPBK; // 0x88
	::LJHFMILANJA_1<::System::Int32>* FDOGGANACAP; // 0x90
	::IHECGHKOIPM_1<::System::Boolean>* DPIIPEIDMGK; // 0x98
	::LJHFMILANJA_1<::System::Boolean>* MAMNIGKOFLN; // 0xA0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHGHGCCCHPL__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHGHGCCCHPL_ONCREATEPROPERTY_OFFSET))(this);
	}

	::System::Boolean MCCEHJLHDFO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OHGHGCCCHPL_MCCEHJLHDFO_OFFSET))(this);
	}
};
