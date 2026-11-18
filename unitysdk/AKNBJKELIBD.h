#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CLIPPFJKIGI;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AKNBJKELIBD_BEFORERECYCLE_OFFSET UNITYSDK_OFFSET(0x1820C040)
#define AKNBJKELIBD_ILEEFLAOOOM_OFFSET UNITYSDK_OFFSET(0x1820C080)
#define AKNBJKELIBD__CTOR_OFFSET UNITYSDK_OFFSET(0x1820C0F0)

inline static constexpr unsigned int AKNBJKELIBD_TypeDefinitionIndex = 56248;

class AKNBJKELIBD : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::CLIPPFJKIGI*>* GDCLAJFFGDE; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKNBJKELIBD__CTOR_OFFSET))(this);
	}

	::System::Void BeforeRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKNBJKELIBD_BEFORERECYCLE_OFFSET))(this);
	}

	::System::UInt32 ILEEFLAOOOM()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKNBJKELIBD_ILEEFLAOOOM_OFFSET))(this);
	}
};
