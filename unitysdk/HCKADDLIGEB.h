#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HCKADDLIGEB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HCKADDLIGEB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E541BD0)
#define HCKADDLIGEB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E541EB0)
#define HCKADDLIGEB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E541690)
#define HCKADDLIGEB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E541650)
#define HCKADDLIGEB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E541640)
#define HCKADDLIGEB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5418B0)
#define HCKADDLIGEB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E541780)
#define HCKADDLIGEB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5419B0)
#define HCKADDLIGEB_HCPEAOMNBNL_OFFSET UNITYSDK_OFFSET(0x1E541770)
#define HCKADDLIGEB_HIGMHCHDPDL_OFFSET UNITYSDK_OFFSET(0x1E541700)
#define HCKADDLIGEB_IBBCIKJEGMF_OFFSET UNITYSDK_OFFSET(0x1E541760)
#define HCKADDLIGEB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E5415D0)
#define HCKADDLIGEB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E541D00)
#define HCKADDLIGEB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E541CB0)
#define HCKADDLIGEB_MJDLJPBICHP_OFFSET UNITYSDK_OFFSET(0x1E541710)
#define HCKADDLIGEB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E541630)
#define HCKADDLIGEB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E541A80)
#define HCKADDLIGEB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E541AE0)

inline static constexpr unsigned int HCKADDLIGEB_TypeDefinitionIndex = 25251;

	class HCKADDLIGEB : public ::System::Object
	{
	public:
		::System::String* JDOJAMHCAJD; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 MIENDINJKKL; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "HCKADDLIGEB")->GetStaticField(0x30690);
		}

		// static const ::System::Object DBKOHLFBPNI; // 0x0
		// static const ::System::Object ENGJNFFIMIJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCKADDLIGEB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HCKADDLIGEB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HCKADDLIGEB*))((::PBYTE)hIl2Cpp + HCKADDLIGEB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HCKADDLIGEB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + HCKADDLIGEB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCKADDLIGEB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HCKADDLIGEB* Clone()
		{
			return ((::HCKADDLIGEB*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCKADDLIGEB_CLONE_OFFSET))(this);
		}

		::System::String* HIGMHCHDPDL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCKADDLIGEB_HIGMHCHDPDL_OFFSET))(this);
		}

		::System::Void MJDLJPBICHP(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HCKADDLIGEB_MJDLJPBICHP_OFFSET))(this, a1);
		}

		::System::UInt32 IBBCIKJEGMF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCKADDLIGEB_IBBCIKJEGMF_OFFSET))(this);
		}

		::System::Void HCPEAOMNBNL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HCKADDLIGEB_HCPEAOMNBNL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HCKADDLIGEB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HCKADDLIGEB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HCKADDLIGEB*))((::PBYTE)hIl2Cpp + HCKADDLIGEB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCKADDLIGEB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCKADDLIGEB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HCKADDLIGEB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCKADDLIGEB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HCKADDLIGEB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HCKADDLIGEB*))((::PBYTE)hIl2Cpp + HCKADDLIGEB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HCKADDLIGEB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
