#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LACJDDFOPHD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LACJDDFOPHD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E89B6D0)
#define LACJDDFOPHD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E89B770)
#define LACJDDFOPHD_CLONE_OFFSET UNITYSDK_OFFSET(0x1E89B3C0)
#define LACJDDFOPHD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E89B390)
#define LACJDDFOPHD_CTOR_OFFSET UNITYSDK_OFFSET(0x1E89B380)
#define LACJDDFOPHD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E89B4D0)
#define LACJDDFOPHD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E89B400)
#define LACJDDFOPHD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E89B630)
#define LACJDDFOPHD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E89B340)
#define LACJDDFOPHD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E89B720)
#define LACJDDFOPHD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E89B6F0)
#define LACJDDFOPHD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E89B370)
#define LACJDDFOPHD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E89B660)
#define LACJDDFOPHD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E89B6C0)

inline static constexpr unsigned int LACJDDFOPHD_TypeDefinitionIndex = 27403;

	class LACJDDFOPHD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::LACJDDFOPHD*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LACJDDFOPHD*>**)UnitySDK::FromName("", "LACJDDFOPHD")->GetStaticField(0x24640);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LACJDDFOPHD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LACJDDFOPHD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LACJDDFOPHD*))((::PBYTE)hIl2Cpp + LACJDDFOPHD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LACJDDFOPHD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LACJDDFOPHD*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LACJDDFOPHD*>*(*)())((::PBYTE)hIl2Cpp + LACJDDFOPHD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LACJDDFOPHD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LACJDDFOPHD* Clone()
		{
			return ((::LACJDDFOPHD*(*)(::PVOID))((::PBYTE)hIl2Cpp + LACJDDFOPHD_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LACJDDFOPHD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LACJDDFOPHD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LACJDDFOPHD*))((::PBYTE)hIl2Cpp + LACJDDFOPHD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LACJDDFOPHD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LACJDDFOPHD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LACJDDFOPHD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LACJDDFOPHD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LACJDDFOPHD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LACJDDFOPHD*))((::PBYTE)hIl2Cpp + LACJDDFOPHD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LACJDDFOPHD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
