#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NBPHDOPHNKH;
namespace System { class String; }

#define KNLEMBFCBCO_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C909BC0)
#define KNLEMBFCBCO_CTOR_OFFSET UNITYSDK_OFFSET(0x1C909C50)

	class KNLEMBFCBCO : public ::System::Object
	{
	public:
		::NBPHDOPHNKH* CNLHCKELLBE; // 0x10
		::System::String* OENAMINOLLF; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNLEMBFCBCO_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNLEMBFCBCO_CLEAR_OFFSET))(this);
		}

	};
