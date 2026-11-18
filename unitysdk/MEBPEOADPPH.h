#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/ViewObject/SuiteInfo.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define MEBPEOADPPH_ACOKHEDPOAG_OFFSET UNITYSDK_OFFSET(0x1404A980)

inline static constexpr unsigned int MEBPEOADPPH_TypeDefinitionIndex = 41602;

class MEBPEOADPPH : public ::System::Object
{
public:
	static ::System::Void ACOKHEDPOAG(::System::Collections::Generic::IReadOnlyList_1<::System::Object*>* EMIONEFGAHP, ::System::String* JNPDFEGBIOL, ::System::Boolean& BPBCHCPGPHM, ::System::Boolean& AGLLHNKKCAM, ::Foundation::ViewObject::SuiteInfo& DOJFEJPBANP)
	{
		return ((::System::Void(*)(::System::Collections::Generic::IReadOnlyList_1<::System::Object*>*, ::System::String*, ::System::Boolean&, ::System::Boolean&, ::Foundation::ViewObject::SuiteInfo&))((::PBYTE)hIl2Cpp + MEBPEOADPPH_ACOKHEDPOAG_OFFSET))(EMIONEFGAHP, JNPDFEGBIOL, BPBCHCPGPHM, AGLLHNKKCAM, DOJFEJPBANP);
	}
};
