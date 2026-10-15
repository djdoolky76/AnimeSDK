#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class UIController; }
namespace RPG::Client::Promises { class Promise; }
namespace System { class String; }

#define FBECFEFIOEO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x15697670)
#define FBECFEFIOEO_CTOR_OFFSET UNITYSDK_OFFSET(0x15697660)
#define FBECFEFIOEO_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0x15697690)
#define FBECFEFIOEO_HLGPGJCBJJP_OFFSET UNITYSDK_OFFSET(0x15697800)

inline static constexpr unsigned int FBECFEFIOEO_TypeDefinitionIndex = 73117;

	class FBECFEFIOEO : public ::System::Object
	{
	public:
		::RPG::Client::UIController* HKJLKMCDMGB; // 0x10
		::RPG::Client::UIController* IBLBKLNHKLL; // 0x18
		::System::Boolean ONGHHJLHEIH; // 0x20
		::System::Void _ctor(::RPG::Client::UIController* a1, ::RPG::Client::UIController* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*, ::RPG::Client::UIController*, ::System::Boolean))((::PBYTE)hIl2Cpp + FBECFEFIOEO_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_1(::RPG::Client::UIController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + FBECFEFIOEO_CTOR_1_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::Promise* HKKFFCBJOKM()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBECFEFIOEO_HKKFFCBJOKM_OFFSET))(this);
		}

		::System::String* HLGPGJCBJJP()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBECFEFIOEO_HLGPGJCBJJP_OFFSET))(this);
		}

	};
