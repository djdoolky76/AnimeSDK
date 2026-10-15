#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AMELHLBNKAM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AMELHLBNKAM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E51EF90)
#define AMELHLBNKAM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E51F1B0)
#define AMELHLBNKAM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E51EBE0)
#define AMELHLBNKAM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E51EBB0)
#define AMELHLBNKAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E51EBA0)
#define AMELHLBNKAM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E51ED10)
#define AMELHLBNKAM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E51EC40)
#define AMELHLBNKAM_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E51EC30)
#define AMELHLBNKAM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E51EE80)
#define AMELHLBNKAM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E51EB60)
#define AMELHLBNKAM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E51F050)
#define AMELHLBNKAM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E51F020)
#define AMELHLBNKAM_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E51EC20)
#define AMELHLBNKAM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E51EB90)
#define AMELHLBNKAM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E51EEB0)
#define AMELHLBNKAM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E51EF10)

inline static constexpr unsigned int AMELHLBNKAM_TypeDefinitionIndex = 29653;

	class AMELHLBNKAM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::AMELHLBNKAM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::AMELHLBNKAM*>**)UnitySDK::FromName("", "AMELHLBNKAM")->GetStaticField(0x3C150);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMELHLBNKAM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AMELHLBNKAM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AMELHLBNKAM*))((::PBYTE)hIl2Cpp + AMELHLBNKAM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AMELHLBNKAM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::AMELHLBNKAM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::AMELHLBNKAM*>*(*)())((::PBYTE)hIl2Cpp + AMELHLBNKAM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMELHLBNKAM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AMELHLBNKAM* Clone()
		{
			return ((::AMELHLBNKAM*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMELHLBNKAM_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AMELHLBNKAM_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AMELHLBNKAM_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AMELHLBNKAM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AMELHLBNKAM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AMELHLBNKAM*))((::PBYTE)hIl2Cpp + AMELHLBNKAM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AMELHLBNKAM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMELHLBNKAM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AMELHLBNKAM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AMELHLBNKAM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AMELHLBNKAM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AMELHLBNKAM*))((::PBYTE)hIl2Cpp + AMELHLBNKAM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AMELHLBNKAM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
