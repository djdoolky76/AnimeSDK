#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HFGMOFBDAON;
class IFAHFGFFPEF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HFGMOFBDAON_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E569880)
#define HFGMOFBDAON_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E569BF0)
#define HFGMOFBDAON_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5693C0)
#define HFGMOFBDAON_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E569330)
#define HFGMOFBDAON_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5692F0)
#define HFGMOFBDAON_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E569570)
#define HFGMOFBDAON_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E569420)
#define HFGMOFBDAON_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E569400)
#define HFGMOFBDAON_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5696A0)
#define HFGMOFBDAON_JBOHMIOHMAN_OFFSET UNITYSDK_OFFSET(0x1E569410)
#define HFGMOFBDAON_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E5692B0)
#define HFGMOFBDAON_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E569A30)
#define HFGMOFBDAON_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E569990)
#define HFGMOFBDAON_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E5693F0)
#define HFGMOFBDAON_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5692E0)
#define HFGMOFBDAON_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E569710)
#define HFGMOFBDAON_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E569770)

inline static constexpr unsigned int HFGMOFBDAON_TypeDefinitionIndex = 26986;

	class HFGMOFBDAON : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::IFAHFGFFPEF*>* GJBCMMHAOLM; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::FieldCodec** StaticGet_NGAMPHOECCC()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "HFGMOFBDAON")->GetStaticField(0x34870);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "HFGMOFBDAON")->GetStaticField(0x34878);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object OCGLDKNAFKL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFGMOFBDAON_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HFGMOFBDAON* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HFGMOFBDAON*))((::PBYTE)hIl2Cpp + HFGMOFBDAON_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HFGMOFBDAON_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + HFGMOFBDAON_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFGMOFBDAON_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HFGMOFBDAON* Clone()
		{
			return ((::HFGMOFBDAON*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFGMOFBDAON_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HFGMOFBDAON_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HFGMOFBDAON_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::IFAHFGFFPEF*>* JBOHMIOHMAN()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::IFAHFGFFPEF*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFGMOFBDAON_JBOHMIOHMAN_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HFGMOFBDAON_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HFGMOFBDAON* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HFGMOFBDAON*))((::PBYTE)hIl2Cpp + HFGMOFBDAON_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HFGMOFBDAON_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFGMOFBDAON_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HFGMOFBDAON_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HFGMOFBDAON_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HFGMOFBDAON* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HFGMOFBDAON*))((::PBYTE)hIl2Cpp + HFGMOFBDAON_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HFGMOFBDAON_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
