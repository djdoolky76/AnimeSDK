#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PIOMHDMPINF.h"

namespace UnityEngine { class Transform; }

#define GBLPJCKJBPB_LCDKMIABNMM_LBJEOHBBBPN_OFFSET UNITYSDK_OFFSET(0x13246240)
#define GBLPJCKJBPB_LCDKMIABNMM__CTOR_OFFSET UNITYSDK_OFFSET(0x13246480)

inline static constexpr unsigned int GBLPJCKJBPB_LCDKMIABNMM_TypeDefinitionIndex = 66373;

class GBLPJCKJBPB_LCDKMIABNMM : public ::PIOMHDMPINF
{
public:
	::UnityEngine::Transform* FMBNPPPMGDK; // 0x10
	::UnityEngine::Transform* DNLGMKBPIBD; // 0x18
	::UnityEngine::Transform* JCIDOFFKAOB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBLPJCKJBPB_LCDKMIABNMM__CTOR_OFFSET))(this);
	}

	::System::Boolean LBJEOHBBBPN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GBLPJCKJBPB_LCDKMIABNMM_LBJEOHBBBPN_OFFSET))(this);
	}
};
