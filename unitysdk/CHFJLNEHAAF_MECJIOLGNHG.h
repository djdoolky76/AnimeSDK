#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CHFJLNEHAAF_LNKGCGDKHHA;
namespace System::Net { class HttpWebRequest; }

#define CHFJLNEHAAF_MECJIOLGNHG_OOAAOBFGJLK_OFFSET UNITYSDK_OFFSET(0x1325A210)
#define CHFJLNEHAAF_MECJIOLGNHG__CTOR_OFFSET UNITYSDK_OFFSET(0x1325A200)

inline static constexpr unsigned int CHFJLNEHAAF_MECJIOLGNHG_TypeDefinitionIndex = 87346;

class CHFJLNEHAAF_MECJIOLGNHG : public ::System::Object
{
public:
	::CHFJLNEHAAF_LNKGCGDKHHA* BCBPKKCOJHB; // 0x10
	::System::Net::HttpWebRequest* HEJIBNEHLIG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFJLNEHAAF_MECJIOLGNHG__CTOR_OFFSET))(this);
	}

	::System::Void OOAAOBFGJLK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFJLNEHAAF_MECJIOLGNHG_OOAAOBFGJLK_OFFSET))(this);
	}
};
