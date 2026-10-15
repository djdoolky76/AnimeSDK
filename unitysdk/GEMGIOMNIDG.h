#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"
namespace System { class Object; }
namespace System { class Type; }

#define GEMGIOMNIDG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EC6DD60)
#define GEMGIOMNIDG_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC6DC50)
#define GEMGIOMNIDG_GET_ID_OFFSET UNITYSDK_OFFSET(0x1EC6DE60)
#define GEMGIOMNIDG_GET_MESSAGETYPE_OFFSET UNITYSDK_OFFSET(0x1EC6DE50)
#define GEMGIOMNIDG_GET_SUBSCRIBER_OFFSET UNITYSDK_OFFSET(0x1EC6DE40)

	class GEMGIOMNIDG : public ::System::Exception
	{
	public:
		::System::Object* _Id_k__BackingField; // 0x88
		::System::Type* _MessageType_k__BackingField; // 0x90
		::System::Object* _Subscriber_k__BackingField; // 0x98
		::System::Void _ctor(::System::Object* a1, ::System::Type* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Type*))((::PBYTE)hIl2Cpp + GEMGIOMNIDG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::System::Object* a1, ::System::Type* a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Type*, ::System::Object*))((::PBYTE)hIl2Cpp + GEMGIOMNIDG_CTOR_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Object* get_Subscriber()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEMGIOMNIDG_GET_SUBSCRIBER_OFFSET))(this);
		}

		::System::Type* get_MessageType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEMGIOMNIDG_GET_MESSAGETYPE_OFFSET))(this);
		}

		::System::Object* get_Id()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEMGIOMNIDG_GET_ID_OFFSET))(this);
		}

	};
