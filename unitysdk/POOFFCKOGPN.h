#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class ACNLKLCDALA;
class DIAEPBNFKBO;
class JOOHBDMHGCA;
class LACHKEHCGNO;
class NLNIIPDCABP;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define POOFFCKOGPN_DMNOOODNLKC_OFFSET UNITYSDK_OFFSET(0x1B9D8560)
#define POOFFCKOGPN_MDDPMNHHPGA_OFFSET UNITYSDK_OFFSET(0x1B9D8C10)
#define POOFFCKOGPN_MJIGMFDNCMP_OFFSET UNITYSDK_OFFSET(0x1B9D8380)

inline static constexpr unsigned int POOFFCKOGPN_TypeDefinitionIndex = 70100;

class POOFFCKOGPN : public ::System::Object
{
public:
	static ::System::Void DMNOOODNLKC(::UnityEngine::Vector3& IACKHFCLPJI, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* FHJJOILLDNG, ::LACHKEHCGNO* ENIJIEEOKFD)
	{
		return ((::System::Void(*)(::UnityEngine::Vector3&, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::LACHKEHCGNO*))((::PBYTE)hIl2Cpp + POOFFCKOGPN_DMNOOODNLKC_OFFSET))(IACKHFCLPJI, FHJJOILLDNG, ENIJIEEOKFD);
	}

	static ::System::Void MDDPMNHHPGA(::UnityEngine::Vector3 ODEIPJJELJI, ::DIAEPBNFKBO* GCLHDKDFOOH, ::NLNIIPDCABP* OPLGDAMMLHM, ::ACNLKLCDALA* PAHAKIECKMN, ::JOOHBDMHGCA* LFHAIKOOKOB, ::System::Single CCELNIJDIAD)
	{
		return ((::System::Void(*)(::UnityEngine::Vector3, ::DIAEPBNFKBO*, ::NLNIIPDCABP*, ::ACNLKLCDALA*, ::JOOHBDMHGCA*, ::System::Single))((::PBYTE)hIl2Cpp + POOFFCKOGPN_MDDPMNHHPGA_OFFSET))(ODEIPJJELJI, GCLHDKDFOOH, OPLGDAMMLHM, PAHAKIECKMN, LFHAIKOOKOB, CCELNIJDIAD);
	}

	static ::System::Boolean MJIGMFDNCMP(::DIAEPBNFKBO* GCLHDKDFOOH)
	{
		return ((::System::Boolean(*)(::DIAEPBNFKBO*))((::PBYTE)hIl2Cpp + POOFFCKOGPN_MJIGMFDNCMP_OFFSET))(GCLHDKDFOOH);
	}
};
