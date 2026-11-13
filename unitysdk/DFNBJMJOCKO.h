#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/AnchorIdentifier.h"
class AJDCLALCDLJ;
class BKILHIPMLFL;
class HLJNBBHKKMI;
class JMHHBMNIJJB;
class LPHINGPIEAJ;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DFNBJMJOCKO_CTOR_OFFSET UNITYSDK_OFFSET(0x1B3A0660)
#define DFNBJMJOCKO_FANCNPEPOFE_OFFSET UNITYSDK_OFFSET(0x1B39B8B0)
#define DFNBJMJOCKO_IIOLGEEOAPN_OFFSET UNITYSDK_OFFSET(0x1B3A0670)
#define DFNBJMJOCKO_MFJLKOBCIGL_OFFSET UNITYSDK_OFFSET(0x1B3A0A10)
#define DFNBJMJOCKO_MJAGCJFLNEK_OFFSET UNITYSDK_OFFSET(0x1B3A0720)

inline static constexpr unsigned int DFNBJMJOCKO_TypeDefinitionIndex = 79752;

	class DFNBJMJOCKO : public ::System::Object
	{
	public:
		::JMHHBMNIJJB* EEFMDEHLLFI; // 0x10
		::HLJNBBHKKMI* PDENFEFCAGN; // 0x18
		::System::Collections::Generic::IReadOnlyList_1<::BKILHIPMLFL*>* LFDKOOEALMN; // 0x20
		::System::Void _ctor(::JMHHBMNIJJB* a1, ::HLJNBBHKKMI* a2, ::System::Collections::Generic::IReadOnlyList_1<::BKILHIPMLFL*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::JMHHBMNIJJB*, ::HLJNBBHKKMI*, ::System::Collections::Generic::IReadOnlyList_1<::BKILHIPMLFL*>*))((::PBYTE)hIl2Cpp + DFNBJMJOCKO_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::LPHINGPIEAJ* IIOLGEEOAPN(::System::UInt32 a1, ::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::LittleGame::ComicDessert::AnchorIdentifier>* a2, ::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::LittleGame::ComicDessert::AnchorIdentifier>* a3)
		{
			return ((::LPHINGPIEAJ*(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::LittleGame::ComicDessert::AnchorIdentifier>*, ::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::LittleGame::ComicDessert::AnchorIdentifier>*))((::PBYTE)hIl2Cpp + DFNBJMJOCKO_IIOLGEEOAPN_OFFSET))(this, a1, a2, a3);
		}

		::System::Void MJAGCJFLNEK(::LPHINGPIEAJ* a1, ::System::UInt32 a2, ::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::LittleGame::ComicDessert::AnchorIdentifier>* a3, ::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::LittleGame::ComicDessert::AnchorIdentifier>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::LPHINGPIEAJ*, ::System::UInt32, ::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::LittleGame::ComicDessert::AnchorIdentifier>*, ::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::LittleGame::ComicDessert::AnchorIdentifier>*))((::PBYTE)hIl2Cpp + DFNBJMJOCKO_MJAGCJFLNEK_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean FANCNPEPOFE(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DFNBJMJOCKO_FANCNPEPOFE_OFFSET))(this, a1);
		}

		static ::System::Collections::Generic::List_1<::AJDCLALCDLJ*>* MFJLKOBCIGL(::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::LittleGame::ComicDessert::AnchorIdentifier>* a1)
		{
			return ((::System::Collections::Generic::List_1<::AJDCLALCDLJ*>*(*)(::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::LittleGame::ComicDessert::AnchorIdentifier>*))((::PBYTE)hIl2Cpp + DFNBJMJOCKO_MFJLKOBCIGL_OFFSET))(a1);
		}

	};
