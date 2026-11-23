#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriMonoBehaviour.h"

class ACF2E42F2D9AC432;
namespace CriWare { class CriAtomListener; }
namespace CriWare { class CriAtomSourceBase; }
namespace CriWare { class CriAtomTransceiver; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CRIWARE_CRIATOMREGION_A76D76DF9CBE75B8_OFFSET UNITYSDK_OFFSET(0x2AB9760)
#define CRIWARE_CRIATOMREGION_AB36E0EE549986E5_OFFSET UNITYSDK_OFFSET(0x2A554D0)
#define CRIWARE_CRIATOMREGION_AD0E3C9C53DB18AA_OFFSET UNITYSDK_OFFSET(0x1BF9BA0)
#define CRIWARE_CRIATOMREGION_AF681D04F0E4B6CC_OFFSET UNITYSDK_OFFSET(0x2AB97D0)
#define CRIWARE_CRIATOMREGION_B1B9BA38E0D9AB73_OFFSET UNITYSDK_OFFSET(0x2AB9A20)
#define CRIWARE_CRIATOMREGION_B5B4F68A9D0C6F29_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define CRIWARE_CRIATOMREGION_BF13C91AD80643D2_OFFSET UNITYSDK_OFFSET(0x2AB9AB0)
#define CRIWARE_CRIATOMREGION_E192657B25556063_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define CRIWARE_CRIATOMREGION_E71DB18640A4ABD5_OFFSET UNITYSDK_OFFSET(0x17395E0)
#define CRIWARE_CRIATOMREGION_FDBCDBBFE02CD51A_OFFSET UNITYSDK_OFFSET(0x2AB9740)
#define CRIWARE_CRIATOMREGION__CTOR_OFFSET UNITYSDK_OFFSET(0x2AB9B30)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomRegion_TypeDefinitionIndex = 19182;

	class CriAtomRegion : public ::CriWare::CriMonoBehaviour
	{
	public:
		::ACF2E42F2D9AC432* A748D9724E1BF34C; // 0x30
		::System::Collections::Generic::List_1<::CriWare::CriAtomSourceBase*>* B06DDEEC4A483F25; // 0x38
		::System::Collections::Generic::List_1<::CriWare::CriAtomListener*>* F910F8843DEBCDC1; // 0x40
		::System::Collections::Generic::List_1<::CriWare::CriAtomTransceiver*>* FB012A036E494D3B; // 0x48

		::ACF2E42F2D9AC432* E71DB18640A4ABD5()
		{
			return ((::ACF2E42F2D9AC432*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMREGION_E71DB18640A4ABD5_OFFSET))(this);
		}

		::System::Void BF13C91AD80643D2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMREGION_BF13C91AD80643D2_OFFSET))(this);
		}

		::System::Void B1B9BA38E0D9AB73()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMREGION_B1B9BA38E0D9AB73_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMREGION__CTOR_OFFSET))(this);
		}

		::System::Void B5B4F68A9D0C6F29()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMREGION_B5B4F68A9D0C6F29_OFFSET))(this);
		}

		::System::Void AB36E0EE549986E5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMREGION_AB36E0EE549986E5_OFFSET))(this);
		}

		::System::Void E192657B25556063()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMREGION_E192657B25556063_OFFSET))(this);
		}

		::System::Void AF681D04F0E4B6CC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMREGION_AF681D04F0E4B6CC_OFFSET))(this);
		}

		::System::Void FDBCDBBFE02CD51A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMREGION_FDBCDBBFE02CD51A_OFFSET))(this);
		}

		::System::Void AD0E3C9C53DB18AA(::ACF2E42F2D9AC432* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::ACF2E42F2D9AC432*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMREGION_AD0E3C9C53DB18AA_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void A76D76DF9CBE75B8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMREGION_A76D76DF9CBE75B8_OFFSET))(this);
		}
	};
}
