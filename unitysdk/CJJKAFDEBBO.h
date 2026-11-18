#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JGONPCLBCDC.h"
#include "unitysdk/AGAFGMPKAFA.h"
#include "unitysdk/ELDDLDNMFHN.h"

class DAKDOMLMDGC;
namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }
namespace MoleMole::GalGame { class MainCityChatTransitionPlayTransitionNode; }

#define CJJKAFDEBBO_AGEAIHPFMKP_OFFSET UNITYSDK_OFFSET(0x15338BD0)
#define CJJKAFDEBBO_BCBHOANJJDN_OFFSET UNITYSDK_OFFSET(0x15338130)
#define CJJKAFDEBBO_GLEJMKLOMBP_OFFSET UNITYSDK_OFFSET(0x153380A0)
#define CJJKAFDEBBO_HBBGJPNIJEC_OFFSET UNITYSDK_OFFSET(0x15338D90)
#define CJJKAFDEBBO_LIDIODHDJAF_OFFSET UNITYSDK_OFFSET(0x15338D00)
#define CJJKAFDEBBO_MBLOCGPIGJA_OFFSET UNITYSDK_OFFSET(0x15338650)
#define CJJKAFDEBBO_NFOAEMNPKFN_OFFSET UNITYSDK_OFFSET(0x153390C0)
#define CJJKAFDEBBO_OPEKCJJMHKF_OFFSET UNITYSDK_OFFSET(0x15338400)
#define CJJKAFDEBBO__CTOR_OFFSET UNITYSDK_OFFSET(0x15338020)

inline static constexpr unsigned int CJJKAFDEBBO_TypeDefinitionIndex = 74160;

class CJJKAFDEBBO : public ::JGONPCLBCDC
{
public:
	::MoleMole::GalGame::MainCityChatTransitionPlayTransitionNode* CEJENBBHBBG; // 0x40

	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* ONBDAIKININ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + CJJKAFDEBBO__CTOR_OFFSET))(this, ONBDAIKININ);
	}

	::System::Void GLEJMKLOMBP(::DAKDOMLMDGC* CBKKFECGFAG)
	{
		return ((::System::Void(*)(::PVOID, ::DAKDOMLMDGC*))((::PBYTE)hIl2Cpp + CJJKAFDEBBO_GLEJMKLOMBP_OFFSET))(this, CBKKFECGFAG);
	}

	::System::Void MBLOCGPIGJA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJJKAFDEBBO_MBLOCGPIGJA_OFFSET))(this);
	}

	::System::Void OPEKCJJMHKF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJJKAFDEBBO_OPEKCJJMHKF_OFFSET))(this);
	}

	::System::Void LIDIODHDJAF(::DAKDOMLMDGC* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::DAKDOMLMDGC*))((::PBYTE)hIl2Cpp + CJJKAFDEBBO_LIDIODHDJAF_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void HBBGJPNIJEC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJJKAFDEBBO_HBBGJPNIJEC_OFFSET))(this);
	}

	::System::Void AGEAIHPFMKP(::AGAFGMPKAFA EPBHBCMCMOK, ::ELDDLDNMFHN& GLPALMOOLLE)
	{
		return ((::System::Void(*)(::PVOID, ::AGAFGMPKAFA, ::ELDDLDNMFHN&))((::PBYTE)hIl2Cpp + CJJKAFDEBBO_AGEAIHPFMKP_OFFSET))(this, EPBHBCMCMOK, GLPALMOOLLE);
	}

	::System::Void BCBHOANJJDN(::DAKDOMLMDGC* CBKKFECGFAG)
	{
		return ((::System::Void(*)(::PVOID, ::DAKDOMLMDGC*))((::PBYTE)hIl2Cpp + CJJKAFDEBBO_BCBHOANJJDN_OFFSET))(this, CBKKFECGFAG);
	}

	::System::Void NFOAEMNPKFN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJJKAFDEBBO_NFOAEMNPKFN_OFFSET))(this);
	}
};
