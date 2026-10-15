#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BOLOIOMPBHO_CTOR_OFFSET UNITYSDK_OFFSET(0xC195AE0)
#define BOLOIOMPBHO_FMBHCCGHAKB_OFFSET UNITYSDK_OFFSET(0xC195870)
#define BOLOIOMPBHO_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0xC195A50)

inline static constexpr unsigned int BOLOIOMPBHO_TypeDefinitionIndex = 49261;

	class BOLOIOMPBHO : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* LACBLLBHPIO; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOLOIOMPBHO_CTOR_OFFSET))(this);
		}

		::System::Void FMBHCCGHAKB(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + BOLOIOMPBHO_FMBHCCGHAKB_OFFSET))(this, a1, a2);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOLOIOMPBHO_PJPFIHFAHGO_OFFSET))(this);
		}

	};
