#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHALMEEDBAO.h"
class HBLDGJCDJPF;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }
namespace System { class Nullable; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PKEJBHFMHCB_CTOR_OFFSET UNITYSDK_OFFSET(0xC2B3F40)
#define PKEJBHFMHCB_DLPJABADHDE_OFFSET UNITYSDK_OFFSET(0xC2B3A30)
#define PKEJBHFMHCB_GET_REPEATCOUNT_OFFSET UNITYSDK_OFFSET(0xC2B3A10)
#define PKEJBHFMHCB_NODPBIKOJCF_OFFSET UNITYSDK_OFFSET(0xC2B3C90)
#define PKEJBHFMHCB_SET_REPEATCOUNT_OFFSET UNITYSDK_OFFSET(0xC2B3A20)

	class PKEJBHFMHCB : public ::MHALMEEDBAO
	{
	public:
		::System::Collections::Generic::List_1<::HBLDGJCDJPF*>* JKLAOBHMFHN; // 0x10
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::HBLDGJCDJPF*>*>* PEDAMHCDJGF; // 0x18
		::System::Nullable* _RepeatCount_k__BackingField; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKEJBHFMHCB_CTOR_OFFSET))(this);
		}

		::System::Nullable* get_RepeatCount()
		{
			return ((::System::Nullable*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKEJBHFMHCB_GET_REPEATCOUNT_OFFSET))(this);
		}

		::System::Void set_RepeatCount(::System::Nullable* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable*))((::PBYTE)hIl2Cpp + PKEJBHFMHCB_SET_REPEATCOUNT_OFFSET))(this, a1);
		}

		::System::Void DLPJABADHDE(::HBLDGJCDJPF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HBLDGJCDJPF*))((::PBYTE)hIl2Cpp + PKEJBHFMHCB_DLPJABADHDE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Int32>* NODPBIKOJCF(::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*>* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Int32>*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*>*))((::PBYTE)hIl2Cpp + PKEJBHFMHCB_NODPBIKOJCF_OFFSET))(this, a1);
		}

	};
