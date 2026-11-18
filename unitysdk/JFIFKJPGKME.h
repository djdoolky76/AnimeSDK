#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GEBFFIGBDDC.h"
#include "unitysdk/System/Object.h"

class LHKNJNJDDOF;
namespace System { class String; }

#define JFIFKJPGKME__CTOR_OFFSET UNITYSDK_OFFSET(0x13ACBD30)

inline static constexpr unsigned int JFIFKJPGKME_TypeDefinitionIndex = 38883;

class JFIFKJPGKME : public ::System::Object
{
public:
	::LHKNJNJDDOF* LMHOLDDIHPF; // 0x10
	::System::String* KKOEDKIPHHN; // 0x18
	::System::Single BGGNGGAKEHN; // 0x20
	::System::Boolean MDBOFAFFLHP; // 0x24
	::System::Byte _padding0[0x3];
	::System::Single PLKGCLNKACO; // 0x28
	::GEBFFIGBDDC JBIANEMDKBG; // 0x2C
	::System::Boolean PDGPDNFHHHE; // 0x30
	::System::Boolean HAJHDGFNBDL; // 0x31
	::System::Boolean ADNPFJMKDNM; // 0x32
	::System::Boolean IHLHKABEFCK; // 0x33
	::System::Int32 CNBIILAANGA; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFIFKJPGKME__CTOR_OFFSET))(this);
	}
};
