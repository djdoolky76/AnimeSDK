#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Object.h"

class EMADFJAKIBG;
class LAEFOAMOECB_CGIDPBMNEAN;
namespace Cysharp::Threading::Tasks { class UniTaskCompletionSource; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define LAEFOAMOECB_CLFEJKEIHMK_AAHMACBDCPN_OFFSET UNITYSDK_OFFSET(0x199778C0)
#define LAEFOAMOECB_CLFEJKEIHMK_CKEMNJODHCH_OFFSET UNITYSDK_OFFSET(0x199779E0)
#define LAEFOAMOECB_CLFEJKEIHMK_FAFMBNKFGEK_OFFSET UNITYSDK_OFFSET(0x19977860)
#define LAEFOAMOECB_CLFEJKEIHMK_HOFIFAEOLBM_OFFSET UNITYSDK_OFFSET(0x19977A10)
#define LAEFOAMOECB_CLFEJKEIHMK__CTOR_OFFSET UNITYSDK_OFFSET(0x19977850)

inline static constexpr unsigned int LAEFOAMOECB_CLFEJKEIHMK_TypeDefinitionIndex = 67220;

class LAEFOAMOECB_CLFEJKEIHMK : public ::System::Object
{
public:
	::LAEFOAMOECB_CGIDPBMNEAN* FGBNBFHOKAA; // 0x10
	::System::Action* FFMGICPLKFB; // 0x18
	::Cysharp::Threading::Tasks::UniTaskCompletionSource* BOIBONJOJKH; // 0x20
	::System::Func_2<::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask>* KAKAEMACNPB; // 0x28
	::System::Action* OLDCEOGKOAE; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAEFOAMOECB_CLFEJKEIHMK__CTOR_OFFSET))(this);
	}

	::System::Void FAFMBNKFGEK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAEFOAMOECB_CLFEJKEIHMK_FAFMBNKFGEK_OFFSET))(this);
	}

	::System::Void AAHMACBDCPN(::EMADFJAKIBG* PJMOJNFEHLF)
	{
		return ((::System::Void(*)(::PVOID, ::EMADFJAKIBG*))((::PBYTE)hIl2Cpp + LAEFOAMOECB_CLFEJKEIHMK_AAHMACBDCPN_OFFSET))(this, PJMOJNFEHLF);
	}

	::Cysharp::Threading::Tasks::UniTask CKEMNJODHCH(::System::Threading::CancellationToken OMMEALOOOOD)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + LAEFOAMOECB_CLFEJKEIHMK_CKEMNJODHCH_OFFSET))(this, OMMEALOOOOD);
	}

	::System::Void HOFIFAEOLBM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAEFOAMOECB_CLFEJKEIHMK_HOFIFAEOLBM_OFFSET))(this);
	}
};
