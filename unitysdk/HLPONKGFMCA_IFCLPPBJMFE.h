#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Object.h"

class EMADFJAKIBG;
class HLPONKGFMCA_ELEAFLBGGCD;
namespace Cysharp::Threading::Tasks { class UniTaskCompletionSource; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define HLPONKGFMCA_IFCLPPBJMFE_BNHIDAPEHNL_OFFSET UNITYSDK_OFFSET(0x16CFA2B0)
#define HLPONKGFMCA_IFCLPPBJMFE_CGKIMGDNPNF_OFFSET UNITYSDK_OFFSET(0x16CFA5F0)
#define HLPONKGFMCA_IFCLPPBJMFE_ENNOKILDKKB_OFFSET UNITYSDK_OFFSET(0x16CFA620)
#define HLPONKGFMCA_IFCLPPBJMFE_MAKNEHPPFFN_OFFSET UNITYSDK_OFFSET(0x16CFA190)
#define HLPONKGFMCA_IFCLPPBJMFE__CTOR_OFFSET UNITYSDK_OFFSET(0x16CFA180)

inline static constexpr unsigned int HLPONKGFMCA_IFCLPPBJMFE_TypeDefinitionIndex = 52896;

class HLPONKGFMCA_IFCLPPBJMFE : public ::System::Object
{
public:
	::HLPONKGFMCA_ELEAFLBGGCD* FGBNBFHOKAA; // 0x10
	::System::Action* OLDCEOGKOAE; // 0x18
	::System::Action* DLMJCFBENGB; // 0x20
	::Cysharp::Threading::Tasks::UniTaskCompletionSource* BOIBONJOJKH; // 0x28
	::System::Func_2<::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask>* FFMGICPLKFB; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLPONKGFMCA_IFCLPPBJMFE__CTOR_OFFSET))(this);
	}

	::System::Void MAKNEHPPFFN(::EMADFJAKIBG* PJMOJNFEHLF)
	{
		return ((::System::Void(*)(::PVOID, ::EMADFJAKIBG*))((::PBYTE)hIl2Cpp + HLPONKGFMCA_IFCLPPBJMFE_MAKNEHPPFFN_OFFSET))(this, PJMOJNFEHLF);
	}

	::System::Void BNHIDAPEHNL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLPONKGFMCA_IFCLPPBJMFE_BNHIDAPEHNL_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask CGKIMGDNPNF(::System::Threading::CancellationToken OMMEALOOOOD)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + HLPONKGFMCA_IFCLPPBJMFE_CGKIMGDNPNF_OFFSET))(this, OMMEALOOOOD);
	}

	::System::Void ENNOKILDKKB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLPONKGFMCA_IFCLPPBJMFE_ENNOKILDKKB_OFFSET))(this);
	}
};
