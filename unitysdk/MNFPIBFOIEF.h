#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MNFPIBFOIEF;
class OCBPHIBFFAC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MNFPIBFOIEF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA97470)
#define MNFPIBFOIEF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA977F0)
#define MNFPIBFOIEF_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA96FB0)
#define MNFPIBFOIEF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA96EF0)
#define MNFPIBFOIEF_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA96EA0)
#define MNFPIBFOIEF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA97160)
#define MNFPIBFOIEF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA97010)
#define MNFPIBFOIEF_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1EA96FF0)
#define MNFPIBFOIEF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA97290)
#define MNFPIBFOIEF_HIKMBHCFDCN_OFFSET UNITYSDK_OFFSET(0x1EA97000)
#define MNFPIBFOIEF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA96E60)
#define MNFPIBFOIEF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA97620)
#define MNFPIBFOIEF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA97580)
#define MNFPIBFOIEF_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1EA96FE0)
#define MNFPIBFOIEF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA96E90)
#define MNFPIBFOIEF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA97300)
#define MNFPIBFOIEF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA97360)

inline static constexpr unsigned int MNFPIBFOIEF_TypeDefinitionIndex = 30055;

	class MNFPIBFOIEF : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::OCBPHIBFFAC*>* NFALDKIGEDL; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::OCBPHIBFFAC*>** StaticGet_IMKMBJBAGFF()
		{
			return (::Google::Protobuf::FieldCodec_1<::OCBPHIBFFAC*>**)UnitySDK::FromName("", "MNFPIBFOIEF")->GetStaticField(0x59E80);
		}

		static ::Google::Protobuf::MessageParser_1<::MNFPIBFOIEF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MNFPIBFOIEF*>**)UnitySDK::FromName("", "MNFPIBFOIEF")->GetStaticField(0x59E88);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object GOBGFCHHCDF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNFPIBFOIEF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MNFPIBFOIEF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MNFPIBFOIEF*))((::PBYTE)hIl2Cpp + MNFPIBFOIEF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MNFPIBFOIEF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MNFPIBFOIEF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MNFPIBFOIEF*>*(*)())((::PBYTE)hIl2Cpp + MNFPIBFOIEF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNFPIBFOIEF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MNFPIBFOIEF* Clone()
		{
			return ((::MNFPIBFOIEF*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNFPIBFOIEF_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MNFPIBFOIEF_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MNFPIBFOIEF_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::OCBPHIBFFAC*>* HIKMBHCFDCN()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::OCBPHIBFFAC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNFPIBFOIEF_HIKMBHCFDCN_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MNFPIBFOIEF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MNFPIBFOIEF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MNFPIBFOIEF*))((::PBYTE)hIl2Cpp + MNFPIBFOIEF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MNFPIBFOIEF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNFPIBFOIEF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MNFPIBFOIEF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MNFPIBFOIEF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MNFPIBFOIEF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MNFPIBFOIEF*))((::PBYTE)hIl2Cpp + MNFPIBFOIEF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MNFPIBFOIEF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
