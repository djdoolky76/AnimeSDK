#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EOKOEJKEFMN;

#define MMOGAOBBKME_BCDBIIMGBEN_OFFSET UNITYSDK_OFFSET(0x18908FE0)
#define MMOGAOBBKME_DCJLBCPAKJF_OFFSET UNITYSDK_OFFSET(0x18909460)
#define MMOGAOBBKME_JHPEMIJGELL_OFFSET UNITYSDK_OFFSET(0x18909160)
#define MMOGAOBBKME_LJNFLLLICCN_OFFSET UNITYSDK_OFFSET(0x189092E0)

inline static constexpr unsigned int MMOGAOBBKME_TypeDefinitionIndex = 83827;

	class MMOGAOBBKME : public ::System::Object
	{
	public:
		static ::System::Boolean BCDBIIMGBEN(::EOKOEJKEFMN* a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::EOKOEJKEFMN*, ::System::UInt32))((::PBYTE)hIl2Cpp + MMOGAOBBKME_BCDBIIMGBEN_OFFSET))(a1, a2);
		}

		static ::System::Boolean JHPEMIJGELL(::EOKOEJKEFMN* a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::EOKOEJKEFMN*, ::System::UInt32))((::PBYTE)hIl2Cpp + MMOGAOBBKME_JHPEMIJGELL_OFFSET))(a1, a2);
		}

		static ::System::Boolean LJNFLLLICCN(::EOKOEJKEFMN* a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::EOKOEJKEFMN*, ::System::UInt32))((::PBYTE)hIl2Cpp + MMOGAOBBKME_LJNFLLLICCN_OFFSET))(a1, a2);
		}

		static ::System::Boolean DCJLBCPAKJF(::EOKOEJKEFMN* a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::EOKOEJKEFMN*, ::System::UInt32))((::PBYTE)hIl2Cpp + MMOGAOBBKME_DCJLBCPAKJF_OFFSET))(a1, a2);
		}

	};
