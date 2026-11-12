#pragma once
#include "unitysdk/unitysdk.h"
class JEALAGIGPFB_OBEPHMPPCGI_NCMNAGMIOHB;
namespace RPG::Client { class MonoValueEvaluateConfigure_FloatEvaluator; }

#define JEALAGIGPFB_OBEPHMPPCGI_CTOR_OFFSET UNITYSDK_OFFSET(0xB95EEA0)
#define JEALAGIGPFB_OBEPHMPPCGI_GET_CURRENTVALUE_OFFSET UNITYSDK_OFFSET(0xB95F7F0)
#define JEALAGIGPFB_OBEPHMPPCGI_LKIFDCACLOK_OFFSET UNITYSDK_OFFSET(0xB95EEF0)
#define JEALAGIGPFB_OBEPHMPPCGI_MLJDHPEOCLE_1_OFFSET UNITYSDK_OFFSET(0xB95F6E0)
#define JEALAGIGPFB_OBEPHMPPCGI_MLJDHPEOCLE_OFFSET UNITYSDK_OFFSET(0xB95F2A0)

inline static constexpr unsigned int JEALAGIGPFB_OBEPHMPPCGI_TypeDefinitionIndex = 58659;

	class JEALAGIGPFB_OBEPHMPPCGI
	{
	public:
		::System::Boolean GGBBGNIKCEN; // 0x38
		::System::Byte _padding0[0x3];
		::System::Single AIKAPJELHNK; // 0x3C
		::System::Single JDMDDIHADLJ; // 0x40
		::System::Single HPCHCEFOKJB; // 0x44
		::System::Void _ctor(::JEALAGIGPFB_OBEPHMPPCGI_NCMNAGMIOHB* a1, ::RPG::Client::MonoValueEvaluateConfigure_FloatEvaluator* a2)
		{
			return ((::System::Void(*)(::PVOID, ::JEALAGIGPFB_OBEPHMPPCGI_NCMNAGMIOHB*, ::RPG::Client::MonoValueEvaluateConfigure_FloatEvaluator*))((::PBYTE)hIl2Cpp + JEALAGIGPFB_OBEPHMPPCGI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void LKIFDCACLOK(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JEALAGIGPFB_OBEPHMPPCGI_LKIFDCACLOK_OFFSET))(this, a1);
		}

		static ::System::Void MLJDHPEOCLE(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::System::Single a7)
		{
			return ((::System::Void(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + JEALAGIGPFB_OBEPHMPPCGI_MLJDHPEOCLE_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Void MLJDHPEOCLE_1(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + JEALAGIGPFB_OBEPHMPPCGI_MLJDHPEOCLE_1_OFFSET))(a1, a2, a3, a4, a5);
		}

		::System::Single get_CurrentValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + JEALAGIGPFB_OBEPHMPPCGI_GET_CURRENTVALUE_OFFSET))(this);
		}

	};
