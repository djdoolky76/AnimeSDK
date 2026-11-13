#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CNBNJLFNHKG.h"
class BCIKJINCAFN;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define AGCABCEELIM_BMENMEPDLLF_OFFSET UNITYSDK_OFFSET(0x18DCE560)
#define AGCABCEELIM_CTOR_OFFSET UNITYSDK_OFFSET(0x18DCE540)
#define AGCABCEELIM_GPLLONMEDAC_OFFSET UNITYSDK_OFFSET(0x18DCE890)
#define AGCABCEELIM_KDAOJADMNNA_OFFSET UNITYSDK_OFFSET(0x18DCEA30)
#define AGCABCEELIM_NHJOOJJLMPH_OFFSET UNITYSDK_OFFSET(0x18DCE910)

inline static constexpr unsigned int AGCABCEELIM_TypeDefinitionIndex = 80059;

	class AGCABCEELIM : public ::CNBNJLFNHKG
	{
	public:
		::BCIKJINCAFN* AONGLKNKJNA; // 0x10
		::BCIKJINCAFN* MNCBELIGINF; // 0x18
		::System::Collections::Generic::IReadOnlyList_1<::BCIKJINCAFN*>* GKGOPMJCPKA; // 0x20
		::System::Collections::Generic::IReadOnlyList_1<::BCIKJINCAFN*>* KDINDMBLOAF; // 0x28
		::System::Boolean EAJGOMHBONN; // 0x30
		::System::Void _ctor(::System::Collections::Generic::IReadOnlyList_1<::BCIKJINCAFN*>* a1, ::System::Collections::Generic::IReadOnlyList_1<::BCIKJINCAFN*>* a2, ::BCIKJINCAFN* a3, ::BCIKJINCAFN* a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::BCIKJINCAFN*>*, ::System::Collections::Generic::IReadOnlyList_1<::BCIKJINCAFN*>*, ::BCIKJINCAFN*, ::BCIKJINCAFN*, ::System::Boolean))((::PBYTE)hIl2Cpp + AGCABCEELIM_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void BMENMEPDLLF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGCABCEELIM_BMENMEPDLLF_OFFSET))(this);
		}

		::System::Void NHJOOJJLMPH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGCABCEELIM_NHJOOJJLMPH_OFFSET))(this);
		}

		::System::Void KDAOJADMNNA(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AGCABCEELIM_KDAOJADMNNA_OFFSET))(this, a1);
		}

		static ::System::Void GPLLONMEDAC(::BCIKJINCAFN* a1)
		{
			return ((::System::Void(*)(::BCIKJINCAFN*))((::PBYTE)hIl2Cpp + AGCABCEELIM_GPLLONMEDAC_OFFSET))(a1);
		}

	};
