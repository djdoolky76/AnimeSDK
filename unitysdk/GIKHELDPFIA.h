#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class GIKHELDPFIA;
namespace RPG::GameCore { class DynamicString; }
namespace System { class String; }

#define GIKHELDPFIA_CTOR_OFFSET UNITYSDK_OFFSET(0x1CE22030)
#define GIKHELDPFIA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CE22040)
#define GIKHELDPFIA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CE22000)

inline static constexpr unsigned int GIKHELDPFIA_TypeDefinitionIndex = 21462;

	class GIKHELDPFIA : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* CIHDMACAGPN; // 0x18
		::System::String* DHMDAEKJENF; // 0x20
		::System::Boolean PPONJDIBNBB; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIKHELDPFIA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::GIKHELDPFIA* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GIKHELDPFIA*))((::PBYTE)hIl2Cpp + GIKHELDPFIA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::GIKHELDPFIA* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GIKHELDPFIA*))((::PBYTE)hIl2Cpp + GIKHELDPFIA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
