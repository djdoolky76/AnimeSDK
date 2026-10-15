#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HPKIKIEFALC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HPKIKIEFALC_AENLBGLIBJL_OFFSET UNITYSDK_OFFSET(0x1E5CE900)
#define HPKIKIEFALC_AIMMOANBDCA_OFFSET UNITYSDK_OFFSET(0x1E5CE910)
#define HPKIKIEFALC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5CEC70)
#define HPKIKIEFALC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5CEE90)
#define HPKIKIEFALC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5CE8C0)
#define HPKIKIEFALC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5CE890)
#define HPKIKIEFALC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5CE880)
#define HPKIKIEFALC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5CE9F0)
#define HPKIKIEFALC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5CE920)
#define HPKIKIEFALC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5CEB60)
#define HPKIKIEFALC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E5CE840)
#define HPKIKIEFALC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E5CED30)
#define HPKIKIEFALC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5CED00)
#define HPKIKIEFALC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5CE870)
#define HPKIKIEFALC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5CEB90)
#define HPKIKIEFALC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5CEBF0)

inline static constexpr unsigned int HPKIKIEFALC_TypeDefinitionIndex = 32245;

	class HPKIKIEFALC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 LJDBCGPFFDH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::HPKIKIEFALC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HPKIKIEFALC*>**)UnitySDK::FromName("", "HPKIKIEFALC")->GetStaticField(0x3F6D0);
		}

		// static const ::System::Object KOEOEHIMOEI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPKIKIEFALC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HPKIKIEFALC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HPKIKIEFALC*))((::PBYTE)hIl2Cpp + HPKIKIEFALC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HPKIKIEFALC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HPKIKIEFALC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HPKIKIEFALC*>*(*)())((::PBYTE)hIl2Cpp + HPKIKIEFALC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPKIKIEFALC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HPKIKIEFALC* Clone()
		{
			return ((::HPKIKIEFALC*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPKIKIEFALC_CLONE_OFFSET))(this);
		}

		::System::UInt32 AENLBGLIBJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPKIKIEFALC_AENLBGLIBJL_OFFSET))(this);
		}

		::System::Void AIMMOANBDCA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HPKIKIEFALC_AIMMOANBDCA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HPKIKIEFALC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HPKIKIEFALC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HPKIKIEFALC*))((::PBYTE)hIl2Cpp + HPKIKIEFALC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPKIKIEFALC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPKIKIEFALC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HPKIKIEFALC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPKIKIEFALC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HPKIKIEFALC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HPKIKIEFALC*))((::PBYTE)hIl2Cpp + HPKIKIEFALC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HPKIKIEFALC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
