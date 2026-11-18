#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define DDGHJCBMHPJ_ABDAFBBHFCG_BFDLAEIAONM_OFFSET UNITYSDK_OFFSET(0x13289E60)
#define DDGHJCBMHPJ_ABDAFBBHFCG__CTOR_OFFSET UNITYSDK_OFFSET(0x13289E50)

inline static constexpr unsigned int DDGHJCBMHPJ_ABDAFBBHFCG_TypeDefinitionIndex = 50952;

class DDGHJCBMHPJ_ABDAFBBHFCG : public ::System::Object
{
public:
	::Il2CppArray<::System::Single>* NOMCLDGPNAF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDGHJCBMHPJ_ABDAFBBHFCG__CTOR_OFFSET))(this);
	}

	static ::DDGHJCBMHPJ_ABDAFBBHFCG* BFDLAEIAONM(::Il2CppArray<::System::Byte>* IBGBKPADGJO, ::System::Int32 BOGPAHGJOJK)
	{
		return ((::DDGHJCBMHPJ_ABDAFBBHFCG*(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + DDGHJCBMHPJ_ABDAFBBHFCG_BFDLAEIAONM_OFFSET))(IBGBKPADGJO, BOGPAHGJOJK);
	}
};
