#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CNOAPAMNDOA;
class LHCOHLJIAII;
class NBNLDHBELLO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CNOAPAMNDOA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E10DDE0)
#define CNOAPAMNDOA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E12F420)
#define CNOAPAMNDOA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E10D9C0)
#define CNOAPAMNDOA_CPMOKOCFHAD_OFFSET UNITYSDK_OFFSET(0x1E10DA20)
#define CNOAPAMNDOA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E10D8B0)
#define CNOAPAMNDOA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E10D840)
#define CNOAPAMNDOA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E10DA60)
#define CNOAPAMNDOA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E10DA30)
#define CNOAPAMNDOA_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E10DA00)
#define CNOAPAMNDOA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E10DBB0)
#define CNOAPAMNDOA_GLNIOMKCMNF_OFFSET UNITYSDK_OFFSET(0x1E10DA10)
#define CNOAPAMNDOA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E10D800)
#define CNOAPAMNDOA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E10E020)
#define CNOAPAMNDOA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E10DF20)
#define CNOAPAMNDOA_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E10D9F0)
#define CNOAPAMNDOA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E10D830)
#define CNOAPAMNDOA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E10DC40)
#define CNOAPAMNDOA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E10DCA0)

inline static constexpr unsigned int CNOAPAMNDOA_TypeDefinitionIndex = 29464;

	class CNOAPAMNDOA : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::LHCOHLJIAII*>* OOJBKAFHAHJ; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::NBNLDHBELLO*>* CAMHHDLOPFB; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x28
		static ::Google::Protobuf::FieldCodec_1<::LHCOHLJIAII*>** StaticGet_KMEJJFDHGNO()
		{
			return (::Google::Protobuf::FieldCodec_1<::LHCOHLJIAII*>**)UnitySDK::FromName("", "CNOAPAMNDOA")->GetStaticField(0x20370);
		}

		static ::Google::Protobuf::MessageParser_1<::CNOAPAMNDOA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CNOAPAMNDOA*>**)UnitySDK::FromName("", "CNOAPAMNDOA")->GetStaticField(0x20378);
		}

		static ::Google::Protobuf::FieldCodec_1<::NBNLDHBELLO*>** StaticGet_IJBLAHCPGEF()
		{
			return (::Google::Protobuf::FieldCodec_1<::NBNLDHBELLO*>**)UnitySDK::FromName("", "CNOAPAMNDOA")->GetStaticField(0x20380);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object FKAGJFNLEGG; // 0x0
		// static const ::System::Object PJDGFIIIDHG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNOAPAMNDOA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CNOAPAMNDOA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CNOAPAMNDOA*))((::PBYTE)hIl2Cpp + CNOAPAMNDOA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CNOAPAMNDOA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CNOAPAMNDOA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CNOAPAMNDOA*>*(*)())((::PBYTE)hIl2Cpp + CNOAPAMNDOA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNOAPAMNDOA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CNOAPAMNDOA* Clone()
		{
			return ((::CNOAPAMNDOA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNOAPAMNDOA_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CNOAPAMNDOA_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CNOAPAMNDOA_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::LHCOHLJIAII*>* GLNIOMKCMNF()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::LHCOHLJIAII*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNOAPAMNDOA_GLNIOMKCMNF_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::NBNLDHBELLO*>* CPMOKOCFHAD()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::NBNLDHBELLO*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNOAPAMNDOA_CPMOKOCFHAD_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CNOAPAMNDOA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CNOAPAMNDOA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CNOAPAMNDOA*))((::PBYTE)hIl2Cpp + CNOAPAMNDOA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CNOAPAMNDOA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNOAPAMNDOA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CNOAPAMNDOA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CNOAPAMNDOA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CNOAPAMNDOA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CNOAPAMNDOA*))((::PBYTE)hIl2Cpp + CNOAPAMNDOA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CNOAPAMNDOA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
