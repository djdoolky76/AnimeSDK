#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class Random; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define JKHCMKKPMHC_BEFORERECYCLE_OFFSET UNITYSDK_OFFSET(0x1308DAC0)
#define JKHCMKKPMHC_JLIMOLHLFAK_OFFSET UNITYSDK_OFFSET(0x1308D8D0)
#define JKHCMKKPMHC_JMDEKPONKMF_OFFSET UNITYSDK_OFFSET(0x1308DBB0)
#define JKHCMKKPMHC__CCTOR_OFFSET UNITYSDK_OFFSET(0x1308DB30)
#define JKHCMKKPMHC__CTOR_OFFSET UNITYSDK_OFFSET(0x1308DB10)

inline static constexpr unsigned int JKHCMKKPMHC_TypeDefinitionIndex = 71252;

class JKHCMKKPMHC
{
public:
	static ::System::Random** StaticGet_MPNBFJLHEIH()
	{
		return (::System::Random**)Il2CppClass::FromTypeDefinitionIndex(JKHCMKKPMHC_TypeDefinitionIndex)->GetStaticField(0x49FC0);
	}
	::System::Int32 OGFPEPEEHLP; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKHCMKKPMHC__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JKHCMKKPMHC__CCTOR_OFFSET))();
	}

	::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>* JLIMOLHLFAK(::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>* HLFFCMIFFIB)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + JKHCMKKPMHC_JLIMOLHLFAK_OFFSET))(this, HLFFCMIFFIB);
	}

	::System::Void BeforeRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKHCMKKPMHC_BEFORERECYCLE_OFFSET))(this);
	}

	::System::Void JMDEKPONKMF(::System::Int32 JHFKDGBCOBA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JKHCMKKPMHC_JMDEKPONKMF_OFFSET))(this, JHFKDGBCOBA);
	}
};
