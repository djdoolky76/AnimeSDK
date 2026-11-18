#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/HKMICDOBLCA.h"

class AMFAHGEFDFJ;
class MLKKDHPBPNJ;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BHJOPMLNDLG_KEPNHFNMDJF_OFFSET UNITYSDK_OFFSET(0x169F3E30)
#define BHJOPMLNDLG_MCGLAMMPJGE_OFFSET UNITYSDK_OFFSET(0x169F3FB0)
#define BHJOPMLNDLG__CTOR_OFFSET UNITYSDK_OFFSET(0x169F42D0)

inline static constexpr unsigned int BHJOPMLNDLG_TypeDefinitionIndex = 57714;

class BHJOPMLNDLG : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHJOPMLNDLG__CTOR_OFFSET))(this);
	}

	::System::Void KEPNHFNMDJF(::MLKKDHPBPNJ* BPBKIHLAECL, ::HKMICDOBLCA& IGAAKDOIPNN, ::System::Collections::Generic::List_1<::AMFAHGEFDFJ*>* ACOFEMGIGID, ::System::Boolean FBILHHBPEHD)
	{
		return ((::System::Void(*)(::PVOID, ::MLKKDHPBPNJ*, ::HKMICDOBLCA&, ::System::Collections::Generic::List_1<::AMFAHGEFDFJ*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + BHJOPMLNDLG_KEPNHFNMDJF_OFFSET))(this, BPBKIHLAECL, IGAAKDOIPNN, ACOFEMGIGID, FBILHHBPEHD);
	}

	static ::System::Void MCGLAMMPJGE(::MLKKDHPBPNJ* BPBKIHLAECL, ::HKMICDOBLCA& IGAAKDOIPNN, ::AMFAHGEFDFJ* LAEMJKCIKDI, ::System::Boolean FBILHHBPEHD)
	{
		return ((::System::Void(*)(::MLKKDHPBPNJ*, ::HKMICDOBLCA&, ::AMFAHGEFDFJ*, ::System::Boolean))((::PBYTE)hIl2Cpp + BHJOPMLNDLG_MCGLAMMPJGE_OFFSET))(BPBKIHLAECL, IGAAKDOIPNN, LAEMJKCIKDI, FBILHHBPEHD);
	}
};
