#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FFPAFGCOKHK.h"
class ABDOMMLHNBC;

#define MGENDGJJNMF_CTOR_OFFSET UNITYSDK_OFFSET(0xC1CACA0)
#define MGENDGJJNMF_DAMDMJJKLON_OFFSET UNITYSDK_OFFSET(0xC1CAB00)
#define MGENDGJJNMF_INPHBLMECCB_OFFSET UNITYSDK_OFFSET(0xC1CABF0)

inline static constexpr unsigned int MGENDGJJNMF_TypeDefinitionIndex = 76350;

	class MGENDGJJNMF : public ::FFPAFGCOKHK
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGENDGJJNMF_CTOR_OFFSET))(this);
		}

		::System::Void DAMDMJJKLON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGENDGJJNMF_DAMDMJJKLON_OFFSET))(this);
		}

		::System::Void INPHBLMECCB(::ABDOMMLHNBC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ABDOMMLHNBC*))((::PBYTE)hIl2Cpp + MGENDGJJNMF_INPHBLMECCB_OFFSET))(this, a1);
		}

	};
