#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PJHKDJEGJOG;
namespace System { class String; }

#define FBNIDAPDICM_ABGJGLDFCNM_OFFSET UNITYSDK_OFFSET(0x17139C40)
#define FBNIDAPDICM__CTOR_OFFSET UNITYSDK_OFFSET(0x17139C30)

inline static constexpr unsigned int FBNIDAPDICM_TypeDefinitionIndex = 38986;

class FBNIDAPDICM : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBNIDAPDICM__CTOR_OFFSET))(this);
	}

	static ::System::Void ABGJGLDFCNM(::PJHKDJEGJOG* AOFIMNMDLDB, ::System::String*& AFIPJOKECDH, ::System::String*& EKAKGCGLOGB)
	{
		return ((::System::Void(*)(::PJHKDJEGJOG*, ::System::String*&, ::System::String*&))((::PBYTE)hIl2Cpp + FBNIDAPDICM_ABGJGLDFCNM_OFFSET))(AOFIMNMDLDB, AFIPJOKECDH, EKAKGCGLOGB);
	}
};
