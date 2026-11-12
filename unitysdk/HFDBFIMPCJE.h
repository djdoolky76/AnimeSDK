#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/AnchorType.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/SourceStrategy.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/TargetStrategy.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FDHGKBDKNMD.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HFDBFIMPCJE_BBBGBJMAACK_OFFSET UNITYSDK_OFFSET(0x16BB6BA0)
#define HFDBFIMPCJE_BNBJALFIKCC_OFFSET UNITYSDK_OFFSET(0x16BB72A0)
#define HFDBFIMPCJE_BNPJIBKLNFM_OFFSET UNITYSDK_OFFSET(0x16BB6190)
#define HFDBFIMPCJE_DPFOPKIHKNO_OFFSET UNITYSDK_OFFSET(0x16BB6110)
#define HFDBFIMPCJE_HDEJDMMAMFD_OFFSET UNITYSDK_OFFSET(0x16BB65C0)
#define HFDBFIMPCJE_MIOPJHFAPLN_OFFSET UNITYSDK_OFFSET(0x16BB5570)

inline static constexpr unsigned int HFDBFIMPCJE_TypeDefinitionIndex = 79803;

	class HFDBFIMPCJE : public ::System::Object
	{
	public:
		static ::System::Boolean MIOPJHFAPLN(::System::Collections::Generic::IReadOnlyList_1<::FDHGKBDKNMD>* a1, ::RPG::Client::LittleGame::ComicDessert::SourceStrategy a2, ::System::UInt32 a3)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::IReadOnlyList_1<::FDHGKBDKNMD>*, ::RPG::Client::LittleGame::ComicDessert::SourceStrategy, ::System::UInt32))((::PBYTE)hIl2Cpp + HFDBFIMPCJE_MIOPJHFAPLN_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean BNPJIBKLNFM(::System::Collections::Generic::IReadOnlyList_1<::FDHGKBDKNMD>* a1, ::RPG::Client::LittleGame::ComicDessert::TargetStrategy a2, ::System::Int32 a3, ::RPG::Client::LittleGame::ComicDessert::AnchorType a4, ::System::Collections::Generic::List_1<::System::UInt32>* a5)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::IReadOnlyList_1<::FDHGKBDKNMD>*, ::RPG::Client::LittleGame::ComicDessert::TargetStrategy, ::System::Int32, ::RPG::Client::LittleGame::ComicDessert::AnchorType, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + HFDBFIMPCJE_BNPJIBKLNFM_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Boolean BNBJALFIKCC(::System::Collections::Generic::IReadOnlyList_1<::FDHGKBDKNMD>* a1, ::System::Int32 a2, ::RPG::Client::LittleGame::ComicDessert::AnchorType a3, ::System::Collections::Generic::List_1<::System::UInt32>* a4)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::IReadOnlyList_1<::FDHGKBDKNMD>*, ::System::Int32, ::RPG::Client::LittleGame::ComicDessert::AnchorType, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + HFDBFIMPCJE_BNBJALFIKCC_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean HDEJDMMAMFD(::System::Collections::Generic::IReadOnlyList_1<::FDHGKBDKNMD>* a1, ::RPG::Client::LittleGame::ComicDessert::AnchorType a2, ::System::Collections::Generic::ICollection_1<::System::UInt32>* a3)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::IReadOnlyList_1<::FDHGKBDKNMD>*, ::RPG::Client::LittleGame::ComicDessert::AnchorType, ::System::Collections::Generic::ICollection_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + HFDBFIMPCJE_HDEJDMMAMFD_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean BBBGBJMAACK(::System::Collections::Generic::IReadOnlyList_1<::FDHGKBDKNMD>* a1, ::System::Int32 a2, ::RPG::Client::LittleGame::ComicDessert::AnchorType a3, ::System::Collections::Generic::ICollection_1<::System::UInt32>* a4)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::IReadOnlyList_1<::FDHGKBDKNMD>*, ::System::Int32, ::RPG::Client::LittleGame::ComicDessert::AnchorType, ::System::Collections::Generic::ICollection_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + HFDBFIMPCJE_BBBGBJMAACK_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void DPFOPKIHKNO(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + HFDBFIMPCJE_DPFOPKIHKNO_OFFSET))(a1);
		}

	};
