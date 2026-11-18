#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLFBLCIJPKD_JCOKCLNFAFO_OFFSET UNITYSDK_OFFSET(0x1326CA50)
#define CLFBLCIJPKD_KCFDBCMGHII_OFFSET UNITYSDK_OFFSET(0x1326C9C0)
#define CLFBLCIJPKD_OEJIFEPOEAL_OFFSET UNITYSDK_OFFSET(0x1326C980)
#define CLFBLCIJPKD__CTOR_OFFSET UNITYSDK_OFFSET(0x1326C970)

inline static constexpr unsigned int CLFBLCIJPKD_TypeDefinitionIndex = 88456;

class CLFBLCIJPKD : public ::System::Object
{
public:
	// static const ::System::String* KIOMNKPPHOK; // 0x0
	// static const ::System::String* HKMNBHADHOJ; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLFBLCIJPKD__CTOR_OFFSET))(this);
	}

	static ::System::Void OEJIFEPOEAL(::System::String* NGHLLDAJJJE)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLFBLCIJPKD_OEJIFEPOEAL_OFFSET))(NGHLLDAJJJE);
	}

	static ::System::Void KCFDBCMGHII(::System::Boolean EGEGIMGMJHN, ::System::String* FOBAEPFNNLE)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLFBLCIJPKD_KCFDBCMGHII_OFFSET))(EGEGIMGMJHN, FOBAEPFNNLE);
	}

	static ::System::Void JCOKCLNFAFO(::System::String* NGHLLDAJJJE, ::System::Boolean ENBGOIPDOHB)
	{
		return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLFBLCIJPKD_JCOKCLNFAFO_OFFSET))(NGHLLDAJJJE, ENBGOIPDOHB);
	}
};
