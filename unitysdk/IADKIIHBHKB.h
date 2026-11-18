#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DLDGOPHECJB;
namespace System { class Action; }

#define IADKIIHBHKB_DKDJDEJHABH_OFFSET UNITYSDK_OFFSET(0x16A8C0A0)
#define IADKIIHBHKB_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x16A8C210)
#define IADKIIHBHKB__CTOR_OFFSET UNITYSDK_OFFSET(0x16A8C200)

inline static constexpr unsigned int IADKIIHBHKB_TypeDefinitionIndex = 86294;

class IADKIIHBHKB : public ::System::Object
{
public:
	::DLDGOPHECJB* BMPIHECHPGO; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IADKIIHBHKB__CTOR_OFFSET))(this);
	}

	::System::Void DKDJDEJHABH(::System::Action* PABLEDCGDGM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + IADKIIHBHKB_DKDJDEJHABH_OFFSET))(this, PABLEDCGDGM);
	}

	static ::IADKIIHBHKB* JFDOOELFAOA(::DLDGOPHECJB* GDINHGLCODO)
	{
		return ((::IADKIIHBHKB*(*)(::DLDGOPHECJB*))((::PBYTE)hIl2Cpp + IADKIIHBHKB_JFDOOELFAOA_OFFSET))(GDINHGLCODO);
	}
};
