#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GEIELBEBJCK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GEIELBEBJCK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E42CA40)
#define GEIELBEBJCK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E42CAE0)
#define GEIELBEBJCK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E42C730)
#define GEIELBEBJCK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E42C700)
#define GEIELBEBJCK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E42C6F0)
#define GEIELBEBJCK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E42C840)
#define GEIELBEBJCK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E42C770)
#define GEIELBEBJCK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E42C9A0)
#define GEIELBEBJCK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E42C6B0)
#define GEIELBEBJCK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E42CA90)
#define GEIELBEBJCK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E42CA60)
#define GEIELBEBJCK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E42C6E0)
#define GEIELBEBJCK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E42C9D0)
#define GEIELBEBJCK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E42CA30)

inline static constexpr unsigned int GEIELBEBJCK_TypeDefinitionIndex = 31968;

	class GEIELBEBJCK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::GEIELBEBJCK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GEIELBEBJCK*>**)UnitySDK::FromName("", "GEIELBEBJCK")->GetStaticField(0x11DD0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEIELBEBJCK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GEIELBEBJCK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GEIELBEBJCK*))((::PBYTE)hIl2Cpp + GEIELBEBJCK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GEIELBEBJCK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GEIELBEBJCK*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GEIELBEBJCK*>*(*)())((::PBYTE)hIl2Cpp + GEIELBEBJCK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEIELBEBJCK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GEIELBEBJCK* Clone()
		{
			return ((::GEIELBEBJCK*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEIELBEBJCK_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GEIELBEBJCK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GEIELBEBJCK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GEIELBEBJCK*))((::PBYTE)hIl2Cpp + GEIELBEBJCK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GEIELBEBJCK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEIELBEBJCK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GEIELBEBJCK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GEIELBEBJCK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GEIELBEBJCK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GEIELBEBJCK*))((::PBYTE)hIl2Cpp + GEIELBEBJCK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GEIELBEBJCK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
