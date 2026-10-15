#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define JPNMPGDPPLF_CTOR_OFFSET UNITYSDK_OFFSET(0xB2C7B00)
#define JPNMPGDPPLF_GET_AMOUNT_OFFSET UNITYSDK_OFFSET(0xB2C7AE0)
#define JPNMPGDPPLF_GET_DESC_OFFSET UNITYSDK_OFFSET(0xB2C7AC0)
#define JPNMPGDPPLF_SET_AMOUNT_OFFSET UNITYSDK_OFFSET(0xB2C7AF0)
#define JPNMPGDPPLF_SET_DESC_OFFSET UNITYSDK_OFFSET(0xB2C7AD0)

inline static constexpr unsigned int JPNMPGDPPLF_TypeDefinitionIndex = 79718;

	class JPNMPGDPPLF : public ::System::Object
	{
	public:
		::System::String* _Desc_k__BackingField; // 0x10
		::System::UInt32 _Amount_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPNMPGDPPLF_CTOR_OFFSET))(this);
		}

		::System::String* get_Desc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPNMPGDPPLF_GET_DESC_OFFSET))(this);
		}

		::System::Void set_Desc(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JPNMPGDPPLF_SET_DESC_OFFSET))(this, a1);
		}

		::System::UInt32 get_Amount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JPNMPGDPPLF_GET_AMOUNT_OFFSET))(this);
		}

		::System::Void set_Amount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JPNMPGDPPLF_SET_AMOUNT_OFFSET))(this, a1);
		}

	};
