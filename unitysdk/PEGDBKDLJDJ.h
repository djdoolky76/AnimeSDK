#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IIMHLPBEDDH;
class PEGDBKDLJDJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PEGDBKDLJDJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DEEABC0)
#define PEGDBKDLJDJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEEAF60)
#define PEGDBKDLJDJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1DEEA520)
#define PEGDBKDLJDJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DEEA490)
#define PEGDBKDLJDJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEEA480)
#define PEGDBKDLJDJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DEEA7B0)
#define PEGDBKDLJDJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DEEA610)
#define PEGDBKDLJDJ_FFBGMLAOCND_OFFSET UNITYSDK_OFFSET(0x1DEEA5F0)
#define PEGDBKDLJDJ_GAKBCHBEADA_OFFSET UNITYSDK_OFFSET(0x1DEEA600)
#define PEGDBKDLJDJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DEEAA80)
#define PEGDBKDLJDJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DEEA410)
#define PEGDBKDLJDJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DEEAD40)
#define PEGDBKDLJDJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DEEAC20)
#define PEGDBKDLJDJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DEEA470)
#define PEGDBKDLJDJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DEEAAD0)
#define PEGDBKDLJDJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DEEAB30)

inline static constexpr unsigned int PEGDBKDLJDJ_TypeDefinitionIndex = 27717;

	class PEGDBKDLJDJ : public ::System::Object
	{
	public:
		::IIMHLPBEDDH* JBCLNBMJEGI; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::PEGDBKDLJDJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PEGDBKDLJDJ*>**)UnitySDK::FromName("", "PEGDBKDLJDJ")->GetStaticField(0x30B90);
		}

		// static const ::System::Object IPMBLBMLNIC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEGDBKDLJDJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PEGDBKDLJDJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PEGDBKDLJDJ*))((::PBYTE)hIl2Cpp + PEGDBKDLJDJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PEGDBKDLJDJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PEGDBKDLJDJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PEGDBKDLJDJ*>*(*)())((::PBYTE)hIl2Cpp + PEGDBKDLJDJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEGDBKDLJDJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PEGDBKDLJDJ* Clone()
		{
			return ((::PEGDBKDLJDJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEGDBKDLJDJ_CLONE_OFFSET))(this);
		}

		::IIMHLPBEDDH* FFBGMLAOCND()
		{
			return ((::IIMHLPBEDDH*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEGDBKDLJDJ_FFBGMLAOCND_OFFSET))(this);
		}

		::System::Void GAKBCHBEADA(::IIMHLPBEDDH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IIMHLPBEDDH*))((::PBYTE)hIl2Cpp + PEGDBKDLJDJ_GAKBCHBEADA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PEGDBKDLJDJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PEGDBKDLJDJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PEGDBKDLJDJ*))((::PBYTE)hIl2Cpp + PEGDBKDLJDJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PEGDBKDLJDJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEGDBKDLJDJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PEGDBKDLJDJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PEGDBKDLJDJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PEGDBKDLJDJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PEGDBKDLJDJ*))((::PBYTE)hIl2Cpp + PEGDBKDLJDJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PEGDBKDLJDJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
