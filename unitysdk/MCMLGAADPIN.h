#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CKFCPCNGNEC.h"
#include "unitysdk/System/Object.h"
class KHKLHFALPEB;
namespace RPG::GameCore { class ComicDessertIllustrationRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MCMLGAADPIN_CMDKBLLNMIB_OFFSET UNITYSDK_OFFSET(0x183BEED0)
#define MCMLGAADPIN_CTOR_OFFSET UNITYSDK_OFFSET(0x183BEF70)
#define MCMLGAADPIN_FLFLCMEJEPM_OFFSET UNITYSDK_OFFSET(0x183BE860)
#define MCMLGAADPIN_HHNFFFMBIKD_OFFSET UNITYSDK_OFFSET(0x183BE970)
#define MCMLGAADPIN_IKAOEJBFJJB_OFFSET UNITYSDK_OFFSET(0x183BEE80)

inline static constexpr unsigned int MCMLGAADPIN_TypeDefinitionIndex = 77157;

	class MCMLGAADPIN : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::KHKLHFALPEB*>* OPLHDINEBEG; // 0x10
		::System::Collections::Generic::Dictionary_2<::CKFCPCNGNEC, ::KHKLHFALPEB*>* BDBOGJHLEIG; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCMLGAADPIN_CTOR_OFFSET))(this);
		}

		::KHKLHFALPEB* FLFLCMEJEPM(::CKFCPCNGNEC a1)
		{
			return ((::KHKLHFALPEB*(*)(::PVOID, ::CKFCPCNGNEC))((::PBYTE)hIl2Cpp + MCMLGAADPIN_FLFLCMEJEPM_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::KHKLHFALPEB*>* IKAOEJBFJJB()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::KHKLHFALPEB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCMLGAADPIN_IKAOEJBFJJB_OFFSET))(this);
		}

		::System::Void HHNFFFMBIKD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCMLGAADPIN_HHNFFFMBIKD_OFFSET))(this);
		}

		static ::KHKLHFALPEB* CMDKBLLNMIB(::RPG::GameCore::ComicDessertIllustrationRow* a1)
		{
			return ((::KHKLHFALPEB*(*)(::RPG::GameCore::ComicDessertIllustrationRow*))((::PBYTE)hIl2Cpp + MCMLGAADPIN_CMDKBLLNMIB_OFFSET))(a1);
		}

	};
