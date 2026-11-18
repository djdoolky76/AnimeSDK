#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DLDGOPHECJB;
namespace System { class Action; }

#define MEPNGBDMPMA_DKDJDEJHABH_OFFSET UNITYSDK_OFFSET(0x14050860)
#define MEPNGBDMPMA_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x140509D0)
#define MEPNGBDMPMA__CTOR_OFFSET UNITYSDK_OFFSET(0x140509C0)

inline static constexpr unsigned int MEPNGBDMPMA_TypeDefinitionIndex = 45672;

class MEPNGBDMPMA : public ::System::Object
{
public:
	::DLDGOPHECJB* BMPIHECHPGO; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEPNGBDMPMA__CTOR_OFFSET))(this);
	}

	::System::Void DKDJDEJHABH(::System::Action* PABLEDCGDGM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MEPNGBDMPMA_DKDJDEJHABH_OFFSET))(this, PABLEDCGDGM);
	}

	static ::MEPNGBDMPMA* JFDOOELFAOA(::DLDGOPHECJB* GDINHGLCODO)
	{
		return ((::MEPNGBDMPMA*(*)(::DLDGOPHECJB*))((::PBYTE)hIl2Cpp + MEPNGBDMPMA_JFDOOELFAOA_OFFSET))(GDINHGLCODO);
	}
};
