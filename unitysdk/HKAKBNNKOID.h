#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"
class NJKFOJJDGGG;

#define HKAKBNNKOID_CTOR_OFFSET UNITYSDK_OFFSET(0x16C8EB10)
#define HKAKBNNKOID_GET_COSTEDCOIN_OFFSET UNITYSDK_OFFSET(0x16C8EC90)
#define HKAKBNNKOID_GET_COSTEDTHRESHOLD_OFFSET UNITYSDK_OFFSET(0x16C8ECB0)
#define HKAKBNNKOID_IKOHLHDGFKH_OFFSET UNITYSDK_OFFSET(0x16C8EB40)
#define HKAKBNNKOID_SET_COSTEDCOIN_OFFSET UNITYSDK_OFFSET(0x16C8ECA0)
#define HKAKBNNKOID_SET_COSTEDTHRESHOLD_OFFSET UNITYSDK_OFFSET(0x16C8ECC0)
#define HKAKBNNKOID_UPDATE_OFFSET UNITYSDK_OFFSET(0x16C8EC10)

inline static constexpr unsigned int HKAKBNNKOID_TypeDefinitionIndex = 66658;

	class HKAKBNNKOID : public ::RPG::Client::GridFightGameModifier
	{
	public:
		::System::UInt32 _CostedThreshold_k__BackingField; // 0x28
		::System::UInt32 _CostedCoin_k__BackingField; // 0x2C
		::System::Void _ctor(::NJKFOJJDGGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJKFOJJDGGG*))((::PBYTE)hIl2Cpp + HKAKBNNKOID_CTOR_OFFSET))(this, a1);
		}

		::System::Void Update(::NJKFOJJDGGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJKFOJJDGGG*))((::PBYTE)hIl2Cpp + HKAKBNNKOID_UPDATE_OFFSET))(this, a1);
		}

		::System::Void IKOHLHDGFKH(::NJKFOJJDGGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJKFOJJDGGG*))((::PBYTE)hIl2Cpp + HKAKBNNKOID_IKOHLHDGFKH_OFFSET))(this, a1);
		}

		::System::UInt32 get_CostedCoin()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HKAKBNNKOID_GET_COSTEDCOIN_OFFSET))(this);
		}

		::System::Void set_CostedCoin(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HKAKBNNKOID_SET_COSTEDCOIN_OFFSET))(this, a1);
		}

		::System::UInt32 get_CostedThreshold()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HKAKBNNKOID_GET_COSTEDTHRESHOLD_OFFSET))(this);
		}

		::System::Void set_CostedThreshold(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HKAKBNNKOID_SET_COSTEDTHRESHOLD_OFFSET))(this, a1);
		}

	};
