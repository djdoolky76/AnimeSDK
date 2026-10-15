#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HAGHNEIEPGP;
namespace RPG::Client { class IRogueMiracle; }
namespace RPG::Client { class IRogueTournPersonaStyle; }
namespace RPG::Client { class RogueBuffData; }
namespace RPG::Client { class RogueFormulaData; }
namespace RPG::Client { class RogueTournTitanBless; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FGFFKPIGDOD_AAIHGLBEEDO_OFFSET UNITYSDK_OFFSET(0x15759550)
#define FGFFKPIGDOD_DJDLGCGKDDG_OFFSET UNITYSDK_OFFSET(0x15759AD0)
#define FGFFKPIGDOD_DNAFGMJFLAK_OFFSET UNITYSDK_OFFSET(0x1575A020)
#define FGFFKPIGDOD_FIIIKCAGFHF_OFFSET UNITYSDK_OFFSET(0x1575AAC0)
#define FGFFKPIGDOD_MLPJKDKLOLM_OFFSET UNITYSDK_OFFSET(0x1575B010)
#define FGFFKPIGDOD_MOLIEAOEFNC_OFFSET UNITYSDK_OFFSET(0x1575A570)

inline static constexpr unsigned int FGFFKPIGDOD_TypeDefinitionIndex = 67879;

	class FGFFKPIGDOD : public ::System::Object
	{
	public:
		static ::System::String* AAIHGLBEEDO(::System::Collections::Generic::IList_1<::HAGHNEIEPGP*>* a1)
		{
			return ((::System::String*(*)(::System::Collections::Generic::IList_1<::HAGHNEIEPGP*>*))((::PBYTE)hIl2Cpp + FGFFKPIGDOD_AAIHGLBEEDO_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::RogueBuffData*>* DJDLGCGKDDG(::System::Collections::Generic::IList_1<::HAGHNEIEPGP*>* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueBuffData*>*(*)(::System::Collections::Generic::IList_1<::HAGHNEIEPGP*>*))((::PBYTE)hIl2Cpp + FGFFKPIGDOD_DJDLGCGKDDG_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::IRogueMiracle*>* DNAFGMJFLAK(::System::Collections::Generic::IList_1<::HAGHNEIEPGP*>* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IRogueMiracle*>*(*)(::System::Collections::Generic::IList_1<::HAGHNEIEPGP*>*))((::PBYTE)hIl2Cpp + FGFFKPIGDOD_DNAFGMJFLAK_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::RogueFormulaData*>* MOLIEAOEFNC(::System::Collections::Generic::IList_1<::HAGHNEIEPGP*>* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueFormulaData*>*(*)(::System::Collections::Generic::IList_1<::HAGHNEIEPGP*>*))((::PBYTE)hIl2Cpp + FGFFKPIGDOD_MOLIEAOEFNC_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::RogueTournTitanBless*>* FIIIKCAGFHF(::System::Collections::Generic::IList_1<::HAGHNEIEPGP*>* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueTournTitanBless*>*(*)(::System::Collections::Generic::IList_1<::HAGHNEIEPGP*>*))((::PBYTE)hIl2Cpp + FGFFKPIGDOD_FIIIKCAGFHF_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::IRogueTournPersonaStyle*>* MLPJKDKLOLM(::System::Collections::Generic::IList_1<::HAGHNEIEPGP*>* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IRogueTournPersonaStyle*>*(*)(::System::Collections::Generic::IList_1<::HAGHNEIEPGP*>*))((::PBYTE)hIl2Cpp + FGFFKPIGDOD_MLPJKDKLOLM_OFFSET))(a1);
		}

	};
