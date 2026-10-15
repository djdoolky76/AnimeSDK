#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HMOEGOMDNAA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HMOEGOMDNAA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5D5FE0)
#define HMOEGOMDNAA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5D6200)
#define HMOEGOMDNAA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5D5C30)
#define HMOEGOMDNAA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5D5C00)
#define HMOEGOMDNAA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5D5BF0)
#define HMOEGOMDNAA_EDEEJIIPBNJ_OFFSET UNITYSDK_OFFSET(0x1E5D5C70)
#define HMOEGOMDNAA_EPEBIKBFCIK_OFFSET UNITYSDK_OFFSET(0x1E5D5C80)
#define HMOEGOMDNAA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5D5D60)
#define HMOEGOMDNAA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5D5C90)
#define HMOEGOMDNAA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5D5ED0)
#define HMOEGOMDNAA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E5D5BB0)
#define HMOEGOMDNAA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E5D60A0)
#define HMOEGOMDNAA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5D6070)
#define HMOEGOMDNAA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5D5BE0)
#define HMOEGOMDNAA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5D5F00)
#define HMOEGOMDNAA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5D5F60)

	class HMOEGOMDNAA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 IEABCADMBBP; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "HMOEGOMDNAA")->GetStaticField(0x4AF00);
		}

		// static const ::System::Object GALENHJLDLE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMOEGOMDNAA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HMOEGOMDNAA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HMOEGOMDNAA*))((::PBYTE)hIl2Cpp + HMOEGOMDNAA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HMOEGOMDNAA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + HMOEGOMDNAA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMOEGOMDNAA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HMOEGOMDNAA* Clone()
		{
			return ((::HMOEGOMDNAA*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMOEGOMDNAA_CLONE_OFFSET))(this);
		}

		::System::UInt32 EDEEJIIPBNJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HMOEGOMDNAA_EDEEJIIPBNJ_OFFSET))(this);
		}

		::System::Void EPEBIKBFCIK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HMOEGOMDNAA_EPEBIKBFCIK_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HMOEGOMDNAA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HMOEGOMDNAA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HMOEGOMDNAA*))((::PBYTE)hIl2Cpp + HMOEGOMDNAA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HMOEGOMDNAA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMOEGOMDNAA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HMOEGOMDNAA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HMOEGOMDNAA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HMOEGOMDNAA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HMOEGOMDNAA*))((::PBYTE)hIl2Cpp + HMOEGOMDNAA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HMOEGOMDNAA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
