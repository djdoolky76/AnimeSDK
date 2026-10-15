#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KKAOOEJHHHE;
class MFEAIMEDPNF;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NEJPLEFGALN_BAHNEGJPCOF_OFFSET UNITYSDK_OFFSET(0xBB69A60)
#define NEJPLEFGALN_CTOR_OFFSET UNITYSDK_OFFSET(0xBB6A240)
#define NEJPLEFGALN_GPLABGCOOLK_OFFSET UNITYSDK_OFFSET(0xBB6A070)
#define NEJPLEFGALN_ICAKOAEAALG_OFFSET UNITYSDK_OFFSET(0xBB6A230)
#define NEJPLEFGALN_ILDBODDFMAG_OFFSET UNITYSDK_OFFSET(0xBB69730)
#define NEJPLEFGALN_LCOCFKMFIOK_OFFSET UNITYSDK_OFFSET(0xBB6A1B0)
#define NEJPLEFGALN_NNPAIKAJDNA_1_OFFSET UNITYSDK_OFFSET(0xBB696A0)
#define NEJPLEFGALN_NNPAIKAJDNA_OFFSET UNITYSDK_OFFSET(0xBB69380)
#define NEJPLEFGALN_PJCBKEEKNGO_OFFSET UNITYSDK_OFFSET(0xBB69F70)

	class NEJPLEFGALN : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* AJLEOJININF; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEJPLEFGALN_CTOR_OFFSET))(this);
		}

		::System::Boolean NNPAIKAJDNA(::KKAOOEJHHHE* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::KKAOOEJHHHE*, ::System::Int32))((::PBYTE)hIl2Cpp + NEJPLEFGALN_NNPAIKAJDNA_OFFSET))(this, a1, a2);
		}

		::MFEAIMEDPNF* NNPAIKAJDNA_1(::System::Int32 a1)
		{
			return ((::MFEAIMEDPNF*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NEJPLEFGALN_NNPAIKAJDNA_1_OFFSET))(this, a1);
		}

		::System::Boolean ILDBODDFMAG(::KKAOOEJHHHE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KKAOOEJHHHE*))((::PBYTE)hIl2Cpp + NEJPLEFGALN_ILDBODDFMAG_OFFSET))(this, a1);
		}

		::System::Void BAHNEGJPCOF(::KKAOOEJHHHE* a1, ::KKAOOEJHHHE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::KKAOOEJHHHE*, ::KKAOOEJHHHE*))((::PBYTE)hIl2Cpp + NEJPLEFGALN_BAHNEGJPCOF_OFFSET))(this, a1, a2);
		}

		::System::Int32 PJCBKEEKNGO(::KKAOOEJHHHE* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::KKAOOEJHHHE*))((::PBYTE)hIl2Cpp + NEJPLEFGALN_PJCBKEEKNGO_OFFSET))(this, a1);
		}

		::KKAOOEJHHHE* GPLABGCOOLK(::System::Func_2<::KKAOOEJHHHE*, ::System::Boolean>* a1, ::System::Int32 a2)
		{
			return ((::KKAOOEJHHHE*(*)(::PVOID, ::System::Func_2<::KKAOOEJHHHE*, ::System::Boolean>*, ::System::Int32))((::PBYTE)hIl2Cpp + NEJPLEFGALN_GPLABGCOOLK_OFFSET))(this, a1, a2);
		}

		::KKAOOEJHHHE* LCOCFKMFIOK()
		{
			return ((::KKAOOEJHHHE*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEJPLEFGALN_LCOCFKMFIOK_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Object*>* ICAKOAEAALG()
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEJPLEFGALN_ICAKOAEAALG_OFFSET))(this);
		}

	};
