#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HCJNGFGGGCD;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LKHBEAFPHAD_CCTOR_OFFSET UNITYSDK_OFFSET(0xB74AE90)
#define LKHBEAFPHAD_FDOAOENCODE_OFFSET UNITYSDK_OFFSET(0xB74A9D0)
#define LKHBEAFPHAD_HMFPIFOEPCM_OFFSET UNITYSDK_OFFSET(0xB74AB70)

inline static constexpr unsigned int LKHBEAFPHAD_TypeDefinitionIndex = 67378;

	class LKHBEAFPHAD : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::HCJNGFGGGCD*>** StaticGet_LCIGELCDPGG()
		{
			return (::System::Collections::Generic::List_1<::HCJNGFGGGCD*>**)UnitySDK::FromName("", "LKHBEAFPHAD")->GetStaticField(0x65120);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LKHBEAFPHAD_CCTOR_OFFSET))();
		}

		static ::System::Void FDOAOENCODE(::HCJNGFGGGCD* a1)
		{
			return ((::System::Void(*)(::HCJNGFGGGCD*))((::PBYTE)hIl2Cpp + LKHBEAFPHAD_FDOAOENCODE_OFFSET))(a1);
		}

		static ::System::Void HMFPIFOEPCM()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LKHBEAFPHAD_HMFPIFOEPCM_OFFSET))();
		}

	};
