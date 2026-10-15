#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DBJPOICBGMK;
class IOELPDDJGFJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DBJPOICBGMK_BEMEFIJPBKC_OFFSET UNITYSDK_OFFSET(0x1E15E860)
#define DBJPOICBGMK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E15EC50)
#define DBJPOICBGMK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E15EF50)
#define DBJPOICBGMK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E15E830)
#define DBJPOICBGMK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E15E780)
#define DBJPOICBGMK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E15E730)
#define DBJPOICBGMK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E15E9B0)
#define DBJPOICBGMK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E15E870)
#define DBJPOICBGMK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E15EAD0)
#define DBJPOICBGMK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E15E6F0)
#define DBJPOICBGMK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E15ED90)
#define DBJPOICBGMK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E15ECF0)
#define DBJPOICBGMK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E15E720)
#define DBJPOICBGMK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E15EB40)
#define DBJPOICBGMK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E15EBA0)

inline static constexpr unsigned int DBJPOICBGMK_TypeDefinitionIndex = 27164;

	class DBJPOICBGMK : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::IOELPDDJGFJ*>* BPJNCMFCKBJ; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::FieldCodec** StaticGet_JFCIBIJLOCN()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "DBJPOICBGMK")->GetStaticField(0x26030);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "DBJPOICBGMK")->GetStaticField(0x26038);
		}

		// static const ::System::Object GNPGDFMNEDM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBJPOICBGMK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DBJPOICBGMK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DBJPOICBGMK*))((::PBYTE)hIl2Cpp + DBJPOICBGMK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DBJPOICBGMK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + DBJPOICBGMK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBJPOICBGMK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DBJPOICBGMK* Clone()
		{
			return ((::DBJPOICBGMK*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBJPOICBGMK_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::IOELPDDJGFJ*>* BEMEFIJPBKC()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::IOELPDDJGFJ*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBJPOICBGMK_BEMEFIJPBKC_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DBJPOICBGMK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DBJPOICBGMK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DBJPOICBGMK*))((::PBYTE)hIl2Cpp + DBJPOICBGMK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DBJPOICBGMK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBJPOICBGMK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DBJPOICBGMK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DBJPOICBGMK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DBJPOICBGMK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DBJPOICBGMK*))((::PBYTE)hIl2Cpp + DBJPOICBGMK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DBJPOICBGMK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
