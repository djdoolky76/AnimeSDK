#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BIJCAGLKGCO_eFileLoaderPosType.h"
#include "unitysdk/System/Object.h"
class ACKOOJKEBEG;
class HPCHMNEMDIF;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define HMHJLFAENIP_CCKBBADDOLJ_OFFSET UNITYSDK_OFFSET(0x1C48A2A0)
#define HMHJLFAENIP_CHBAHPLHDMD_OFFSET UNITYSDK_OFFSET(0x1C48ACF0)
#define HMHJLFAENIP_EFMKONMGMNA_OFFSET UNITYSDK_OFFSET(0x1C48A1F0)
#define HMHJLFAENIP_GFAPPHIMDKG_OFFSET UNITYSDK_OFFSET(0x1C48AC00)
#define HMHJLFAENIP_GOFFPFCFOAC_OFFSET UNITYSDK_OFFSET(0x1C48A8D0)
#define HMHJLFAENIP_IFCIIIDCNIH_OFFSET UNITYSDK_OFFSET(0x1C48ADE0)
#define HMHJLFAENIP_KPIHIPNOONP_OFFSET UNITYSDK_OFFSET(0x1C48AE30)

inline static constexpr unsigned int HMHJLFAENIP_TypeDefinitionIndex = 41474;

	class HMHJLFAENIP : public ::System::Object
	{
	public:
		static ::HPCHMNEMDIF* EFMKONMGMNA(::System::String* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::HPCHMNEMDIF*(*)(::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + HMHJLFAENIP_EFMKONMGMNA_OFFSET))(a1, a2, a3);
		}

		static ::HPCHMNEMDIF* GFAPPHIMDKG(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::System::Boolean a5)
		{
			return ((::HPCHMNEMDIF*(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + HMHJLFAENIP_GFAPPHIMDKG_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::HPCHMNEMDIF* CHBAHPLHDMD(::System::String* a1, ::System::String* a2)
		{
			return ((::HPCHMNEMDIF*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + HMHJLFAENIP_CHBAHPLHDMD_OFFSET))(a1, a2);
		}

		static ::System::Void IFCIIIDCNIH(::System::String* a1, ::System::Collections::Generic::IList_1<::ACKOOJKEBEG*>* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Generic::IList_1<::ACKOOJKEBEG*>*))((::PBYTE)hIl2Cpp + HMHJLFAENIP_IFCIIIDCNIH_OFFSET))(a1, a2);
		}

		static ::System::Boolean KPIHIPNOONP(::System::String* a1, ::System::Collections::Generic::IList_1<::ACKOOJKEBEG*>* a2, ::System::String* a3)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Collections::Generic::IList_1<::ACKOOJKEBEG*>*, ::System::String*))((::PBYTE)hIl2Cpp + HMHJLFAENIP_KPIHIPNOONP_OFFSET))(a1, a2, a3);
		}

		static ::HPCHMNEMDIF* CCKBBADDOLJ(::System::String* a1, ::BIJCAGLKGCO_eFileLoaderPosType a2)
		{
			return ((::HPCHMNEMDIF*(*)(::System::String*, ::BIJCAGLKGCO_eFileLoaderPosType))((::PBYTE)hIl2Cpp + HMHJLFAENIP_CCKBBADDOLJ_OFFSET))(a1, a2);
		}

		static ::HPCHMNEMDIF* GOFFPFCFOAC(::System::String* a1)
		{
			return ((::HPCHMNEMDIF*(*)(::System::String*))((::PBYTE)hIl2Cpp + HMHJLFAENIP_GOFFPFCFOAC_OFFSET))(a1);
		}

	};
