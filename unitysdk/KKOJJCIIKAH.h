#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class COPMGEHDGNP;
class OKIBHNGFOLI;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KKOJJCIIKAH_AKJDHPLMFEG_OFFSET UNITYSDK_OFFSET(0xB4D7300)
#define KKOJJCIIKAH_AOPMFJBFKLG_OFFSET UNITYSDK_OFFSET(0xB4D6B10)
#define KKOJJCIIKAH_CMLKHFGEPHC_OFFSET UNITYSDK_OFFSET(0xB4D6940)
#define KKOJJCIIKAH_CTOR_OFFSET UNITYSDK_OFFSET(0xB4D6910)
#define KKOJJCIIKAH_FLNENANCDOL_OFFSET UNITYSDK_OFFSET(0xB4D73F0)

inline static constexpr unsigned int KKOJJCIIKAH_TypeDefinitionIndex = 82083;

	class KKOJJCIIKAH : public ::System::Object
	{
	public:
		::COPMGEHDGNP* NGKPKBEGEGG; // 0x10
		::OKIBHNGFOLI* JDGBDKHIEGG; // 0x18
		::System::Collections::Generic::HashSet_1<::System::UInt32>* PNECLJKDONF; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKOJJCIIKAH_CTOR_OFFSET))(this);
		}

		::System::Void CMLKHFGEPHC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KKOJJCIIKAH_CMLKHFGEPHC_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* AOPMFJBFKLG()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KKOJJCIIKAH_AOPMFJBFKLG_OFFSET))(this);
		}

		::System::Void AKJDHPLMFEG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKOJJCIIKAH_AKJDHPLMFEG_OFFSET))(this);
		}

		::System::Boolean FLNENANCDOL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KKOJJCIIKAH_FLNENANCDOL_OFFSET))(this);
		}

	};
