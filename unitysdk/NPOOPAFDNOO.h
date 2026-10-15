#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PAOIIOIGCOJ.h"
#include "unitysdk/GBEMLLGNHMP.h"
class FCFKPLDONLO;
class KGDADKNPPOL;
class KJNNFEKEANF;
class LJFHKAJPFNE;
class LJMGOKAIPGN;
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace RPG::GameCore { class HoyoTag; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPOOPAFDNOO_ABLCDCMMNEO_OFFSET UNITYSDK_OFFSET(0xBD12A40)
#define NPOOPAFDNOO_CAHPEKCIIOI_OFFSET UNITYSDK_OFFSET(0xBD13520)
#define NPOOPAFDNOO_CTOR_OFFSET UNITYSDK_OFFSET(0xBD126F0)
#define NPOOPAFDNOO_DFFCHNLKELO_OFFSET UNITYSDK_OFFSET(0xBD12BB0)
#define NPOOPAFDNOO_GET_REFRESHMDV_OFFSET UNITYSDK_OFFSET(0xBD136A0)
#define NPOOPAFDNOO_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xBD128D0)
#define NPOOPAFDNOO_KHOIGCJODNJ_OFFSET UNITYSDK_OFFSET(0xBD12BF0)
#define NPOOPAFDNOO_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xBD12B70)
#define NPOOPAFDNOO_SET_REFRESHMDV_OFFSET UNITYSDK_OFFSET(0xBD136B0)

	class NPOOPAFDNOO : public ::PAOIIOIGCOJ
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::KJNNFEKEANF*>* IJBCEOGJOPM; // 0x18
		::System::Collections::Generic::List_1<::LJMGOKAIPGN*>* OOMEOLCMMOH; // 0x20
		::System::Boolean _RefreshMDV_k__BackingField; // 0x28
		::System::Void _ctor(::LJFHKAJPFNE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LJFHKAJPFNE*))((::PBYTE)hIl2Cpp + NPOOPAFDNOO_CTOR_OFFSET))(this, a1);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPOOPAFDNOO_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void ABLCDCMMNEO(::KGDADKNPPOL* a1, ::KGDADKNPPOL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::KGDADKNPPOL*, ::KGDADKNPPOL*))((::PBYTE)hIl2Cpp + NPOOPAFDNOO_ABLCDCMMNEO_OFFSET))(this, a1, a2);
		}

		::System::Void PAGKOAEOLKA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPOOPAFDNOO_PAGKOAEOLKA_OFFSET))(this);
		}

		::System::Void DFFCHNLKELO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPOOPAFDNOO_DFFCHNLKELO_OFFSET))(this);
		}

		::System::Void KHOIGCJODNJ(::RPG::Client::OpenWorld::StreamingItemData* a1, ::GBEMLLGNHMP a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::GBEMLLGNHMP))((::PBYTE)hIl2Cpp + NPOOPAFDNOO_KHOIGCJODNJ_OFFSET))(this, a1, a2);
		}

		::FCFKPLDONLO* CAHPEKCIIOI(::RPG::Client::OpenWorld::StreamingItemData* a1, ::RPG::GameCore::HoyoTag* a2)
		{
			return ((::FCFKPLDONLO*(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::RPG::GameCore::HoyoTag*))((::PBYTE)hIl2Cpp + NPOOPAFDNOO_CAHPEKCIIOI_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_RefreshMDV()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPOOPAFDNOO_GET_REFRESHMDV_OFFSET))(this);
		}

		::System::Void set_RefreshMDV(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPOOPAFDNOO_SET_REFRESHMDV_OFFSET))(this, a1);
		}

	};
