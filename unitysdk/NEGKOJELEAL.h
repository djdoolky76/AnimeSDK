#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DLDGOPHECJB;
namespace System { class Action; }

#define NEGKOJELEAL_DKDJDEJHABH_OFFSET UNITYSDK_OFFSET(0x105AF510)
#define NEGKOJELEAL_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x105AF680)
#define NEGKOJELEAL__CTOR_OFFSET UNITYSDK_OFFSET(0x105AF670)

inline static constexpr unsigned int NEGKOJELEAL_TypeDefinitionIndex = 87622;

class NEGKOJELEAL : public ::System::Object
{
public:
	::DLDGOPHECJB* BMPIHECHPGO; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEGKOJELEAL__CTOR_OFFSET))(this);
	}

	::System::Void DKDJDEJHABH(::System::Action* PABLEDCGDGM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + NEGKOJELEAL_DKDJDEJHABH_OFFSET))(this, PABLEDCGDGM);
	}

	static ::NEGKOJELEAL* JFDOOELFAOA(::DLDGOPHECJB* GDINHGLCODO)
	{
		return ((::NEGKOJELEAL*(*)(::DLDGOPHECJB*))((::PBYTE)hIl2Cpp + NEGKOJELEAL_JFDOOELFAOA_OFFSET))(GDINHGLCODO);
	}
};
