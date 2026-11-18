#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EJLNHNKEOBF;
namespace MoleMole::Battle { class Entity; }

#define EJLNHNKEOBF_FCCFLNJLKDK_KAEOAJGGAAI_OFFSET UNITYSDK_OFFSET(0xFE1A5B0)
#define EJLNHNKEOBF_FCCFLNJLKDK__CTOR_OFFSET UNITYSDK_OFFSET(0xFE1A5A0)

inline static constexpr unsigned int EJLNHNKEOBF_FCCFLNJLKDK_TypeDefinitionIndex = 52299;

class EJLNHNKEOBF_FCCFLNJLKDK : public ::System::Object
{
public:
	::EJLNHNKEOBF* KLHPEBKNIFB; // 0x10
	::System::Int32 NNIPOCEOGBP; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJLNHNKEOBF_FCCFLNJLKDK__CTOR_OFFSET))(this);
	}

	::System::Void KAEOAJGGAAI(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + EJLNHNKEOBF_FCCFLNJLKDK_KAEOAJGGAAI_OFFSET))(this, KECKGDFIALJ);
	}
};
