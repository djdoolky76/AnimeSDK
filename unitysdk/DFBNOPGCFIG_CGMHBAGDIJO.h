#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DFBNOPGCFIG_LJEGNFLHNJA;
class IFOHGNLIAKH;
namespace System { template <typename T> class Action_1; }

#define DFBNOPGCFIG_CGMHBAGDIJO_AJEHCEJJBNG_OFFSET UNITYSDK_OFFSET(0x13E4A9F0)
#define DFBNOPGCFIG_CGMHBAGDIJO__CTOR_OFFSET UNITYSDK_OFFSET(0x13E4A9E0)

inline static constexpr unsigned int DFBNOPGCFIG_CGMHBAGDIJO_TypeDefinitionIndex = 71151;

class DFBNOPGCFIG_CGMHBAGDIJO : public ::System::Object
{
public:
	::System::Action_1<::IFOHGNLIAKH*>* IMDHDEKCNNG; // 0x10
	::DFBNOPGCFIG_LJEGNFLHNJA* FGBNBFHOKAA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFBNOPGCFIG_CGMHBAGDIJO__CTOR_OFFSET))(this);
	}

	::System::Void AJEHCEJJBNG(::IFOHGNLIAKH* JOLDOMEIKEF)
	{
		return ((::System::Void(*)(::PVOID, ::IFOHGNLIAKH*))((::PBYTE)hIl2Cpp + DFBNOPGCFIG_CGMHBAGDIJO_AJEHCEJJBNG_OFFSET))(this, JOLDOMEIKEF);
	}
};
