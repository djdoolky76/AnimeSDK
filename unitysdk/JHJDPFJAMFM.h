#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JGONPCLBCDC.h"

class DAKDOMLMDGC;
namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }
namespace MoleMole::GalGame { class MainCityChatTransitionPlayNarratorScreenNode; }

#define JHJDPFJAMFM_GLEJMKLOMBP_OFFSET UNITYSDK_OFFSET(0x13844000)
#define JHJDPFJAMFM_ICPMADMLEMI_OFFSET UNITYSDK_OFFSET(0x138441A0)
#define JHJDPFJAMFM_LIDIODHDJAF_OFFSET UNITYSDK_OFFSET(0x13844230)
#define JHJDPFJAMFM_LJPBLJDADAA_OFFSET UNITYSDK_OFFSET(0x13843FC0)
#define JHJDPFJAMFM__CTOR_OFFSET UNITYSDK_OFFSET(0x13843F40)

inline static constexpr unsigned int JHJDPFJAMFM_TypeDefinitionIndex = 52473;

class JHJDPFJAMFM : public ::JGONPCLBCDC
{
public:
	::MoleMole::GalGame::MainCityChatTransitionPlayNarratorScreenNode* CEJENBBHBBG; // 0x40

	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* ONBDAIKININ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + JHJDPFJAMFM__CTOR_OFFSET))(this, ONBDAIKININ);
	}

	::System::Boolean LJPBLJDADAA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JHJDPFJAMFM_LJPBLJDADAA_OFFSET))(this);
	}

	::System::Void GLEJMKLOMBP(::DAKDOMLMDGC* CBKKFECGFAG)
	{
		return ((::System::Void(*)(::PVOID, ::DAKDOMLMDGC*))((::PBYTE)hIl2Cpp + JHJDPFJAMFM_GLEJMKLOMBP_OFFSET))(this, CBKKFECGFAG);
	}

	::System::Boolean ICPMADMLEMI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JHJDPFJAMFM_ICPMADMLEMI_OFFSET))(this);
	}

	::System::Void LIDIODHDJAF(::DAKDOMLMDGC* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::DAKDOMLMDGC*))((::PBYTE)hIl2Cpp + JHJDPFJAMFM_LIDIODHDJAF_OFFSET))(this, MIALFKCCCPI);
	}
};
