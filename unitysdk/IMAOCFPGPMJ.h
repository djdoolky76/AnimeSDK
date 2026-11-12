#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define IMAOCFPGPMJ_AOFJMKMBJJF_OFFSET UNITYSDK_OFFSET(0xB7FD4C0)
#define IMAOCFPGPMJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB7FD560)
#define IMAOCFPGPMJ_FDIIOHKEHGC_OFFSET UNITYSDK_OFFSET(0xB7FD240)
#define IMAOCFPGPMJ_NBHEGAMECHE_OFFSET UNITYSDK_OFFSET(0xB7FD330)
#define IMAOCFPGPMJ_OENAMINOLLF_OFFSET UNITYSDK_OFFSET(0xB7FD480)

inline static constexpr unsigned int IMAOCFPGPMJ_TypeDefinitionIndex = 71437;

	class IMAOCFPGPMJ : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMAOCFPGPMJ_CTOR_OFFSET))(this);
		}

		static ::System::IntPtr FDIIOHKEHGC(::System::IntPtr a1, ::System::Boolean a2, ::System::String* a3)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + IMAOCFPGPMJ_FDIIOHKEHGC_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean NBHEGAMECHE()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IMAOCFPGPMJ_NBHEGAMECHE_OFFSET))();
		}

		static ::System::String* OENAMINOLLF()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + IMAOCFPGPMJ_OENAMINOLLF_OFFSET))();
		}

		static ::System::String* AOFJMKMBJJF()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + IMAOCFPGPMJ_AOFJMKMBJJF_OFFSET))();
		}

	};
