#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NGALEEPIHJP;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IHLLDPDJBGK_CTOR_OFFSET UNITYSDK_OFFSET(0x16425340)
#define IHLLDPDJBGK_GET_TEXTNODELIST_OFFSET UNITYSDK_OFFSET(0x16425320)
#define IHLLDPDJBGK_GET_TRIGGERNAME_OFFSET UNITYSDK_OFFSET(0x16425300)
#define IHLLDPDJBGK_SET_TEXTNODELIST_OFFSET UNITYSDK_OFFSET(0x16425330)
#define IHLLDPDJBGK_SET_TRIGGERNAME_OFFSET UNITYSDK_OFFSET(0x16425310)

	class IHLLDPDJBGK : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::NGALEEPIHJP*>* _TextNodeList_k__BackingField; // 0x10
		::System::String* _TriggerName_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHLLDPDJBGK_CTOR_OFFSET))(this);
		}

		::System::String* get_TriggerName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IHLLDPDJBGK_GET_TRIGGERNAME_OFFSET))(this);
		}

		::System::Void set_TriggerName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + IHLLDPDJBGK_SET_TRIGGERNAME_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::NGALEEPIHJP*>* get_TextNodeList()
		{
			return ((::System::Collections::Generic::List_1<::NGALEEPIHJP*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IHLLDPDJBGK_GET_TEXTNODELIST_OFFSET))(this);
		}

		::System::Void set_TextNodeList(::System::Collections::Generic::List_1<::NGALEEPIHJP*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::NGALEEPIHJP*>*))((::PBYTE)hIl2Cpp + IHLLDPDJBGK_SET_TEXTNODELIST_OFFSET))(this, a1);
		}

	};
