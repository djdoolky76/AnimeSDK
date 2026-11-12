#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IFEGAHJADHG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IFEGAHJADHG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F963C50)
#define IFEGAHJADHG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F963E70)
#define IFEGAHJADHG_CLONE_OFFSET UNITYSDK_OFFSET(0x1F9638A0)
#define IFEGAHJADHG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F963870)
#define IFEGAHJADHG_CTOR_OFFSET UNITYSDK_OFFSET(0x1F963860)
#define IFEGAHJADHG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F9639D0)
#define IFEGAHJADHG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F963900)
#define IFEGAHJADHG_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1F9638F0)
#define IFEGAHJADHG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F963B40)
#define IFEGAHJADHG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F963820)
#define IFEGAHJADHG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F963D10)
#define IFEGAHJADHG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F963CE0)
#define IFEGAHJADHG_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1F9638E0)
#define IFEGAHJADHG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F963850)
#define IFEGAHJADHG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F963B70)
#define IFEGAHJADHG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F963BD0)

inline static constexpr unsigned int IFEGAHJADHG_TypeDefinitionIndex = 28294;

	class IFEGAHJADHG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::IFEGAHJADHG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IFEGAHJADHG*>**)UnitySDK::FromName("", "IFEGAHJADHG")->GetStaticField(0x47EB0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFEGAHJADHG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IFEGAHJADHG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IFEGAHJADHG*))((::PBYTE)hIl2Cpp + IFEGAHJADHG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFEGAHJADHG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::IFEGAHJADHG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::IFEGAHJADHG*>*(*)())((::PBYTE)hIl2Cpp + IFEGAHJADHG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFEGAHJADHG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IFEGAHJADHG* Clone()
		{
			return ((::IFEGAHJADHG*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFEGAHJADHG_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IFEGAHJADHG_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IFEGAHJADHG_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IFEGAHJADHG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IFEGAHJADHG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IFEGAHJADHG*))((::PBYTE)hIl2Cpp + IFEGAHJADHG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IFEGAHJADHG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFEGAHJADHG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IFEGAHJADHG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IFEGAHJADHG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IFEGAHJADHG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IFEGAHJADHG*))((::PBYTE)hIl2Cpp + IFEGAHJADHG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IFEGAHJADHG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
