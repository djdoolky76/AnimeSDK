#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class DNLGFGILCAI;
namespace MoleMole::Battle { class Entity; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IKFILKHGAOB_BNCIJLACFPI__CTOR_OFFSET UNITYSDK_OFFSET(0x13C8D9C0)

inline static constexpr unsigned int IKFILKHGAOB_BNCIJLACFPI_TypeDefinitionIndex = 92374;

class IKFILKHGAOB_BNCIJLACFPI : public ::System::Object
{
public:
	::DNLGFGILCAI* AHMFPFACACD; // 0x10
	::System::Action* PJNNELGKEPF; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Battle::Entity*>* MMCCELJLJMG; // 0x20
	::System::Boolean EAHOHAKCGNO; // 0x28
	::System::Nullable_1<::System::Boolean> DIENDCAJAJH; // 0x29
	::System::Int32 GOMOCBAJBEM; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKFILKHGAOB_BNCIJLACFPI__CTOR_OFFSET))(this);
	}
};
