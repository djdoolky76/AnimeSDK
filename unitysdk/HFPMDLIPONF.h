#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/AIMGBHJFAFK.h"
#include "unitysdk/EHKGGCKICFI.h"
class BCIFBNNDPFE;
class DDDPJIOBLBL;
class NOICEJKDOLF;
class OPACKEGJFJM;
namespace RPG::Client::ComicDessert { class ComicDessertForumCommentViewModel; }
namespace RPG::Client::ComicDessert { class ComicDessertForumDialogViewModel; }
namespace RPG::Client::ComicDessert { class ComicDessertForumReplyViewModel; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HFPMDLIPONF_BDBDANINKHO_OFFSET UNITYSDK_OFFSET(0x16BD6EF0)
#define HFPMDLIPONF_CTOR_OFFSET UNITYSDK_OFFSET(0x16BD5F10)
#define HFPMDLIPONF_DPFOPKIHKNO_OFFSET UNITYSDK_OFFSET(0x16BD6170)
#define HFPMDLIPONF_GBKIDCAIFAC_OFFSET UNITYSDK_OFFSET(0x16BD6D10)
#define HFPMDLIPONF_HHDNIMDIHPF_OFFSET UNITYSDK_OFFSET(0x16BD6C10)
#define HFPMDLIPONF_INPHLFDKKDB_OFFSET UNITYSDK_OFFSET(0x16BD77A0)
#define HFPMDLIPONF_JMAEMEFEPHB_OFFSET UNITYSDK_OFFSET(0x16BD5F90)
#define HFPMDLIPONF_NEKOBCDBGAK_OFFSET UNITYSDK_OFFSET(0x16BD61F0)
#define HFPMDLIPONF_OMDEPEAIPJI_OFFSET UNITYSDK_OFFSET(0x16BD6A60)

inline static constexpr unsigned int HFPMDLIPONF_TypeDefinitionIndex = 77103;

	class HFPMDLIPONF : public ::System::Object
	{
	public:
		::DDDPJIOBLBL* ELMGBOCDNGC; // 0x10
		::OPACKEGJFJM* IDHPPDHKJEM; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFPMDLIPONF_CTOR_OFFSET))(this);
		}

		::System::Void JMAEMEFEPHB(::RPG::Client::ComicDessert::ComicDessertForumDialogViewModel* a1, ::AIMGBHJFAFK a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ComicDessert::ComicDessertForumDialogViewModel*, ::AIMGBHJFAFK))((::PBYTE)hIl2Cpp + HFPMDLIPONF_JMAEMEFEPHB_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ComicDessert::ComicDessertForumCommentViewModel*>* NEKOBCDBGAK(::BCIFBNNDPFE* a1)
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ComicDessert::ComicDessertForumCommentViewModel*>*(*)(::PVOID, ::BCIFBNNDPFE*))((::PBYTE)hIl2Cpp + HFPMDLIPONF_NEKOBCDBGAK_OFFSET))(this, a1);
		}

		::System::Void GBKIDCAIFAC(::EHKGGCKICFI a1, ::System::Collections::Generic::List_1<::RPG::Client::ComicDessert::ComicDessertForumCommentViewModel*>* a2, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::EHKGGCKICFI, ::System::Collections::Generic::List_1<::RPG::Client::ComicDessert::ComicDessertForumCommentViewModel*>*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + HFPMDLIPONF_GBKIDCAIFAC_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::ComicDessert::ComicDessertForumCommentViewModel* HHDNIMDIHPF(::NOICEJKDOLF* a1)
		{
			return ((::RPG::Client::ComicDessert::ComicDessertForumCommentViewModel*(*)(::PVOID, ::NOICEJKDOLF*))((::PBYTE)hIl2Cpp + HFPMDLIPONF_HHDNIMDIHPF_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ComicDessert::ComicDessertForumReplyViewModel*>* BDBDANINKHO(::NOICEJKDOLF* a1)
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ComicDessert::ComicDessertForumReplyViewModel*>*(*)(::PVOID, ::NOICEJKDOLF*))((::PBYTE)hIl2Cpp + HFPMDLIPONF_BDBDANINKHO_OFFSET))(this, a1);
		}

		::RPG::Client::ComicDessert::ComicDessertForumReplyViewModel* OMDEPEAIPJI(::EHKGGCKICFI a1)
		{
			return ((::RPG::Client::ComicDessert::ComicDessertForumReplyViewModel*(*)(::PVOID, ::EHKGGCKICFI))((::PBYTE)hIl2Cpp + HFPMDLIPONF_OMDEPEAIPJI_OFFSET))(this, a1);
		}

		static ::RPG::Client::ComicDessert::ComicDessertForumReplyViewModel* INPHLFDKKDB(::NOICEJKDOLF* a1)
		{
			return ((::RPG::Client::ComicDessert::ComicDessertForumReplyViewModel*(*)(::NOICEJKDOLF*))((::PBYTE)hIl2Cpp + HFPMDLIPONF_INPHLFDKKDB_OFFSET))(a1);
		}

		static ::System::Void DPFOPKIHKNO(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + HFPMDLIPONF_DPFOPKIHKNO_OFFSET))(a1);
		}

	};
