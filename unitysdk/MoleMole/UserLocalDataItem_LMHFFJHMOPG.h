#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJEJBPGJPJN.h"

namespace MoleMole { class UserLocalDataItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class IHECGHKOIPM_1;

#define MOLEMOLE_USERLOCALDATAITEM_LMHFFJHMOPG_CHBLGDPJJOA_OFFSET UNITYSDK_OFFSET(0x1671EB30)
#define MOLEMOLE_USERLOCALDATAITEM_LMHFFJHMOPG_EOKIMJLHLPK_OFFSET UNITYSDK_OFFSET(0x1671EAE0)
#define MOLEMOLE_USERLOCALDATAITEM_LMHFFJHMOPG_ICCDMNMADON_OFFSET UNITYSDK_OFFSET(0x1671EB40)
#define MOLEMOLE_USERLOCALDATAITEM_LMHFFJHMOPG_LEOJDGLEDEE_OFFSET UNITYSDK_OFFSET(0x1671EB50)
#define MOLEMOLE_USERLOCALDATAITEM_LMHFFJHMOPG_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x1671EA20)
#define MOLEMOLE_USERLOCALDATAITEM_LMHFFJHMOPG__CTOR_OFFSET UNITYSDK_OFFSET(0x1671EAD0)

namespace MoleMole
{
	inline static constexpr unsigned int UserLocalDataItem_LMHFFJHMOPG_TypeDefinitionIndex = 89797;

	class UserLocalDataItem_LMHFFJHMOPG : public ::JJEJBPGJPJN
	{
	public:
		::MoleMole::UserLocalDataItem* DKANPKBIMFM; // 0x88
		::IHECGHKOIPM_1<::System::Collections::Generic::List_1<::System::Int32>*>* _HINPIBICJIH_k__BackingField; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_LMHFFJHMOPG__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateProperty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_LMHFFJHMOPG_ONCREATEPROPERTY_OFFSET))(this);
		}

		::System::Void EOKIMJLHLPK(::MoleMole::UserLocalDataItem* KHGFAKJKDGG)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UserLocalDataItem*))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_LMHFFJHMOPG_EOKIMJLHLPK_OFFSET))(this, KHGFAKJKDGG);
		}

		::IHECGHKOIPM_1<::System::Collections::Generic::List_1<::System::Int32>*>* CHBLGDPJJOA()
		{
			return ((::IHECGHKOIPM_1<::System::Collections::Generic::List_1<::System::Int32>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_LMHFFJHMOPG_CHBLGDPJJOA_OFFSET))(this);
		}

		::System::Void ICCDMNMADON(::IHECGHKOIPM_1<::System::Collections::Generic::List_1<::System::Int32>*>* EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::IHECGHKOIPM_1<::System::Collections::Generic::List_1<::System::Int32>*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_LMHFFJHMOPG_ICCDMNMADON_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Collections::Generic::List_1<::System::Int32>* LEOJDGLEDEE()
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_LMHFFJHMOPG_LEOJDGLEDEE_OFFSET))(this);
		}
	};
}
