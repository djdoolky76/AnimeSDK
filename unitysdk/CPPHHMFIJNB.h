#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HGAFKABDHDA;
namespace System::Threading { class CancellationTokenSource; }

#define CPPHHMFIJNB_DHKCLIJPOAP_OFFSET UNITYSDK_OFFSET(0x147B98E0)

inline static constexpr unsigned int CPPHHMFIJNB_TypeDefinitionIndex = 55260;

class CPPHHMFIJNB : public ::System::Object
{
public:
	static ::HGAFKABDHDA* DHKCLIJPOAP(::System::Int64 ICLKIBIKELG, ::System::Threading::CancellationTokenSource* MJKDCNCONFK)
	{
		return ((::HGAFKABDHDA*(*)(::System::Int64, ::System::Threading::CancellationTokenSource*))((::PBYTE)hIl2Cpp + CPPHHMFIJNB_DHKCLIJPOAP_OFFSET))(ICLKIBIKELG, MJKDCNCONFK);
	}
};
