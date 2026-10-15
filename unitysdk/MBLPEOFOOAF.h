#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KCDHBIEAFDE;
class MBLPEOFOOAF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MBLPEOFOOAF_AENLBGLIBJL_OFFSET UNITYSDK_OFFSET(0x1E9E8FE0)
#define MBLPEOFOOAF_AIMMOANBDCA_OFFSET UNITYSDK_OFFSET(0x1E9E8FF0)
#define MBLPEOFOOAF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E9E94F0)
#define MBLPEOFOOAF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9E9920)
#define MBLPEOFOOAF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E9E8FB0)
#define MBLPEOFOOAF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9E8EF0)
#define MBLPEOFOOAF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9E8EA0)
#define MBLPEOFOOAF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E9E9190)
#define MBLPEOFOOAF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E9E9030)
#define MBLPEOFOOAF_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E9E9020)
#define MBLPEOFOOAF_FECFONPAFOG_OFFSET UNITYSDK_OFFSET(0x1E9E9000)
#define MBLPEOFOOAF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E9E92C0)
#define MBLPEOFOOAF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E9E8E60)
#define MBLPEOFOOAF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E9E9730)
#define MBLPEOFOOAF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E9E9680)
#define MBLPEOFOOAF_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E9E9010)
#define MBLPEOFOOAF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E9E8E90)
#define MBLPEOFOOAF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9E9330)
#define MBLPEOFOOAF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E9E9390)

inline static constexpr unsigned int MBLPEOFOOAF_TypeDefinitionIndex = 32583;

	class MBLPEOFOOAF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::KCDHBIEAFDE*>* CKBMLCDDIKG; // 0x18
		::System::UInt32 LJDBCGPFFDH; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x24
		static ::Google::Protobuf::MessageParser_1<::MBLPEOFOOAF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MBLPEOFOOAF*>**)UnitySDK::FromName("", "MBLPEOFOOAF")->GetStaticField(0x45000);
		}

		static ::Google::Protobuf::FieldCodec_1<::KCDHBIEAFDE*>** StaticGet_KANNMHILFGC()
		{
			return (::Google::Protobuf::FieldCodec_1<::KCDHBIEAFDE*>**)UnitySDK::FromName("", "MBLPEOFOOAF")->GetStaticField(0x45008);
		}

		// static const ::System::Object KOEOEHIMOEI; // 0x0
		// static const ::System::Object JFKFHHCPDGD; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBLPEOFOOAF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MBLPEOFOOAF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MBLPEOFOOAF*))((::PBYTE)hIl2Cpp + MBLPEOFOOAF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MBLPEOFOOAF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MBLPEOFOOAF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MBLPEOFOOAF*>*(*)())((::PBYTE)hIl2Cpp + MBLPEOFOOAF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBLPEOFOOAF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MBLPEOFOOAF* Clone()
		{
			return ((::MBLPEOFOOAF*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBLPEOFOOAF_CLONE_OFFSET))(this);
		}

		::System::UInt32 AENLBGLIBJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MBLPEOFOOAF_AENLBGLIBJL_OFFSET))(this);
		}

		::System::Void AIMMOANBDCA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MBLPEOFOOAF_AIMMOANBDCA_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::KCDHBIEAFDE*>* FECFONPAFOG()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::KCDHBIEAFDE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBLPEOFOOAF_FECFONPAFOG_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MBLPEOFOOAF_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MBLPEOFOOAF_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MBLPEOFOOAF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MBLPEOFOOAF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MBLPEOFOOAF*))((::PBYTE)hIl2Cpp + MBLPEOFOOAF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MBLPEOFOOAF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBLPEOFOOAF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MBLPEOFOOAF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MBLPEOFOOAF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MBLPEOFOOAF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MBLPEOFOOAF*))((::PBYTE)hIl2Cpp + MBLPEOFOOAF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MBLPEOFOOAF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
