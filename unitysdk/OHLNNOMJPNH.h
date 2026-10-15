#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OHLNNOMJPNH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OHLNNOMJPNH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE38870)
#define OHLNNOMJPNH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE38B30)
#define OHLNNOMJPNH_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE383F0)
#define OHLNNOMJPNH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE38360)
#define OHLNNOMJPNH_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE38310)
#define OHLNNOMJPNH_EDJCCOIACJJ_OFFSET UNITYSDK_OFFSET(0x1DE38440)
#define OHLNNOMJPNH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE38570)
#define OHLNNOMJPNH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE38450)
#define OHLNNOMJPNH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE38660)
#define OHLNNOMJPNH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE382A0)
#define OHLNNOMJPNH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE38960)
#define OHLNNOMJPNH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE38910)
#define OHLNNOMJPNH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE38300)
#define OHLNNOMJPNH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE38760)
#define OHLNNOMJPNH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE387C0)

inline static constexpr unsigned int OHLNNOMJPNH_TypeDefinitionIndex = 25148;

	class OHLNNOMJPNH : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* CGEMHGGDLAN; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::OHLNNOMJPNH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OHLNNOMJPNH*>**)UnitySDK::FromName("", "OHLNNOMJPNH")->GetStaticField(0x1A090);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_HMMCAICDHDB()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "OHLNNOMJPNH")->GetStaticField(0x1A098);
		}

		// static const ::System::Object ELKDOHGDGJF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHLNNOMJPNH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OHLNNOMJPNH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OHLNNOMJPNH*))((::PBYTE)hIl2Cpp + OHLNNOMJPNH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OHLNNOMJPNH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OHLNNOMJPNH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OHLNNOMJPNH*>*(*)())((::PBYTE)hIl2Cpp + OHLNNOMJPNH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHLNNOMJPNH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OHLNNOMJPNH* Clone()
		{
			return ((::OHLNNOMJPNH*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHLNNOMJPNH_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* EDJCCOIACJJ()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHLNNOMJPNH_EDJCCOIACJJ_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OHLNNOMJPNH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OHLNNOMJPNH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OHLNNOMJPNH*))((::PBYTE)hIl2Cpp + OHLNNOMJPNH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OHLNNOMJPNH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHLNNOMJPNH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OHLNNOMJPNH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OHLNNOMJPNH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OHLNNOMJPNH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OHLNNOMJPNH*))((::PBYTE)hIl2Cpp + OHLNNOMJPNH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OHLNNOMJPNH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
