#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AIMFGJGOLNG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AIMFGJGOLNG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E27F100)
#define AIMFGJGOLNG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E27F3F0)
#define AIMFGJGOLNG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E27EC70)
#define AIMFGJGOLNG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E27EBE0)
#define AIMFGJGOLNG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E27EB90)
#define AIMFGJGOLNG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E27EDD0)
#define AIMFGJGOLNG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E27ECD0)
#define AIMFGJGOLNG_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E27ECC0)
#define AIMFGJGOLNG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E27EEC0)
#define AIMFGJGOLNG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E27EB50)
#define AIMFGJGOLNG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E27F240)
#define AIMFGJGOLNG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E27F1F0)
#define AIMFGJGOLNG_MMLCKIGKLDB_OFFSET UNITYSDK_OFFSET(0x1E27ECA0)
#define AIMFGJGOLNG_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E27ECB0)
#define AIMFGJGOLNG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E27EB80)
#define AIMFGJGOLNG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E27EFC0)
#define AIMFGJGOLNG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E27F020)

inline static constexpr unsigned int AIMFGJGOLNG_TypeDefinitionIndex = 31139;

	class AIMFGJGOLNG : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* PLBGCPABAKK; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_CJLDLEDIDAC()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "AIMFGJGOLNG")->GetStaticField(0x33330);
		}

		static ::Google::Protobuf::MessageParser_1<::AIMFGJGOLNG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::AIMFGJGOLNG*>**)UnitySDK::FromName("", "AIMFGJGOLNG")->GetStaticField(0x33338);
		}

		// static const ::System::Object DMIILHALCHB; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIMFGJGOLNG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AIMFGJGOLNG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AIMFGJGOLNG*))((::PBYTE)hIl2Cpp + AIMFGJGOLNG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AIMFGJGOLNG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::AIMFGJGOLNG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::AIMFGJGOLNG*>*(*)())((::PBYTE)hIl2Cpp + AIMFGJGOLNG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIMFGJGOLNG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AIMFGJGOLNG* Clone()
		{
			return ((::AIMFGJGOLNG*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIMFGJGOLNG_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* MMLCKIGKLDB()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIMFGJGOLNG_MMLCKIGKLDB_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AIMFGJGOLNG_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AIMFGJGOLNG_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AIMFGJGOLNG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AIMFGJGOLNG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AIMFGJGOLNG*))((::PBYTE)hIl2Cpp + AIMFGJGOLNG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AIMFGJGOLNG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIMFGJGOLNG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AIMFGJGOLNG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AIMFGJGOLNG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AIMFGJGOLNG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AIMFGJGOLNG*))((::PBYTE)hIl2Cpp + AIMFGJGOLNG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AIMFGJGOLNG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
