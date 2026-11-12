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

#define NBDELHIPKLP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FE0A4E0)
#define NBDELHIPKLP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FE0A850)
#define NBDELHIPKLP_CLONE_OFFSET UNITYSDK_OFFSET(0x1FE0A030)
#define NBDELHIPKLP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FE09FA0)
#define NBDELHIPKLP_CTOR_OFFSET UNITYSDK_OFFSET(0x1FE09F60)
#define NBDELHIPKLP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FE0A1E0)
#define NBDELHIPKLP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FE0A090)
#define NBDELHIPKLP_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1FE0A070)
#define NBDELHIPKLP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FE0A310)
#define NBDELHIPKLP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FE09F20)
#define NBDELHIPKLP_KLAKPCEPMHK_OFFSET UNITYSDK_OFFSET(0x1FE0A080)
#define NBDELHIPKLP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FE0A690)
#define NBDELHIPKLP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FE0A5F0)
#define NBDELHIPKLP_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1FE0A060)
#define NBDELHIPKLP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FE09F50)
#define NBDELHIPKLP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FE0A380)
#define NBDELHIPKLP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FE0A3E0)

inline static constexpr unsigned int NBDELHIPKLP_TypeDefinitionIndex = 31885;

	class NBDELHIPKLP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::KLFNCLPCJGO*>* EPODHPOCHCL; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::NBDELHIPKLP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NBDELHIPKLP*>**)UnitySDK::FromName("", "NBDELHIPKLP")->GetStaticField(0x677A0);
		}

		static ::Google::Protobuf::FieldCodec_1<::KLFNCLPCJGO*>** StaticGet_KDGHBKEGEKL()
		{
			return (::Google::Protobuf::FieldCodec_1<::KLFNCLPCJGO*>**)UnitySDK::FromName("", "NBDELHIPKLP")->GetStaticField(0x677A8);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object GLMPAOMJEGA; // 0x0
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

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NBDELHIPKLP_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NBDELHIPKLP_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::KLFNCLPCJGO*>* KLAKPCEPMHK()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::KLFNCLPCJGO*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBDELHIPKLP_KLAKPCEPMHK_OFFSET))(this);
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
