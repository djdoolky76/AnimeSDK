#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OPOCANGAEHJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OPOCANGAEHJ_BAGCCAKCIFD_OFFSET UNITYSDK_OFFSET(0x1DEE7340)
#define OPOCANGAEHJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DEE76A0)
#define OPOCANGAEHJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEE7970)
#define OPOCANGAEHJ_CFGFDLGNHHI_OFFSET UNITYSDK_OFFSET(0x1DEE7310)
#define OPOCANGAEHJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1DEE72A0)
#define OPOCANGAEHJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DEE7270)
#define OPOCANGAEHJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEE7260)
#define OPOCANGAEHJ_ECNKCIHDAFP_OFFSET UNITYSDK_OFFSET(0x1DEE7320)
#define OPOCANGAEHJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DEE7460)
#define OPOCANGAEHJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DEE7350)
#define OPOCANGAEHJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DEE7530)
#define OPOCANGAEHJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DEE71F0)
#define OPOCANGAEHJ_JJMMHAAPLCJ_OFFSET UNITYSDK_OFFSET(0x1DEE7330)
#define OPOCANGAEHJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DEE77F0)
#define OPOCANGAEHJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DEE77B0)
#define OPOCANGAEHJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DEE7250)
#define OPOCANGAEHJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DEE7560)
#define OPOCANGAEHJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DEE75C0)

inline static constexpr unsigned int OPOCANGAEHJ_TypeDefinitionIndex = 27210;

	class OPOCANGAEHJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 KFNMMILCBFP; // 0x18
		::System::UInt32 EIKLKDGDLEG; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::OPOCANGAEHJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OPOCANGAEHJ*>**)UnitySDK::FromName("", "OPOCANGAEHJ")->GetStaticField(0x30D20);
		}

		// static const ::System::Object PLAGKJDJGBN; // 0x0
		// static const ::System::Object OAPJNMPOKHB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPOCANGAEHJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OPOCANGAEHJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OPOCANGAEHJ*))((::PBYTE)hIl2Cpp + OPOCANGAEHJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OPOCANGAEHJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OPOCANGAEHJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OPOCANGAEHJ*>*(*)())((::PBYTE)hIl2Cpp + OPOCANGAEHJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPOCANGAEHJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OPOCANGAEHJ* Clone()
		{
			return ((::OPOCANGAEHJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPOCANGAEHJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 CFGFDLGNHHI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OPOCANGAEHJ_CFGFDLGNHHI_OFFSET))(this);
		}

		::System::Void ECNKCIHDAFP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OPOCANGAEHJ_ECNKCIHDAFP_OFFSET))(this, a1);
		}

		::System::UInt32 JJMMHAAPLCJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OPOCANGAEHJ_JJMMHAAPLCJ_OFFSET))(this);
		}

		::System::Void BAGCCAKCIFD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OPOCANGAEHJ_BAGCCAKCIFD_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OPOCANGAEHJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OPOCANGAEHJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OPOCANGAEHJ*))((::PBYTE)hIl2Cpp + OPOCANGAEHJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OPOCANGAEHJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPOCANGAEHJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OPOCANGAEHJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OPOCANGAEHJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OPOCANGAEHJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OPOCANGAEHJ*))((::PBYTE)hIl2Cpp + OPOCANGAEHJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OPOCANGAEHJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
