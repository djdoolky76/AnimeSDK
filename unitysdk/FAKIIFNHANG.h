#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EEILAINOLPO;
class FAKIIFNHANG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FAKIIFNHANG_ADGLNFILOHI_OFFSET UNITYSDK_OFFSET(0x1E327590)
#define FAKIIFNHANG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E327AB0)
#define FAKIIFNHANG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E327DC0)
#define FAKIIFNHANG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3274F0)
#define FAKIIFNHANG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E327460)
#define FAKIIFNHANG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E327450)
#define FAKIIFNHANG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E327750)
#define FAKIIFNHANG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3275D0)
#define FAKIIFNHANG_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E3275C0)
#define FAKIIFNHANG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3278D0)
#define FAKIIFNHANG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E327410)
#define FAKIIFNHANG_KLINCLPEAHO_OFFSET UNITYSDK_OFFSET(0x1E3275A0)
#define FAKIIFNHANG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E327C10)
#define FAKIIFNHANG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E327B80)
#define FAKIIFNHANG_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E3275B0)
#define FAKIIFNHANG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E327440)
#define FAKIIFNHANG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E327970)
#define FAKIIFNHANG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3279D0)

inline static constexpr unsigned int FAKIIFNHANG_TypeDefinitionIndex = 33505;

	class FAKIIFNHANG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::EEILAINOLPO* NLIJNNMCAAO; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::FAKIIFNHANG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FAKIIFNHANG*>**)UnitySDK::FromName("", "FAKIIFNHANG")->GetStaticField(0x582C0);
		}

		// static const ::System::Object DMAFCIBFMPD; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAKIIFNHANG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FAKIIFNHANG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FAKIIFNHANG*))((::PBYTE)hIl2Cpp + FAKIIFNHANG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FAKIIFNHANG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FAKIIFNHANG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FAKIIFNHANG*>*(*)())((::PBYTE)hIl2Cpp + FAKIIFNHANG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAKIIFNHANG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FAKIIFNHANG* Clone()
		{
			return ((::FAKIIFNHANG*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAKIIFNHANG_CLONE_OFFSET))(this);
		}

		::EEILAINOLPO* ADGLNFILOHI()
		{
			return ((::EEILAINOLPO*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAKIIFNHANG_ADGLNFILOHI_OFFSET))(this);
		}

		::System::Void KLINCLPEAHO(::EEILAINOLPO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EEILAINOLPO*))((::PBYTE)hIl2Cpp + FAKIIFNHANG_KLINCLPEAHO_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FAKIIFNHANG_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FAKIIFNHANG_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FAKIIFNHANG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FAKIIFNHANG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FAKIIFNHANG*))((::PBYTE)hIl2Cpp + FAKIIFNHANG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FAKIIFNHANG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAKIIFNHANG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FAKIIFNHANG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FAKIIFNHANG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FAKIIFNHANG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FAKIIFNHANG*))((::PBYTE)hIl2Cpp + FAKIIFNHANG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FAKIIFNHANG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
