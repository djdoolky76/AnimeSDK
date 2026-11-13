#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GGKEDBCAADJ;
class JMHHBMNIJJB;

#define NLLCGPKIPNJ_IDCGICECPHO_OFFSET UNITYSDK_OFFSET(0x1A42FE50)
#define NLLCGPKIPNJ_JNJAMJEMBMB_OFFSET UNITYSDK_OFFSET(0x1A430130)
#define NLLCGPKIPNJ_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x1A42FCB0)

inline static constexpr unsigned int NLLCGPKIPNJ_TypeDefinitionIndex = 79876;

	class NLLCGPKIPNJ : public ::System::Object
	{
	public:
		static ::System::Void KHGIKBFDLFB(::JMHHBMNIJJB* a1)
		{
			return ((::System::Void(*)(::JMHHBMNIJJB*))((::PBYTE)hIl2Cpp + NLLCGPKIPNJ_KHGIKBFDLFB_OFFSET))(a1);
		}

		static ::System::Void IDCGICECPHO(::JMHHBMNIJJB* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::JMHHBMNIJJB*, ::System::UInt32))((::PBYTE)hIl2Cpp + NLLCGPKIPNJ_IDCGICECPHO_OFFSET))(a1, a2);
		}

		static ::System::Void JNJAMJEMBMB(::JMHHBMNIJJB* a1, ::GGKEDBCAADJ* a2)
		{
			return ((::System::Void(*)(::JMHHBMNIJJB*, ::GGKEDBCAADJ*))((::PBYTE)hIl2Cpp + NLLCGPKIPNJ_JNJAMJEMBMB_OFFSET))(a1, a2);
		}

	};
