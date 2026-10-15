#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class NMFCOFBDPKK;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NMFCOFBDPKK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D237190)
#define NMFCOFBDPKK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D2371A0)
#define NMFCOFBDPKK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D237160)

	class NMFCOFBDPKK : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* LJEADACFDCI; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMFCOFBDPKK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::NMFCOFBDPKK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NMFCOFBDPKK*))((::PBYTE)hIl2Cpp + NMFCOFBDPKK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::NMFCOFBDPKK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NMFCOFBDPKK*))((::PBYTE)hIl2Cpp + NMFCOFBDPKK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
