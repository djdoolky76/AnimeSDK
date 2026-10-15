#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GOCNLGIDBLM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GOCNLGIDBLM_BPEIOBIDCPA_OFFSET UNITYSDK_OFFSET(0x1E4EBB60)
#define GOCNLGIDBLM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4EBEF0)
#define GOCNLGIDBLM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4EC1C0)
#define GOCNLGIDBLM_CFBHFBMBMJP_OFFSET UNITYSDK_OFFSET(0x1E4EBB70)
#define GOCNLGIDBLM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4EBAF0)
#define GOCNLGIDBLM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4EBAC0)
#define GOCNLGIDBLM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4EBAB0)
#define GOCNLGIDBLM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4EBCB0)
#define GOCNLGIDBLM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4EBBA0)
#define GOCNLGIDBLM_FCIACLFENJO_OFFSET UNITYSDK_OFFSET(0x1E4EBB80)
#define GOCNLGIDBLM_FEBHCCBIDOA_OFFSET UNITYSDK_OFFSET(0x1E4EBB90)
#define GOCNLGIDBLM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4EBD80)
#define GOCNLGIDBLM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4EBA40)
#define GOCNLGIDBLM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4EC040)
#define GOCNLGIDBLM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4EC000)
#define GOCNLGIDBLM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4EBAA0)
#define GOCNLGIDBLM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4EBDB0)
#define GOCNLGIDBLM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4EBE10)

inline static constexpr unsigned int GOCNLGIDBLM_TypeDefinitionIndex = 34383;

	class GOCNLGIDBLM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 GKOHBFHOFKN; // 0x18
		::System::UInt32 EPAAMMOJONL; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "GOCNLGIDBLM")->GetStaticField(0x24B30);
		}

		// static const ::System::Object BANMEAOPKCA; // 0x0
		// static const ::System::Object OOGFOPMFOHP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOCNLGIDBLM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GOCNLGIDBLM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GOCNLGIDBLM*))((::PBYTE)hIl2Cpp + GOCNLGIDBLM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOCNLGIDBLM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + GOCNLGIDBLM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOCNLGIDBLM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GOCNLGIDBLM* Clone()
		{
			return ((::GOCNLGIDBLM*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOCNLGIDBLM_CLONE_OFFSET))(this);
		}

		::System::UInt32 BPEIOBIDCPA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOCNLGIDBLM_BPEIOBIDCPA_OFFSET))(this);
		}

		::System::Void CFBHFBMBMJP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GOCNLGIDBLM_CFBHFBMBMJP_OFFSET))(this, a1);
		}

		::System::UInt32 FCIACLFENJO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOCNLGIDBLM_FCIACLFENJO_OFFSET))(this);
		}

		::System::Void FEBHCCBIDOA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GOCNLGIDBLM_FEBHCCBIDOA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GOCNLGIDBLM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GOCNLGIDBLM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GOCNLGIDBLM*))((::PBYTE)hIl2Cpp + GOCNLGIDBLM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOCNLGIDBLM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOCNLGIDBLM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GOCNLGIDBLM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOCNLGIDBLM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GOCNLGIDBLM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GOCNLGIDBLM*))((::PBYTE)hIl2Cpp + GOCNLGIDBLM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GOCNLGIDBLM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
