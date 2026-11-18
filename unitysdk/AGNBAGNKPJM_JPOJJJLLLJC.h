#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Object.h"

class ENGKPGFGGLM;
namespace Cysharp::Threading::Tasks { class UniTaskCompletionSource; }
namespace MoleMole { class UILoadingPopWindowController; }

#define AGNBAGNKPJM_JPOJJJLLLJC_BLDKINDLKCA_OFFSET UNITYSDK_OFFSET(0x12CF1AC0)
#define AGNBAGNKPJM_JPOJJJLLLJC_JANBLPKPAJC_OFFSET UNITYSDK_OFFSET(0x12CF1A90)
#define AGNBAGNKPJM_JPOJJJLLLJC_PFLDCHBJNJA_OFFSET UNITYSDK_OFFSET(0x12CF1A50)
#define AGNBAGNKPJM_JPOJJJLLLJC__CTOR_OFFSET UNITYSDK_OFFSET(0x12CF1A40)

inline static constexpr unsigned int AGNBAGNKPJM_JPOJJJLLLJC_TypeDefinitionIndex = 90166;

class AGNBAGNKPJM_JPOJJJLLLJC : public ::System::Object
{
public:
	::Cysharp::Threading::Tasks::UniTaskCompletionSource* BOIBONJOJKH; // 0x10
	::System::Threading::CancellationToken JBFIKAMHMBO; // 0x18
	::MoleMole::UILoadingPopWindowController* JJHMCIDJDDO; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGNBAGNKPJM_JPOJJJLLLJC__CTOR_OFFSET))(this);
	}

	::System::Void PFLDCHBJNJA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGNBAGNKPJM_JPOJJJLLLJC_PFLDCHBJNJA_OFFSET))(this);
	}

	::System::Void JANBLPKPAJC(::ENGKPGFGGLM* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + AGNBAGNKPJM_JPOJJJLLLJC_JANBLPKPAJC_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Boolean BLDKINDLKCA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AGNBAGNKPJM_JPOJJJLLLJC_BLDKINDLKCA_OFFSET))(this);
	}
};
