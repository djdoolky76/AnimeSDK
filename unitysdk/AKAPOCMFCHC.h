#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AKAPOCMFCHC;
class BJHMBGLPOLB;

#define AKAPOCMFCHC_CLEAR_OFFSET UNITYSDK_OFFSET(0x19D52470)
#define AKAPOCMFCHC_CTOR_OFFSET UNITYSDK_OFFSET(0x19D524E0)
#define AKAPOCMFCHC_GET_CARD_OFFSET UNITYSDK_OFFSET(0x19D524C0)
#define AKAPOCMFCHC_GMFKAFLHKPG_OFFSET UNITYSDK_OFFSET(0x19D52370)
#define AKAPOCMFCHC_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x19D52420)
#define AKAPOCMFCHC_SET_CARD_OFFSET UNITYSDK_OFFSET(0x19D524D0)

inline static constexpr unsigned int AKAPOCMFCHC_TypeDefinitionIndex = 83323;

	class AKAPOCMFCHC : public ::System::Object
	{
	public:
		::BJHMBGLPOLB* _Card_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAPOCMFCHC_CTOR_OFFSET))(this);
		}

		static ::AKAPOCMFCHC* GMFKAFLHKPG(::BJHMBGLPOLB* a1)
		{
			return ((::AKAPOCMFCHC*(*)(::BJHMBGLPOLB*))((::PBYTE)hIl2Cpp + AKAPOCMFCHC_GMFKAFLHKPG_OFFSET))(a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAPOCMFCHC_CLEAR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::BJHMBGLPOLB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BJHMBGLPOLB*))((::PBYTE)hIl2Cpp + AKAPOCMFCHC_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::BJHMBGLPOLB* get_Card()
		{
			return ((::BJHMBGLPOLB*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAPOCMFCHC_GET_CARD_OFFSET))(this);
		}

		::System::Void set_Card(::BJHMBGLPOLB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BJHMBGLPOLB*))((::PBYTE)hIl2Cpp + AKAPOCMFCHC_SET_CARD_OFFSET))(this, a1);
		}

	};
