#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AGGEHIICBBD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AGGEHIICBBD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F51BB50)
#define AGGEHIICBBD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F51BBF0)
#define AGGEHIICBBD_CLONE_OFFSET UNITYSDK_OFFSET(0x1F51B840)
#define AGGEHIICBBD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F51B810)
#define AGGEHIICBBD_CTOR_OFFSET UNITYSDK_OFFSET(0x1F51B800)
#define AGGEHIICBBD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F51B950)
#define AGGEHIICBBD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F51B880)
#define AGGEHIICBBD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F51BAB0)
#define AGGEHIICBBD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F51B7C0)
#define AGGEHIICBBD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F51BBA0)
#define AGGEHIICBBD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F51BB70)
#define AGGEHIICBBD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F51B7F0)
#define AGGEHIICBBD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F51BAE0)
#define AGGEHIICBBD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F51BB40)

inline static constexpr unsigned int AGGEHIICBBD_TypeDefinitionIndex = 33710;

	class AGGEHIICBBD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::AGGEHIICBBD*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::AGGEHIICBBD*>**)UnitySDK::FromName("", "AGGEHIICBBD")->GetStaticField(0x3D2F0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGGEHIICBBD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AGGEHIICBBD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AGGEHIICBBD*))((::PBYTE)hIl2Cpp + AGGEHIICBBD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AGGEHIICBBD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::AGGEHIICBBD*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::AGGEHIICBBD*>*(*)())((::PBYTE)hIl2Cpp + AGGEHIICBBD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGGEHIICBBD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AGGEHIICBBD* Clone()
		{
			return ((::AGGEHIICBBD*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGGEHIICBBD_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AGGEHIICBBD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AGGEHIICBBD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AGGEHIICBBD*))((::PBYTE)hIl2Cpp + AGGEHIICBBD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AGGEHIICBBD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGGEHIICBBD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AGGEHIICBBD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AGGEHIICBBD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AGGEHIICBBD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AGGEHIICBBD*))((::PBYTE)hIl2Cpp + AGGEHIICBBD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AGGEHIICBBD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
