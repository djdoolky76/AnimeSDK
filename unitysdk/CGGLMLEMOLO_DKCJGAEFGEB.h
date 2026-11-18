#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BKPAAAODNIA;
namespace System { template <typename T> class Action_1; }

#define CGGLMLEMOLO_DKCJGAEFGEB_JECPLPPOBJG_OFFSET UNITYSDK_OFFSET(0x128EFA60)
#define CGGLMLEMOLO_DKCJGAEFGEB_KJHBPBDGKDP_OFFSET UNITYSDK_OFFSET(0x128EFAD0)
#define CGGLMLEMOLO_DKCJGAEFGEB__CTOR_OFFSET UNITYSDK_OFFSET(0x128EFA50)

inline static constexpr unsigned int CGGLMLEMOLO_DKCJGAEFGEB_TypeDefinitionIndex = 46881;

class CGGLMLEMOLO_DKCJGAEFGEB : public ::System::Object
{
public:
	::System::Action_1<::System::Boolean>* EJGDHCIBCJH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGGLMLEMOLO_DKCJGAEFGEB__CTOR_OFFSET))(this);
	}

	::System::Void JECPLPPOBJG(::BKPAAAODNIA* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::BKPAAAODNIA*))((::PBYTE)hIl2Cpp + CGGLMLEMOLO_DKCJGAEFGEB_JECPLPPOBJG_OFFSET))(this, GLAOEHCGCFO);
	}

	::System::Void KJHBPBDGKDP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGGLMLEMOLO_DKCJGAEFGEB_KJHBPBDGKDP_OFFSET))(this);
	}
};
