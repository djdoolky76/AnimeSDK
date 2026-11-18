#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Object.h"

class EMADFJAKIBG;
class LCGMJLFPLKE_LCDJMOJJGPN;
namespace Cysharp::Threading::Tasks { class UniTaskCompletionSource; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define LCGMJLFPLKE_HIDCAIFLFMI_BNHIDAPEHNL_OFFSET UNITYSDK_OFFSET(0xD41E8D0)
#define LCGMJLFPLKE_HIDCAIFLFMI_CGKIMGDNPNF_OFFSET UNITYSDK_OFFSET(0xD41E8A0)
#define LCGMJLFPLKE_HIDCAIFLFMI_ENNOKILDKKB_OFFSET UNITYSDK_OFFSET(0xD41EC10)
#define LCGMJLFPLKE_HIDCAIFLFMI_MAKNEHPPFFN_OFFSET UNITYSDK_OFFSET(0xD41EC40)
#define LCGMJLFPLKE_HIDCAIFLFMI__CTOR_OFFSET UNITYSDK_OFFSET(0xD41E890)

inline static constexpr unsigned int LCGMJLFPLKE_HIDCAIFLFMI_TypeDefinitionIndex = 66105;

class LCGMJLFPLKE_HIDCAIFLFMI : public ::System::Object
{
public:
	::System::Action* DLMJCFBENGB; // 0x10
	::Cysharp::Threading::Tasks::UniTaskCompletionSource* BOIBONJOJKH; // 0x18
	::LCGMJLFPLKE_LCDJMOJJGPN* FGBNBFHOKAA; // 0x20
	::System::Action* OLDCEOGKOAE; // 0x28
	::System::Func_2<::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask>* FFMGICPLKFB; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCGMJLFPLKE_HIDCAIFLFMI__CTOR_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask CGKIMGDNPNF(::System::Threading::CancellationToken OMMEALOOOOD)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + LCGMJLFPLKE_HIDCAIFLFMI_CGKIMGDNPNF_OFFSET))(this, OMMEALOOOOD);
	}

	::System::Void BNHIDAPEHNL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCGMJLFPLKE_HIDCAIFLFMI_BNHIDAPEHNL_OFFSET))(this);
	}

	::System::Void ENNOKILDKKB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCGMJLFPLKE_HIDCAIFLFMI_ENNOKILDKKB_OFFSET))(this);
	}

	::System::Void MAKNEHPPFFN(::EMADFJAKIBG* PJMOJNFEHLF)
	{
		return ((::System::Void(*)(::PVOID, ::EMADFJAKIBG*))((::PBYTE)hIl2Cpp + LCGMJLFPLKE_HIDCAIFLFMI_MAKNEHPPFFN_OFFSET))(this, PJMOJNFEHLF);
	}
};
