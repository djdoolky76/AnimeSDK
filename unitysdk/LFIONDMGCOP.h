#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LFIONDMGCOP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LFIONDMGCOP_AJDEMHDBJBN_OFFSET UNITYSDK_OFFSET(0x1FAAB0C0)
#define LFIONDMGCOP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FAAB460)
#define LFIONDMGCOP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FAAB680)
#define LFIONDMGCOP_CLONE_OFFSET UNITYSDK_OFFSET(0x1FAAB050)
#define LFIONDMGCOP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FAAB020)
#define LFIONDMGCOP_CTOR_OFFSET UNITYSDK_OFFSET(0x1FAAB010)
#define LFIONDMGCOP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FAAB1E0)
#define LFIONDMGCOP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FAAB0E0)
#define LFIONDMGCOP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FAAB350)
#define LFIONDMGCOP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FAAAFA0)
#define LFIONDMGCOP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FAAB520)
#define LFIONDMGCOP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FAAB4F0)
#define LFIONDMGCOP_OHJJJLLFGDC_OFFSET UNITYSDK_OFFSET(0x1FAAB0D0)
#define LFIONDMGCOP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FAAB000)
#define LFIONDMGCOP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FAAB380)
#define LFIONDMGCOP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FAAB3E0)

inline static constexpr unsigned int LFIONDMGCOP_TypeDefinitionIndex = 27681;

	class LFIONDMGCOP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 HHBJCDAPKNN; // 0x18
		static ::Google::Protobuf::MessageParser_1<::LFIONDMGCOP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LFIONDMGCOP*>**)UnitySDK::FromName("", "LFIONDMGCOP")->GetStaticField(0x31D80);
		}

		// static const ::System::Object LFBHAOBBKLA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFIONDMGCOP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LFIONDMGCOP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LFIONDMGCOP*))((::PBYTE)hIl2Cpp + LFIONDMGCOP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LFIONDMGCOP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LFIONDMGCOP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LFIONDMGCOP*>*(*)())((::PBYTE)hIl2Cpp + LFIONDMGCOP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFIONDMGCOP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LFIONDMGCOP* Clone()
		{
			return ((::LFIONDMGCOP*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFIONDMGCOP_CLONE_OFFSET))(this);
		}

		::System::UInt32 AJDEMHDBJBN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LFIONDMGCOP_AJDEMHDBJBN_OFFSET))(this);
		}

		::System::Void OHJJJLLFGDC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LFIONDMGCOP_OHJJJLLFGDC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LFIONDMGCOP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LFIONDMGCOP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LFIONDMGCOP*))((::PBYTE)hIl2Cpp + LFIONDMGCOP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LFIONDMGCOP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFIONDMGCOP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LFIONDMGCOP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LFIONDMGCOP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LFIONDMGCOP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LFIONDMGCOP*))((::PBYTE)hIl2Cpp + LFIONDMGCOP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LFIONDMGCOP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
