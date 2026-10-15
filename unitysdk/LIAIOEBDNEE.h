#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OCCHJLMKMFL;

#define LIAIOEBDNEE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C70E520)
#define LIAIOEBDNEE_EDGJFLBDEBJ_OFFSET UNITYSDK_OFFSET(0x1C70E4E0)
#define LIAIOEBDNEE_HCCKBPDFINA_OFFSET UNITYSDK_OFFSET(0x1C70E480)

inline static constexpr unsigned int LIAIOEBDNEE_TypeDefinitionIndex = 36948;

	class LIAIOEBDNEE : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIAIOEBDNEE_CTOR_OFFSET))(this);
		}

		::System::Void HCCKBPDFINA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LIAIOEBDNEE_HCCKBPDFINA_OFFSET))(this, a1);
		}

		::OCCHJLMKMFL* EDGJFLBDEBJ()
		{
			return ((::OCCHJLMKMFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + LIAIOEBDNEE_EDGJFLBDEBJ_OFFSET))(this);
		}

	};
