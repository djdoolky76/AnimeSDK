#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ENLBPLPOGMF;
class OIDDJJLHGKO;
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JGPMFKDECMN_CTOR_OFFSET UNITYSDK_OFFSET(0xB1A7D30)
#define JGPMFKDECMN_EIEEHAFLENL_OFFSET UNITYSDK_OFFSET(0xB1A7BB0)
#define JGPMFKDECMN_GET_RETITEMS_OFFSET UNITYSDK_OFFSET(0xB1A7D10)
#define JGPMFKDECMN_LNGKNPJIOML_OFFSET UNITYSDK_OFFSET(0xB1A7C20)
#define JGPMFKDECMN_SET_RETITEMS_OFFSET UNITYSDK_OFFSET(0xB1A7D20)

	class JGPMFKDECMN : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>* _RetItems_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGPMFKDECMN_CTOR_OFFSET))(this);
		}

		::System::Void EIEEHAFLENL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGPMFKDECMN_EIEEHAFLENL_OFFSET))(this);
		}

		::System::Boolean LNGKNPJIOML(::ENLBPLPOGMF* a1, ::System::Boolean a2, ::OIDDJJLHGKO* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::ENLBPLPOGMF*, ::System::Boolean, ::OIDDJJLHGKO*))((::PBYTE)hIl2Cpp + JGPMFKDECMN_LNGKNPJIOML_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>* get_RetItems()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGPMFKDECMN_GET_RETITEMS_OFFSET))(this);
		}

		::System::Void set_RetItems(::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>*))((::PBYTE)hIl2Cpp + JGPMFKDECMN_SET_RETITEMS_OFFSET))(this, a1);
		}

	};
