#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IHGLPGLPDFF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IHGLPGLPDFF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E65D3D0)
#define IHGLPGLPDFF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E65D470)
#define IHGLPGLPDFF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E65D0C0)
#define IHGLPGLPDFF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E65D090)
#define IHGLPGLPDFF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E65D080)
#define IHGLPGLPDFF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E65D1D0)
#define IHGLPGLPDFF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E65D100)
#define IHGLPGLPDFF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E65D330)
#define IHGLPGLPDFF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E65D040)
#define IHGLPGLPDFF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E65D420)
#define IHGLPGLPDFF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E65D3F0)
#define IHGLPGLPDFF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E65D070)
#define IHGLPGLPDFF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E65D360)
#define IHGLPGLPDFF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E65D3C0)

	class IHGLPGLPDFF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "IHGLPGLPDFF")->GetStaticField(0x4D030);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHGLPGLPDFF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IHGLPGLPDFF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IHGLPGLPDFF*))((::PBYTE)hIl2Cpp + IHGLPGLPDFF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IHGLPGLPDFF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + IHGLPGLPDFF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IHGLPGLPDFF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IHGLPGLPDFF* Clone()
		{
			return ((::IHGLPGLPDFF*(*)(::PVOID))((::PBYTE)hIl2Cpp + IHGLPGLPDFF_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IHGLPGLPDFF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IHGLPGLPDFF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IHGLPGLPDFF*))((::PBYTE)hIl2Cpp + IHGLPGLPDFF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IHGLPGLPDFF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IHGLPGLPDFF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IHGLPGLPDFF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IHGLPGLPDFF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IHGLPGLPDFF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IHGLPGLPDFF*))((::PBYTE)hIl2Cpp + IHGLPGLPDFF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IHGLPGLPDFF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
