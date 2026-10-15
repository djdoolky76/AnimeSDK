#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FDJIMEBNEMD;
class JEIAEAEGEBJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FDJIMEBNEMD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E35BB40)
#define FDJIMEBNEMD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E35BEE0)
#define FDJIMEBNEMD_CLONE_OFFSET UNITYSDK_OFFSET(0x1E35B6A0)
#define FDJIMEBNEMD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E35B5E0)
#define FDJIMEBNEMD_CTOR_OFFSET UNITYSDK_OFFSET(0x1E35B590)
#define FDJIMEBNEMD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E35B850)
#define FDJIMEBNEMD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E35B700)
#define FDJIMEBNEMD_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E35B6F0)
#define FDJIMEBNEMD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E35B970)
#define FDJIMEBNEMD_IFFEEMHIHEP_OFFSET UNITYSDK_OFFSET(0x1E35B6D0)
#define FDJIMEBNEMD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E35B550)
#define FDJIMEBNEMD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E35BD10)
#define FDJIMEBNEMD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E35BC70)
#define FDJIMEBNEMD_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E35B6E0)
#define FDJIMEBNEMD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E35B580)
#define FDJIMEBNEMD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E35B9E0)
#define FDJIMEBNEMD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E35BA40)

inline static constexpr unsigned int FDJIMEBNEMD_TypeDefinitionIndex = 32270;

	class FDJIMEBNEMD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::JEIAEAEGEBJ*>* ABMPKGNBMNA; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::FieldCodec** StaticGet_ELINIFIFONO()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "FDJIMEBNEMD")->GetStaticField(0x5BC20);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "FDJIMEBNEMD")->GetStaticField(0x5BC28);
		}

		// static const ::System::Object EGIFDDMMJBK; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDJIMEBNEMD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FDJIMEBNEMD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FDJIMEBNEMD*))((::PBYTE)hIl2Cpp + FDJIMEBNEMD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FDJIMEBNEMD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + FDJIMEBNEMD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDJIMEBNEMD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FDJIMEBNEMD* Clone()
		{
			return ((::FDJIMEBNEMD*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDJIMEBNEMD_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::JEIAEAEGEBJ*>* IFFEEMHIHEP()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::JEIAEAEGEBJ*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDJIMEBNEMD_IFFEEMHIHEP_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FDJIMEBNEMD_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FDJIMEBNEMD_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FDJIMEBNEMD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FDJIMEBNEMD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FDJIMEBNEMD*))((::PBYTE)hIl2Cpp + FDJIMEBNEMD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FDJIMEBNEMD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDJIMEBNEMD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FDJIMEBNEMD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FDJIMEBNEMD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FDJIMEBNEMD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FDJIMEBNEMD*))((::PBYTE)hIl2Cpp + FDJIMEBNEMD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FDJIMEBNEMD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
