#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class IEOBOMONJKG;
namespace System { class String; }

#define IEOBOMONJKG_CTOR_OFFSET UNITYSDK_OFFSET(0x1CEED4A0)
#define IEOBOMONJKG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CEED4C0)
#define IEOBOMONJKG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CEED450)

inline static constexpr unsigned int IEOBOMONJKG_TypeDefinitionIndex = 21467;

	class IEOBOMONJKG : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* ADGDEBNHPOK; // 0x18
		::System::String* IPAEPDOOKNE; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEOBOMONJKG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::IEOBOMONJKG* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::IEOBOMONJKG*))((::PBYTE)hIl2Cpp + IEOBOMONJKG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::IEOBOMONJKG* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::IEOBOMONJKG*))((::PBYTE)hIl2Cpp + IEOBOMONJKG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
