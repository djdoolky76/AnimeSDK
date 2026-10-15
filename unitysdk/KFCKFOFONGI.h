#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KFCKFOFONGI;
class KHEOAGDIHCC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KFCKFOFONGI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E7E92A0)
#define KFCKFOFONGI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7E9590)
#define KFCKFOFONGI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E7E8D30)
#define KFCKFOFONGI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7E8C60)
#define KFCKFOFONGI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7E8C10)
#define KFCKFOFONGI_DMILFELPENG_OFFSET UNITYSDK_OFFSET(0x1E7E8DC0)
#define KFCKFOFONGI_EGJPHFBHGKI_OFFSET UNITYSDK_OFFSET(0x1E7E8DA0)
#define KFCKFOFONGI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E7E8E50)
#define KFCKFOFONGI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E7E8DF0)
#define KFCKFOFONGI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E7E8FA0)
#define KFCKFOFONGI_GLMJOGIFJFH_OFFSET UNITYSDK_OFFSET(0x1E7E8D80)
#define KFCKFOFONGI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E7E8BA0)
#define KFCKFOFONGI_JKPOJHLAIBN_OFFSET UNITYSDK_OFFSET(0x1E7E8D90)
#define KFCKFOFONGI_JLMMIPGCKBH_OFFSET UNITYSDK_OFFSET(0x1E7E8DD0)
#define KFCKFOFONGI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E7E9480)
#define KFCKFOFONGI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E7E93C0)
#define KFCKFOFONGI_MOACJILLABA_OFFSET UNITYSDK_OFFSET(0x1E7E8DE0)
#define KFCKFOFONGI_PBPKFCCNEAO_OFFSET UNITYSDK_OFFSET(0x1E7E8DB0)
#define KFCKFOFONGI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E7E8C00)
#define KFCKFOFONGI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E7E9020)
#define KFCKFOFONGI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E7E9080)

inline static constexpr unsigned int KFCKFOFONGI_TypeDefinitionIndex = 28074;

	class KFCKFOFONGI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::KHEOAGDIHCC*>* ALPBAKFOBMA; // 0x18
		::System::UInt32 OLHGIIGAHAK; // 0x20
		::System::Boolean NIDGGIDFIGN; // 0x24
		::System::Boolean JHGHBCPKHFG; // 0x25
		static ::Google::Protobuf::FieldCodec_1<::KHEOAGDIHCC*>** StaticGet_BDEMCKBGIOG()
		{
			return (::Google::Protobuf::FieldCodec_1<::KHEOAGDIHCC*>**)UnitySDK::FromName("", "KFCKFOFONGI")->GetStaticField(0x12450);
		}

		static ::Google::Protobuf::MessageParser_1<::KFCKFOFONGI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KFCKFOFONGI*>**)UnitySDK::FromName("", "KFCKFOFONGI")->GetStaticField(0x12458);
		}

		// static const ::System::Object FHEFJHLNGMF; // 0x0
		// static const ::System::Object NFCCGGCLJOE; // 0x0
		// static const ::System::Object HAJIJMFLEKP; // 0x0
		// static const ::System::Object NOIJIMDHCME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFCKFOFONGI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KFCKFOFONGI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KFCKFOFONGI*))((::PBYTE)hIl2Cpp + KFCKFOFONGI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KFCKFOFONGI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KFCKFOFONGI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KFCKFOFONGI*>*(*)())((::PBYTE)hIl2Cpp + KFCKFOFONGI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFCKFOFONGI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KFCKFOFONGI* Clone()
		{
			return ((::KFCKFOFONGI*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFCKFOFONGI_CLONE_OFFSET))(this);
		}

		::System::Boolean GLMJOGIFJFH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KFCKFOFONGI_GLMJOGIFJFH_OFFSET))(this);
		}

		::System::Void JKPOJHLAIBN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KFCKFOFONGI_JKPOJHLAIBN_OFFSET))(this, a1);
		}

		::System::UInt32 EGJPHFBHGKI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KFCKFOFONGI_EGJPHFBHGKI_OFFSET))(this);
		}

		::System::Void PBPKFCCNEAO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KFCKFOFONGI_PBPKFCCNEAO_OFFSET))(this, a1);
		}

		::System::Boolean DMILFELPENG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KFCKFOFONGI_DMILFELPENG_OFFSET))(this);
		}

		::System::Void JLMMIPGCKBH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KFCKFOFONGI_JLMMIPGCKBH_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::KHEOAGDIHCC*>* MOACJILLABA()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::KHEOAGDIHCC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFCKFOFONGI_MOACJILLABA_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KFCKFOFONGI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KFCKFOFONGI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KFCKFOFONGI*))((::PBYTE)hIl2Cpp + KFCKFOFONGI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KFCKFOFONGI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFCKFOFONGI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KFCKFOFONGI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KFCKFOFONGI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KFCKFOFONGI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KFCKFOFONGI*))((::PBYTE)hIl2Cpp + KFCKFOFONGI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KFCKFOFONGI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
