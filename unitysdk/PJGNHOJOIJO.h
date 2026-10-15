#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NMFPDCLMMGI;

#define PJGNHOJOIJO_APLFGJABIJN_OFFSET UNITYSDK_OFFSET(0x1C9F3A00)
#define PJGNHOJOIJO_BDCKHKAGKDM_OFFSET UNITYSDK_OFFSET(0x1C9F3CD0)
#define PJGNHOJOIJO_BLJBCLKKKAL_OFFSET UNITYSDK_OFFSET(0x1C9F3E80)
#define PJGNHOJOIJO_EOLDOEPJOHC_OFFSET UNITYSDK_OFFSET(0x1C9F3B90)
#define PJGNHOJOIJO_MALPKNEMFMF_OFFSET UNITYSDK_OFFSET(0x1C9F3DB0)
#define PJGNHOJOIJO_NIKMMDDCOPG_OFFSET UNITYSDK_OFFSET(0x1C9F3F70)
#define PJGNHOJOIJO_PINFHCIGIFG_OFFSET UNITYSDK_OFFSET(0x1C9F3AC0)

inline static constexpr unsigned int PJGNHOJOIJO_TypeDefinitionIndex = 42062;

	class PJGNHOJOIJO : public ::System::Object
	{
	public:
		static ::System::Boolean APLFGJABIJN(::NMFPDCLMMGI* a1)
		{
			return ((::System::Boolean(*)(::NMFPDCLMMGI*))((::PBYTE)hIl2Cpp + PJGNHOJOIJO_APLFGJABIJN_OFFSET))(a1);
		}

		static ::System::Void PINFHCIGIFG(::NMFPDCLMMGI* a1)
		{
			return ((::System::Void(*)(::NMFPDCLMMGI*))((::PBYTE)hIl2Cpp + PJGNHOJOIJO_PINFHCIGIFG_OFFSET))(a1);
		}

		static ::System::Void EOLDOEPJOHC(::NMFPDCLMMGI* a1, ::System::UInt32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::NMFPDCLMMGI*, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + PJGNHOJOIJO_EOLDOEPJOHC_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean BDCKHKAGKDM(::NMFPDCLMMGI* a1)
		{
			return ((::System::Boolean(*)(::NMFPDCLMMGI*))((::PBYTE)hIl2Cpp + PJGNHOJOIJO_BDCKHKAGKDM_OFFSET))(a1);
		}

		static ::System::UInt32 MALPKNEMFMF(::NMFPDCLMMGI* a1)
		{
			return ((::System::UInt32(*)(::NMFPDCLMMGI*))((::PBYTE)hIl2Cpp + PJGNHOJOIJO_MALPKNEMFMF_OFFSET))(a1);
		}

		static ::System::Boolean BLJBCLKKKAL(::NMFPDCLMMGI* a1)
		{
			return ((::System::Boolean(*)(::NMFPDCLMMGI*))((::PBYTE)hIl2Cpp + PJGNHOJOIJO_BLJBCLKKKAL_OFFSET))(a1);
		}

		static ::System::Boolean NIKMMDDCOPG(::NMFPDCLMMGI* a1)
		{
			return ((::System::Boolean(*)(::NMFPDCLMMGI*))((::PBYTE)hIl2Cpp + PJGNHOJOIJO_NIKMMDDCOPG_OFFSET))(a1);
		}

	};
