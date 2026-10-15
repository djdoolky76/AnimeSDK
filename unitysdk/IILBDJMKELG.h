#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AGFGGFBNOJC;
class IILBDJMKELG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IILBDJMKELG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E689F50)
#define IILBDJMKELG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E68A250)
#define IILBDJMKELG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E689AD0)
#define IILBDJMKELG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E689A20)
#define IILBDJMKELG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6899D0)
#define IILBDJMKELG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E689CB0)
#define IILBDJMKELG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E689B30)
#define IILBDJMKELG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E689DD0)
#define IILBDJMKELG_IDOPMBNFENB_OFFSET UNITYSDK_OFFSET(0x1E689B20)
#define IILBDJMKELG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E689960)
#define IILBDJMKELG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E68A090)
#define IILBDJMKELG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E689FF0)
#define IILBDJMKELG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E6899C0)
#define IILBDJMKELG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E689E40)
#define IILBDJMKELG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E689EA0)

inline static constexpr unsigned int IILBDJMKELG_TypeDefinitionIndex = 28009;

	class IILBDJMKELG : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::AGFGGFBNOJC*>* PPAKCHGAPJI; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::FieldCodec** StaticGet_AMNJPJLCOFL()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "IILBDJMKELG")->GetStaticField(0x50730);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "IILBDJMKELG")->GetStaticField(0x50738);
		}

		// static const ::System::Object OJFIKDOKNBK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IILBDJMKELG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IILBDJMKELG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IILBDJMKELG*))((::PBYTE)hIl2Cpp + IILBDJMKELG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IILBDJMKELG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + IILBDJMKELG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IILBDJMKELG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IILBDJMKELG* Clone()
		{
			return ((::IILBDJMKELG*(*)(::PVOID))((::PBYTE)hIl2Cpp + IILBDJMKELG_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::AGFGGFBNOJC*>* IDOPMBNFENB()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::AGFGGFBNOJC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IILBDJMKELG_IDOPMBNFENB_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IILBDJMKELG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IILBDJMKELG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IILBDJMKELG*))((::PBYTE)hIl2Cpp + IILBDJMKELG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IILBDJMKELG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IILBDJMKELG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IILBDJMKELG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IILBDJMKELG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IILBDJMKELG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IILBDJMKELG*))((::PBYTE)hIl2Cpp + IILBDJMKELG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IILBDJMKELG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
