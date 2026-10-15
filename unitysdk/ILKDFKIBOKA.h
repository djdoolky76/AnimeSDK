#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkCallbackType.h"
#include "unitysdk/System/Object.h"
class AkCallbackInfo;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define ILKDFKIBOKA_CLEAR_OFFSET UNITYSDK_OFFSET(0x164C3A00)
#define ILKDFKIBOKA_CTOR_OFFSET UNITYSDK_OFFSET(0x164C3B50)
#define ILKDFKIBOKA_FNBGFENAFFL_OFFSET UNITYSDK_OFFSET(0x164C3A80)
#define ILKDFKIBOKA_GDKBLINFAHI_OFFSET UNITYSDK_OFFSET(0x164C3AE0)

	class ILKDFKIBOKA : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* MEDICEEIEOE; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* CFCEACHEPAB; // 0x18
		::System::String* DHMDAEKJENF; // 0x20
		::System::Action* PHNEEILABKK; // 0x28
		::System::UInt32 COMOBEBHBDK; // 0x30
		::System::UInt32 NMBKAIEIAPE; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILKDFKIBOKA_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILKDFKIBOKA_CLEAR_OFFSET))(this);
		}

		::System::UInt32 FNBGFENAFFL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ILKDFKIBOKA_FNBGFENAFFL_OFFSET))(this);
		}

		::System::Int32 GDKBLINFAHI()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ILKDFKIBOKA_GDKBLINFAHI_OFFSET))(this);
		}

	};
