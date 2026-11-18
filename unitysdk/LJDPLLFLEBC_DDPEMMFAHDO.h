#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Object.h"

class EMADFJAKIBG;
class LJDPLLFLEBC_HDHGLACAHFB;
namespace Cysharp::Threading::Tasks { class UniTaskCompletionSource; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define LJDPLLFLEBC_DDPEMMFAHDO_AAHMACBDCPN_OFFSET UNITYSDK_OFFSET(0x14DB4E40)
#define LJDPLLFLEBC_DDPEMMFAHDO_CKEMNJODHCH_OFFSET UNITYSDK_OFFSET(0x14DB4BC0)
#define LJDPLLFLEBC_DDPEMMFAHDO_ENIBJMMCAMJ_OFFSET UNITYSDK_OFFSET(0x14DB4B90)
#define LJDPLLFLEBC_DDPEMMFAHDO_HOFIFAEOLBM_OFFSET UNITYSDK_OFFSET(0x14DB4B60)
#define LJDPLLFLEBC_DDPEMMFAHDO_LIDNPLMPHAL_OFFSET UNITYSDK_OFFSET(0x14DB4FE0)
#define LJDPLLFLEBC_DDPEMMFAHDO__CTOR_OFFSET UNITYSDK_OFFSET(0x14DB4B50)

inline static constexpr unsigned int LJDPLLFLEBC_DDPEMMFAHDO_TypeDefinitionIndex = 42761;

class LJDPLLFLEBC_DDPEMMFAHDO : public ::System::Object
{
public:
	::LJDPLLFLEBC_HDHGLACAHFB* FGBNBFHOKAA; // 0x10
	::System::Action* MNMDKBDFAFE; // 0x18
	::System::Func_2<::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask>* FFMGICPLKFB; // 0x20
	::System::Action* DLMJCFBENGB; // 0x28
	::System::Action* KAKAEMACNPB; // 0x30
	::Cysharp::Threading::Tasks::UniTaskCompletionSource* BOIBONJOJKH; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJDPLLFLEBC_DDPEMMFAHDO__CTOR_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask HOFIFAEOLBM(::System::Threading::CancellationToken OMMEALOOOOD)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + LJDPLLFLEBC_DDPEMMFAHDO_HOFIFAEOLBM_OFFSET))(this, OMMEALOOOOD);
	}

	::System::Void ENIBJMMCAMJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJDPLLFLEBC_DDPEMMFAHDO_ENIBJMMCAMJ_OFFSET))(this);
	}

	::System::Void CKEMNJODHCH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJDPLLFLEBC_DDPEMMFAHDO_CKEMNJODHCH_OFFSET))(this);
	}

	::System::Void AAHMACBDCPN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJDPLLFLEBC_DDPEMMFAHDO_AAHMACBDCPN_OFFSET))(this);
	}

	::System::Void LIDNPLMPHAL(::EMADFJAKIBG* PJMOJNFEHLF)
	{
		return ((::System::Void(*)(::PVOID, ::EMADFJAKIBG*))((::PBYTE)hIl2Cpp + LJDPLLFLEBC_DDPEMMFAHDO_LIDNPLMPHAL_OFFSET))(this, PJMOJNFEHLF);
	}
};
