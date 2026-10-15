#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define LNPOHDIJHDH_CDBNACMODGI_OFFSET UNITYSDK_OFFSET(0xB7ED5C0)
#define LNPOHDIJHDH_DPELOAAPDNB_OFFSET UNITYSDK_OFFSET(0xB7ED3A0)
#define LNPOHDIJHDH_IABLKMCMEIJ_OFFSET UNITYSDK_OFFSET(0xB7ED690)
#define LNPOHDIJHDH_NKAGJPEKFPH_OFFSET UNITYSDK_OFFSET(0xB7ED470)
#define LNPOHDIJHDH_NKFNJKLOIMA_OFFSET UNITYSDK_OFFSET(0xB7ED420)

inline static constexpr unsigned int LNPOHDIJHDH_TypeDefinitionIndex = 57297;

	class LNPOHDIJHDH : public ::System::Object
	{
	public:
		// static const ::System::Object AGHMJJADFLE; // 0x0
		static ::System::UInt32 DPELOAAPDNB(::System::String* a1)
		{
			return ((::System::UInt32(*)(::System::String*))((::PBYTE)hIl2Cpp + LNPOHDIJHDH_DPELOAAPDNB_OFFSET))(a1);
		}

		static ::System::Boolean NKFNJKLOIMA(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + LNPOHDIJHDH_NKFNJKLOIMA_OFFSET))(a1);
		}

		static ::System::Boolean NKAGJPEKFPH(::RPG::GameCore::GameEntity* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + LNPOHDIJHDH_NKAGJPEKFPH_OFFSET))(a1, a2);
		}

		static ::System::UInt32 CDBNACMODGI(::System::UInt32 a1, ::System::String* a2)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + LNPOHDIJHDH_CDBNACMODGI_OFFSET))(a1, a2);
		}

		static ::System::UInt32 IABLKMCMEIJ(::System::UInt32 a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + LNPOHDIJHDH_IABLKMCMEIJ_OFFSET))(a1, a2, a3);
		}

	};
