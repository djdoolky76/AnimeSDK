#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NJHAGKGHKJJ;
class OMDFLBJFIDM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OMDFLBJFIDM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DEB0F20)
#define OMDFLBJFIDM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEB12B0)
#define OMDFLBJFIDM_CLONE_OFFSET UNITYSDK_OFFSET(0x1DEB0940)
#define OMDFLBJFIDM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DEB0880)
#define OMDFLBJFIDM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEB0870)
#define OMDFLBJFIDM_DBNCBJOBDLA_OFFSET UNITYSDK_OFFSET(0x1DEB0A10)
#define OMDFLBJFIDM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DEB0BD0)
#define OMDFLBJFIDM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DEB0A50)
#define OMDFLBJFIDM_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1DEB0A40)
#define OMDFLBJFIDM_FFHPLCEIPKO_OFFSET UNITYSDK_OFFSET(0x1DEB0A20)
#define OMDFLBJFIDM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DEB0D50)
#define OMDFLBJFIDM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DEB0830)
#define OMDFLBJFIDM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DEB1100)
#define OMDFLBJFIDM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DEB0FF0)
#define OMDFLBJFIDM_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1DEB0A30)
#define OMDFLBJFIDM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DEB0860)
#define OMDFLBJFIDM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DEB0DE0)
#define OMDFLBJFIDM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DEB0E40)

inline static constexpr unsigned int OMDFLBJFIDM_TypeDefinitionIndex = 31243;

	class OMDFLBJFIDM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::NJHAGKGHKJJ* EDONHMJJOEN; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "OMDFLBJFIDM")->GetStaticField(0x24990);
		}

		// static const ::System::Object HJIIFDLAJMJ; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMDFLBJFIDM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OMDFLBJFIDM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OMDFLBJFIDM*))((::PBYTE)hIl2Cpp + OMDFLBJFIDM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OMDFLBJFIDM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + OMDFLBJFIDM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMDFLBJFIDM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OMDFLBJFIDM* Clone()
		{
			return ((::OMDFLBJFIDM*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMDFLBJFIDM_CLONE_OFFSET))(this);
		}

		::NJHAGKGHKJJ* DBNCBJOBDLA()
		{
			return ((::NJHAGKGHKJJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMDFLBJFIDM_DBNCBJOBDLA_OFFSET))(this);
		}

		::System::Void FFHPLCEIPKO(::NJHAGKGHKJJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJHAGKGHKJJ*))((::PBYTE)hIl2Cpp + OMDFLBJFIDM_FFHPLCEIPKO_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMDFLBJFIDM_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OMDFLBJFIDM_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OMDFLBJFIDM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OMDFLBJFIDM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OMDFLBJFIDM*))((::PBYTE)hIl2Cpp + OMDFLBJFIDM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMDFLBJFIDM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMDFLBJFIDM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OMDFLBJFIDM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMDFLBJFIDM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OMDFLBJFIDM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OMDFLBJFIDM*))((::PBYTE)hIl2Cpp + OMDFLBJFIDM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OMDFLBJFIDM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
