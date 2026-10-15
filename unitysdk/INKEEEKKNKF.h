#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class INKEEEKKNKF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define INKEEEKKNKF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E697540)
#define INKEEEKKNKF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E697760)
#define INKEEEKKNKF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E697190)
#define INKEEEKKNKF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E697160)
#define INKEEEKKNKF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E697150)
#define INKEEEKKNKF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E6972C0)
#define INKEEEKKNKF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E6971F0)
#define INKEEEKKNKF_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E6971E0)
#define INKEEEKKNKF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E697430)
#define INKEEEKKNKF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E697110)
#define INKEEEKKNKF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E697600)
#define INKEEEKKNKF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E6975D0)
#define INKEEEKKNKF_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E6971D0)
#define INKEEEKKNKF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E697140)
#define INKEEEKKNKF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E697460)
#define INKEEEKKNKF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E6974C0)

inline static constexpr unsigned int INKEEEKKNKF_TypeDefinitionIndex = 30821;

	class INKEEEKKNKF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::INKEEEKKNKF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::INKEEEKKNKF*>**)UnitySDK::FromName("", "INKEEEKKNKF")->GetStaticField(0x53D00);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INKEEEKKNKF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::INKEEEKKNKF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::INKEEEKKNKF*))((::PBYTE)hIl2Cpp + INKEEEKKNKF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INKEEEKKNKF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::INKEEEKKNKF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::INKEEEKKNKF*>*(*)())((::PBYTE)hIl2Cpp + INKEEEKKNKF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + INKEEEKKNKF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::INKEEEKKNKF* Clone()
		{
			return ((::INKEEEKKNKF*(*)(::PVOID))((::PBYTE)hIl2Cpp + INKEEEKKNKF_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + INKEEEKKNKF_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + INKEEEKKNKF_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + INKEEEKKNKF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::INKEEEKKNKF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::INKEEEKKNKF*))((::PBYTE)hIl2Cpp + INKEEEKKNKF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INKEEEKKNKF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INKEEEKKNKF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + INKEEEKKNKF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INKEEEKKNKF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::INKEEEKKNKF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::INKEEEKKNKF*))((::PBYTE)hIl2Cpp + INKEEEKKNKF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + INKEEEKKNKF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
