#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DKEGIJGBNDP;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KHIDMOFPHNI_KIEONIPDGBM_OFFSET UNITYSDK_OFFSET(0x1299A540)
#define KHIDMOFPHNI_MECIEJPPFIG_OFFSET UNITYSDK_OFFSET(0x1299A490)
#define KHIDMOFPHNI__CTOR_OFFSET UNITYSDK_OFFSET(0x1299A380)

inline static constexpr unsigned int KHIDMOFPHNI_TypeDefinitionIndex = 60309;

class KHIDMOFPHNI : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::DKEGIJGBNDP*>* ECJIKLCIKMK; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHIDMOFPHNI__CTOR_OFFSET))(this);
	}

	::System::Boolean MECIEJPPFIG(::System::Int32 FGOLOEFBOJB, ::DKEGIJGBNDP*& AOKHOHCJNFJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DKEGIJGBNDP*&))((::PBYTE)hIl2Cpp + KHIDMOFPHNI_MECIEJPPFIG_OFFSET))(this, FGOLOEFBOJB, AOKHOHCJNFJ);
	}

	::System::Void KIEONIPDGBM(::System::Int32 FGOLOEFBOJB, ::DKEGIJGBNDP* AOKHOHCJNFJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::DKEGIJGBNDP*))((::PBYTE)hIl2Cpp + KHIDMOFPHNI_KIEONIPDGBM_OFFSET))(this, FGOLOEFBOJB, AOKHOHCJNFJ);
	}
};
