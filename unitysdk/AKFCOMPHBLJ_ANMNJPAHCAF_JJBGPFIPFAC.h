#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define AKFCOMPHBLJ_ANMNJPAHCAF_JJBGPFIPFAC_IJMJDHPKMAG_OFFSET UNITYSDK_OFFSET(0x16489F20)
#define AKFCOMPHBLJ_ANMNJPAHCAF_JJBGPFIPFAC__CTOR_OFFSET UNITYSDK_OFFSET(0x16489EF0)

inline static constexpr unsigned int AKFCOMPHBLJ_ANMNJPAHCAF_JJBGPFIPFAC_TypeDefinitionIndex = 77049;

class AKFCOMPHBLJ_ANMNJPAHCAF_JJBGPFIPFAC : public ::System::Object
{
public:
	// static const ::System::Single NLGHKBEBDPH; // 0x0
	// static const ::System::Single ABJFAHAPEEA; // 0x0
	// static const ::System::Single GMNIPDDAEAO; // 0x0
	::System::Single AOENPDHJJMM; // 0x10
	::System::Single DNMCFLGCIAG; // 0x14
	::System::Single POCJAGDJAPH; // 0x18
	::System::Single JHHBNDJHKND; // 0x1C
	::System::Int32 EALJNEOHDHM; // 0x20

	::System::Void _ctor(::System::Single ONEIBILJLBP, ::System::Single ECPKMCHMDMD, ::System::Single ONNCAHGKBCI, ::System::Int32 PBMCANEAGEN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_ANMNJPAHCAF_JJBGPFIPFAC__CTOR_OFFSET))(this, ONEIBILJLBP, ECPKMCHMDMD, ONNCAHGKBCI, PBMCANEAGEN);
	}

	::System::Boolean IJMJDHPKMAG(::UnityEngine::Vector3 EIIDOADGOIF, ::UnityEngine::Vector3 CFJFMMGPGKE, ::UnityEngine::Vector3 FMDLIFKLFKI, ::UnityEngine::Vector3& NFOPONCIANK, ::UnityEngine::Vector3& LPLMPAFAJIP)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_ANMNJPAHCAF_JJBGPFIPFAC_IJMJDHPKMAG_OFFSET))(this, EIIDOADGOIF, CFJFMMGPGKE, FMDLIFKLFKI, NFOPONCIANK, LPLMPAFAJIP);
	}
};
