#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class GEIHCPAOKKK;
class KKMEIALDCJK;
class LPCJLPMNJEL;
namespace System { class String; }

#define KMEINIOADOJ_ELLJLAACLIA_OFFSET UNITYSDK_OFFSET(0x157FA1D0)
#define KMEINIOADOJ_JCICILJCCCJ_OFFSET UNITYSDK_OFFSET(0x157FA850)
#define KMEINIOADOJ_LFOFONCEAAP_OFFSET UNITYSDK_OFFSET(0x157F9E60)

inline static constexpr unsigned int KMEINIOADOJ_TypeDefinitionIndex = 56620;

class KMEINIOADOJ : public ::System::Object
{
public:
	static ::System::Void LFOFONCEAAP(::GEIHCPAOKKK* OHPJHPEOFLD, ::System::String* FHOPPNDBFLL)
	{
		return ((::System::Void(*)(::GEIHCPAOKKK*, ::System::String*))((::PBYTE)hIl2Cpp + KMEINIOADOJ_LFOFONCEAAP_OFFSET))(OHPJHPEOFLD, FHOPPNDBFLL);
	}

	static ::System::Void ELLJLAACLIA(::KKMEIALDCJK* JKLGHJINEFC, ::System::String* FHOPPNDBFLL)
	{
		return ((::System::Void(*)(::KKMEIALDCJK*, ::System::String*))((::PBYTE)hIl2Cpp + KMEINIOADOJ_ELLJLAACLIA_OFFSET))(JKLGHJINEFC, FHOPPNDBFLL);
	}

	static ::System::Void JCICILJCCCJ(::LPCJLPMNJEL* JKLGHJINEFC, ::UnityEngine::Vector3 CKPGOKHECCH, ::UnityEngine::Quaternion GJNLCLDFFIN)
	{
		return ((::System::Void(*)(::LPCJLPMNJEL*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + KMEINIOADOJ_JCICILJCCCJ_OFFSET))(JKLGHJINEFC, CKPGOKHECCH, GJNLCLDFFIN);
	}
};
