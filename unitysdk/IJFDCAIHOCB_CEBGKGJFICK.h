#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PIOMHDMPINF.h"

namespace UnityEngine { class Transform; }

#define IJFDCAIHOCB_CEBGKGJFICK_LBJEOHBBBPN_OFFSET UNITYSDK_OFFSET(0x141EFE20)
#define IJFDCAIHOCB_CEBGKGJFICK__CTOR_OFFSET UNITYSDK_OFFSET(0x141EFF70)

inline static constexpr unsigned int IJFDCAIHOCB_CEBGKGJFICK_TypeDefinitionIndex = 59174;

class IJFDCAIHOCB_CEBGKGJFICK : public ::PIOMHDMPINF
{
public:
	::UnityEngine::Transform* GOHLGCJPNCO; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJFDCAIHOCB_CEBGKGJFICK__CTOR_OFFSET))(this);
	}

	::System::Boolean LBJEOHBBBPN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IJFDCAIHOCB_CEBGKGJFICK_LBJEOHBBBPN_OFFSET))(this);
	}
};
