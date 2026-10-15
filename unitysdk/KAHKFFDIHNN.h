#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KAHKFFDIHNN;
class LGHGDCFAHGM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KAHKFFDIHNN_AAAAGBCDFCJ_OFFSET UNITYSDK_OFFSET(0x1E7DED00)
#define KAHKFFDIHNN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E7DF0C0)
#define KAHKFFDIHNN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7DF500)
#define KAHKFFDIHNN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E7DECA0)
#define KAHKFFDIHNN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7DEBC0)
#define KAHKFFDIHNN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7DEB60)
#define KAHKFFDIHNN_EMFFKMCOOJI_OFFSET UNITYSDK_OFFSET(0x1E7DECF0)
#define KAHKFFDIHNN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E7DED40)
#define KAHKFFDIHNN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E7DED10)
#define KAHKFFDIHNN_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E7DECE0)
#define KAHKFFDIHNN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E7DEE90)
#define KAHKFFDIHNN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E7DEB20)
#define KAHKFFDIHNN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E7DF300)
#define KAHKFFDIHNN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E7DF200)
#define KAHKFFDIHNN_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E7DECD0)
#define KAHKFFDIHNN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E7DEB50)
#define KAHKFFDIHNN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E7DEF20)
#define KAHKFFDIHNN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E7DEF80)

inline static constexpr unsigned int KAHKFFDIHNN_TypeDefinitionIndex = 32134;

	class KAHKFFDIHNN : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::LGHGDCFAHGM*>* KOMDFLDLBEN; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::LGHGDCFAHGM*>* OLLMLAHPHLP; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x28
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "KAHKFFDIHNN")->GetStaticField(0xD830);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_PDJJOEIFPAL()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "KAHKFFDIHNN")->GetStaticField(0xD838);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_PGILJBEGFAD()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "KAHKFFDIHNN")->GetStaticField(0xD840);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object BJCCFADDHAP; // 0x0
		// static const ::System::Object MEOCMJFAMFH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAHKFFDIHNN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KAHKFFDIHNN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KAHKFFDIHNN*))((::PBYTE)hIl2Cpp + KAHKFFDIHNN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KAHKFFDIHNN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + KAHKFFDIHNN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAHKFFDIHNN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KAHKFFDIHNN* Clone()
		{
			return ((::KAHKFFDIHNN*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAHKFFDIHNN_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KAHKFFDIHNN_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KAHKFFDIHNN_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::LGHGDCFAHGM*>* EMFFKMCOOJI()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::LGHGDCFAHGM*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAHKFFDIHNN_EMFFKMCOOJI_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::LGHGDCFAHGM*>* AAAAGBCDFCJ()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::LGHGDCFAHGM*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAHKFFDIHNN_AAAAGBCDFCJ_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KAHKFFDIHNN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KAHKFFDIHNN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KAHKFFDIHNN*))((::PBYTE)hIl2Cpp + KAHKFFDIHNN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KAHKFFDIHNN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAHKFFDIHNN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KAHKFFDIHNN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KAHKFFDIHNN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KAHKFFDIHNN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KAHKFFDIHNN*))((::PBYTE)hIl2Cpp + KAHKFFDIHNN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KAHKFFDIHNN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
