#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JFAJIIHCBHN;
class OIKDEOMMOAM;

#define NCPHEBGHOFC_ABOFOMGHGJM_OFFSET UNITYSDK_OFFSET(0xBB1DC80)
#define NCPHEBGHOFC_CLEAR_OFFSET UNITYSDK_OFFSET(0xBB1DC30)
#define NCPHEBGHOFC_CTOR_OFFSET UNITYSDK_OFFSET(0xBB1DCF0)

inline static constexpr unsigned int NCPHEBGHOFC_TypeDefinitionIndex = 54015;

	class NCPHEBGHOFC : public ::System::Object
	{
	public:
		::JFAJIIHCBHN* BDNOLADKBCL; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCPHEBGHOFC_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCPHEBGHOFC_CLEAR_OFFSET))(this);
		}

		::System::Void ABOFOMGHGJM(::OIKDEOMMOAM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OIKDEOMMOAM*))((::PBYTE)hIl2Cpp + NCPHEBGHOFC_ABOFOMGHGJM_OFFSET))(this, a1);
		}

	};
