#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ALAMOHABJIP;
class HPJONNDENCB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HPJONNDENCB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x20050740)
#define HPJONNDENCB_CCTOR_OFFSET UNITYSDK_OFFSET(0x20050AB0)
#define HPJONNDENCB_CLONE_OFFSET UNITYSDK_OFFSET(0x20050280)
#define HPJONNDENCB_COIJLMCGKKN_OFFSET UNITYSDK_OFFSET(0x200502C0)
#define HPJONNDENCB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x200501F0)
#define HPJONNDENCB_CTOR_OFFSET UNITYSDK_OFFSET(0x200501B0)
#define HPJONNDENCB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x20050430)
#define HPJONNDENCB_EQUALS_OFFSET UNITYSDK_OFFSET(0x200502E0)
#define HPJONNDENCB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x20050560)
#define HPJONNDENCB_IABKGIFBNAH_OFFSET UNITYSDK_OFFSET(0x200502B0)
#define HPJONNDENCB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x20050170)
#define HPJONNDENCB_MEECEOCMLAD_OFFSET UNITYSDK_OFFSET(0x200502D0)
#define HPJONNDENCB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x200508F0)
#define HPJONNDENCB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x20050850)
#define HPJONNDENCB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x200501A0)
#define HPJONNDENCB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x200505D0)
#define HPJONNDENCB_WRITETO_OFFSET UNITYSDK_OFFSET(0x20050630)

inline static constexpr unsigned int HPJONNDENCB_TypeDefinitionIndex = 31637;

	class HPJONNDENCB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::ALAMOHABJIP*>* GBJINKPMNHE; // 0x18
		::System::UInt32 LJCKCFLOGFK; // 0x20
		static ::Google::Protobuf::MessageParser_1<::HPJONNDENCB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HPJONNDENCB*>**)UnitySDK::FromName("", "HPJONNDENCB")->GetStaticField(0x40080);
		}

		static ::Google::Protobuf::FieldCodec_1<::ALAMOHABJIP*>** StaticGet_IIJFOMMBKNB()
		{
			return (::Google::Protobuf::FieldCodec_1<::ALAMOHABJIP*>**)UnitySDK::FromName("", "HPJONNDENCB")->GetStaticField(0x40088);
		}

		// static const ::System::Object NPHEJKCIADP; // 0x0
		// static const ::System::Object EOANNLHKADI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPJONNDENCB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HPJONNDENCB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HPJONNDENCB*))((::PBYTE)hIl2Cpp + HPJONNDENCB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HPJONNDENCB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HPJONNDENCB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HPJONNDENCB*>*(*)())((::PBYTE)hIl2Cpp + HPJONNDENCB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPJONNDENCB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HPJONNDENCB* Clone()
		{
			return ((::HPJONNDENCB*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPJONNDENCB_CLONE_OFFSET))(this);
		}

		::System::UInt32 IABKGIFBNAH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPJONNDENCB_IABKGIFBNAH_OFFSET))(this);
		}

		::System::Void COIJLMCGKKN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HPJONNDENCB_COIJLMCGKKN_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::ALAMOHABJIP*>* MEECEOCMLAD()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::ALAMOHABJIP*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPJONNDENCB_MEECEOCMLAD_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HPJONNDENCB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HPJONNDENCB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HPJONNDENCB*))((::PBYTE)hIl2Cpp + HPJONNDENCB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPJONNDENCB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPJONNDENCB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HPJONNDENCB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPJONNDENCB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HPJONNDENCB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HPJONNDENCB*))((::PBYTE)hIl2Cpp + HPJONNDENCB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HPJONNDENCB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
