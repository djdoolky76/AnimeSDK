#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KAANKGHDHCB.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }

#define CKACEBFECAN_CTOR_OFFSET UNITYSDK_OFFSET(0xD74B550)
#define CKACEBFECAN_GJAKOPNAEOL_OFFSET UNITYSDK_OFFSET(0xD74C470)
#define CKACEBFECAN_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0xD74BEA0)
#define CKACEBFECAN_IACEDGDOLMD_OFFSET UNITYSDK_OFFSET(0xD74C4F0)

inline static constexpr unsigned int CKACEBFECAN_TypeDefinitionIndex = 82288;

	class CKACEBFECAN : public ::KAANKGHDHCB
	{
	public:
		::System::String* MNDFOPKBHKP; // 0x20
		::System::String* FODBMMCKAEN; // 0x28
		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::String* a3, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::String*, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + CKACEBFECAN_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void HKKFFCBJOKM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKACEBFECAN_HKKFFCBJOKM_OFFSET))(this);
		}

		::System::Boolean GJAKOPNAEOL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CKACEBFECAN_GJAKOPNAEOL_OFFSET))(this);
		}

		::System::Int32 IACEDGDOLMD()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CKACEBFECAN_IACEDGDOLMD_OFFSET))(this);
		}

	};
