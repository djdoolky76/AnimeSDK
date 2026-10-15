#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MEAJJFGMAPG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MEAJJFGMAPG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA07880)
#define MEAJJFGMAPG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA07B80)
#define MEAJJFGMAPG_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA073F0)
#define MEAJJFGMAPG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA07360)
#define MEAJJFGMAPG_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA07310)
#define MEAJJFGMAPG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA07550)
#define MEAJJFGMAPG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA07450)
#define MEAJJFGMAPG_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1EA07440)
#define MEAJJFGMAPG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA07640)
#define MEAJJFGMAPG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA072D0)
#define MEAJJFGMAPG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA079C0)
#define MEAJJFGMAPG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA07970)
#define MEAJJFGMAPG_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1EA07430)
#define MEAJJFGMAPG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA07300)
#define MEAJJFGMAPG_PGFLFKPHLME_OFFSET UNITYSDK_OFFSET(0x1EA07420)
#define MEAJJFGMAPG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA07740)
#define MEAJJFGMAPG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA077A0)

inline static constexpr unsigned int MEAJJFGMAPG_TypeDefinitionIndex = 27676;

	class MEAJJFGMAPG : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* NAMIDNNKFLO; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_JHANHHCDFEA()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "MEAJJFGMAPG")->GetStaticField(0x49FA0);
		}

		static ::Google::Protobuf::MessageParser_1<::MEAJJFGMAPG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MEAJJFGMAPG*>**)UnitySDK::FromName("", "MEAJJFGMAPG")->GetStaticField(0x49FA8);
		}

		// static const ::System::Object HEAKLAOGCKP; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEAJJFGMAPG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MEAJJFGMAPG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MEAJJFGMAPG*))((::PBYTE)hIl2Cpp + MEAJJFGMAPG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MEAJJFGMAPG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MEAJJFGMAPG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MEAJJFGMAPG*>*(*)())((::PBYTE)hIl2Cpp + MEAJJFGMAPG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEAJJFGMAPG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MEAJJFGMAPG* Clone()
		{
			return ((::MEAJJFGMAPG*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEAJJFGMAPG_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* PGFLFKPHLME()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEAJJFGMAPG_PGFLFKPHLME_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MEAJJFGMAPG_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MEAJJFGMAPG_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MEAJJFGMAPG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MEAJJFGMAPG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MEAJJFGMAPG*))((::PBYTE)hIl2Cpp + MEAJJFGMAPG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MEAJJFGMAPG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEAJJFGMAPG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MEAJJFGMAPG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MEAJJFGMAPG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MEAJJFGMAPG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MEAJJFGMAPG*))((::PBYTE)hIl2Cpp + MEAJJFGMAPG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MEAJJFGMAPG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
