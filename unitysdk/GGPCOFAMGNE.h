#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KAANKGHDHCB.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }

#define GGPCOFAMGNE_CTOR_OFFSET UNITYSDK_OFFSET(0x15A07180)
#define GGPCOFAMGNE_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0x15A071D0)

inline static constexpr unsigned int GGPCOFAMGNE_TypeDefinitionIndex = 82291;

	class GGPCOFAMGNE : public ::KAANKGHDHCB
	{
	public:
		::System::String* GKHIHPGCLIK; // 0x20
		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::String* a3, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::String*, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + GGPCOFAMGNE_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void HKKFFCBJOKM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGPCOFAMGNE_HKKFFCBJOKM_OFFSET))(this);
		}

	};
