#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GFHOCGNJKEF;
class MENMIHAMGKH_JJOPNGPGCMI;

#define MENMIHAMGKH_JDKDLJMMJOJ_LJHDGNAEDIC_OFFSET UNITYSDK_OFFSET(0x177B8AF0)
#define MENMIHAMGKH_JDKDLJMMJOJ__CTOR_OFFSET UNITYSDK_OFFSET(0x177B8AE0)

inline static constexpr unsigned int MENMIHAMGKH_JDKDLJMMJOJ_TypeDefinitionIndex = 63375;

class MENMIHAMGKH_JDKDLJMMJOJ : public ::System::Object
{
public:
	::MENMIHAMGKH_JJOPNGPGCMI* FGBNBFHOKAA; // 0x10
	::System::Int32 HBJOLKHGGDD; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MENMIHAMGKH_JDKDLJMMJOJ__CTOR_OFFSET))(this);
	}

	::System::Boolean LJHDGNAEDIC(::GFHOCGNJKEF* MPCFCIMLKEG)
	{
		return ((::System::Boolean(*)(::PVOID, ::GFHOCGNJKEF*))((::PBYTE)hIl2Cpp + MENMIHAMGKH_JDKDLJMMJOJ_LJHDGNAEDIC_OFFSET))(this, MPCFCIMLKEG);
	}
};
