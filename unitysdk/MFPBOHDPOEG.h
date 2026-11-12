#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class INFBEJJNIJO;
namespace RPG::GameCore { class GameWorld; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MFPBOHDPOEG_ACEJGJAAHDD_OFFSET UNITYSDK_OFFSET(0xC1C3240)
#define MFPBOHDPOEG_CTOR_OFFSET UNITYSDK_OFFSET(0xC1C3430)
#define MFPBOHDPOEG_FIPDBFMPEKH_OFFSET UNITYSDK_OFFSET(0xC1C3160)
#define MFPBOHDPOEG_GCDPKOICNLK_OFFSET UNITYSDK_OFFSET(0xC1C3110)
#define MFPBOHDPOEG_OEGMIFOIMCI_OFFSET UNITYSDK_OFFSET(0xC1C30C0)

inline static constexpr unsigned int MFPBOHDPOEG_TypeDefinitionIndex = 57602;

	class MFPBOHDPOEG : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::INFBEJJNIJO*>* HLMNPOPCCAG; // 0x10
		::RPG::GameCore::GameWorld* IMMBMILPPFB; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFPBOHDPOEG_CTOR_OFFSET))(this);
		}

		::System::Void OEGMIFOIMCI(::RPG::GameCore::GameWorld* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + MFPBOHDPOEG_OEGMIFOIMCI_OFFSET))(this, a1);
		}

		::System::Void GCDPKOICNLK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFPBOHDPOEG_GCDPKOICNLK_OFFSET))(this);
		}

		::System::Void FIPDBFMPEKH(::INFBEJJNIJO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::INFBEJJNIJO*))((::PBYTE)hIl2Cpp + MFPBOHDPOEG_FIPDBFMPEKH_OFFSET))(this, a1);
		}

		::System::Boolean ACEJGJAAHDD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MFPBOHDPOEG_ACEJGJAAHDD_OFFSET))(this);
		}

	};
