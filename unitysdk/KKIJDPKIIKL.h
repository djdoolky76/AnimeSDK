#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ECCKLFIHNOH;
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define KKIJDPKIIKL_BKMEKDFEMHN_OFFSET UNITYSDK_OFFSET(0xB4C6BA0)
#define KKIJDPKIIKL_CTOR_OFFSET UNITYSDK_OFFSET(0xB4C6BF0)
#define KKIJDPKIIKL_EBMPFGGIMLE_OFFSET UNITYSDK_OFFSET(0xB4C6530)
#define KKIJDPKIIKL_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0xB4C6A40)
#define KKIJDPKIIKL_KABMPEPKGFP_OFFSET UNITYSDK_OFFSET(0xB4C6380)

inline static constexpr unsigned int KKIJDPKIIKL_TypeDefinitionIndex = 68222;

	class KKIJDPKIIKL : public ::System::Object
	{
	public:
		::System::Collections::Generic::IList_1<::ECCKLFIHNOH*>* AFLBCMIPNEG; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKIJDPKIIKL_CTOR_OFFSET))(this);
		}

		::System::Void KABMPEPKGFP(::ECCKLFIHNOH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ECCKLFIHNOH*))((::PBYTE)hIl2Cpp + KKIJDPKIIKL_KABMPEPKGFP_OFFSET))(this, a1);
		}

		::System::Void EBMPFGGIMLE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKIJDPKIIKL_EBMPFGGIMLE_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::ECCKLFIHNOH*>* FPHGMAMDFHE()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::ECCKLFIHNOH*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KKIJDPKIIKL_FPHGMAMDFHE_OFFSET))(this);
		}

		::System::Void BKMEKDFEMHN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKIJDPKIIKL_BKMEKDFEMHN_OFFSET))(this);
		}

	};
