#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HHJLCGGEHPB;
class JIDMMPAOELM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JIDMMPAOELM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E7496D0)
#define JIDMMPAOELM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E749A50)
#define JIDMMPAOELM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E749220)
#define JIDMMPAOELM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E749160)
#define JIDMMPAOELM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E749110)
#define JIDMMPAOELM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E7493D0)
#define JIDMMPAOELM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E749280)
#define JIDMMPAOELM_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E749260)
#define JIDMMPAOELM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E749500)
#define JIDMMPAOELM_GILACDPBMIB_OFFSET UNITYSDK_OFFSET(0x1E749270)
#define JIDMMPAOELM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E7490D0)
#define JIDMMPAOELM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E749880)
#define JIDMMPAOELM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E7497E0)
#define JIDMMPAOELM_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E749250)
#define JIDMMPAOELM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E749100)
#define JIDMMPAOELM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E749570)
#define JIDMMPAOELM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E7495D0)

inline static constexpr unsigned int JIDMMPAOELM_TypeDefinitionIndex = 34217;

	class JIDMMPAOELM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::HHJLCGGEHPB*>* GAIOOHCGFNH; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "JIDMMPAOELM")->GetStaticField(0x63D90);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_FCDLEBINLNM()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "JIDMMPAOELM")->GetStaticField(0x63D98);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object JEHODEDHLCB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIDMMPAOELM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JIDMMPAOELM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JIDMMPAOELM*))((::PBYTE)hIl2Cpp + JIDMMPAOELM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JIDMMPAOELM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + JIDMMPAOELM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIDMMPAOELM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JIDMMPAOELM* Clone()
		{
			return ((::JIDMMPAOELM*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIDMMPAOELM_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JIDMMPAOELM_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JIDMMPAOELM_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::HHJLCGGEHPB*>* GILACDPBMIB()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::HHJLCGGEHPB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIDMMPAOELM_GILACDPBMIB_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JIDMMPAOELM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JIDMMPAOELM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JIDMMPAOELM*))((::PBYTE)hIl2Cpp + JIDMMPAOELM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JIDMMPAOELM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIDMMPAOELM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JIDMMPAOELM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JIDMMPAOELM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JIDMMPAOELM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JIDMMPAOELM*))((::PBYTE)hIl2Cpp + JIDMMPAOELM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JIDMMPAOELM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
