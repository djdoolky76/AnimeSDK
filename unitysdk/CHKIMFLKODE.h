#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define CHKIMFLKODE_BPBHBIFCINF_OFFSET UNITYSDK_OFFSET(0x19A05D60)
#define CHKIMFLKODE_GFBLNGGJMLG_OFFSET UNITYSDK_OFFSET(0x19A05CF0)
#define CHKIMFLKODE_KABJFKIAGNJ_OFFSET UNITYSDK_OFFSET(0x19A056E0)
#define CHKIMFLKODE_KKMMHGIFPOE_OFFSET UNITYSDK_OFFSET(0x19A05AE0)

inline static constexpr unsigned int CHKIMFLKODE_TypeDefinitionIndex = 80684;

class CHKIMFLKODE : public ::System::Object
{
public:
	static ::System::Boolean KABJFKIAGNJ(::UnityEngine::Vector3 IACKHFCLPJI, ::UnityEngine::Transform* GCCGGJLDLEM, ::System::Single GFGEDFMHNIA, ::System::Single OMMIOKBHFLD)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Transform*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CHKIMFLKODE_KABJFKIAGNJ_OFFSET))(IACKHFCLPJI, GCCGGJLDLEM, GFGEDFMHNIA, OMMIOKBHFLD);
	}

	static ::System::Void KKMMHGIFPOE(::UnityEngine::Transform* GCCGGJLDLEM, ::System::Single GFGEDFMHNIA, ::System::Single OMMIOKBHFLD, ::UnityEngine::Vector3& BJJEIKCEPEK)
	{
		return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Single, ::System::Single, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CHKIMFLKODE_KKMMHGIFPOE_OFFSET))(GCCGGJLDLEM, GFGEDFMHNIA, OMMIOKBHFLD, BJJEIKCEPEK);
	}

	static ::System::Void GFBLNGGJMLG(::UnityEngine::Transform* GCCGGJLDLEM, ::System::Single INOFFEJPOEP, ::System::Single DFHMGCPOAIC, ::System::Single OMMIOKBHFLD)
	{
		return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CHKIMFLKODE_GFBLNGGJMLG_OFFSET))(GCCGGJLDLEM, INOFFEJPOEP, DFHMGCPOAIC, OMMIOKBHFLD);
	}

	static ::System::Boolean BPBHBIFCINF(::UnityEngine::Vector3 IACKHFCLPJI, ::UnityEngine::Transform* GCCGGJLDLEM, ::System::Single INOFFEJPOEP, ::System::Single DFHMGCPOAIC, ::System::Single OMMIOKBHFLD)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Transform*, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CHKIMFLKODE_BPBHBIFCINF_OFFSET))(IACKHFCLPJI, GCCGGJLDLEM, INOFFEJPOEP, DFHMGCPOAIC, OMMIOKBHFLD);
	}
};
