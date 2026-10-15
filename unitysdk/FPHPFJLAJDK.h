#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FPHPFJLAJDK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FPHPFJLAJDK_ACOJNBBKMOE_OFFSET UNITYSDK_OFFSET(0x1E3DC600)
#define FPHPFJLAJDK_AIJFCKCGLOA_OFFSET UNITYSDK_OFFSET(0x1E3DC640)
#define FPHPFJLAJDK_BEKIAONFNHN_OFFSET UNITYSDK_OFFSET(0x1E3DC630)
#define FPHPFJLAJDK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3DC970)
#define FPHPFJLAJDK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3DCCF0)
#define FPHPFJLAJDK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3DC580)
#define FPHPFJLAJDK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3DC540)
#define FPHPFJLAJDK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3DC530)
#define FPHPFJLAJDK_EODGHOPFDCJ_OFFSET UNITYSDK_OFFSET(0x1E3DC610)
#define FPHPFJLAJDK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3DC6E0)
#define FPHPFJLAJDK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3DC660)
#define FPHPFJLAJDK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3DC7B0)
#define FPHPFJLAJDK_HNPOGHHMMJD_OFFSET UNITYSDK_OFFSET(0x1E3DC650)
#define FPHPFJLAJDK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E3DC4C0)
#define FPHPFJLAJDK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3DCB50)
#define FPHPFJLAJDK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3DCB00)
#define FPHPFJLAJDK_MHHDBKELGIO_OFFSET UNITYSDK_OFFSET(0x1E3DC620)
#define FPHPFJLAJDK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E3DC520)
#define FPHPFJLAJDK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3DC7E0)
#define FPHPFJLAJDK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3DC840)

inline static constexpr unsigned int FPHPFJLAJDK_TypeDefinitionIndex = 29141;

	class FPHPFJLAJDK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 KLINKNMHOCI; // 0x18
		::System::UInt32 NPFBAFODCBI; // 0x1C
		::System::UInt32 EEHIKMEPCKK; // 0x20
		static ::Google::Protobuf::MessageParser_1<::FPHPFJLAJDK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FPHPFJLAJDK*>**)UnitySDK::FromName("", "FPHPFJLAJDK")->GetStaticField(0x13FF0);
		}

		// static const ::System::Object JJDOFLLPDJE; // 0x0
		// static const ::System::Object GKKKEHJAKII; // 0x0
		// static const ::System::Object LDDDKGJPHBL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPHPFJLAJDK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FPHPFJLAJDK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FPHPFJLAJDK*))((::PBYTE)hIl2Cpp + FPHPFJLAJDK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FPHPFJLAJDK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FPHPFJLAJDK*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FPHPFJLAJDK*>*(*)())((::PBYTE)hIl2Cpp + FPHPFJLAJDK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPHPFJLAJDK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FPHPFJLAJDK* Clone()
		{
			return ((::FPHPFJLAJDK*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPHPFJLAJDK_CLONE_OFFSET))(this);
		}

		::System::UInt32 ACOJNBBKMOE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FPHPFJLAJDK_ACOJNBBKMOE_OFFSET))(this);
		}

		::System::Void EODGHOPFDCJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FPHPFJLAJDK_EODGHOPFDCJ_OFFSET))(this, a1);
		}

		::System::UInt32 MHHDBKELGIO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FPHPFJLAJDK_MHHDBKELGIO_OFFSET))(this);
		}

		::System::Void BEKIAONFNHN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FPHPFJLAJDK_BEKIAONFNHN_OFFSET))(this, a1);
		}

		::System::UInt32 AIJFCKCGLOA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FPHPFJLAJDK_AIJFCKCGLOA_OFFSET))(this);
		}

		::System::Void HNPOGHHMMJD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FPHPFJLAJDK_HNPOGHHMMJD_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FPHPFJLAJDK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FPHPFJLAJDK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FPHPFJLAJDK*))((::PBYTE)hIl2Cpp + FPHPFJLAJDK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FPHPFJLAJDK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPHPFJLAJDK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FPHPFJLAJDK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FPHPFJLAJDK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FPHPFJLAJDK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FPHPFJLAJDK*))((::PBYTE)hIl2Cpp + FPHPFJLAJDK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FPHPFJLAJDK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
