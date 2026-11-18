#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JGELKBLKFHE.h"

class FLNJBNNKODG;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define PPGDBNGAOPK_CINLKGMMKKO_OFFSET UNITYSDK_OFFSET(0x1D9D8270)
#define PPGDBNGAOPK_ECAPHPJKCIO_OFFSET UNITYSDK_OFFSET(0x1D9D82E0)
#define PPGDBNGAOPK_MMOAHENJMNK_OFFSET UNITYSDK_OFFSET(0x1D9D8720)
#define PPGDBNGAOPK_OLKMKBHJBBM_OFFSET UNITYSDK_OFFSET(0x1D9D8900)
#define PPGDBNGAOPK_PKNMJNPLEKF_OFFSET UNITYSDK_OFFSET(0x1D9D8460)
#define PPGDBNGAOPK__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9D8260)

inline static constexpr unsigned int PPGDBNGAOPK_TypeDefinitionIndex = 70858;

class PPGDBNGAOPK : public ::JGELKBLKFHE
{
public:
	// static const ::System::UInt32 CGEPBKDGPIL = 0x7; // 0x0
	// static const ::System::UInt32 PFIDKBGOKHH = 0x8; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPGDBNGAOPK__CTOR_OFFSET))(this);
	}

	::System::Int32 CINLKGMMKKO(::FLNJBNNKODG* OOALDGOIKJH)
	{
		return ((::System::Int32(*)(::PVOID, ::FLNJBNNKODG*))((::PBYTE)hIl2Cpp + PPGDBNGAOPK_CINLKGMMKKO_OFFSET))(this, OOALDGOIKJH);
	}

	::System::Void ECAPHPJKCIO(::System::Action* FOIOCDBDFIE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + PPGDBNGAOPK_ECAPHPJKCIO_OFFSET))(this, FOIOCDBDFIE);
	}

	::System::Void PKNMJNPLEKF(::FLNJBNNKODG* OOALDGOIKJH, ::System::Action_1<::System::Boolean>* DBPINHFAHBB)
	{
		return ((::System::Void(*)(::PVOID, ::FLNJBNNKODG*, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + PPGDBNGAOPK_PKNMJNPLEKF_OFFSET))(this, OOALDGOIKJH, DBPINHFAHBB);
	}

	::System::Void MMOAHENJMNK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPGDBNGAOPK_MMOAHENJMNK_OFFSET))(this);
	}

	::System::Void OLKMKBHJBBM(::FLNJBNNKODG* OOALDGOIKJH, ::System::Action_1<::System::Boolean>* DBPINHFAHBB)
	{
		return ((::System::Void(*)(::PVOID, ::FLNJBNNKODG*, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + PPGDBNGAOPK_OLKMKBHJBBM_OFFSET))(this, OOALDGOIKJH, DBPINHFAHBB);
	}
};
