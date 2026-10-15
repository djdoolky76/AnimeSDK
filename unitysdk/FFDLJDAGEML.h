#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FFDLJDAGEML;
class IIMHLPBEDDH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FFDLJDAGEML_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E36B9A0)
#define FFDLJDAGEML_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E36BD40)
#define FFDLJDAGEML_CLONE_OFFSET UNITYSDK_OFFSET(0x1E36B300)
#define FFDLJDAGEML_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E36B270)
#define FFDLJDAGEML_CTOR_OFFSET UNITYSDK_OFFSET(0x1E36B260)
#define FFDLJDAGEML_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E36B590)
#define FFDLJDAGEML_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E36B3F0)
#define FFDLJDAGEML_FFBGMLAOCND_OFFSET UNITYSDK_OFFSET(0x1E36B3D0)
#define FFDLJDAGEML_GAKBCHBEADA_OFFSET UNITYSDK_OFFSET(0x1E36B3E0)
#define FFDLJDAGEML_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E36B860)
#define FFDLJDAGEML_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E36B1F0)
#define FFDLJDAGEML_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E36BB20)
#define FFDLJDAGEML_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E36BA00)
#define FFDLJDAGEML_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E36B250)
#define FFDLJDAGEML_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E36B8B0)
#define FFDLJDAGEML_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E36B910)

inline static constexpr unsigned int FFDLJDAGEML_TypeDefinitionIndex = 27725;

	class FFDLJDAGEML : public ::System::Object
	{
	public:
		::IIMHLPBEDDH* JBCLNBMJEGI; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "FFDLJDAGEML")->GetStaticField(0x5D920);
		}

		// static const ::System::Object IPMBLBMLNIC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFDLJDAGEML_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FFDLJDAGEML* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FFDLJDAGEML*))((::PBYTE)hIl2Cpp + FFDLJDAGEML_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FFDLJDAGEML_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + FFDLJDAGEML_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFDLJDAGEML_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FFDLJDAGEML* Clone()
		{
			return ((::FFDLJDAGEML*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFDLJDAGEML_CLONE_OFFSET))(this);
		}

		::IIMHLPBEDDH* FFBGMLAOCND()
		{
			return ((::IIMHLPBEDDH*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFDLJDAGEML_FFBGMLAOCND_OFFSET))(this);
		}

		::System::Void GAKBCHBEADA(::IIMHLPBEDDH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IIMHLPBEDDH*))((::PBYTE)hIl2Cpp + FFDLJDAGEML_GAKBCHBEADA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FFDLJDAGEML_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FFDLJDAGEML* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FFDLJDAGEML*))((::PBYTE)hIl2Cpp + FFDLJDAGEML_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FFDLJDAGEML_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFDLJDAGEML_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FFDLJDAGEML_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FFDLJDAGEML_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FFDLJDAGEML* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FFDLJDAGEML*))((::PBYTE)hIl2Cpp + FFDLJDAGEML_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FFDLJDAGEML_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
