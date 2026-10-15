#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AFOIFBMKMEJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AFOIFBMKMEJ_ACMHENAEMAB_OFFSET UNITYSDK_OFFSET(0x1E11B5C0)
#define AFOIFBMKMEJ_AGCLIMGNLEN_OFFSET UNITYSDK_OFFSET(0x1E11B5D0)
#define AFOIFBMKMEJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E11BA20)
#define AFOIFBMKMEJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E11BCC0)
#define AFOIFBMKMEJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E11B550)
#define AFOIFBMKMEJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E11B510)
#define AFOIFBMKMEJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E11B500)
#define AFOIFBMKMEJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E11B700)
#define AFOIFBMKMEJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E11B600)
#define AFOIFBMKMEJ_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E11B5B0)
#define AFOIFBMKMEJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E11B7F0)
#define AFOIFBMKMEJ_GJFGOJMNABD_OFFSET UNITYSDK_OFFSET(0x1E11B5E0)
#define AFOIFBMKMEJ_HAPPGKIAKCA_OFFSET UNITYSDK_OFFSET(0x1E11B5F0)
#define AFOIFBMKMEJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E11B4C0)
#define AFOIFBMKMEJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E11BB20)
#define AFOIFBMKMEJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E11BAD0)
#define AFOIFBMKMEJ_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E11B5A0)
#define AFOIFBMKMEJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E11B4F0)
#define AFOIFBMKMEJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E11B820)
#define AFOIFBMKMEJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E11B880)

inline static constexpr unsigned int AFOIFBMKMEJ_TypeDefinitionIndex = 30370;

	class AFOIFBMKMEJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Boolean LIGPCMNEAIC; // 0x18
		::System::Boolean IEKCGCFCMPN; // 0x19
		::System::Byte _padding0[0x2];
		::System::UInt32 NAEACGPKNNH; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::AFOIFBMKMEJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::AFOIFBMKMEJ*>**)UnitySDK::FromName("", "AFOIFBMKMEJ")->GetStaticField(0x2EE30);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object OPHLICGEPIC; // 0x0
		// static const ::System::Object BNEFEOOGDAN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFOIFBMKMEJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AFOIFBMKMEJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AFOIFBMKMEJ*))((::PBYTE)hIl2Cpp + AFOIFBMKMEJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AFOIFBMKMEJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::AFOIFBMKMEJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::AFOIFBMKMEJ*>*(*)())((::PBYTE)hIl2Cpp + AFOIFBMKMEJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFOIFBMKMEJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AFOIFBMKMEJ* Clone()
		{
			return ((::AFOIFBMKMEJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFOIFBMKMEJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AFOIFBMKMEJ_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AFOIFBMKMEJ_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean ACMHENAEMAB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AFOIFBMKMEJ_ACMHENAEMAB_OFFSET))(this);
		}

		::System::Void AGCLIMGNLEN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AFOIFBMKMEJ_AGCLIMGNLEN_OFFSET))(this, a1);
		}

		::System::Boolean GJFGOJMNABD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AFOIFBMKMEJ_GJFGOJMNABD_OFFSET))(this);
		}

		::System::Void HAPPGKIAKCA(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AFOIFBMKMEJ_HAPPGKIAKCA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AFOIFBMKMEJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AFOIFBMKMEJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AFOIFBMKMEJ*))((::PBYTE)hIl2Cpp + AFOIFBMKMEJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AFOIFBMKMEJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFOIFBMKMEJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AFOIFBMKMEJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AFOIFBMKMEJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AFOIFBMKMEJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AFOIFBMKMEJ*))((::PBYTE)hIl2Cpp + AFOIFBMKMEJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AFOIFBMKMEJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
