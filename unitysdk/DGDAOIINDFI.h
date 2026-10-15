#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JENIFGNJEPE.h"
namespace System { class String; }

#define DGDAOIINDFI_CTOR_OFFSET UNITYSDK_OFFSET(0xE844170)
#define DGDAOIINDFI_FIAFKJOKGIP_OFFSET UNITYSDK_OFFSET(0xE8440E0)
#define DGDAOIINDFI_GET_DELTAHP_X1000_OFFSET UNITYSDK_OFFSET(0xE844190)
#define DGDAOIINDFI_SET_DELTAHP_X1000_OFFSET UNITYSDK_OFFSET(0xE8441A0)

inline static constexpr unsigned int DGDAOIINDFI_TypeDefinitionIndex = 58999;

	class DGDAOIINDFI : public ::JENIFGNJEPE
	{
	public:
		::System::Int64 _DeltaHp_x1000_k__BackingField; // 0x10
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DGDAOIINDFI_CTOR_OFFSET))(this, a1);
		}

		static ::System::String* FIAFKJOKGIP(::System::Int64 a1)
		{
			return ((::System::String*(*)(::System::Int64))((::PBYTE)hIl2Cpp + DGDAOIINDFI_FIAFKJOKGIP_OFFSET))(a1);
		}

		::System::Int64 get_DeltaHp_x1000()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + DGDAOIINDFI_GET_DELTAHP_X1000_OFFSET))(this);
		}

		::System::Void set_DeltaHp_x1000(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + DGDAOIINDFI_SET_DELTAHP_X1000_OFFSET))(this, a1);
		}

	};
