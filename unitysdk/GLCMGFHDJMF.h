#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OEMBHNHBGED.h"

namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIUrbanMapRightListRowNormalContext; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define GLCMGFHDJMF_EALIEKOFMNM_OFFSET UNITYSDK_OFFSET(0x1490A9D0)
#define GLCMGFHDJMF_FFAMNBNOCEM_OFFSET UNITYSDK_OFFSET(0x1490B050)
#define GLCMGFHDJMF_JNJOKMNOCCM_OFFSET UNITYSDK_OFFSET(0x1490ACF0)
#define GLCMGFHDJMF_LPNPHHMJOKA_OFFSET UNITYSDK_OFFSET(0x1490B090)
#define GLCMGFHDJMF_MHHLGMOEHBO_OFFSET UNITYSDK_OFFSET(0x1490B0A0)
#define GLCMGFHDJMF_MICGLKPJDKP_OFFSET UNITYSDK_OFFSET(0x1490AB30)
#define GLCMGFHDJMF_NCPDPMACKAP_OFFSET UNITYSDK_OFFSET(0x1490AEA0)
#define GLCMGFHDJMF__CTOR_OFFSET UNITYSDK_OFFSET(0x1490AE40)

inline static constexpr unsigned int GLCMGFHDJMF_TypeDefinitionIndex = 83443;

class GLCMGFHDJMF : public ::OEMBHNHBGED
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLCMGFHDJMF__CTOR_OFFSET))(this);
	}

	::System::Void EALIEKOFMNM(::System::String* JNLBPMKIFNK, ::System::Func_1<::MoleMole::UIControllerContextBase*>* CPJDHCJPAJM)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Func_1<::MoleMole::UIControllerContextBase*>*))((::PBYTE)hIl2Cpp + GLCMGFHDJMF_EALIEKOFMNM_OFFSET))(this, JNLBPMKIFNK, CPJDHCJPAJM);
	}

	::System::Void MICGLKPJDKP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLCMGFHDJMF_MICGLKPJDKP_OFFSET))(this);
	}

	::System::Void JNJOKMNOCCM(::System::String* JNLBPMKIFNK, ::System::Func_1<::System::Collections::Generic::IEnumerable_1<::MoleMole::UIUrbanMapRightListRowNormalContext*>*>* CPJDHCJPAJM)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Func_1<::System::Collections::Generic::IEnumerable_1<::MoleMole::UIUrbanMapRightListRowNormalContext*>*>*))((::PBYTE)hIl2Cpp + GLCMGFHDJMF_JNJOKMNOCCM_OFFSET))(this, JNLBPMKIFNK, CPJDHCJPAJM);
	}

	::System::String* NCPDPMACKAP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLCMGFHDJMF_NCPDPMACKAP_OFFSET))(this);
	}

	::System::Void FFAMNBNOCEM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLCMGFHDJMF_FFAMNBNOCEM_OFFSET))(this);
	}

	::System::Void LPNPHHMJOKA(::System::String* MIALFKCCCPI, ::System::Func_1<::MoleMole::UIControllerContextBase*>* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Func_1<::MoleMole::UIControllerContextBase*>*))((::PBYTE)hIl2Cpp + GLCMGFHDJMF_LPNPHHMJOKA_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void MHHLGMOEHBO(::System::String* MIALFKCCCPI, ::System::Func_1<::System::Collections::Generic::IEnumerable_1<::MoleMole::UIUrbanMapRightListRowNormalContext*>*>* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Func_1<::System::Collections::Generic::IEnumerable_1<::MoleMole::UIUrbanMapRightListRowNormalContext*>*>*))((::PBYTE)hIl2Cpp + GLCMGFHDJMF_MHHLGMOEHBO_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
