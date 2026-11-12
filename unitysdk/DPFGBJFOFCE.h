#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DPFGBJFOFCE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DPFGBJFOFCE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F4ECC30)
#define DPFGBJFOFCE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F4ECE50)
#define DPFGBJFOFCE_CLONE_OFFSET UNITYSDK_OFFSET(0x1F4EC880)
#define DPFGBJFOFCE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F4EC850)
#define DPFGBJFOFCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1F4EC840)
#define DPFGBJFOFCE_DBFDBHCNHKA_OFFSET UNITYSDK_OFFSET(0x1F4EC8D0)
#define DPFGBJFOFCE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F4EC9B0)
#define DPFGBJFOFCE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F4EC8E0)
#define DPFGBJFOFCE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F4ECB20)
#define DPFGBJFOFCE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F4EC800)
#define DPFGBJFOFCE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F4ECCF0)
#define DPFGBJFOFCE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F4ECCC0)
#define DPFGBJFOFCE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F4EC830)
#define DPFGBJFOFCE_PKKLAIFEKHL_OFFSET UNITYSDK_OFFSET(0x1F4EC8C0)
#define DPFGBJFOFCE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F4ECB50)
#define DPFGBJFOFCE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F4ECBB0)

inline static constexpr unsigned int DPFGBJFOFCE_TypeDefinitionIndex = 26757;

	class DPFGBJFOFCE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 JKGAOCGKAPB; // 0x18
		static ::Google::Protobuf::MessageParser_1<::DPFGBJFOFCE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DPFGBJFOFCE*>**)UnitySDK::FromName("", "DPFGBJFOFCE")->GetStaticField(0x40710);
		}

		// static const ::System::Object PIHMKFCDKKJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPFGBJFOFCE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DPFGBJFOFCE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DPFGBJFOFCE*))((::PBYTE)hIl2Cpp + DPFGBJFOFCE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DPFGBJFOFCE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DPFGBJFOFCE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DPFGBJFOFCE*>*(*)())((::PBYTE)hIl2Cpp + DPFGBJFOFCE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPFGBJFOFCE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DPFGBJFOFCE* Clone()
		{
			return ((::DPFGBJFOFCE*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPFGBJFOFCE_CLONE_OFFSET))(this);
		}

		::System::UInt32 PKKLAIFEKHL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DPFGBJFOFCE_PKKLAIFEKHL_OFFSET))(this);
		}

		::System::Void DBFDBHCNHKA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DPFGBJFOFCE_DBFDBHCNHKA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DPFGBJFOFCE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DPFGBJFOFCE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DPFGBJFOFCE*))((::PBYTE)hIl2Cpp + DPFGBJFOFCE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DPFGBJFOFCE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPFGBJFOFCE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DPFGBJFOFCE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DPFGBJFOFCE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DPFGBJFOFCE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DPFGBJFOFCE*))((::PBYTE)hIl2Cpp + DPFGBJFOFCE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DPFGBJFOFCE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
