#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCHPIFLNKJO;
class GAHPNAEGACM;

#define FCHPIFLNKJO___C__DISPLAYCLASS11_0_CTOR_OFFSET UNITYSDK_OFFSET(0x156BD8B0)
#define FCHPIFLNKJO___C__DISPLAYCLASS11_0__ONDETAILCHANGE_B__0_OFFSET UNITYSDK_OFFSET(0x156BE050)

inline static constexpr unsigned int FCHPIFLNKJO___c__DisplayClass11_0_TypeDefinitionIndex = 71258;

	class FCHPIFLNKJO___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::FCHPIFLNKJO* __4__this; // 0x10
		::GAHPNAEGACM* detail; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCHPIFLNKJO___C__DISPLAYCLASS11_0_CTOR_OFFSET))(this);
		}

		::System::Void _OnDetailChange_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCHPIFLNKJO___C__DISPLAYCLASS11_0__ONDETAILCHANGE_B__0_OFFSET))(this);
		}

	};
