#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LPHINGPIEAJ;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MNKBPJBFBPM_BHNFEAILBCG_OFFSET UNITYSDK_OFFSET(0xC2CDC80)
#define MNKBPJBFBPM_CTOR_OFFSET UNITYSDK_OFFSET(0xC2CE4A0)
#define MNKBPJBFBPM_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC2CE3F0)
#define MNKBPJBFBPM_GECCPLLLCBL_OFFSET UNITYSDK_OFFSET(0xC2CDE50)
#define MNKBPJBFBPM_JCMFCGMBINI_OFFSET UNITYSDK_OFFSET(0xC2CDFB0)
#define MNKBPJBFBPM_MOEJFCLJJBH_OFFSET UNITYSDK_OFFSET(0xC2CE170)
#define MNKBPJBFBPM_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0xC2CE360)

inline static constexpr unsigned int MNKBPJBFBPM_TypeDefinitionIndex = 79922;

	class MNKBPJBFBPM : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::LPHINGPIEAJ*>* ADCCKDFGPKH; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNKBPJBFBPM_CTOR_OFFSET))(this);
		}

		::System::Void BHNFEAILBCG(::LPHINGPIEAJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LPHINGPIEAJ*))((::PBYTE)hIl2Cpp + MNKBPJBFBPM_BHNFEAILBCG_OFFSET))(this, a1);
		}

		::LPHINGPIEAJ* GECCPLLLCBL(::System::UInt32 a1)
		{
			return ((::LPHINGPIEAJ*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MNKBPJBFBPM_GECCPLLLCBL_OFFSET))(this, a1);
		}

		::LPHINGPIEAJ* JCMFCGMBINI(::LPHINGPIEAJ* a1, ::System::UInt32 a2)
		{
			return ((::LPHINGPIEAJ*(*)(::PVOID, ::LPHINGPIEAJ*, ::System::UInt32))((::PBYTE)hIl2Cpp + MNKBPJBFBPM_JCMFCGMBINI_OFFSET))(this, a1, a2);
		}

		::LPHINGPIEAJ* MOEJFCLJJBH(::LPHINGPIEAJ* a1)
		{
			return ((::LPHINGPIEAJ*(*)(::PVOID, ::LPHINGPIEAJ*))((::PBYTE)hIl2Cpp + MNKBPJBFBPM_MOEJFCLJJBH_OFFSET))(this, a1);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNKBPJBFBPM_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNKBPJBFBPM_DISPOSE_OFFSET))(this);
		}

	};
