#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
class DPKCGMGFJAD;
class OIHNAJFFFKB;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EKJLLMDCNPO_BJEIGEOOFOA_OFFSET UNITYSDK_OFFSET(0x1550BF80)
#define EKJLLMDCNPO_CTOR_OFFSET UNITYSDK_OFFSET(0x1550C5C0)
#define EKJLLMDCNPO_DIINAFAMNON_OFFSET UNITYSDK_OFFSET(0x1550C3E0)
#define EKJLLMDCNPO_GIBGHDHCHHG_OFFSET UNITYSDK_OFFSET(0x1550C330)
#define EKJLLMDCNPO_ODGBJHIDJKD_OFFSET UNITYSDK_OFFSET(0x1550BE40)

	class EKJLLMDCNPO : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::OIHNAJFFFKB*>* MHENFLMFDBK; // 0x10
		::DPKCGMGFJAD* CEFLLELKFOP; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKJLLMDCNPO_CTOR_OFFSET))(this);
		}

		::OIHNAJFFFKB* ODGBJHIDJKD(::System::UInt32 a1)
		{
			return ((::OIHNAJFFFKB*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EKJLLMDCNPO_ODGBJHIDJKD_OFFSET))(this, a1);
		}

		::System::UInt32 BJEIGEOOFOA(::System::Double a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + EKJLLMDCNPO_BJEIGEOOFOA_OFFSET))(this, a1);
		}

		::RPG::Client::TextID GIBGHDHCHHG(::System::Double a1)
		{
			return ((::RPG::Client::TextID(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + EKJLLMDCNPO_GIBGHDHCHHG_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* DIINAFAMNON()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EKJLLMDCNPO_DIINAFAMNON_OFFSET))(this);
		}

	};
