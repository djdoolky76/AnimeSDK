#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define DNKAAIFEKNP_GNKBEOCPBJC_CTOR_OFFSET UNITYSDK_OFFSET(0x11FD2930)
#define DNKAAIFEKNP_GNKBEOCPBJC_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x11FD28D0)

inline static constexpr unsigned int DNKAAIFEKNP_GNKBEOCPBJC_TypeDefinitionIndex = 59987;

	class DNKAAIFEKNP_GNKBEOCPBJC : public ::System::Object
	{
	public:
		::System::String* DAIANGHGOLL; // 0x10
		::System::Int32 KPMGKCOBHPB; // 0x18
		::System::Int32 NJIOMOHBILM; // 0x1C
		::System::Int32 LNINPPNDFMF; // 0x20
		::System::Int32 FIMNPJLNLEE; // 0x24
		::System::Int32 DOBKKDIECDO; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNKAAIFEKNP_GNKBEOCPBJC_CTOR_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNKAAIFEKNP_GNKBEOCPBJC_KHGIKBFDLFB_OFFSET))(this);
		}

	};
