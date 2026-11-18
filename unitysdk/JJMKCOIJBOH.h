#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OKGLILBPOFO.h"

class HIDPAPFBACC;
namespace MoleMole { class UICreateRolePageController; }
namespace System { class EventArgs; }

#define JJMKCOIJBOH_FOPOMBMKFAC_OFFSET UNITYSDK_OFFSET(0x1945F510)
#define JJMKCOIJBOH_GLEJMKLOMBP_OFFSET UNITYSDK_OFFSET(0x1945F000)
#define JJMKCOIJBOH_IBAAPKKPKAH_OFFSET UNITYSDK_OFFSET(0x1945F560)
#define JJMKCOIJBOH_JKCOOFLJFCL_OFFSET UNITYSDK_OFFSET(0x1945F7A0)
#define JJMKCOIJBOH_NDFCDDFCBDM_OFFSET UNITYSDK_OFFSET(0x1945FD20)
#define JJMKCOIJBOH_OIKJKFPEDLD_OFFSET UNITYSDK_OFFSET(0x1945FDD0)
#define JJMKCOIJBOH__CTOR_OFFSET UNITYSDK_OFFSET(0x1945EFF0)

inline static constexpr unsigned int JJMKCOIJBOH_TypeDefinitionIndex = 68209;

class JJMKCOIJBOH : public ::OKGLILBPOFO
{
public:
	::MoleMole::UICreateRolePageController* PINNDBLFLFG; // 0x20
	::HIDPAPFBACC* CEJENBBHBBG; // 0x28

	::System::Void _ctor(::HIDPAPFBACC* DEKJDEPKKLH)
	{
		return ((::System::Void(*)(::PVOID, ::HIDPAPFBACC*))((::PBYTE)hIl2Cpp + JJMKCOIJBOH__CTOR_OFFSET))(this, DEKJDEPKKLH);
	}

	::System::Void GLEJMKLOMBP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJMKCOIJBOH_GLEJMKLOMBP_OFFSET))(this);
	}

	::System::Void FOPOMBMKFAC(::System::EventArgs* MNDIBLLFAJI)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + JJMKCOIJBOH_FOPOMBMKFAC_OFFSET))(this, MNDIBLLFAJI);
	}

	::System::Void JKCOOFLJFCL(::System::Int32 IENHLBFCKFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JJMKCOIJBOH_JKCOOFLJFCL_OFFSET))(this, IENHLBFCKFC);
	}

	::System::Void NDFCDDFCBDM(::System::Int32 IENHLBFCKFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JJMKCOIJBOH_NDFCDDFCBDM_OFFSET))(this, IENHLBFCKFC);
	}

	::System::Void OIKJKFPEDLD(::System::EventArgs* MNDIBLLFAJI)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + JJMKCOIJBOH_OIKJKFPEDLD_OFFSET))(this, MNDIBLLFAJI);
	}

	::System::Void IBAAPKKPKAH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJMKCOIJBOH_IBAAPKKPKAH_OFFSET))(this);
	}
};
