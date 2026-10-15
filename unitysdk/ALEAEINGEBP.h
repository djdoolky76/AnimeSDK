#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ALEAEINGEBP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ALEAEINGEBP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3D8550)
#define ALEAEINGEBP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3D8840)
#define ALEAEINGEBP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3D80C0)
#define ALEAEINGEBP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3D8030)
#define ALEAEINGEBP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3D7FE0)
#define ALEAEINGEBP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3D8220)
#define ALEAEINGEBP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3D8120)
#define ALEAEINGEBP_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E3D8100)
#define ALEAEINGEBP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3D8310)
#define ALEAEINGEBP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E3D7FA0)
#define ALEAEINGEBP_KOJEFBMPKOF_OFFSET UNITYSDK_OFFSET(0x1E3D8110)
#define ALEAEINGEBP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3D8680)
#define ALEAEINGEBP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3D8630)
#define ALEAEINGEBP_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E3D80F0)
#define ALEAEINGEBP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E3D7FD0)
#define ALEAEINGEBP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3D8410)
#define ALEAEINGEBP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3D8470)

inline static constexpr unsigned int ALEAEINGEBP_TypeDefinitionIndex = 29885;

	class ALEAEINGEBP : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* LAOPLDLFLLB; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::FieldCodec** StaticGet_MFEAFKHLDDP()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "ALEAEINGEBP")->GetStaticField(0x38480);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "ALEAEINGEBP")->GetStaticField(0x38488);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object FABCCNICBDC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALEAEINGEBP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ALEAEINGEBP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ALEAEINGEBP*))((::PBYTE)hIl2Cpp + ALEAEINGEBP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ALEAEINGEBP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + ALEAEINGEBP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALEAEINGEBP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ALEAEINGEBP* Clone()
		{
			return ((::ALEAEINGEBP*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALEAEINGEBP_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALEAEINGEBP_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ALEAEINGEBP_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* KOJEFBMPKOF()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALEAEINGEBP_KOJEFBMPKOF_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ALEAEINGEBP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ALEAEINGEBP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ALEAEINGEBP*))((::PBYTE)hIl2Cpp + ALEAEINGEBP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALEAEINGEBP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALEAEINGEBP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ALEAEINGEBP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALEAEINGEBP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ALEAEINGEBP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ALEAEINGEBP*))((::PBYTE)hIl2Cpp + ALEAEINGEBP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ALEAEINGEBP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
