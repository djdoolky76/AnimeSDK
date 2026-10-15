#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CJJHNFICDIM;
class LBPHINKJJIM;
class LDLCMMOPKNG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LBPHINKJJIM_BGHKDLONBOD_OFFSET UNITYSDK_OFFSET(0x1E8E0E10)
#define LBPHINKJJIM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8E1290)
#define LBPHINKJJIM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8E16C0)
#define LBPHINKJJIM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8E0DB0)
#define LBPHINKJJIM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8E0CE0)
#define LBPHINKJJIM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8E0CA0)
#define LBPHINKJJIM_EAFGHBGKMAD_OFFSET UNITYSDK_OFFSET(0x1E8E0E00)
#define LBPHINKJJIM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8E0E60)
#define LBPHINKJJIM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8E0E30)
#define LBPHINKJJIM_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E8E0DF0)
#define LBPHINKJJIM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8E1040)
#define LBPHINKJJIM_IBAGHDNPGCO_OFFSET UNITYSDK_OFFSET(0x1E8E0E20)
#define LBPHINKJJIM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E8E0C60)
#define LBPHINKJJIM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8E14D0)
#define LBPHINKJJIM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8E13D0)
#define LBPHINKJJIM_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E8E0DE0)
#define LBPHINKJJIM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8E0C90)
#define LBPHINKJJIM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8E10C0)
#define LBPHINKJJIM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8E1120)

inline static constexpr unsigned int LBPHINKJJIM_TypeDefinitionIndex = 28147;

	class LBPHINKJJIM : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::LDLCMMOPKNG*>* AJPGMEDCOLE; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::CJJHNFICDIM* JIHIDBNIKAG; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x28
		static ::Google::Protobuf::FieldCodec** StaticGet_BHLHMNNMPFF()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "LBPHINKJJIM")->GetStaticField(0x30E70);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "LBPHINKJJIM")->GetStaticField(0x30E78);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object ENGMFAOLENA; // 0x0
		// static const ::System::Object MCEJJGELGPI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBPHINKJJIM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LBPHINKJJIM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LBPHINKJJIM*))((::PBYTE)hIl2Cpp + LBPHINKJJIM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LBPHINKJJIM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + LBPHINKJJIM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBPHINKJJIM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LBPHINKJJIM* Clone()
		{
			return ((::LBPHINKJJIM*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBPHINKJJIM_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LBPHINKJJIM_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LBPHINKJJIM_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::LDLCMMOPKNG*>* EAFGHBGKMAD()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::LDLCMMOPKNG*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBPHINKJJIM_EAFGHBGKMAD_OFFSET))(this);
		}

		::CJJHNFICDIM* BGHKDLONBOD()
		{
			return ((::CJJHNFICDIM*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBPHINKJJIM_BGHKDLONBOD_OFFSET))(this);
		}

		::System::Void IBAGHDNPGCO(::CJJHNFICDIM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CJJHNFICDIM*))((::PBYTE)hIl2Cpp + LBPHINKJJIM_IBAGHDNPGCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LBPHINKJJIM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LBPHINKJJIM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LBPHINKJJIM*))((::PBYTE)hIl2Cpp + LBPHINKJJIM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LBPHINKJJIM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBPHINKJJIM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LBPHINKJJIM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LBPHINKJJIM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LBPHINKJJIM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LBPHINKJJIM*))((::PBYTE)hIl2Cpp + LBPHINKJJIM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LBPHINKJJIM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
