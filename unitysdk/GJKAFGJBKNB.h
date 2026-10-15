#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GachaItemData; }

#define GJKAFGJBKNB_KOMHFNNMFJO_OFFSET UNITYSDK_OFFSET(0x15A6A6C0)

inline static constexpr unsigned int GJKAFGJBKNB_TypeDefinitionIndex = 64301;

	class GJKAFGJBKNB : public ::System::Object
	{
	public:
		static ::RPG::Client::GachaItemData* KOMHFNNMFJO(::System::UInt32 a1)
		{
			return ((::RPG::Client::GachaItemData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + GJKAFGJBKNB_KOMHFNNMFJO_OFFSET))(a1);
		}

	};
