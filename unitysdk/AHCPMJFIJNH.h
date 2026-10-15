#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GOIIMBFKMJC.h"
class ILKBGDACMNF;
class KANHBPAGDJD;
class POEGKFEADIE;
namespace RPG::GameCore { class GameWorld; }

#define AHCPMJFIJNH_BKDHNJAKBOB_OFFSET UNITYSDK_OFFSET(0xEB7AE90)
#define AHCPMJFIJNH_CTOR_OFFSET UNITYSDK_OFFSET(0xEB7B150)
#define AHCPMJFIJNH_EXECUTE_OFFSET UNITYSDK_OFFSET(0xEB7ADC0)
#define AHCPMJFIJNH_KKKIONIDKFA_OFFSET UNITYSDK_OFFSET(0xEB7AD00)
#define AHCPMJFIJNH_MMPMOICKIEO_OFFSET UNITYSDK_OFFSET(0xEB7AF30)

	class AHCPMJFIJNH : public ::GOIIMBFKMJC
	{
	public:
		::System::UInt32 EAPFJHJHIFK; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHCPMJFIJNH_CTOR_OFFSET))(this);
		}

		::System::Boolean KKKIONIDKFA(::POEGKFEADIE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::POEGKFEADIE*))((::PBYTE)hIl2Cpp + AHCPMJFIJNH_KKKIONIDKFA_OFFSET))(this, a1);
		}

		::System::Void Execute(::KANHBPAGDJD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KANHBPAGDJD*))((::PBYTE)hIl2Cpp + AHCPMJFIJNH_EXECUTE_OFFSET))(this, a1);
		}

		static ::System::Void MMPMOICKIEO(::RPG::GameCore::GameWorld* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameWorld*, ::System::UInt32))((::PBYTE)hIl2Cpp + AHCPMJFIJNH_MMPMOICKIEO_OFFSET))(a1, a2);
		}

		static ::System::Void BKDHNJAKBOB(::ILKBGDACMNF* a1)
		{
			return ((::System::Void(*)(::ILKBGDACMNF*))((::PBYTE)hIl2Cpp + AHCPMJFIJNH_BKDHNJAKBOB_OFFSET))(a1);
		}

	};
