#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CELKNCGOJPN.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class DDAOHNIJCPB;
class DJPDDBLIEMF;
class OGJNHDLJIBM;

#define JJKHNGDHNAJ_GIHIGFFBPHI_OFFSET UNITYSDK_OFFSET(0x17B2A530)
#define JJKHNGDHNAJ_HDNCPFAMGAK_OFFSET UNITYSDK_OFFSET(0x17B2A610)
#define JJKHNGDHNAJ_HMOEONBGCAF_OFFSET UNITYSDK_OFFSET(0x17B2A4E0)
#define JJKHNGDHNAJ_LHEMNHNKEIF_OFFSET UNITYSDK_OFFSET(0x17B2A7B0)
#define JJKHNGDHNAJ_POBDIKIEFLJ_OFFSET UNITYSDK_OFFSET(0x17B2A6E0)
#define JJKHNGDHNAJ__CTOR_OFFSET UNITYSDK_OFFSET(0x17B2A880)

inline static constexpr unsigned int JJKHNGDHNAJ_TypeDefinitionIndex = 59500;

class JJKHNGDHNAJ : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJKHNGDHNAJ__CTOR_OFFSET))(this);
	}

	::System::Void HMOEONBGCAF(::OGJNHDLJIBM* MCPGNMAIKFK)
	{
		return ((::System::Void(*)(::PVOID, ::OGJNHDLJIBM*))((::PBYTE)hIl2Cpp + JJKHNGDHNAJ_HMOEONBGCAF_OFFSET))(this, MCPGNMAIKFK);
	}

	::Cysharp::Threading::Tasks::UniTask GIHIGFFBPHI(::DJPDDBLIEMF* GDIIOLFKGBN, ::DDAOHNIJCPB* JOKCCKBGKDH, ::System::Threading::CancellationToken PIIPCLCCOIG, ::CELKNCGOJPN GHNAFBPJNKB)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::DJPDDBLIEMF*, ::DDAOHNIJCPB*, ::System::Threading::CancellationToken, ::CELKNCGOJPN))((::PBYTE)hIl2Cpp + JJKHNGDHNAJ_GIHIGFFBPHI_OFFSET))(this, GDIIOLFKGBN, JOKCCKBGKDH, PIIPCLCCOIG, GHNAFBPJNKB);
	}

	::Cysharp::Threading::Tasks::UniTask HDNCPFAMGAK(::DJPDDBLIEMF* GDIIOLFKGBN, ::DDAOHNIJCPB* JOKCCKBGKDH, ::System::Threading::CancellationToken PIIPCLCCOIG, ::CELKNCGOJPN GHNAFBPJNKB)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::DJPDDBLIEMF*, ::DDAOHNIJCPB*, ::System::Threading::CancellationToken, ::CELKNCGOJPN))((::PBYTE)hIl2Cpp + JJKHNGDHNAJ_HDNCPFAMGAK_OFFSET))(this, GDIIOLFKGBN, JOKCCKBGKDH, PIIPCLCCOIG, GHNAFBPJNKB);
	}

	::Cysharp::Threading::Tasks::UniTask POBDIKIEFLJ(::DJPDDBLIEMF* GDIIOLFKGBN, ::DDAOHNIJCPB* JOKCCKBGKDH, ::System::Threading::CancellationToken PIIPCLCCOIG, ::CELKNCGOJPN GHNAFBPJNKB)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::DJPDDBLIEMF*, ::DDAOHNIJCPB*, ::System::Threading::CancellationToken, ::CELKNCGOJPN))((::PBYTE)hIl2Cpp + JJKHNGDHNAJ_POBDIKIEFLJ_OFFSET))(this, GDIIOLFKGBN, JOKCCKBGKDH, PIIPCLCCOIG, GHNAFBPJNKB);
	}

	::Cysharp::Threading::Tasks::UniTask LHEMNHNKEIF(::DJPDDBLIEMF* GDIIOLFKGBN, ::DDAOHNIJCPB* JOKCCKBGKDH, ::System::Threading::CancellationToken PIIPCLCCOIG, ::CELKNCGOJPN GHNAFBPJNKB)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::DJPDDBLIEMF*, ::DDAOHNIJCPB*, ::System::Threading::CancellationToken, ::CELKNCGOJPN))((::PBYTE)hIl2Cpp + JJKHNGDHNAJ_LHEMNHNKEIF_OFFSET))(this, GDIIOLFKGBN, JOKCCKBGKDH, PIIPCLCCOIG, GHNAFBPJNKB);
	}
};
