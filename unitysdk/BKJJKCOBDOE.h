#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BKJJKCOBDOE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BKJJKCOBDOE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF2CDB0)
#define BKJJKCOBDOE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF2D130)
#define BKJJKCOBDOE_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF2C990)
#define BKJJKCOBDOE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF2C950)
#define BKJJKCOBDOE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF2C940)
#define BKJJKCOBDOE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF2CB20)
#define BKJJKCOBDOE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF2CA40)
#define BKJJKCOBDOE_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1DF2CA30)
#define BKJJKCOBDOE_FGFNALKHKAM_OFFSET UNITYSDK_OFFSET(0x1DF2CA00)
#define BKJJKCOBDOE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF2CBF0)
#define BKJJKCOBDOE_INFNAJLGGNN_OFFSET UNITYSDK_OFFSET(0x1DF2CA10)
#define BKJJKCOBDOE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF2C900)
#define BKJJKCOBDOE_KJJHOCEGIMA_OFFSET UNITYSDK_OFFSET(0x1DF2C9E0)
#define BKJJKCOBDOE_LPKCMJAPGDB_OFFSET UNITYSDK_OFFSET(0x1DF2C9F0)
#define BKJJKCOBDOE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF2CF90)
#define BKJJKCOBDOE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF2CF40)
#define BKJJKCOBDOE_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1DF2CA20)
#define BKJJKCOBDOE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF2C930)
#define BKJJKCOBDOE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF2CC20)
#define BKJJKCOBDOE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF2CC80)

inline static constexpr unsigned int BKJJKCOBDOE_TypeDefinitionIndex = 30978;

	class BKJJKCOBDOE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 IFKAEKMIPNO; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x1C
		::System::UInt32 ENDJJHOCEBO; // 0x20
		static ::Google::Protobuf::MessageParser_1<::BKJJKCOBDOE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BKJJKCOBDOE*>**)UnitySDK::FromName("", "BKJJKCOBDOE")->GetStaticField(0x5ACF0);
		}

		// static const ::System::Object BEEGHMFILJF; // 0x0
		// static const ::System::Object ICDFOMDAGAG; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKJJKCOBDOE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BKJJKCOBDOE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BKJJKCOBDOE*))((::PBYTE)hIl2Cpp + BKJJKCOBDOE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BKJJKCOBDOE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BKJJKCOBDOE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BKJJKCOBDOE*>*(*)())((::PBYTE)hIl2Cpp + BKJJKCOBDOE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKJJKCOBDOE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BKJJKCOBDOE* Clone()
		{
			return ((::BKJJKCOBDOE*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKJJKCOBDOE_CLONE_OFFSET))(this);
		}

		::System::UInt32 KJJHOCEGIMA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BKJJKCOBDOE_KJJHOCEGIMA_OFFSET))(this);
		}

		::System::Void LPKCMJAPGDB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BKJJKCOBDOE_LPKCMJAPGDB_OFFSET))(this, a1);
		}

		::System::UInt32 FGFNALKHKAM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BKJJKCOBDOE_FGFNALKHKAM_OFFSET))(this);
		}

		::System::Void INFNAJLGGNN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BKJJKCOBDOE_INFNAJLGGNN_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BKJJKCOBDOE_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BKJJKCOBDOE_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BKJJKCOBDOE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BKJJKCOBDOE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BKJJKCOBDOE*))((::PBYTE)hIl2Cpp + BKJJKCOBDOE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BKJJKCOBDOE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKJJKCOBDOE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BKJJKCOBDOE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BKJJKCOBDOE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BKJJKCOBDOE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BKJJKCOBDOE*))((::PBYTE)hIl2Cpp + BKJJKCOBDOE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BKJJKCOBDOE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
