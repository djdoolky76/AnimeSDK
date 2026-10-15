#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PNLGHIIDPGF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PNLGHIIDPGF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DFBCB00)
#define PNLGHIIDPGF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFBCBA0)
#define PNLGHIIDPGF_CLONE_OFFSET UNITYSDK_OFFSET(0x1DFBC7F0)
#define PNLGHIIDPGF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DFBC7C0)
#define PNLGHIIDPGF_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFBC7B0)
#define PNLGHIIDPGF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DFBC900)
#define PNLGHIIDPGF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DFBC830)
#define PNLGHIIDPGF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DFBCA60)
#define PNLGHIIDPGF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DFBC770)
#define PNLGHIIDPGF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DFBCB50)
#define PNLGHIIDPGF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DFBCB20)
#define PNLGHIIDPGF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DFBC7A0)
#define PNLGHIIDPGF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DFBCA90)
#define PNLGHIIDPGF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DFBCAF0)

inline static constexpr unsigned int PNLGHIIDPGF_TypeDefinitionIndex = 32268;

	class PNLGHIIDPGF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::PNLGHIIDPGF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PNLGHIIDPGF*>**)UnitySDK::FromName("", "PNLGHIIDPGF")->GetStaticField(0x51A60);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNLGHIIDPGF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PNLGHIIDPGF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PNLGHIIDPGF*))((::PBYTE)hIl2Cpp + PNLGHIIDPGF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PNLGHIIDPGF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PNLGHIIDPGF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PNLGHIIDPGF*>*(*)())((::PBYTE)hIl2Cpp + PNLGHIIDPGF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNLGHIIDPGF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PNLGHIIDPGF* Clone()
		{
			return ((::PNLGHIIDPGF*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNLGHIIDPGF_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PNLGHIIDPGF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PNLGHIIDPGF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PNLGHIIDPGF*))((::PBYTE)hIl2Cpp + PNLGHIIDPGF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PNLGHIIDPGF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNLGHIIDPGF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PNLGHIIDPGF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PNLGHIIDPGF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PNLGHIIDPGF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PNLGHIIDPGF*))((::PBYTE)hIl2Cpp + PNLGHIIDPGF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PNLGHIIDPGF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
