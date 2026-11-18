#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CMLKNKDCACL;
class MLLODDNIAKE;
class PDDKHKKCENB;
namespace MoleMole::Battle { class Entity; }

#define CMLKNKDCACL_FOCHEMJGJCL_MMBMPGILNMK_OFFSET UNITYSDK_OFFSET(0x1696AB20)
#define CMLKNKDCACL_FOCHEMJGJCL__CTOR_OFFSET UNITYSDK_OFFSET(0x1696AB10)

inline static constexpr unsigned int CMLKNKDCACL_FOCHEMJGJCL_TypeDefinitionIndex = 72291;

class CMLKNKDCACL_FOCHEMJGJCL : public ::System::Object
{
public:
	::MLLODDNIAKE* HFOPIOPHMNC; // 0x10
	::PDDKHKKCENB* HBNBIBADGNH; // 0x18
	::CMLKNKDCACL* KLHPEBKNIFB; // 0x20
	::MoleMole::Battle::Entity* OAMCPEJPHLP; // 0x28
	::System::Boolean HEIPBGDIINM; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMLKNKDCACL_FOCHEMJGJCL__CTOR_OFFSET))(this);
	}

	::System::Void MMBMPGILNMK(::MoleMole::Battle::Entity* JMDHBJMNBCP)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CMLKNKDCACL_FOCHEMJGJCL_MMBMPGILNMK_OFFSET))(this, JMDHBJMNBCP);
	}
};
