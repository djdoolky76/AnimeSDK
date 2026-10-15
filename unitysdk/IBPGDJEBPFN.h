#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FDBODHHKGFB;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IBPGDJEBPFN_BPDIGKDIJKN_OFFSET UNITYSDK_OFFSET(0x1C68E4A0)
#define IBPGDJEBPFN_CTOR_OFFSET UNITYSDK_OFFSET(0x1C68E500)

	class IBPGDJEBPFN : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::FDBODHHKGFB*>* DHPACGHECNM; // 0x10
		::System::Single IFEPJHGNCOI; // 0x18
		::System::Single IEHPFADHJFD; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBPGDJEBPFN_CTOR_OFFSET))(this);
		}

		::System::Boolean BPDIGKDIJKN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IBPGDJEBPFN_BPDIGKDIJKN_OFFSET))(this);
		}

	};
