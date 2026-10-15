#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HIMPJFMPEPA;
class KBGKLKLKLFG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HIMPJFMPEPA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E59DD40)
#define HIMPJFMPEPA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E59E050)
#define HIMPJFMPEPA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E59D7F0)
#define HIMPJFMPEPA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E59D770)
#define HIMPJFMPEPA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E59D760)
#define HIMPJFMPEPA_ENJNOMANLCN_OFFSET UNITYSDK_OFFSET(0x1E59D890)
#define HIMPJFMPEPA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E59DA40)
#define HIMPJFMPEPA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E59D8C0)
#define HIMPJFMPEPA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E59DBC0)
#define HIMPJFMPEPA_GHCGBBHOAKB_OFFSET UNITYSDK_OFFSET(0x1E59D880)
#define HIMPJFMPEPA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E59D720)
#define HIMPJFMPEPA_LNMIGBOFEAA_OFFSET UNITYSDK_OFFSET(0x1E59D8A0)
#define HIMPJFMPEPA_MEOMLBAEDHL_OFFSET UNITYSDK_OFFSET(0x1E59D8B0)
#define HIMPJFMPEPA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E59DEA0)
#define HIMPJFMPEPA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E59DE10)
#define HIMPJFMPEPA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E59D750)
#define HIMPJFMPEPA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E59DC00)
#define HIMPJFMPEPA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E59DC60)

	class HIMPJFMPEPA : public ::System::Object
	{
	public:
		::KBGKLKLKLFG* KGKNPPHMGKC; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 AEKECGJLGEF; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "HIMPJFMPEPA")->GetStaticField(0x14810);
		}

		// static const ::System::Object AINHNOCEBJG; // 0x0
		// static const ::System::Object GDKMFOMEPPO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIMPJFMPEPA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HIMPJFMPEPA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIMPJFMPEPA*))((::PBYTE)hIl2Cpp + HIMPJFMPEPA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HIMPJFMPEPA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + HIMPJFMPEPA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIMPJFMPEPA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HIMPJFMPEPA* Clone()
		{
			return ((::HIMPJFMPEPA*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIMPJFMPEPA_CLONE_OFFSET))(this);
		}

		::System::UInt32 GHCGBBHOAKB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HIMPJFMPEPA_GHCGBBHOAKB_OFFSET))(this);
		}

		::System::Void ENJNOMANLCN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HIMPJFMPEPA_ENJNOMANLCN_OFFSET))(this, a1);
		}

		::KBGKLKLKLFG* LNMIGBOFEAA()
		{
			return ((::KBGKLKLKLFG*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIMPJFMPEPA_LNMIGBOFEAA_OFFSET))(this);
		}

		::System::Void MEOMLBAEDHL(::KBGKLKLKLFG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KBGKLKLKLFG*))((::PBYTE)hIl2Cpp + HIMPJFMPEPA_MEOMLBAEDHL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HIMPJFMPEPA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HIMPJFMPEPA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HIMPJFMPEPA*))((::PBYTE)hIl2Cpp + HIMPJFMPEPA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HIMPJFMPEPA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIMPJFMPEPA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HIMPJFMPEPA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HIMPJFMPEPA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HIMPJFMPEPA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIMPJFMPEPA*))((::PBYTE)hIl2Cpp + HIMPJFMPEPA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HIMPJFMPEPA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
