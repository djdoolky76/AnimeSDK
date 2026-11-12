#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/AnchorType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FDHGKBDKNMD.h"
#include "unitysdk/System/Nullable_1.h"
class AJDCLALCDLJ;
class LPHINGPIEAJ;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JAANCBDBKIL_GHCCGDNOGKF_OFFSET UNITYSDK_OFFSET(0xB86FB70)
#define JAANCBDBKIL_IFEFFDKMLMH_OFFSET UNITYSDK_OFFSET(0xB86F610)
#define JAANCBDBKIL_JKOJDDMPDLK_OFFSET UNITYSDK_OFFSET(0xB86F150)
#define JAANCBDBKIL_LKCNAHIAMOM_OFFSET UNITYSDK_OFFSET(0xB86EB10)

inline static constexpr unsigned int JAANCBDBKIL_TypeDefinitionIndex = 80079;

	class JAANCBDBKIL : public ::System::Object
	{
	public:
		static ::System::Boolean LKCNAHIAMOM(::LPHINGPIEAJ* a1, ::System::Collections::Generic::IReadOnlyList_1<::AJDCLALCDLJ*>* a2, ::RPG::Client::LittleGame::ComicDessert::AnchorType a3, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a4, ::System::Object* a5)
		{
			return ((::System::Boolean(*)(::LPHINGPIEAJ*, ::System::Collections::Generic::IReadOnlyList_1<::AJDCLALCDLJ*>*, ::RPG::Client::LittleGame::ComicDessert::AnchorType, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*, ::System::Object*))((::PBYTE)hIl2Cpp + JAANCBDBKIL_LKCNAHIAMOM_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Collections::Generic::List_1<::FDHGKBDKNMD>* IFEFFDKMLMH(::System::Collections::Generic::IReadOnlyList_1<::AJDCLALCDLJ*>* a1, ::System::Nullable_1<::RPG::Client::LittleGame::ComicDessert::AnchorType> a2, ::System::Func_2<::AJDCLALCDLJ*, ::System::Boolean>* a3)
		{
			return ((::System::Collections::Generic::List_1<::FDHGKBDKNMD>*(*)(::System::Collections::Generic::IReadOnlyList_1<::AJDCLALCDLJ*>*, ::System::Nullable_1<::RPG::Client::LittleGame::ComicDessert::AnchorType>, ::System::Func_2<::AJDCLALCDLJ*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + JAANCBDBKIL_IFEFFDKMLMH_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean GHCCGDNOGKF(::System::Collections::Generic::IReadOnlyList_1<::AJDCLALCDLJ*>* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::IReadOnlyList_1<::AJDCLALCDLJ*>*, ::System::String*))((::PBYTE)hIl2Cpp + JAANCBDBKIL_GHCCGDNOGKF_OFFSET))(a1, a2);
		}

		static ::AJDCLALCDLJ* JKOJDDMPDLK(::System::Collections::Generic::IReadOnlyList_1<::AJDCLALCDLJ*>* a1, ::System::UInt32 a2, ::RPG::Client::LittleGame::ComicDessert::AnchorType a3)
		{
			return ((::AJDCLALCDLJ*(*)(::System::Collections::Generic::IReadOnlyList_1<::AJDCLALCDLJ*>*, ::System::UInt32, ::RPG::Client::LittleGame::ComicDessert::AnchorType))((::PBYTE)hIl2Cpp + JAANCBDBKIL_JKOJDDMPDLK_OFFSET))(a1, a2, a3);
		}

	};
