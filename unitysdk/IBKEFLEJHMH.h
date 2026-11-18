#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EIFLIFKDHHN.h"
#include "unitysdk/System/Object.h"

class DBJFFDGJBON;
class FGIJDFFIAJN;
class IKKDCFLLIOF;
namespace MoleMole::Battle { class Entity; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define IBKEFLEJHMH_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x165614B0)
#define IBKEFLEJHMH_DCFMPMJGBPI_1_OFFSET UNITYSDK_OFFSET(0x16561330)
#define IBKEFLEJHMH_DCFMPMJGBPI_OFFSET UNITYSDK_OFFSET(0x16560C10)
#define IBKEFLEJHMH_GCGGLOADMJL_OFFSET UNITYSDK_OFFSET(0x16560950)
#define IBKEFLEJHMH_LJJLFNIICGC_OFFSET UNITYSDK_OFFSET(0x16561600)
#define IBKEFLEJHMH__CCTOR_OFFSET UNITYSDK_OFFSET(0x16560720)

inline static constexpr unsigned int IBKEFLEJHMH_TypeDefinitionIndex = 85689;

class IBKEFLEJHMH : public ::System::Object
{
public:
	static ::System::Collections::Generic::IReadOnlyDictionary_2<::System::Int32, ::System::Action_1<::DBJFFDGJBON*>*>** StaticGet_EFHCJLFFMLM()
	{
		return (::System::Collections::Generic::IReadOnlyDictionary_2<::System::Int32, ::System::Action_1<::DBJFFDGJBON*>*>**)Il2CppClass::FromTypeDefinitionIndex(IBKEFLEJHMH_TypeDefinitionIndex)->GetStaticField(0x51480);
	}
	static ::FGIJDFFIAJN** StaticGet_DGDENJKAJDB()
	{
		return (::FGIJDFFIAJN**)Il2CppClass::FromTypeDefinitionIndex(IBKEFLEJHMH_TypeDefinitionIndex)->GetStaticField(0x51488);
	}
	// static const ::System::Int32 AAFBOFCMJPC = -0x1; // 0x0
	// static const ::System::Int32 EAGDIBEIKEH = 0x1; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IBKEFLEJHMH__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>* GCGGLOADMJL(::System::Collections::Generic::IEnumerable_1<::IKKDCFLLIOF*>* MGNPPPJOJDK)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>*(*)(::System::Collections::Generic::IEnumerable_1<::IKKDCFLLIOF*>*))((::PBYTE)hIl2Cpp + IBKEFLEJHMH_GCGGLOADMJL_OFFSET))(MGNPPPJOJDK);
	}

	static ::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>* DCFMPMJGBPI(::EIFLIFKDHHN FLJCCGCEFFG)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>*(*)(::EIFLIFKDHHN))((::PBYTE)hIl2Cpp + IBKEFLEJHMH_DCFMPMJGBPI_OFFSET))(FLJCCGCEFFG);
	}

	static ::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>* DCFMPMJGBPI_1(::System::Int32 HNKAEHPCJEC, ::System::Int32 DMJBFBDLKIN)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>*(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + IBKEFLEJHMH_DCFMPMJGBPI_1_OFFSET))(HNKAEHPCJEC, DMJBFBDLKIN);
	}

	static ::DBJFFDGJBON* COKNIICCODC(::System::Int32 CLACNEMIOBA)
	{
		return ((::DBJFFDGJBON*(*)(::System::Int32))((::PBYTE)hIl2Cpp + IBKEFLEJHMH_COKNIICCODC_OFFSET))(CLACNEMIOBA);
	}

	static ::System::Single LJJLFNIICGC(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Single(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + IBKEFLEJHMH_LJJLFNIICGC_OFFSET))(KECKGDFIALJ);
	}
};
