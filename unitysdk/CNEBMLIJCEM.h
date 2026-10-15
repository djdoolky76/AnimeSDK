#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CNEBMLIJCEM;
class HEACNLOGGPH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CNEBMLIJCEM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E1081D0)
#define CNEBMLIJCEM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E108540)
#define CNEBMLIJCEM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E107D10)
#define CNEBMLIJCEM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E107C80)
#define CNEBMLIJCEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E107C40)
#define CNEBMLIJCEM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E107EC0)
#define CNEBMLIJCEM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E107D70)
#define CNEBMLIJCEM_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E107D50)
#define CNEBMLIJCEM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E107FF0)
#define CNEBMLIJCEM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E107C00)
#define CNEBMLIJCEM_MEKMFEEKFIA_OFFSET UNITYSDK_OFFSET(0x1E107D60)
#define CNEBMLIJCEM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E108380)
#define CNEBMLIJCEM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1082E0)
#define CNEBMLIJCEM_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E107D40)
#define CNEBMLIJCEM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E107C30)
#define CNEBMLIJCEM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E108060)
#define CNEBMLIJCEM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1080C0)

inline static constexpr unsigned int CNEBMLIJCEM_TypeDefinitionIndex = 34084;

	class CNEBMLIJCEM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::HEACNLOGGPH*>* ONHNFHIEHPP; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::HEACNLOGGPH*>** StaticGet_KCCIIJMFGLL()
		{
			return (::Google::Protobuf::FieldCodec_1<::HEACNLOGGPH*>**)UnitySDK::FromName("", "CNEBMLIJCEM")->GetStaticField(0x1FA00);
		}

		static ::Google::Protobuf::MessageParser_1<::CNEBMLIJCEM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CNEBMLIJCEM*>**)UnitySDK::FromName("", "CNEBMLIJCEM")->GetStaticField(0x1FA08);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object ALAGLKEPDCC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNEBMLIJCEM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CNEBMLIJCEM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CNEBMLIJCEM*))((::PBYTE)hIl2Cpp + CNEBMLIJCEM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CNEBMLIJCEM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CNEBMLIJCEM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CNEBMLIJCEM*>*(*)())((::PBYTE)hIl2Cpp + CNEBMLIJCEM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNEBMLIJCEM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CNEBMLIJCEM* Clone()
		{
			return ((::CNEBMLIJCEM*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNEBMLIJCEM_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CNEBMLIJCEM_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CNEBMLIJCEM_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::HEACNLOGGPH*>* MEKMFEEKFIA()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::HEACNLOGGPH*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNEBMLIJCEM_MEKMFEEKFIA_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CNEBMLIJCEM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CNEBMLIJCEM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CNEBMLIJCEM*))((::PBYTE)hIl2Cpp + CNEBMLIJCEM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CNEBMLIJCEM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNEBMLIJCEM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CNEBMLIJCEM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CNEBMLIJCEM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CNEBMLIJCEM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CNEBMLIJCEM*))((::PBYTE)hIl2Cpp + CNEBMLIJCEM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CNEBMLIJCEM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
