#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FMKFINNEDEG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FMKFINNEDEG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3BB220)
#define FMKFINNEDEG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3BB2C0)
#define FMKFINNEDEG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3BAF10)
#define FMKFINNEDEG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3BAEE0)
#define FMKFINNEDEG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3BAED0)
#define FMKFINNEDEG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3BB020)
#define FMKFINNEDEG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3BAF50)
#define FMKFINNEDEG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3BB180)
#define FMKFINNEDEG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E3BAE90)
#define FMKFINNEDEG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3BB270)
#define FMKFINNEDEG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3BB240)
#define FMKFINNEDEG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E3BAEC0)
#define FMKFINNEDEG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3BB1B0)
#define FMKFINNEDEG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3BB210)

inline static constexpr unsigned int FMKFINNEDEG_TypeDefinitionIndex = 32056;

	class FMKFINNEDEG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::FMKFINNEDEG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FMKFINNEDEG*>**)UnitySDK::FromName("", "FMKFINNEDEG")->GetStaticField(0x5D010);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMKFINNEDEG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FMKFINNEDEG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FMKFINNEDEG*))((::PBYTE)hIl2Cpp + FMKFINNEDEG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FMKFINNEDEG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FMKFINNEDEG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FMKFINNEDEG*>*(*)())((::PBYTE)hIl2Cpp + FMKFINNEDEG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMKFINNEDEG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FMKFINNEDEG* Clone()
		{
			return ((::FMKFINNEDEG*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMKFINNEDEG_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FMKFINNEDEG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FMKFINNEDEG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FMKFINNEDEG*))((::PBYTE)hIl2Cpp + FMKFINNEDEG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FMKFINNEDEG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMKFINNEDEG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FMKFINNEDEG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FMKFINNEDEG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FMKFINNEDEG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FMKFINNEDEG*))((::PBYTE)hIl2Cpp + FMKFINNEDEG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FMKFINNEDEG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
