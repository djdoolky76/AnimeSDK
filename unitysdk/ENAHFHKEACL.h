#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IPNCFCFIKCF.h"

class HGAJKHIMKJP;
class KGBPLDNJLCL;
namespace System { class Action; }

#define ENAHFHKEACL_HFBPONNNLBA_OFFSET UNITYSDK_OFFSET(0x13551020)
#define ENAHFHKEACL__CTOR_OFFSET UNITYSDK_OFFSET(0x13551010)

inline static constexpr unsigned int ENAHFHKEACL_TypeDefinitionIndex = 62607;

class ENAHFHKEACL : public ::IPNCFCFIKCF
{
public:
	::HGAJKHIMKJP* CIGPHKMLGCL; // 0x18
	::HGAJKHIMKJP* HNKPNNEJBAD; // 0x20
	::KGBPLDNJLCL* LJBPECKCCEA; // 0x28

	::System::Void _ctor(::HGAJKHIMKJP* HNKPNNEJBAD, ::HGAJKHIMKJP* CIGPHKMLGCL, ::KGBPLDNJLCL* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::HGAJKHIMKJP*, ::HGAJKHIMKJP*, ::KGBPLDNJLCL*))((::PBYTE)hIl2Cpp + ENAHFHKEACL__CTOR_OFFSET))(this, HNKPNNEJBAD, CIGPHKMLGCL, LJBPECKCCEA);
	}

	::System::Void HFBPONNNLBA(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + ENAHFHKEACL_HFBPONNNLBA_OFFSET))(this, EJGDHCIBCJH);
	}
};
