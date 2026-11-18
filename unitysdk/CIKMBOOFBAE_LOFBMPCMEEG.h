#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CIKMBOOFBAE;
class GNADGLJNENI;
class IMEMNOKFCOB;
class MJKKBBPPPPE;
namespace System { template <typename T> class Action_1; }

#define CIKMBOOFBAE_LOFBMPCMEEG_DHCFKPPHDFO_OFFSET UNITYSDK_OFFSET(0x153376C0)
#define CIKMBOOFBAE_LOFBMPCMEEG_OPEIKJBIBJP_OFFSET UNITYSDK_OFFSET(0x153374A0)
#define CIKMBOOFBAE_LOFBMPCMEEG__CTOR_OFFSET UNITYSDK_OFFSET(0x15337490)

inline static constexpr unsigned int CIKMBOOFBAE_LOFBMPCMEEG_TypeDefinitionIndex = 77533;

class CIKMBOOFBAE_LOFBMPCMEEG : public ::System::Object
{
public:
	::CIKMBOOFBAE* KLHPEBKNIFB; // 0x10
	::GNADGLJNENI* BPFPJDBABGB; // 0x18
	::System::Action_1<::MJKKBBPPPPE*>* FFMGICPLKFB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIKMBOOFBAE_LOFBMPCMEEG__CTOR_OFFSET))(this);
	}

	::System::Void OPEIKJBIBJP(::IMEMNOKFCOB* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::IMEMNOKFCOB*))((::PBYTE)hIl2Cpp + CIKMBOOFBAE_LOFBMPCMEEG_OPEIKJBIBJP_OFFSET))(this, GLAOEHCGCFO);
	}

	::System::Void DHCFKPPHDFO(::MJKKBBPPPPE* EKPIAGDPOMI)
	{
		return ((::System::Void(*)(::PVOID, ::MJKKBBPPPPE*))((::PBYTE)hIl2Cpp + CIKMBOOFBAE_LOFBMPCMEEG_DHCFKPPHDFO_OFFSET))(this, EKPIAGDPOMI);
	}
};
