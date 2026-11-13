#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IECODOPOOBL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IECODOPOOBL_BBCGPCFIKBP_OFFSET UNITYSDK_OFFSET(0x202836B0)
#define IECODOPOOBL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x20283B10)
#define IECODOPOOBL_CCTOR_OFFSET UNITYSDK_OFFSET(0x20283E10)
#define IECODOPOOBL_CLONE_OFFSET UNITYSDK_OFFSET(0x20283680)
#define IECODOPOOBL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x202835F0)
#define IECODOPOOBL_CTOR_OFFSET UNITYSDK_OFFSET(0x202835A0)
#define IECODOPOOBL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x202837E0)
#define IECODOPOOBL_EQUALS_OFFSET UNITYSDK_OFFSET(0x202836E0)
#define IECODOPOOBL_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x202836D0)
#define IECODOPOOBL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x202838D0)
#define IECODOPOOBL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x20283560)
#define IECODOPOOBL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x20283C50)
#define IECODOPOOBL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x20283C00)
#define IECODOPOOBL_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x202836C0)
#define IECODOPOOBL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x20283590)
#define IECODOPOOBL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x202839D0)
#define IECODOPOOBL_WRITETO_OFFSET UNITYSDK_OFFSET(0x20283A30)

inline static constexpr unsigned int IECODOPOOBL_TypeDefinitionIndex = 27552;

	class IECODOPOOBL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* NLDOOMEKOHO; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_ECJFMIDLCOI()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "IECODOPOOBL")->GetStaticField(0x45F00);
		}

		static ::Google::Protobuf::MessageParser_1<::IECODOPOOBL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IECODOPOOBL*>**)UnitySDK::FromName("", "IECODOPOOBL")->GetStaticField(0x45F08);
		}

		// static const ::System::Object GGNABOANAPC; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IECODOPOOBL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IECODOPOOBL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IECODOPOOBL*))((::PBYTE)hIl2Cpp + IECODOPOOBL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IECODOPOOBL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::IECODOPOOBL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::IECODOPOOBL*>*(*)())((::PBYTE)hIl2Cpp + IECODOPOOBL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IECODOPOOBL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IECODOPOOBL* Clone()
		{
			return ((::IECODOPOOBL*(*)(::PVOID))((::PBYTE)hIl2Cpp + IECODOPOOBL_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* BBCGPCFIKBP()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IECODOPOOBL_BBCGPCFIKBP_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IECODOPOOBL_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IECODOPOOBL_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IECODOPOOBL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IECODOPOOBL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IECODOPOOBL*))((::PBYTE)hIl2Cpp + IECODOPOOBL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IECODOPOOBL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IECODOPOOBL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IECODOPOOBL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IECODOPOOBL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IECODOPOOBL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IECODOPOOBL*))((::PBYTE)hIl2Cpp + IECODOPOOBL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IECODOPOOBL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
