#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AAKECCJELLI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AAKECCJELLI_BBNHJDGGOOK_OFFSET UNITYSDK_OFFSET(0x1DDBC5E0)
#define AAKECCJELLI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DDBC910)
#define AAKECCJELLI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDBCBE0)
#define AAKECCJELLI_CLONE_OFFSET UNITYSDK_OFFSET(0x1DDBC560)
#define AAKECCJELLI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DDBC530)
#define AAKECCJELLI_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDBC520)
#define AAKECCJELLI_EIOMMLPIAKP_OFFSET UNITYSDK_OFFSET(0x1DDBC5B0)
#define AAKECCJELLI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DDBC6D0)
#define AAKECCJELLI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DDBC5F0)
#define AAKECCJELLI_GEMDLCGEPMD_OFFSET UNITYSDK_OFFSET(0x1DDBC5C0)
#define AAKECCJELLI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DDBC7A0)
#define AAKECCJELLI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DDBC4E0)
#define AAKECCJELLI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DDBCA60)
#define AAKECCJELLI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DDBCA20)
#define AAKECCJELLI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DDBC510)
#define AAKECCJELLI_PGKJBFLNLCC_OFFSET UNITYSDK_OFFSET(0x1DDBC5D0)
#define AAKECCJELLI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DDBC7D0)
#define AAKECCJELLI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DDBC830)

	class AAKECCJELLI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 HBPLJAGOHOL; // 0x18
		::System::UInt32 GEMFJILOPLL; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "AAKECCJELLI")->GetStaticField(0x37050);
		}

		// static const ::System::Object AKFFJEHMCCB; // 0x0
		// static const ::System::Object MGMFLJBAKPE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAKECCJELLI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AAKECCJELLI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AAKECCJELLI*))((::PBYTE)hIl2Cpp + AAKECCJELLI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AAKECCJELLI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + AAKECCJELLI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AAKECCJELLI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AAKECCJELLI* Clone()
		{
			return ((::AAKECCJELLI*(*)(::PVOID))((::PBYTE)hIl2Cpp + AAKECCJELLI_CLONE_OFFSET))(this);
		}

		::System::UInt32 EIOMMLPIAKP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AAKECCJELLI_EIOMMLPIAKP_OFFSET))(this);
		}

		::System::Void GEMDLCGEPMD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AAKECCJELLI_GEMDLCGEPMD_OFFSET))(this, a1);
		}

		::System::UInt32 PGKJBFLNLCC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AAKECCJELLI_PGKJBFLNLCC_OFFSET))(this);
		}

		::System::Void BBNHJDGGOOK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AAKECCJELLI_BBNHJDGGOOK_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AAKECCJELLI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AAKECCJELLI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AAKECCJELLI*))((::PBYTE)hIl2Cpp + AAKECCJELLI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AAKECCJELLI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AAKECCJELLI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AAKECCJELLI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AAKECCJELLI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AAKECCJELLI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AAKECCJELLI*))((::PBYTE)hIl2Cpp + AAKECCJELLI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AAKECCJELLI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
