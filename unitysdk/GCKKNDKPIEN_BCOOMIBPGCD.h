#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }

#define GCKKNDKPIEN_BCOOMIBPGCD_AIAPHOPHNNN_OFFSET UNITYSDK_OFFSET(0x116E02F0)
#define GCKKNDKPIEN_BCOOMIBPGCD_AJDJNGHFHMB_OFFSET UNITYSDK_OFFSET(0x116E02E0)
#define GCKKNDKPIEN_BCOOMIBPGCD_CLPDJMFFPPD_OFFSET UNITYSDK_OFFSET(0x116E0300)
#define GCKKNDKPIEN_BCOOMIBPGCD__CTOR_OFFSET UNITYSDK_OFFSET(0x116E02D0)

inline static constexpr unsigned int GCKKNDKPIEN_BCOOMIBPGCD_TypeDefinitionIndex = 69795;

class GCKKNDKPIEN_BCOOMIBPGCD : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* DJMEFDIHNDO; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCKKNDKPIEN_BCOOMIBPGCD__CTOR_OFFSET))(this);
	}

	::System::Void AJDJNGHFHMB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCKKNDKPIEN_BCOOMIBPGCD_AJDJNGHFHMB_OFFSET))(this);
	}

	::System::Void AIAPHOPHNNN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCKKNDKPIEN_BCOOMIBPGCD_AIAPHOPHNNN_OFFSET))(this);
	}

	::System::Void CLPDJMFFPPD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCKKNDKPIEN_BCOOMIBPGCD_CLPDJMFFPPD_OFFSET))(this);
	}
};
