#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define KCFCDMFFHCK_ADCGHPDFPOM_OFFSET UNITYSDK_OFFSET(0x18609C40)
#define KCFCDMFFHCK_ADPKBMHAKHK_OFFSET UNITYSDK_OFFSET(0x18609AD0)
#define KCFCDMFFHCK__CTOR_OFFSET UNITYSDK_OFFSET(0x18609AC0)

inline static constexpr unsigned int KCFCDMFFHCK_TypeDefinitionIndex = 79501;

class KCFCDMFFHCK : public ::System::Object
{
public:
	// static const ::System::Int32 ILPENGKANBJ = 0x2; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCFCDMFFHCK__CTOR_OFFSET))(this);
	}

	static ::System::String* ADPKBMHAKHK(::System::String* LCEGOBBEECM)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + KCFCDMFFHCK_ADPKBMHAKHK_OFFSET))(LCEGOBBEECM);
	}

	static ::System::Boolean ADCGHPDFPOM(::System::Int32 MGMDLMBEDJF, ::System::String*& LCEGOBBEECM)
	{
		return ((::System::Boolean(*)(::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + KCFCDMFFHCK_ADCGHPDFPOM_OFFSET))(MGMDLMBEDJF, LCEGOBBEECM);
	}
};
