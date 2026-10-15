#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LAEHICCBBFN.h"
#include "unitysdk/System/Object.h"
class HDDLALFAMKO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HDDLALFAMKO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5498F0)
#define HDDLALFAMKO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E549C70)
#define HDDLALFAMKO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5493E0)
#define HDDLALFAMKO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E549350)
#define HDDLALFAMKO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E549300)
#define HDDLALFAMKO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E549590)
#define HDDLALFAMKO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E549460)
#define HDDLALFAMKO_FKFCAKCECHL_OFFSET UNITYSDK_OFFSET(0x1E549430)
#define HDDLALFAMKO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E549680)
#define HDDLALFAMKO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E549290)
#define HDDLALFAMKO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E549AA0)
#define HDDLALFAMKO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E549A50)
#define HDDLALFAMKO_MMIGKCIEOIH_OFFSET UNITYSDK_OFFSET(0x1E549440)
#define HDDLALFAMKO_NLNGFLLAOPB_OFFSET UNITYSDK_OFFSET(0x1E549450)
#define HDDLALFAMKO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5492F0)
#define HDDLALFAMKO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E549780)
#define HDDLALFAMKO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5497E0)

	class HDDLALFAMKO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* IPMHBGMIOKK; // 0x18
		::LAEHICCBBFN OGNIJJKNCBF; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "HDDLALFAMKO")->GetStaticField(0x31270);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_JJGEFLHOIMG()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "HDDLALFAMKO")->GetStaticField(0x31278);
		}

		// static const ::System::Object LFHDOINBFLB; // 0x0
		// static const ::System::Object JEANFNMCKNG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDDLALFAMKO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HDDLALFAMKO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HDDLALFAMKO*))((::PBYTE)hIl2Cpp + HDDLALFAMKO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HDDLALFAMKO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + HDDLALFAMKO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDDLALFAMKO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HDDLALFAMKO* Clone()
		{
			return ((::HDDLALFAMKO*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDDLALFAMKO_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* FKFCAKCECHL()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDDLALFAMKO_FKFCAKCECHL_OFFSET))(this);
		}

		::LAEHICCBBFN MMIGKCIEOIH()
		{
			return ((::LAEHICCBBFN(*)(::PVOID))((::PBYTE)hIl2Cpp + HDDLALFAMKO_MMIGKCIEOIH_OFFSET))(this);
		}

		::System::Void NLNGFLLAOPB(::LAEHICCBBFN a1)
		{
			return ((::System::Void(*)(::PVOID, ::LAEHICCBBFN))((::PBYTE)hIl2Cpp + HDDLALFAMKO_NLNGFLLAOPB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HDDLALFAMKO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HDDLALFAMKO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HDDLALFAMKO*))((::PBYTE)hIl2Cpp + HDDLALFAMKO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HDDLALFAMKO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDDLALFAMKO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HDDLALFAMKO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HDDLALFAMKO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HDDLALFAMKO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HDDLALFAMKO*))((::PBYTE)hIl2Cpp + HDDLALFAMKO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HDDLALFAMKO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
