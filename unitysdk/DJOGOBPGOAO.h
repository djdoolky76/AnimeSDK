#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/DragBehaviour.h"
#include "unitysdk/System/Object.h"
class FBICDIEGANJ;
class HLJNBBHKKMI;
class LPHINGPIEAJ;
class MJAOHLLPLGK;
namespace Entitas { template <typename T> class IGroup_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DJOGOBPGOAO_CHKAEMLFNNP_OFFSET UNITYSDK_OFFSET(0x18C03BD0)
#define DJOGOBPGOAO_CTOR_OFFSET UNITYSDK_OFFSET(0x18C02C30)
#define DJOGOBPGOAO_KHJNHDOJDDP_OFFSET UNITYSDK_OFFSET(0x18C037D0)
#define DJOGOBPGOAO_KHOKCFOIOKK_OFFSET UNITYSDK_OFFSET(0x18C039B0)

inline static constexpr unsigned int DJOGOBPGOAO_TypeDefinitionIndex = 79887;

	class DJOGOBPGOAO : public ::System::Object
	{
	public:
		::Entitas::IGroup_1<::LPHINGPIEAJ*>* ANLPKHOOFKI; // 0x10
		::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::ComicDessert::DragBehaviour, ::FBICDIEGANJ*>* DCNEHLOAIJD; // 0x18
		::Entitas::IGroup_1<::LPHINGPIEAJ*>* KEDNAFIPFGD; // 0x20
		::System::Void _ctor(::MJAOHLLPLGK* a1, ::HLJNBBHKKMI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MJAOHLLPLGK*, ::HLJNBBHKKMI*))((::PBYTE)hIl2Cpp + DJOGOBPGOAO_CTOR_OFFSET))(this, a1, a2);
		}

		::FBICDIEGANJ* KHJNHDOJDDP(::LPHINGPIEAJ* a1)
		{
			return ((::FBICDIEGANJ*(*)(::PVOID, ::LPHINGPIEAJ*))((::PBYTE)hIl2Cpp + DJOGOBPGOAO_KHJNHDOJDDP_OFFSET))(this, a1);
		}

		::System::Void KHOKCFOIOKK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJOGOBPGOAO_KHOKCFOIOKK_OFFSET))(this);
		}

		static ::System::Void CHKAEMLFNNP(::LPHINGPIEAJ* a1)
		{
			return ((::System::Void(*)(::LPHINGPIEAJ*))((::PBYTE)hIl2Cpp + DJOGOBPGOAO_CHKAEMLFNNP_OFFSET))(a1);
		}

	};
