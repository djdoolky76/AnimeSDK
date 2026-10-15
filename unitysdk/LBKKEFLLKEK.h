#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KAANKGHDHCB.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }

#define LBKKEFLLKEK_CTOR_OFFSET UNITYSDK_OFFSET(0xB603960)
#define LBKKEFLLKEK_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0xB603C10)

inline static constexpr unsigned int LBKKEFLLKEK_TypeDefinitionIndex = 82284;

	class LBKKEFLLKEK : public ::KAANKGHDHCB
	{
	public:
		::System::String* IIHFKAGKEMC; // 0x20
		::System::Boolean EPCOMCNJFBN; // 0x28
		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::String* a3, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::String*, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + LBKKEFLLKEK_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void HKKFFCBJOKM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBKKEFLLKEK_HKKFFCBJOKM_OFFSET))(this);
		}

	};
