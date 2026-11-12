#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::Protobuf::Reflection { class FieldDescriptor; }
namespace MiHoYo::SDK::Protobuf::Reflection { class MessageDescriptor; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR_FIELDCOLLECTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD91D30)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR_FIELDCOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1CD72690)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR_FIELDCOLLECTION_INDECLARATIONORDER_OFFSET UNITYSDK_OFFSET(0x1CD92AF0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR_FIELDCOLLECTION_INFIELDNUMBERORDER_OFFSET UNITYSDK_OFFSET(0x1CD6F6B0)

namespace MiHoYo::SDK::Protobuf::Reflection
{
	inline static constexpr unsigned int MessageDescriptor_FieldCollection_TypeDefinitionIndex = 36767;

	class MessageDescriptor_FieldCollection : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor* messageDescriptor; // 0x10
		::System::Void _ctor(::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR_FIELDCOLLECTION_CTOR_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IList_1<::MiHoYo::SDK::Protobuf::Reflection::FieldDescriptor*>* InDeclarationOrder()
		{
			return ((::System::Collections::Generic::IList_1<::MiHoYo::SDK::Protobuf::Reflection::FieldDescriptor*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR_FIELDCOLLECTION_INDECLARATIONORDER_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::MiHoYo::SDK::Protobuf::Reflection::FieldDescriptor*>* InFieldNumberOrder()
		{
			return ((::System::Collections::Generic::IList_1<::MiHoYo::SDK::Protobuf::Reflection::FieldDescriptor*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR_FIELDCOLLECTION_INFIELDNUMBERORDER_OFFSET))(this);
		}

		::MiHoYo::SDK::Protobuf::Reflection::FieldDescriptor* get_Item(::System::Int32 a1)
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::FieldDescriptor*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR_FIELDCOLLECTION_GET_ITEM_OFFSET))(this, a1);
		}

	};
}
