#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BCNMLILBENC;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FGNNHFLGJBK_CTOR_OFFSET UNITYSDK_OFFSET(0x1576D390)
#define FGNNHFLGJBK_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0x1576D310)

	class FGNNHFLGJBK : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::BCNMLILBENC*>* JONGMMPJEIA; // 0x10
		::System::Single CDJLMJDEPJA; // 0x18
		::System::Single PIMDCJGDHMG; // 0x1C
		::System::Boolean KPHIFEFPPDD; // 0x20
		::System::Byte _padding0[0x3];
		::System::Single CNHMBFIHLPC; // 0x24
		::System::Int32 NOIIIOKMIIN; // 0x28
		::System::Single GJGKKECHEHH; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGNNHFLGJBK_CTOR_OFFSET))(this);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGNNHFLGJBK_PJPFIHFAHGO_OFFSET))(this);
		}

	};
