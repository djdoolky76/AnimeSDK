#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AKCGFNKLIBA;
namespace System { class Action; }

#define NBIDOOFJDFH_LAIKEPENPIH_MJMKFFANPBL_OFFSET UNITYSDK_OFFSET(0x13B55C20)
#define NBIDOOFJDFH_LAIKEPENPIH__CTOR_OFFSET UNITYSDK_OFFSET(0x13B55C10)

inline static constexpr unsigned int NBIDOOFJDFH_LAIKEPENPIH_TypeDefinitionIndex = 75328;

class NBIDOOFJDFH_LAIKEPENPIH : public ::System::Object
{
public:
	::System::Action* LOJFLJJAKFJ; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIDOOFJDFH_LAIKEPENPIH__CTOR_OFFSET))(this);
	}

	::System::Void MJMKFFANPBL(::AKCGFNKLIBA* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::AKCGFNKLIBA*))((::PBYTE)hIl2Cpp + NBIDOOFJDFH_LAIKEPENPIH_MJMKFFANPBL_OFFSET))(this, PIIPCLCCOIG);
	}
};
