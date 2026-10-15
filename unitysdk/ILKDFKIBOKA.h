#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkCallbackType.h"
#include "unitysdk/System/Object.h"
class AkCallbackInfo;
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define ILKDFKIBOKA_CLEAR_OFFSET UNITYSDK_OFFSET(0x164B5A10)
#define ILKDFKIBOKA_CTOR_OFFSET UNITYSDK_OFFSET(0x164B5B60)
#define ILKDFKIBOKA_FNBGFENAFFL_OFFSET UNITYSDK_OFFSET(0x164B5A90)
#define ILKDFKIBOKA_GDKBLINFAHI_OFFSET UNITYSDK_OFFSET(0x164B5AF0)

inline static constexpr unsigned int ILKDFKIBOKA_TypeDefinitionIndex = 59747;

	class ILKDFKIBOKA : public ::System::Object
	{
	public:
		::System::Action_3<::System::UInt32, ::AkCallbackType, ::AkCallbackInfo*>* PHNEEILABKK; // 0x10
		::System::String* DHMDAEKJENF; // 0x18
		::UnityEngine::GameObject* MEDICEEIEOE; // 0x20
		::System::Collections::Generic::List_1<::System::UInt32>* CFCEACHEPAB; // 0x28
		::System::UInt32 NMBKAIEIAPE; // 0x30
		::System::UInt32 COMOBEBHBDK; // 0x34
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
