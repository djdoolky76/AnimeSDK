#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BNDBNODKGAP_GEJMMOILJIA;
namespace System::Collections { class IEnumerator; }

#define BNDBNODKGAP_MEPKIIJOJMC_KOFKMNGFHKH_OFFSET UNITYSDK_OFFSET(0x113FC820)
#define BNDBNODKGAP_MEPKIIJOJMC__CTOR_OFFSET UNITYSDK_OFFSET(0x113FC810)

inline static constexpr unsigned int BNDBNODKGAP_MEPKIIJOJMC_TypeDefinitionIndex = 78408;

class BNDBNODKGAP_MEPKIIJOJMC : public ::System::Object
{
public:
	::BNDBNODKGAP_GEJMMOILJIA* EEMOEMFLABI; // 0x10
	::System::Single OJGFLMPNPIC; // 0x18
	::System::Single KMEAHOLHIOH; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNDBNODKGAP_MEPKIIJOJMC__CTOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* KOFKMNGFHKH()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + BNDBNODKGAP_MEPKIIJOJMC_KOFKMNGFHKH_OFFSET))(this);
	}
};
