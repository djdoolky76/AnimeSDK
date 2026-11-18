#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MJHDNMKGLBJ;
namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CDPPGBIAADA_NALBNBENNIM_OFFSET UNITYSDK_OFFSET(0x16864930)
#define CDPPGBIAADA_PGNEKOFFGHL_OFFSET UNITYSDK_OFFSET(0x16864880)
#define CDPPGBIAADA__CTOR_OFFSET UNITYSDK_OFFSET(0x16864980)

inline static constexpr unsigned int CDPPGBIAADA_TypeDefinitionIndex = 83573;

class CDPPGBIAADA : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDPPGBIAADA__CTOR_OFFSET))(this);
	}

	::System::Void PGNEKOFFGHL(::System::Collections::Generic::List_1<::MJHDNMKGLBJ*>*& NGBEIOPNHAJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MJHDNMKGLBJ*>*&))((::PBYTE)hIl2Cpp + CDPPGBIAADA_PGNEKOFFGHL_OFFSET))(this, NGBEIOPNHAJ);
	}

	::System::Void NALBNBENNIM(::MoleMole::Battle::Entity* DJHFOGHIFEJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CDPPGBIAADA_NALBNBENNIM_OFFSET))(this, DJHFOGHIFEJ);
	}
};
