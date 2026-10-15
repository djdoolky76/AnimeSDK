#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EOKOEJKEFMN;

#define MMOGAOBBKME_BCDBIIMGBEN_OFFSET UNITYSDK_OFFSET(0xB9DA010)
#define MMOGAOBBKME_DCJLBCPAKJF_OFFSET UNITYSDK_OFFSET(0xB9DA490)
#define MMOGAOBBKME_JHPEMIJGELL_OFFSET UNITYSDK_OFFSET(0xB9DA190)
#define MMOGAOBBKME_LJNFLLLICCN_OFFSET UNITYSDK_OFFSET(0xB9DA310)

inline static constexpr unsigned int MMOGAOBBKME_TypeDefinitionIndex = 81047;

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
