#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BJAPDDEENCN_CTOR_OFFSET UNITYSDK_OFFSET(0x1702D5A0)
#define BJAPDDEENCN_FKIFAEOAGLL_OFFSET UNITYSDK_OFFSET(0x1702D5C0)

inline static constexpr unsigned int BJAPDDEENCN_TypeDefinitionIndex = 37121;

	class BJAPDDEENCN : public ::System::Object
	{
	public:
		::System::Int32 DKFDAEFMFHJ; // 0x10
		::System::UInt32 ENIGCOLMILF; // 0x14
		::System::Int32 FEALKLFAHMI; // 0x18
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BJAPDDEENCN_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean FKIFAEOAGLL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BJAPDDEENCN_FKIFAEOAGLL_OFFSET))(this);
		}

	};
