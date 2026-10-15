#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ABGNMNDCEND;
class JPHKBAHBDGB;
namespace RPG::Client::LiteInstancedItem { class ItemPrototype; }
namespace System { class Object; }
namespace System::Collections::Generic { class KeyValuePair; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }

#define IFELGKPONAK_CTOR_OFFSET UNITYSDK_OFFSET(0x15F108E0)
#define IFELGKPONAK_FMPAOKGPMNG_OFFSET UNITYSDK_OFFSET(0x15F10BC0)

	class IFELGKPONAK : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::Client::LiteInstancedItem::ItemPrototype*, ::RPG::Client::LiteInstancedItem::ItemPrototype*>* JPBKHEDJFBD; // 0x10
		::System::Collections::Generic::Dictionary_2<::RPG::Client::LiteInstancedItem::ItemPrototype*, ::RPG::Client::LiteInstancedItem::ItemPrototype*>* BEOFJIBAJKA; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* NBAFHMOKMHJ; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::Collections::Generic::KeyValuePair*, ::System::Collections::Generic::List_1<::System::Object*>*>* JHLFLOGEECG; // 0x28
		::System::Collections::Generic::List_1<::JPHKBAHBDGB*>* MBKGKIIBIML; // 0x30
		::ABGNMNDCEND* EBILLBOENIN; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFELGKPONAK_CTOR_OFFSET))(this);
		}

		::System::Void FMPAOKGPMNG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFELGKPONAK_FMPAOKGPMNG_OFFSET))(this);
		}

	};
