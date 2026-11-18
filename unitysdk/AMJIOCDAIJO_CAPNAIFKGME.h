#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AMJIOCDAIJO_ALKKEGBOGHM;
class MJPLADANIGH;

#define AMJIOCDAIJO_CAPNAIFKGME_FPNIPCLHMJJ_OFFSET UNITYSDK_OFFSET(0x135F6610)
#define AMJIOCDAIJO_CAPNAIFKGME__CTOR_OFFSET UNITYSDK_OFFSET(0x135F6600)

inline static constexpr unsigned int AMJIOCDAIJO_CAPNAIFKGME_TypeDefinitionIndex = 83689;

class AMJIOCDAIJO_CAPNAIFKGME : public ::System::Object
{
public:
	::MJPLADANIGH* PPIDFLBLIBN; // 0x10
	::AMJIOCDAIJO_ALKKEGBOGHM* FGBNBFHOKAA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMJIOCDAIJO_CAPNAIFKGME__CTOR_OFFSET))(this);
	}

	::System::Void FPNIPCLHMJJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMJIOCDAIJO_CAPNAIFKGME_FPNIPCLHMJJ_OFFSET))(this);
	}
};
