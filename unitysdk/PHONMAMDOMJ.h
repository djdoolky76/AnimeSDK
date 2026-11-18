#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class EGOJNNIFDJJ;
class GEIHCPAOKKK;
class GKNGGHDFOIE;
namespace UnityEngine { class Transform; }

#define PHONMAMDOMJ_DIOOOLLLPPO_OFFSET UNITYSDK_OFFSET(0x178D3140)
#define PHONMAMDOMJ_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x178D3080)
#define PHONMAMDOMJ__CTOR_OFFSET UNITYSDK_OFFSET(0x178D3070)

inline static constexpr unsigned int PHONMAMDOMJ_TypeDefinitionIndex = 89707;

class PHONMAMDOMJ : public ::System::Object
{
public:
	::GEIHCPAOKKK* OHPJHPEOFLD; // 0x10
	::UnityEngine::Transform* ILDFEIAMNIC; // 0x18
	::EGOJNNIFDJJ* PEENCJIIMCG; // 0x20
	::GKNGGHDFOIE* LBGEIDMLKKL; // 0x28
	::System::Boolean MHAEIEPFNFG; // 0x30
	::System::Boolean MHKHPCELIIJ; // 0x31
	::System::Boolean BFKKEEIEGIB; // 0x32
	::System::Byte _padding0[0x1];
	::System::Int32 NFNBNGJMMCA; // 0x34
	::System::Int32 ODJIHFBHAAE; // 0x38
	::UnityEngine::Vector3 MLJDHBNOEAO; // 0x3C
	::System::Int32 GDCEOHBJPGO; // 0x48
	::UnityEngine::Vector3 CPKPIDOOALN; // 0x4C
	::System::UInt32 PGMEKIIFMCM; // 0x58
	::System::UInt32 BKLGNCBNEGM; // 0x5C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHONMAMDOMJ__CTOR_OFFSET))(this);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHONMAMDOMJ_NPOLNFDBOOD_OFFSET))(this);
	}

	::System::Void DIOOOLLLPPO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHONMAMDOMJ_DIOOOLLLPPO_OFFSET))(this);
	}
};
