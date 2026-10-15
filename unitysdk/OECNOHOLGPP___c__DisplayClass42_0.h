#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NKIJFPHFJCO;
class OECNOHOLGPP;

#define OECNOHOLGPP___C__DISPLAYCLASS42_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5773F0)
#define OECNOHOLGPP___C__DISPLAYCLASS42_0__SIMULATELIFT_G__APPLY_0_OFFSET UNITYSDK_OFFSET(0x1C577400)
#define OECNOHOLGPP___C__DISPLAYCLASS42_0__SIMULATELIFT_G__REVERT_1_OFFSET UNITYSDK_OFFSET(0x1C5782A0)

inline static constexpr unsigned int OECNOHOLGPP___c__DisplayClass42_0_TypeDefinitionIndex = 41801;

	class OECNOHOLGPP___c__DisplayClass42_0 : public ::System::Object
	{
	public:
		::NKIJFPHFJCO* piece; // 0x10
		::OECNOHOLGPP* __4__this; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OECNOHOLGPP___C__DISPLAYCLASS42_0_CTOR_OFFSET))(this);
		}

		::System::Void _SimulateLift_g__Apply_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OECNOHOLGPP___C__DISPLAYCLASS42_0__SIMULATELIFT_G__APPLY_0_OFFSET))(this);
		}

		::System::Void _SimulateLift_g__Revert_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OECNOHOLGPP___C__DISPLAYCLASS42_0__SIMULATELIFT_G__REVERT_1_OFFSET))(this);
		}

	};
