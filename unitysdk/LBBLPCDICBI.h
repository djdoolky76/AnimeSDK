#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IDAAIFGOMNG;
class KCFOCCAGGAN;

#define LBBLPCDICBI_DPLPHMELCKM_1_OFFSET UNITYSDK_OFFSET(0xBE82710)
#define LBBLPCDICBI_DPLPHMELCKM_OFFSET UNITYSDK_OFFSET(0xBE820F0)
#define LBBLPCDICBI_PGIDLIEOMAF_OFFSET UNITYSDK_OFFSET(0xBE82880)

inline static constexpr unsigned int LBBLPCDICBI_TypeDefinitionIndex = 54866;

	class LBBLPCDICBI : public ::System::Object
	{
	public:
		static ::System::Void DPLPHMELCKM(::IDAAIFGOMNG* a1, ::KCFOCCAGGAN* a2)
		{
			return ((::System::Void(*)(::IDAAIFGOMNG*, ::KCFOCCAGGAN*))((::PBYTE)hIl2Cpp + LBBLPCDICBI_DPLPHMELCKM_OFFSET))(a1, a2);
		}

		static ::System::Void DPLPHMELCKM_1(::IDAAIFGOMNG* a1, ::IDAAIFGOMNG* a2)
		{
			return ((::System::Void(*)(::IDAAIFGOMNG*, ::IDAAIFGOMNG*))((::PBYTE)hIl2Cpp + LBBLPCDICBI_DPLPHMELCKM_1_OFFSET))(a1, a2);
		}

		static ::System::Void PGIDLIEOMAF(::IDAAIFGOMNG* a1)
		{
			return ((::System::Void(*)(::IDAAIFGOMNG*))((::PBYTE)hIl2Cpp + LBBLPCDICBI_PGIDLIEOMAF_OFFSET))(a1);
		}

	};
