#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define PNEOAIKEDCG_DIIFNINFMLI_OFFSET UNITYSDK_OFFSET(0x1D637410)
#define PNEOAIKEDCG_FAEKFHEFPKI_OFFSET UNITYSDK_OFFSET(0x1D638010)
#define PNEOAIKEDCG_FOFFKNBAEEI_OFFSET UNITYSDK_OFFSET(0x1D637110)
#define PNEOAIKEDCG_GFEFJKGCMBB_OFFSET UNITYSDK_OFFSET(0x1D637760)
#define PNEOAIKEDCG_JJNPHCOKGII_OFFSET UNITYSDK_OFFSET(0x1D637240)
#define PNEOAIKEDCG_KAACEOAGPPI_OFFSET UNITYSDK_OFFSET(0x1D636EC0)
#define PNEOAIKEDCG_KOLDKHJANNI_OFFSET UNITYSDK_OFFSET(0x1D637F10)
#define PNEOAIKEDCG__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D636CE0)

inline static constexpr unsigned int PNEOAIKEDCG_TypeDefinitionIndex = 72599;

class PNEOAIKEDCG : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Object*>** StaticGet_BANKAOKABOL()
	{
		return (::Il2CppArray<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(PNEOAIKEDCG_TypeDefinitionIndex)->GetStaticField(0x4B2D0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PNEOAIKEDCG__CCTOR_OFFSET))();
	}

	static ::System::Void KAACEOAGPPI(::MoleMole::Battle::Entity* KECKGDFIALJ, ::System::Boolean IDDKNJCIJJM)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + PNEOAIKEDCG_KAACEOAGPPI_OFFSET))(KECKGDFIALJ, IDDKNJCIJJM);
	}

	static ::System::Void FOFFKNBAEEI(::MoleMole::Battle::Entity* KECKGDFIALJ, ::System::Boolean IDDKNJCIJJM)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + PNEOAIKEDCG_FOFFKNBAEEI_OFFSET))(KECKGDFIALJ, IDDKNJCIJJM);
	}

	static ::System::Boolean JJNPHCOKGII(::System::Int32 FEOPKDMJHDH, ::System::Collections::Generic::IReadOnlyList_1<::System::Int32>* AIGBJLBDKFJ)
	{
		return ((::System::Boolean(*)(::System::Int32, ::System::Collections::Generic::IReadOnlyList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + PNEOAIKEDCG_JJNPHCOKGII_OFFSET))(FEOPKDMJHDH, AIGBJLBDKFJ);
	}

	static ::System::Boolean DIIFNINFMLI(::MoleMole::Battle::Entity* KECKGDFIALJ, ::System::Boolean IDDKNJCIJJM, ::System::Collections::Generic::IReadOnlyList_1<::System::Int32>* AIGBJLBDKFJ)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::System::Boolean, ::System::Collections::Generic::IReadOnlyList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + PNEOAIKEDCG_DIIFNINFMLI_OFFSET))(KECKGDFIALJ, IDDKNJCIJJM, AIGBJLBDKFJ);
	}

	static ::System::Void GFEFJKGCMBB(::MoleMole::Battle::Entity* KECKGDFIALJ, ::System::Boolean IDDKNJCIJJM)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + PNEOAIKEDCG_GFEFJKGCMBB_OFFSET))(KECKGDFIALJ, IDDKNJCIJJM);
	}

	static ::System::Void KOLDKHJANNI(::MoleMole::Battle::Entity* KECKGDFIALJ, ::System::Boolean IDDKNJCIJJM)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + PNEOAIKEDCG_KOLDKHJANNI_OFFSET))(KECKGDFIALJ, IDDKNJCIJJM);
	}

	static ::System::Void FAEKFHEFPKI(::MoleMole::Battle::Entity* KECKGDFIALJ, ::System::Boolean IDDKNJCIJJM)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + PNEOAIKEDCG_FAEKFHEFPKI_OFFSET))(KECKGDFIALJ, IDDKNJCIJJM);
	}
};
