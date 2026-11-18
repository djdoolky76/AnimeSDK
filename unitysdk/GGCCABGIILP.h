#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/EventArgs.h"

class OKHOJCKHDAJ;
namespace System { class Object; }

#define GGCCABGIILP_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x20051620)
#define GGCCABGIILP__CTOR_OFFSET UNITYSDK_OFFSET(0x200516C0)

inline static constexpr unsigned int GGCCABGIILP_TypeDefinitionIndex = 17996;

class GGCCABGIILP : public ::System::EventArgs
{
public:
	::System::Object* EGEGIMGMJHN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGCCABGIILP__CTOR_OFFSET))(this);
	}

	::OKHOJCKHDAJ* DGNAAPGKIPL()
	{
		return ((::OKHOJCKHDAJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGCCABGIILP_DGNAAPGKIPL_OFFSET))(this);
	}
};
