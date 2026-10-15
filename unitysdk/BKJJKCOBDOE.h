#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BKJJKCOBDOE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BKJJKCOBDOE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF5A400)
#define BKJJKCOBDOE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF5A780)
#define BKJJKCOBDOE_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF59FE0)
#define BKJJKCOBDOE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF59FA0)
#define BKJJKCOBDOE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF59F90)
#define BKJJKCOBDOE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF5A170)
#define BKJJKCOBDOE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF5A090)
#define BKJJKCOBDOE_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1DF5A080)
#define BKJJKCOBDOE_FGFNALKHKAM_OFFSET UNITYSDK_OFFSET(0x1DF5A050)
#define BKJJKCOBDOE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF5A240)
#define BKJJKCOBDOE_INFNAJLGGNN_OFFSET UNITYSDK_OFFSET(0x1DF5A060)
#define BKJJKCOBDOE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF59F50)
#define BKJJKCOBDOE_KJJHOCEGIMA_OFFSET UNITYSDK_OFFSET(0x1DF5A030)
#define BKJJKCOBDOE_LPKCMJAPGDB_OFFSET UNITYSDK_OFFSET(0x1DF5A040)
#define BKJJKCOBDOE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF5A5E0)
#define BKJJKCOBDOE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF5A590)
#define BKJJKCOBDOE_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1DF5A070)
#define BKJJKCOBDOE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF59F80)
#define BKJJKCOBDOE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF5A270)
#define BKJJKCOBDOE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF5A2D0)

	class BKJJKCOBDOE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 IFKAEKMIPNO; // 0x18
		::System::UInt32 ENDJJHOCEBO; // 0x1C
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "BKJJKCOBDOE")->GetStaticField(0x4BD70);
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

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + BKJJKCOBDOE_JJGHOBBFNJD_OFFSET))();
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
