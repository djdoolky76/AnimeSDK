#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IBENDELLLAO;

#define LAFIEKJBNIM_NFDLNMCKODM_OFFSET UNITYSDK_OFFSET(0x15DDACE0)
#define LAFIEKJBNIM__CTOR_OFFSET UNITYSDK_OFFSET(0x15DDACD0)

inline static constexpr unsigned int LAFIEKJBNIM_TypeDefinitionIndex = 74642;

class LAFIEKJBNIM : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAFIEKJBNIM__CTOR_OFFSET))(this);
	}

	static ::System::Void NFDLNMCKODM(::IBENDELLLAO* HHIJHDFHPOI)
	{
		return ((::System::Void(*)(::IBENDELLLAO*))((::PBYTE)hIl2Cpp + LAFIEKJBNIM_NFDLNMCKODM_OFFSET))(HHIJHDFHPOI);
	}
};
