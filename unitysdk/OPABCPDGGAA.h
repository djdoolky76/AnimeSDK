#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JDAIOFEPGCC;
class OPABCPDGGAA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OPABCPDGGAA_BFKKLGOGKOM_OFFSET UNITYSDK_OFFSET(0x20361F50)
#define OPABCPDGGAA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x20362440)
#define OPABCPDGGAA_CCTOR_OFFSET UNITYSDK_OFFSET(0x20362800)
#define OPABCPDGGAA_CLONE_OFFSET UNITYSDK_OFFSET(0x20361EF0)
#define OPABCPDGGAA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x20361E30)
#define OPABCPDGGAA_CTOR_OFFSET UNITYSDK_OFFSET(0x20361DE0)
#define OPABCPDGGAA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x203620B0)
#define OPABCPDGGAA_EQUALS_OFFSET UNITYSDK_OFFSET(0x20361F70)
#define OPABCPDGGAA_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x20361F30)
#define OPABCPDGGAA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x203621E0)
#define OPABCPDGGAA_JBHONEAFKIB_OFFSET UNITYSDK_OFFSET(0x20361F60)
#define OPABCPDGGAA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x20361DA0)
#define OPABCPDGGAA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x20362600)
#define OPABCPDGGAA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x20362550)
#define OPABCPDGGAA_MOLJCJOHBEL_OFFSET UNITYSDK_OFFSET(0x20361F40)
#define OPABCPDGGAA_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x20361F20)
#define OPABCPDGGAA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x20361DD0)
#define OPABCPDGGAA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x20362250)
#define OPABCPDGGAA_WRITETO_OFFSET UNITYSDK_OFFSET(0x203622B0)

inline static constexpr unsigned int OPABCPDGGAA_TypeDefinitionIndex = 28992;

	class OPABCPDGGAA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::JDAIOFEPGCC*>* FDFBNBLNHLK; // 0x18
		::System::Boolean HOOOGDNDAMF; // 0x20
		::System::Byte _padding0[0x3];
		::System::UInt32 NAEACGPKNNH; // 0x24
		static ::Google::Protobuf::FieldCodec_1<::JDAIOFEPGCC*>** StaticGet_FEAFGBNBMEP()
		{
			return (::Google::Protobuf::FieldCodec_1<::JDAIOFEPGCC*>**)UnitySDK::FromName("", "OPABCPDGGAA")->GetStaticField(0x2A220);
		}

		static ::Google::Protobuf::MessageParser_1<::OPABCPDGGAA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OPABCPDGGAA*>**)UnitySDK::FromName("", "OPABCPDGGAA")->GetStaticField(0x2A228);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object DOADNLHHMCH; // 0x0
		// static const ::System::Object CGMHHEMPNHD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPABCPDGGAA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OPABCPDGGAA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OPABCPDGGAA*))((::PBYTE)hIl2Cpp + OPABCPDGGAA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OPABCPDGGAA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OPABCPDGGAA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OPABCPDGGAA*>*(*)())((::PBYTE)hIl2Cpp + OPABCPDGGAA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPABCPDGGAA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OPABCPDGGAA* Clone()
		{
			return ((::OPABCPDGGAA*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPABCPDGGAA_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OPABCPDGGAA_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OPABCPDGGAA_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::JDAIOFEPGCC*>* MOLJCJOHBEL()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::JDAIOFEPGCC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPABCPDGGAA_MOLJCJOHBEL_OFFSET))(this);
		}

		::System::Boolean BFKKLGOGKOM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OPABCPDGGAA_BFKKLGOGKOM_OFFSET))(this);
		}

		::System::Void JBHONEAFKIB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OPABCPDGGAA_JBHONEAFKIB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OPABCPDGGAA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OPABCPDGGAA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OPABCPDGGAA*))((::PBYTE)hIl2Cpp + OPABCPDGGAA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OPABCPDGGAA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPABCPDGGAA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OPABCPDGGAA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OPABCPDGGAA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OPABCPDGGAA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OPABCPDGGAA*))((::PBYTE)hIl2Cpp + OPABCPDGGAA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OPABCPDGGAA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
