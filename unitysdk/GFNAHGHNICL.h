#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DCKGNOHECDC;
class DHCNDENHLGO;
class FBAMAFLOBGA;
class GKMDIDJNMKA;
class ICMJACOKIPI;
class JCKGBFJJFFC;
class MDLGCDHGLDA;
class PMMOFOBCINL;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define GFNAHGHNICL_ADD_ONCHANGED_OFFSET UNITYSDK_OFFSET(0x159F15B0)
#define GFNAHGHNICL_ALJIOCDBMKO_1_OFFSET UNITYSDK_OFFSET(0x159F1950)
#define GFNAHGHNICL_ALJIOCDBMKO_2_OFFSET UNITYSDK_OFFSET(0x159F1E10)
#define GFNAHGHNICL_ALJIOCDBMKO_3_OFFSET UNITYSDK_OFFSET(0x159F22D0)
#define GFNAHGHNICL_ALJIOCDBMKO_OFFSET UNITYSDK_OFFSET(0x159F1770)
#define GFNAHGHNICL_BPDIGKDIJKN_OFFSET UNITYSDK_OFFSET(0x159F2820)
#define GFNAHGHNICL_CTOR_OFFSET UNITYSDK_OFFSET(0x159F1670)
#define GFNAHGHNICL_DMAPBGHPDCI_OFFSET UNITYSDK_OFFSET(0x159F1440)
#define GFNAHGHNICL_GET_STAGES_OFFSET UNITYSDK_OFFSET(0x159F12D0)
#define GFNAHGHNICL_JNEOLJDAEFJ_OFFSET UNITYSDK_OFFSET(0x159F2970)
#define GFNAHGHNICL_NPJPBDLJLLN_OFFSET UNITYSDK_OFFSET(0x159F12E0)
#define GFNAHGHNICL_REMOVE_ONCHANGED_OFFSET UNITYSDK_OFFSET(0x159F1610)

inline static constexpr unsigned int GFNAHGHNICL_TypeDefinitionIndex = 81477;

	class GFNAHGHNICL : public ::System::Object
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::DCKGNOHECDC*>* _Stages_k__BackingField; // 0x10
		::System::Action* OnChanged; // 0x18
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GFNAHGHNICL_CTOR_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::DCKGNOHECDC*>* get_Stages()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::DCKGNOHECDC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFNAHGHNICL_GET_STAGES_OFFSET))(this);
		}

		::System::Int32 NPJPBDLJLLN()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GFNAHGHNICL_NPJPBDLJLLN_OFFSET))(this);
		}

		::GKMDIDJNMKA* DMAPBGHPDCI(::System::Int32 a1)
		{
			return ((::GKMDIDJNMKA*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GFNAHGHNICL_DMAPBGHPDCI_OFFSET))(this, a1);
		}

		::System::Void add_OnChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + GFNAHGHNICL_ADD_ONCHANGED_OFFSET))(this, a1);
		}

		::System::Void remove_OnChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + GFNAHGHNICL_REMOVE_ONCHANGED_OFFSET))(this, a1);
		}

		::System::Void ALJIOCDBMKO(::DHCNDENHLGO* a1, ::JCKGBFJJFFC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::DHCNDENHLGO*, ::JCKGBFJJFFC*))((::PBYTE)hIl2Cpp + GFNAHGHNICL_ALJIOCDBMKO_OFFSET))(this, a1, a2);
		}

		::System::Void ALJIOCDBMKO_1(::DHCNDENHLGO* a1, ::System::Collections::Generic::IReadOnlyList_1<::PMMOFOBCINL*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::DHCNDENHLGO*, ::System::Collections::Generic::IReadOnlyList_1<::PMMOFOBCINL*>*))((::PBYTE)hIl2Cpp + GFNAHGHNICL_ALJIOCDBMKO_1_OFFSET))(this, a1, a2);
		}

		::System::Void ALJIOCDBMKO_2(::DHCNDENHLGO* a1, ::System::Collections::Generic::IReadOnlyList_1<::ICMJACOKIPI*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::DHCNDENHLGO*, ::System::Collections::Generic::IReadOnlyList_1<::ICMJACOKIPI*>*))((::PBYTE)hIl2Cpp + GFNAHGHNICL_ALJIOCDBMKO_2_OFFSET))(this, a1, a2);
		}

		::System::Void ALJIOCDBMKO_3(::FBAMAFLOBGA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FBAMAFLOBGA*))((::PBYTE)hIl2Cpp + GFNAHGHNICL_ALJIOCDBMKO_3_OFFSET))(this, a1);
		}

		::System::Boolean BPDIGKDIJKN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GFNAHGHNICL_BPDIGKDIJKN_OFFSET))(this);
		}

		::MDLGCDHGLDA* JNEOLJDAEFJ(::System::Collections::Generic::IEnumerable_1<::System::Int32>* a1)
		{
			return ((::MDLGCDHGLDA*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*))((::PBYTE)hIl2Cpp + GFNAHGHNICL_JNEOLJDAEFJ_OFFSET))(this, a1);
		}

	};
