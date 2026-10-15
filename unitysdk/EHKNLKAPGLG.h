#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/IGCJIEGAOLH.h"
class KHDJLEELKHD;

#define EHKNLKAPGLG_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x154A2630)
#define EHKNLKAPGLG_CTOR_OFFSET UNITYSDK_OFFSET(0x154A2780)

inline static constexpr unsigned int EHKNLKAPGLG_TypeDefinitionIndex = 62633;

	class EHKNLKAPGLG : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHKNLKAPGLG_CTOR_OFFSET))(this);
		}

		::KHDJLEELKHD* BPLPBPMEODA(::IGCJIEGAOLH a1)
		{
			return ((::KHDJLEELKHD*(*)(::PVOID, ::IGCJIEGAOLH))((::PBYTE)hIl2Cpp + EHKNLKAPGLG_BPLPBPMEODA_OFFSET))(this, a1);
		}

	};
