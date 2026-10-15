#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KLFNCLPCJGO;
class NBDELHIPKLP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NBDELHIPKLP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EACDF30)
#define NBDELHIPKLP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EACE2C0)
#define NBDELHIPKLP_CLONE_OFFSET UNITYSDK_OFFSET(0x1EACDA80)
#define NBDELHIPKLP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EACD9F0)
#define NBDELHIPKLP_CTOR_OFFSET UNITYSDK_OFFSET(0x1EACD9B0)
#define NBDELHIPKLP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EACDC30)
#define NBDELHIPKLP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EACDAE0)
#define NBDELHIPKLP_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1EACDAD0)
#define NBDELHIPKLP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EACDD50)
#define NBDELHIPKLP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EACD970)
#define NBDELHIPKLP_KLAKPCEPMHK_OFFSET UNITYSDK_OFFSET(0x1EACDAB0)
#define NBDELHIPKLP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EACE100)
#define NBDELHIPKLP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EACE060)
#define NBDELHIPKLP_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1EACDAC0)
#define NBDELHIPKLP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EACD9A0)
#define NBDELHIPKLP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EACDDC0)
#define NBDELHIPKLP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EACDE20)

inline static constexpr unsigned int NBDELHIPKLP_TypeDefinitionIndex = 30972;

	class NBDELHIPKLP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::KLFNCLPCJGO*>* EPODHPOCHCL; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::KLFNCLPCJGO*>** StaticGet_KDGHBKEGEKL()
		{
			return (::Google::Protobuf::FieldCodec_1<::KLFNCLPCJGO*>**)UnitySDK::FromName("", "NBDELHIPKLP")->GetStaticField(0x5CD70);
		}

		static ::Google::Protobuf::MessageParser_1<::NBDELHIPKLP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NBDELHIPKLP*>**)UnitySDK::FromName("", "NBDELHIPKLP")->GetStaticField(0x5CD78);
		}

		// static const ::System::Object GLMPAOMJEGA; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBDELHIPKLP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NBDELHIPKLP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NBDELHIPKLP*))((::PBYTE)hIl2Cpp + NBDELHIPKLP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NBDELHIPKLP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NBDELHIPKLP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NBDELHIPKLP*>*(*)())((::PBYTE)hIl2Cpp + NBDELHIPKLP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBDELHIPKLP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NBDELHIPKLP* Clone()
		{
			return ((::NBDELHIPKLP*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBDELHIPKLP_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::KLFNCLPCJGO*>* KLAKPCEPMHK()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::KLFNCLPCJGO*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBDELHIPKLP_KLAKPCEPMHK_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NBDELHIPKLP_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NBDELHIPKLP_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NBDELHIPKLP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NBDELHIPKLP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NBDELHIPKLP*))((::PBYTE)hIl2Cpp + NBDELHIPKLP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NBDELHIPKLP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBDELHIPKLP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NBDELHIPKLP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NBDELHIPKLP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NBDELHIPKLP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NBDELHIPKLP*))((::PBYTE)hIl2Cpp + NBDELHIPKLP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NBDELHIPKLP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
