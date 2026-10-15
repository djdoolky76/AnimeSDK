#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class DCIBDOHGEGL;
class FCOEMCEDLNL;

#define DCIBDOHGEGL_CTOR_OFFSET UNITYSDK_OFFSET(0x1DCD8AA0)
#define DCIBDOHGEGL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DCD8790)

inline static constexpr unsigned int DCIBDOHGEGL_TypeDefinitionIndex = 13959;

	class DCIBDOHGEGL : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* KCJAICDOHPN; // 0x10
		::RPG::Client::TextID BBOHFMDPCJP; // 0x18
		::RPG::Client::TextID OIHMMHAJHHB; // 0x28
		::RPG::Client::TextID KFCJIAKLCFD; // 0x38
		::System::UInt32 AEONKNDCDKN; // 0x48
		::System::UInt32 LIIBNDIFNDO; // 0x4C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCIBDOHGEGL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::DCIBDOHGEGL* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::DCIBDOHGEGL*))((::PBYTE)hIl2Cpp + DCIBDOHGEGL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
