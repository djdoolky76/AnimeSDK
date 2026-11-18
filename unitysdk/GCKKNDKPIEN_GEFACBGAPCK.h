#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }

#define GCKKNDKPIEN_GEFACBGAPCK_FDLNIEGEOLI_OFFSET UNITYSDK_OFFSET(0x13248760)
#define GCKKNDKPIEN_GEFACBGAPCK__CTOR_OFFSET UNITYSDK_OFFSET(0x13248750)

inline static constexpr unsigned int GCKKNDKPIEN_GEFACBGAPCK_TypeDefinitionIndex = 69796;

class GCKKNDKPIEN_GEFACBGAPCK : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* KECKGDFIALJ; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCKKNDKPIEN_GEFACBGAPCK__CTOR_OFFSET))(this);
	}

	::System::Void FDLNIEGEOLI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCKKNDKPIEN_GEFACBGAPCK_FDLNIEGEOLI_OFFSET))(this);
	}
};
