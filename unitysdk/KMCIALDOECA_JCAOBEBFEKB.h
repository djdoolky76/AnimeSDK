#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define KMCIALDOECA_JCAOBEBFEKB_ACMKLFOMPFC_OFFSET UNITYSDK_OFFSET(0xB5379D0)
#define KMCIALDOECA_JCAOBEBFEKB_CTOR_OFFSET UNITYSDK_OFFSET(0xB536950)
#define KMCIALDOECA_JCAOBEBFEKB_DADCFBHGLOH_OFFSET UNITYSDK_OFFSET(0xB537980)
#define KMCIALDOECA_JCAOBEBFEKB_JJNFOPNOPBF_OFFSET UNITYSDK_OFFSET(0xB537930)

inline static constexpr unsigned int KMCIALDOECA_JCAOBEBFEKB_TypeDefinitionIndex = 59832;

	class KMCIALDOECA_JCAOBEBFEKB : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMCIALDOECA_JCAOBEBFEKB_CTOR_OFFSET))(this);
		}

		::System::Boolean JJNFOPNOPBF(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KMCIALDOECA_JCAOBEBFEKB_JJNFOPNOPBF_OFFSET))(this, a1);
		}

		::System::Void DADCFBHGLOH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KMCIALDOECA_JCAOBEBFEKB_DADCFBHGLOH_OFFSET))(this, a1);
		}

		::System::UInt32 ACMKLFOMPFC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KMCIALDOECA_JCAOBEBFEKB_ACMKLFOMPFC_OFFSET))(this);
		}

	};
