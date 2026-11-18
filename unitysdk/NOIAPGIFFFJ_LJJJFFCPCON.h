#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Cysharp::Threading::Tasks { template <typename T> class UniTaskCompletionSource_1; }
namespace System { template <typename T> class Action_1; }

#define NOIAPGIFFFJ_LJJJFFCPCON_PNDINKNPOLG_OFFSET UNITYSDK_OFFSET(0x13171FD0)
#define NOIAPGIFFFJ_LJJJFFCPCON__CTOR_OFFSET UNITYSDK_OFFSET(0x13171FC0)

inline static constexpr unsigned int NOIAPGIFFFJ_LJJJFFCPCON_TypeDefinitionIndex = 61573;

class NOIAPGIFFFJ_LJJJFFCPCON : public ::System::Object
{
public:
	::System::Action_1<::System::Boolean>* DKGJKOPELMD; // 0x10
	::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<::System::Boolean>* KHGFAKJKDGG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOIAPGIFFFJ_LJJJFFCPCON__CTOR_OFFSET))(this);
	}

	::System::Void PNDINKNPOLG(::System::Boolean NDOLCDKEHNN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NOIAPGIFFFJ_LJJJFFCPCON_PNDINKNPOLG_OFFSET))(this, NDOLCDKEHNN);
	}
};
