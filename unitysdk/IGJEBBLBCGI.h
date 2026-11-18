#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"

class NCIILDJDHMK;
namespace MoleMole { class IVideoPlayer; }
namespace MoleMole { class UIFullScreenVideoV2PopInNormalWindowController; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IGJEBBLBCGI_DDKNGHMNHBL_OFFSET UNITYSDK_OFFSET(0x15C0BAC0)
#define IGJEBBLBCGI_EDKDMEEFFDP_OFFSET UNITYSDK_OFFSET(0x15C0C2E0)
#define IGJEBBLBCGI_EFOICMLFNKE_OFFSET UNITYSDK_OFFSET(0x15C0C7D0)

inline static constexpr unsigned int IGJEBBLBCGI_TypeDefinitionIndex = 66309;

class IGJEBBLBCGI : public ::System::Object
{
public:
	static ::NCIILDJDHMK* DDKNGHMNHBL(::System::Int32 AIHJECKLGEB)
	{
		return ((::NCIILDJDHMK*(*)(::System::Int32))((::PBYTE)hIl2Cpp + IGJEBBLBCGI_DDKNGHMNHBL_OFFSET))(AIHJECKLGEB);
	}

	static ::Foundation::AssetRequestHandle EDKDMEEFFDP(::MoleMole::IVideoPlayer* CEHEDIJEJFG, ::System::String* CJBJONJDOLI, ::Foundation::AssetRequestHandle& DGAAAONDIOD, ::System::Boolean EPGLPGPOOJN)
	{
		return ((::Foundation::AssetRequestHandle(*)(::MoleMole::IVideoPlayer*, ::System::String*, ::Foundation::AssetRequestHandle&, ::System::Boolean))((::PBYTE)hIl2Cpp + IGJEBBLBCGI_EDKDMEEFFDP_OFFSET))(CEHEDIJEJFG, CJBJONJDOLI, DGAAAONDIOD, EPGLPGPOOJN);
	}

	static ::MoleMole::UIFullScreenVideoV2PopInNormalWindowController* EFOICMLFNKE(::System::Collections::Generic::List_1<::System::String*>* DLNJFEJIHED, ::System::Boolean KPHPIJNGOCK, ::System::Single HLLFPBDMHNJ, ::System::Single CCAKMNAGMGD, ::System::Action* MGAKJHJAGJI)
	{
		return ((::MoleMole::UIFullScreenVideoV2PopInNormalWindowController*(*)(::System::Collections::Generic::List_1<::System::String*>*, ::System::Boolean, ::System::Single, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + IGJEBBLBCGI_EFOICMLFNKE_OFFSET))(DLNJFEJIHED, KPHPIJNGOCK, HLLFPBDMHNJ, CCAKMNAGMGD, MGAKJHJAGJI);
	}
};
