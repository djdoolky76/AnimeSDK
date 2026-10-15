#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LHHGCDLCJDA;
class LMINGAKNDKP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LMINGAKNDKP_BABFGFBFLED_OFFSET UNITYSDK_OFFSET(0x1E9A6140)
#define LMINGAKNDKP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E9A65E0)
#define LMINGAKNDKP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9A6930)
#define LMINGAKNDKP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E9A6100)
#define LMINGAKNDKP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9A6000)
#define LMINGAKNDKP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9A5F80)
#define LMINGAKNDKP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E9A61A0)
#define LMINGAKNDKP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E9A6170)
#define LMINGAKNDKP_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E9A6160)
#define LMINGAKNDKP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E9A62F0)
#define LMINGAKNDKP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E9A5F40)
#define LMINGAKNDKP_KCLLOPDAONO_OFFSET UNITYSDK_OFFSET(0x1E9A6130)
#define LMINGAKNDKP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E9A6800)
#define LMINGAKNDKP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E9A6740)
#define LMINGAKNDKP_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E9A6150)
#define LMINGAKNDKP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E9A5F70)
#define LMINGAKNDKP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9A6440)
#define LMINGAKNDKP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E9A64A0)

	class LMINGAKNDKP : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::LHHGCDLCJDA*>* KPJLKJBKGDG; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* BGCBGOMPFFI; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x28
		static ::Google::Protobuf::FieldCodec** StaticGet_GKPABEJNKJD()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "LMINGAKNDKP")->GetStaticField(0x4D340);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_DCGLMBAKFLM()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "LMINGAKNDKP")->GetStaticField(0x4D348);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "LMINGAKNDKP")->GetStaticField(0x4D350);
		}

		// static const ::System::Object MLFHAFFHOAC; // 0x0
		// static const ::System::Object DNJLNINLJHO; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMINGAKNDKP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LMINGAKNDKP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LMINGAKNDKP*))((::PBYTE)hIl2Cpp + LMINGAKNDKP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LMINGAKNDKP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + LMINGAKNDKP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMINGAKNDKP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LMINGAKNDKP* Clone()
		{
			return ((::LMINGAKNDKP*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMINGAKNDKP_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::LHHGCDLCJDA*>* KCLLOPDAONO()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::LHHGCDLCJDA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMINGAKNDKP_KCLLOPDAONO_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* BABFGFBFLED()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMINGAKNDKP_BABFGFBFLED_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LMINGAKNDKP_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LMINGAKNDKP_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LMINGAKNDKP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LMINGAKNDKP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LMINGAKNDKP*))((::PBYTE)hIl2Cpp + LMINGAKNDKP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LMINGAKNDKP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMINGAKNDKP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LMINGAKNDKP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LMINGAKNDKP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LMINGAKNDKP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LMINGAKNDKP*))((::PBYTE)hIl2Cpp + LMINGAKNDKP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LMINGAKNDKP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
