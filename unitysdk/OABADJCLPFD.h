#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define OABADJCLPFD_BEFORERECYCLE_OFFSET UNITYSDK_OFFSET(0xE12CE40)
#define OABADJCLPFD_CPPHMHDPLIM_OFFSET UNITYSDK_OFFSET(0xE12CDA0)
#define OABADJCLPFD_JLIMOLHLFAK_OFFSET UNITYSDK_OFFSET(0xE12CCD0)
#define OABADJCLPFD_JMDEKPONKMF_OFFSET UNITYSDK_OFFSET(0xE12CEB0)
#define OABADJCLPFD__CTOR_OFFSET UNITYSDK_OFFSET(0xE12CE90)

inline static constexpr unsigned int OABADJCLPFD_TypeDefinitionIndex = 60607;

class OABADJCLPFD
{
public:
	::System::Int32 ELAADEDGEIL; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OABADJCLPFD__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>* JLIMOLHLFAK(::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>* HLFFCMIFFIB)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + OABADJCLPFD_JLIMOLHLFAK_OFFSET))(this, HLFFCMIFFIB);
	}

	::System::Void BeforeRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OABADJCLPFD_BEFORERECYCLE_OFFSET))(this);
	}

	static ::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>* CPPHMHDPLIM(::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>* COIHPIODHDL, ::System::Int32 CLACNEMIOBA)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>*(*)(::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>*, ::System::Int32))((::PBYTE)hIl2Cpp + OABADJCLPFD_CPPHMHDPLIM_OFFSET))(COIHPIODHDL, CLACNEMIOBA);
	}

	::System::Void JMDEKPONKMF(::System::Int32 CLACNEMIOBA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OABADJCLPFD_JMDEKPONKMF_OFFSET))(this, CLACNEMIOBA);
	}
};
