#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DDNFLPNPLMN;
namespace Google::Protobuf { class ByteString; }
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DDNFLPNPLMN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E18A270)
#define DDNFLPNPLMN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E18A540)
#define DDNFLPNPLMN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E189C40)
#define DDNFLPNPLMN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E189BC0)
#define DDNFLPNPLMN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E189B70)
#define DDNFLPNPLMN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E189E70)
#define DDNFLPNPLMN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E189D50)
#define DDNFLPNPLMN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E189F90)
#define DDNFLPNPLMN_IEMIAGMFNNN_OFFSET UNITYSDK_OFFSET(0x1E189D40)
#define DDNFLPNPLMN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E189B30)
#define DDNFLPNPLMN_LENJJDNNACG_OFFSET UNITYSDK_OFFSET(0x1E189D30)
#define DDNFLPNPLMN_MAFDIFGHGJP_OFFSET UNITYSDK_OFFSET(0x1E189CE0)
#define DDNFLPNPLMN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E18A390)
#define DDNFLPNPLMN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E18A340)
#define DDNFLPNPLMN_MNAFBKCECOH_OFFSET UNITYSDK_OFFSET(0x1E189CD0)
#define DDNFLPNPLMN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E189B60)
#define DDNFLPNPLMN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E18A0C0)
#define DDNFLPNPLMN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E18A120)

inline static constexpr unsigned int DDNFLPNPLMN_TypeDefinitionIndex = 33930;

	class DDNFLPNPLMN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::ByteString* LCGJALEFGNN; // 0x18
		::System::Boolean KGPGDAFCPHI; // 0x20
		static ::Google::Protobuf::MessageParser_1<::DDNFLPNPLMN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DDNFLPNPLMN*>**)UnitySDK::FromName("", "DDNFLPNPLMN")->GetStaticField(0x2F1B0);
		}

		// static const ::System::Object EENLNAKEAEH; // 0x0
		// static const ::System::Object IMJACMFPLDB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDNFLPNPLMN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DDNFLPNPLMN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DDNFLPNPLMN*))((::PBYTE)hIl2Cpp + DDNFLPNPLMN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DDNFLPNPLMN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DDNFLPNPLMN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DDNFLPNPLMN*>*(*)())((::PBYTE)hIl2Cpp + DDNFLPNPLMN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDNFLPNPLMN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DDNFLPNPLMN* Clone()
		{
			return ((::DDNFLPNPLMN*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDNFLPNPLMN_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::ByteString* MNAFBKCECOH()
		{
			return ((::Google::Protobuf::ByteString*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDNFLPNPLMN_MNAFBKCECOH_OFFSET))(this);
		}

		::System::Void MAFDIFGHGJP(::Google::Protobuf::ByteString* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::ByteString*))((::PBYTE)hIl2Cpp + DDNFLPNPLMN_MAFDIFGHGJP_OFFSET))(this, a1);
		}

		::System::Boolean LENJJDNNACG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DDNFLPNPLMN_LENJJDNNACG_OFFSET))(this);
		}

		::System::Void IEMIAGMFNNN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DDNFLPNPLMN_IEMIAGMFNNN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DDNFLPNPLMN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DDNFLPNPLMN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DDNFLPNPLMN*))((::PBYTE)hIl2Cpp + DDNFLPNPLMN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DDNFLPNPLMN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDNFLPNPLMN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DDNFLPNPLMN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DDNFLPNPLMN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DDNFLPNPLMN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DDNFLPNPLMN*))((::PBYTE)hIl2Cpp + DDNFLPNPLMN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DDNFLPNPLMN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
