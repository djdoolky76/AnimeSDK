#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CLGFCPPFINJ;
namespace System { class Action; }

#define ADJNAJHAOHE_MAHNGNBBNEG_HNOCIJMJEHH_OFFSET UNITYSDK_OFFSET(0x16D63720)
#define ADJNAJHAOHE_MAHNGNBBNEG__CTOR_OFFSET UNITYSDK_OFFSET(0x16D63710)

inline static constexpr unsigned int ADJNAJHAOHE_MAHNGNBBNEG_TypeDefinitionIndex = 41397;

class ADJNAJHAOHE_MAHNGNBBNEG : public ::System::Object
{
public:
	::CLGFCPPFINJ* ELKGOHFIOEH; // 0x10
	::System::Action* FKHOJLMBILE; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADJNAJHAOHE_MAHNGNBBNEG__CTOR_OFFSET))(this);
	}

	::System::Void HNOCIJMJEHH(::System::Boolean KDIHIJHNEGE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ADJNAJHAOHE_MAHNGNBBNEG_HNOCIJMJEHH_OFFSET))(this, KDIHIJHNEGE);
	}
};
