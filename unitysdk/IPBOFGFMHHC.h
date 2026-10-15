#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BMJHAHOLEGH;
class IPBOFGFMHHC;
class NGLOBFBCGBB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IPBOFGFMHHC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E6DD4E0)
#define IPBOFGFMHHC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6DD960)
#define IPBOFGFMHHC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E6DD0C0)
#define IPBOFGFMHHC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6DCFE0)
#define IPBOFGFMHHC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6DCF80)
#define IPBOFGFMHHC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E6DD160)
#define IPBOFGFMHHC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E6DD130)
#define IPBOFGFMHHC_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E6DD120)
#define IPBOFGFMHHC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6DD2B0)
#define IPBOFGFMHHC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E6DCF40)
#define IPBOFGFMHHC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E6DD750)
#define IPBOFGFMHHC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E6DD640)
#define IPBOFGFMHHC_MNEOPLOFIJP_OFFSET UNITYSDK_OFFSET(0x1E6DD0F0)
#define IPBOFGFMHHC_NMJDEEKBACE_OFFSET UNITYSDK_OFFSET(0x1E6DD100)
#define IPBOFGFMHHC_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E6DD110)
#define IPBOFGFMHHC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E6DCF70)
#define IPBOFGFMHHC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6DD340)
#define IPBOFGFMHHC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E6DD3A0)

inline static constexpr unsigned int IPBOFGFMHHC_TypeDefinitionIndex = 31313;

	class IPBOFGFMHHC : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::NGLOBFBCGBB*>* HFMEFEKDMLA; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::BMJHAHOLEGH*>* CIHFHHGGAON; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x28
		static ::Google::Protobuf::FieldCodec_1<::BMJHAHOLEGH*>** StaticGet_IGPABHLCEFO()
		{
			return (::Google::Protobuf::FieldCodec_1<::BMJHAHOLEGH*>**)UnitySDK::FromName("", "IPBOFGFMHHC")->GetStaticField(0x5A990);
		}

		static ::Google::Protobuf::MessageParser_1<::IPBOFGFMHHC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IPBOFGFMHHC*>**)UnitySDK::FromName("", "IPBOFGFMHHC")->GetStaticField(0x5A998);
		}

		static ::Google::Protobuf::FieldCodec_1<::NGLOBFBCGBB*>** StaticGet_OACCMGBAPJG()
		{
			return (::Google::Protobuf::FieldCodec_1<::NGLOBFBCGBB*>**)UnitySDK::FromName("", "IPBOFGFMHHC")->GetStaticField(0x5A9A0);
		}

		// static const ::System::Object BOOLNNFAGNK; // 0x0
		// static const ::System::Object CCDOCCHIADJ; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPBOFGFMHHC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IPBOFGFMHHC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IPBOFGFMHHC*))((::PBYTE)hIl2Cpp + IPBOFGFMHHC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IPBOFGFMHHC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::IPBOFGFMHHC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::IPBOFGFMHHC*>*(*)())((::PBYTE)hIl2Cpp + IPBOFGFMHHC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPBOFGFMHHC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IPBOFGFMHHC* Clone()
		{
			return ((::IPBOFGFMHHC*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPBOFGFMHHC_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::NGLOBFBCGBB*>* MNEOPLOFIJP()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::NGLOBFBCGBB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPBOFGFMHHC_MNEOPLOFIJP_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::BMJHAHOLEGH*>* NMJDEEKBACE()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::BMJHAHOLEGH*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPBOFGFMHHC_NMJDEEKBACE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IPBOFGFMHHC_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IPBOFGFMHHC_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IPBOFGFMHHC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IPBOFGFMHHC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IPBOFGFMHHC*))((::PBYTE)hIl2Cpp + IPBOFGFMHHC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IPBOFGFMHHC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPBOFGFMHHC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IPBOFGFMHHC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IPBOFGFMHHC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IPBOFGFMHHC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IPBOFGFMHHC*))((::PBYTE)hIl2Cpp + IPBOFGFMHHC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IPBOFGFMHHC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
