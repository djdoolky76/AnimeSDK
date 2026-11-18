#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KMFHOBLFKPJ;
namespace MoleMole::Battle { class Entity; }

#define KMFHOBLFKPJ_FLCPFFPJPIK_OCEMPHFIHIH_OFFSET UNITYSDK_OFFSET(0x15BA1900)
#define KMFHOBLFKPJ_FLCPFFPJPIK__CTOR_OFFSET UNITYSDK_OFFSET(0x15BA18F0)

inline static constexpr unsigned int KMFHOBLFKPJ_FLCPFFPJPIK_TypeDefinitionIndex = 77871;

class KMFHOBLFKPJ_FLCPFFPJPIK : public ::System::Object
{
public:
	::KMFHOBLFKPJ* KLHPEBKNIFB; // 0x10
	::MoleMole::Battle::Entity* KECKGDFIALJ; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMFHOBLFKPJ_FLCPFFPJPIK__CTOR_OFFSET))(this);
	}

	::System::Void OCEMPHFIHIH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMFHOBLFKPJ_FLCPFFPJPIK_OCEMPHFIHIH_OFFSET))(this);
	}
};
