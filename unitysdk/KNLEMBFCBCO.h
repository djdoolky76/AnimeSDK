#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NBPHDOPHNKH;
namespace System { class String; }

#define KNLEMBFCBCO_CLEAR_OFFSET UNITYSDK_OFFSET(0x1DAB5DF0)
#define KNLEMBFCBCO_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAB5E80)

inline static constexpr unsigned int KNLEMBFCBCO_TypeDefinitionIndex = 44400;

	class KNLEMBFCBCO : public ::System::Object
	{
	public:
		::System::String* OENAMINOLLF; // 0x10
		::NBPHDOPHNKH* CNLHCKELLBE; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNLEMBFCBCO_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNLEMBFCBCO_CLEAR_OFFSET))(this);
		}

	};
