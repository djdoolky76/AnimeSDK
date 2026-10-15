#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EGDGOMKKEJI;
class GLPPDCIBMIH;
class IJFIHJJPHNA;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IFNMPBPNBIF_CTOR_OFFSET UNITYSDK_OFFSET(0x1C69A3F0)
#define IFNMPBPNBIF_MDCPIDBMFCE_OFFSET UNITYSDK_OFFSET(0x1C69A990)
#define IFNMPBPNBIF_PDCHOLHJLDK_OFFSET UNITYSDK_OFFSET(0x1C69A400)

	class IFNMPBPNBIF : public ::System::Object
	{
	public:
		::EGDGOMKKEJI* EEFMDEHLLFI; // 0x10
		::System::Void _ctor(::EGDGOMKKEJI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EGDGOMKKEJI*))((::PBYTE)hIl2Cpp + IFNMPBPNBIF_CTOR_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::Int32>* PDCHOLHJLDK(::IJFIHJJPHNA* a1, ::System::Collections::Generic::List_1<::GLPPDCIBMIH*>* a2)
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::IJFIHJJPHNA*, ::System::Collections::Generic::List_1<::GLPPDCIBMIH*>*))((::PBYTE)hIl2Cpp + IFNMPBPNBIF_PDCHOLHJLDK_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::System::Int32>* MDCPIDBMFCE(::IJFIHJJPHNA* a1, ::System::Collections::Generic::List_1<::GLPPDCIBMIH*>* a2)
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::IJFIHJJPHNA*, ::System::Collections::Generic::List_1<::GLPPDCIBMIH*>*))((::PBYTE)hIl2Cpp + IFNMPBPNBIF_MDCPIDBMFCE_OFFSET))(this, a1, a2);
		}

	};
