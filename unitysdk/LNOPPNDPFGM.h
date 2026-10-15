#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OJDIPBBEIOB;
namespace RPG::Client { class IRogueMiracle; }
namespace RPG::Client { class RogueBuffData; }
namespace RPG::Client { class RogueFormulaData; }
namespace RPG::Client { class RogueMagicScepterDataItem; }
namespace RPG::Client { class RogueMagicUnitDataItem; }
namespace RPG::Client { class RogueTournTitanBless; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LNOPPNDPFGM_AHDKFGOHMAL_OFFSET UNITYSDK_OFFSET(0xB7E5520)
#define LNOPPNDPFGM_DJDLGCGKDDG_OFFSET UNITYSDK_OFFSET(0xB7E59F0)
#define LNOPPNDPFGM_DNAFGMJFLAK_OFFSET UNITYSDK_OFFSET(0xB7E5F60)
#define LNOPPNDPFGM_DOHJEOEMCPH_OFFSET UNITYSDK_OFFSET(0xB7E4A10)
#define LNOPPNDPFGM_FIIIKCAGFHF_OFFSET UNITYSDK_OFFSET(0xB7E4F80)
#define LNOPPNDPFGM_LCKDCEPKGMG_OFFSET UNITYSDK_OFFSET(0xB7E44A0)
#define LNOPPNDPFGM_MOLIEAOEFNC_OFFSET UNITYSDK_OFFSET(0xB7E6500)

inline static constexpr unsigned int LNOPPNDPFGM_TypeDefinitionIndex = 67245;

	class LNOPPNDPFGM : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::RPG::Client::RogueMagicScepterDataItem*>* LCKDCEPKGMG(::System::Collections::Generic::IList_1<::OJDIPBBEIOB*>* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueMagicScepterDataItem*>*(*)(::System::Collections::Generic::IList_1<::OJDIPBBEIOB*>*))((::PBYTE)hIl2Cpp + LNOPPNDPFGM_LCKDCEPKGMG_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::RogueMagicUnitDataItem*>* DOHJEOEMCPH(::System::Collections::Generic::IList_1<::OJDIPBBEIOB*>* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueMagicUnitDataItem*>*(*)(::System::Collections::Generic::IList_1<::OJDIPBBEIOB*>*))((::PBYTE)hIl2Cpp + LNOPPNDPFGM_DOHJEOEMCPH_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::RogueTournTitanBless*>* FIIIKCAGFHF(::System::Collections::Generic::IList_1<::OJDIPBBEIOB*>* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueTournTitanBless*>*(*)(::System::Collections::Generic::IList_1<::OJDIPBBEIOB*>*))((::PBYTE)hIl2Cpp + LNOPPNDPFGM_FIIIKCAGFHF_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::Object*>* AHDKFGOHMAL(::System::Collections::Generic::IList_1<::OJDIPBBEIOB*>* a1)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::System::Collections::Generic::IList_1<::OJDIPBBEIOB*>*))((::PBYTE)hIl2Cpp + LNOPPNDPFGM_AHDKFGOHMAL_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::RogueBuffData*>* DJDLGCGKDDG(::System::Collections::Generic::IList_1<::OJDIPBBEIOB*>* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueBuffData*>*(*)(::System::Collections::Generic::IList_1<::OJDIPBBEIOB*>*))((::PBYTE)hIl2Cpp + LNOPPNDPFGM_DJDLGCGKDDG_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::IRogueMiracle*>* DNAFGMJFLAK(::System::Collections::Generic::IList_1<::OJDIPBBEIOB*>* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IRogueMiracle*>*(*)(::System::Collections::Generic::IList_1<::OJDIPBBEIOB*>*))((::PBYTE)hIl2Cpp + LNOPPNDPFGM_DNAFGMJFLAK_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::RogueFormulaData*>* MOLIEAOEFNC(::System::Collections::Generic::IList_1<::OJDIPBBEIOB*>* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueFormulaData*>*(*)(::System::Collections::Generic::IList_1<::OJDIPBBEIOB*>*))((::PBYTE)hIl2Cpp + LNOPPNDPFGM_MOLIEAOEFNC_OFFSET))(a1);
		}

	};
