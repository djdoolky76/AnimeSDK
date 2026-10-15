#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
class OEJLGHGHNMH;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NDKFABDEBDF_CTOR_OFFSET UNITYSDK_OFFSET(0xBB4B180)
#define NDKFABDEBDF_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBB4AB50)
#define NDKFABDEBDF_LMCEDCHJKFF_OFFSET UNITYSDK_OFFSET(0xBB4AAC0)
#define NDKFABDEBDF_LNAMNLIEHMC_OFFSET UNITYSDK_OFFSET(0xBB4ABA0)
#define NDKFABDEBDF_OGCLOCGDCJK_OFFSET UNITYSDK_OFFSET(0xBB4B0A0)
#define NDKFABDEBDF_TICK_OFFSET UNITYSDK_OFFSET(0xBB4AE30)

inline static constexpr unsigned int NDKFABDEBDF_TypeDefinitionIndex = 57230;

	class NDKFABDEBDF : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::System::Collections::Generic::List_1<::OEJLGHGHNMH*>* HHLJHPGPBPH; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDKFABDEBDF_CTOR_OFFSET))(this);
		}

		::System::Void LMCEDCHJKFF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDKFABDEBDF_LMCEDCHJKFF_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDKFABDEBDF_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NDKFABDEBDF_TICK_OFFSET))(this, a1);
		}

		::System::Void OGCLOCGDCJK(::OEJLGHGHNMH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OEJLGHGHNMH*))((::PBYTE)hIl2Cpp + NDKFABDEBDF_OGCLOCGDCJK_OFFSET))(this, a1);
		}

		::System::Void LNAMNLIEHMC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDKFABDEBDF_LNAMNLIEHMC_OFFSET))(this);
		}

	};
