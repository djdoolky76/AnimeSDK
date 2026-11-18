#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GNFLMIODILP.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class JMHIOADBIPH;
namespace UnityEngine { class RenderTexture; }

#define OEFEEFMOGPH_AHBNBFHKLDI_BIPIIHGHLEA_OFFSET UNITYSDK_OFFSET(0x114EAA60)
#define OEFEEFMOGPH_AHBNBFHKLDI_ELDBJLBNEJE_OFFSET UNITYSDK_OFFSET(0x114EAB20)
#define OEFEEFMOGPH_AHBNBFHKLDI_LBLMEIBEFCI_OFFSET UNITYSDK_OFFSET(0x114EAB80)
#define OEFEEFMOGPH_AHBNBFHKLDI_MFFPMAPPMLB_OFFSET UNITYSDK_OFFSET(0x114EAAC0)
#define OEFEEFMOGPH_AHBNBFHKLDI__CTOR_OFFSET UNITYSDK_OFFSET(0x114EAA50)

inline static constexpr unsigned int OEFEEFMOGPH_AHBNBFHKLDI_TypeDefinitionIndex = 49746;

class OEFEEFMOGPH_AHBNBFHKLDI : public ::System::Object
{
public:
	::UnityEngine::RenderTexture* FJEEKLKBFHN; // 0x10
	::JMHIOADBIPH* DNPKJMLDMIP; // 0x18
	::System::Boolean FKKBLANCMDG; // 0x20
	::System::Byte _padding0[0x3];
	::GNFLMIODILP BCGBFOFMIEI; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEFEEFMOGPH_AHBNBFHKLDI__CTOR_OFFSET))(this);
	}

	::System::Void BIPIIHGHLEA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEFEEFMOGPH_AHBNBFHKLDI_BIPIIHGHLEA_OFFSET))(this);
	}

	::System::Void MFFPMAPPMLB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEFEEFMOGPH_AHBNBFHKLDI_MFFPMAPPMLB_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask ELDBJLBNEJE(::System::Threading::CancellationToken OMMEALOOOOD)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + OEFEEFMOGPH_AHBNBFHKLDI_ELDBJLBNEJE_OFFSET))(this, OMMEALOOOOD);
	}

	::System::Void LBLMEIBEFCI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEFEEFMOGPH_AHBNBFHKLDI_LBLMEIBEFCI_OFFSET))(this);
	}
};
