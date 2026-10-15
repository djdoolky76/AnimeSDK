#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CCEIJBFAOAI;
class LBMCGPOLJHO;

#define HAMCAOCNLGB_PIIFPLIDNPJ_CTOR_OFFSET UNITYSDK_OFFSET(0x15B86B20)
#define HAMCAOCNLGB_PIIFPLIDNPJ_GET_CRAFTING_OFFSET UNITYSDK_OFFSET(0x15B87A20)
#define HAMCAOCNLGB_PIIFPLIDNPJ_GET_MODE_OFFSET UNITYSDK_OFFSET(0x15B87A00)
#define HAMCAOCNLGB_PIIFPLIDNPJ_SET_CRAFTING_OFFSET UNITYSDK_OFFSET(0x15B87A30)
#define HAMCAOCNLGB_PIIFPLIDNPJ_SET_MODE_OFFSET UNITYSDK_OFFSET(0x15B87A10)

inline static constexpr unsigned int HAMCAOCNLGB_PIIFPLIDNPJ_TypeDefinitionIndex = 79539;

	class HAMCAOCNLGB_PIIFPLIDNPJ : public ::System::Object
	{
	public:
		::LBMCGPOLJHO* _Mode_k__BackingField; // 0x10
		::CCEIJBFAOAI* _Crafting_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAMCAOCNLGB_PIIFPLIDNPJ_CTOR_OFFSET))(this);
		}

		::LBMCGPOLJHO* get_Mode()
		{
			return ((::LBMCGPOLJHO*(*)(::PVOID))((::PBYTE)hIl2Cpp + HAMCAOCNLGB_PIIFPLIDNPJ_GET_MODE_OFFSET))(this);
		}

		::System::Void set_Mode(::LBMCGPOLJHO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LBMCGPOLJHO*))((::PBYTE)hIl2Cpp + HAMCAOCNLGB_PIIFPLIDNPJ_SET_MODE_OFFSET))(this, a1);
		}

		::CCEIJBFAOAI* get_Crafting()
		{
			return ((::CCEIJBFAOAI*(*)(::PVOID))((::PBYTE)hIl2Cpp + HAMCAOCNLGB_PIIFPLIDNPJ_GET_CRAFTING_OFFSET))(this);
		}

		::System::Void set_Crafting(::CCEIJBFAOAI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CCEIJBFAOAI*))((::PBYTE)hIl2Cpp + HAMCAOCNLGB_PIIFPLIDNPJ_SET_CRAFTING_OFFSET))(this, a1);
		}

	};
