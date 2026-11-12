#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/IngredientKind.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/ProductPositionBinding.h"
class GDCBKFDNOCL;
class NOEOAMBCKHB;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IGOGHEOCMPN_ABBHJBGFIPB_OFFSET UNITYSDK_OFFSET(0x173C6810)
#define IGOGHEOCMPN_CLFPHDFCLJL_OFFSET UNITYSDK_OFFSET(0x173C7A50)
#define IGOGHEOCMPN_DBNFMPLLNFB_OFFSET UNITYSDK_OFFSET(0x173C7290)
#define IGOGHEOCMPN_DNPKFHNAFKG_OFFSET UNITYSDK_OFFSET(0x173C6B50)
#define IGOGHEOCMPN_JFEJFEIJONM_OFFSET UNITYSDK_OFFSET(0x173C64C0)
#define IGOGHEOCMPN_MOACMONEFHA_OFFSET UNITYSDK_OFFSET(0x173C7EC0)

inline static constexpr unsigned int IGOGHEOCMPN_TypeDefinitionIndex = 79865;

	class IGOGHEOCMPN : public ::System::Object
	{
	public:
		static ::System::Void JFEJFEIJONM(::System::Collections::Generic::List_1<::NOEOAMBCKHB*>* a1)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::NOEOAMBCKHB*>*))((::PBYTE)hIl2Cpp + IGOGHEOCMPN_JFEJFEIJONM_OFFSET))(a1);
		}

		static ::System::Void DNPKFHNAFKG(::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::LittleGame::ComicDessert::ProductPositionBinding>* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::LittleGame::ComicDessert::ProductPositionBinding>*, ::System::String*))((::PBYTE)hIl2Cpp + IGOGHEOCMPN_DNPKFHNAFKG_OFFSET))(a1, a2);
		}

		static ::System::Void DBNFMPLLNFB(::System::Collections::Generic::IReadOnlyList_1<::NOEOAMBCKHB*>* a1, ::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::LittleGame::ComicDessert::ProductPositionBinding>* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::System::Collections::Generic::IReadOnlyList_1<::NOEOAMBCKHB*>*, ::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::LittleGame::ComicDessert::ProductPositionBinding>*, ::System::String*))((::PBYTE)hIl2Cpp + IGOGHEOCMPN_DBNFMPLLNFB_OFFSET))(a1, a2, a3);
		}

		static ::GDCBKFDNOCL* MOACMONEFHA(::System::Collections::Generic::IReadOnlyList_1<::NOEOAMBCKHB*>* a1, ::NOEOAMBCKHB* a2, ::System::Collections::Generic::IReadOnlyList_1<::GDCBKFDNOCL*>* a3, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::IngredientKind>* a4, ::RPG::GameCore::IngredientKind a5, ::System::Int32 a6)
		{
			return ((::GDCBKFDNOCL*(*)(::System::Collections::Generic::IReadOnlyList_1<::NOEOAMBCKHB*>*, ::NOEOAMBCKHB*, ::System::Collections::Generic::IReadOnlyList_1<::GDCBKFDNOCL*>*, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::IngredientKind>*, ::RPG::GameCore::IngredientKind, ::System::Int32))((::PBYTE)hIl2Cpp + IGOGHEOCMPN_MOACMONEFHA_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Boolean ABBHJBGFIPB(::NOEOAMBCKHB* a1, ::NOEOAMBCKHB* a2, ::System::String* a3)
		{
			return ((::System::Boolean(*)(::NOEOAMBCKHB*, ::NOEOAMBCKHB*, ::System::String*))((::PBYTE)hIl2Cpp + IGOGHEOCMPN_ABBHJBGFIPB_OFFSET))(a1, a2, a3);
		}

		static ::System::Collections::Generic::List_1<::GDCBKFDNOCL*>* CLFPHDFCLJL(::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::LittleGame::ComicDessert::ProductPositionBinding>* a1)
		{
			return ((::System::Collections::Generic::List_1<::GDCBKFDNOCL*>*(*)(::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::LittleGame::ComicDessert::ProductPositionBinding>*))((::PBYTE)hIl2Cpp + IGOGHEOCMPN_CLFPHDFCLJL_OFFSET))(a1);
		}

	};
