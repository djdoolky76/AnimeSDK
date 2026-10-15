#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LDCFLPGNOJE;
class MGENDBNGEEE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MGENDBNGEEE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E9F5660)
#define MGENDBNGEEE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9F58E0)
#define MGENDBNGEEE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E9F5030)
#define MGENDBNGEEE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9F4FE0)
#define MGENDBNGEEE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9F4FD0)
#define MGENDBNGEEE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E9F5220)
#define MGENDBNGEEE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E9F50B0)
#define MGENDBNGEEE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E9F54F0)
#define MGENDBNGEEE_HIDBDIPJGAG_OFFSET UNITYSDK_OFFSET(0x1E9F50A0)
#define MGENDBNGEEE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E9F4F90)
#define MGENDBNGEEE_KOPEJOHMIMD_OFFSET UNITYSDK_OFFSET(0x1E9F5090)
#define MGENDBNGEEE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E9F5750)
#define MGENDBNGEEE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E9F56C0)
#define MGENDBNGEEE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E9F4FC0)
#define MGENDBNGEEE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9F5570)
#define MGENDBNGEEE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E9F55D0)

inline static constexpr unsigned int MGENDBNGEEE_TypeDefinitionIndex = 28959;

	class MGENDBNGEEE : public ::System::Object
	{
	public:
		::LDCFLPGNOJE* CEEGHIPKJMG; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::MGENDBNGEEE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MGENDBNGEEE*>**)UnitySDK::FromName("", "MGENDBNGEEE")->GetStaticField(0x500A0);
		}

		// static const ::System::Object LGDNMAGBMHH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGENDBNGEEE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MGENDBNGEEE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MGENDBNGEEE*))((::PBYTE)hIl2Cpp + MGENDBNGEEE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MGENDBNGEEE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MGENDBNGEEE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MGENDBNGEEE*>*(*)())((::PBYTE)hIl2Cpp + MGENDBNGEEE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGENDBNGEEE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MGENDBNGEEE* Clone()
		{
			return ((::MGENDBNGEEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGENDBNGEEE_CLONE_OFFSET))(this);
		}

		::LDCFLPGNOJE* KOPEJOHMIMD()
		{
			return ((::LDCFLPGNOJE*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGENDBNGEEE_KOPEJOHMIMD_OFFSET))(this);
		}

		::System::Void HIDBDIPJGAG(::LDCFLPGNOJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LDCFLPGNOJE*))((::PBYTE)hIl2Cpp + MGENDBNGEEE_HIDBDIPJGAG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MGENDBNGEEE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MGENDBNGEEE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MGENDBNGEEE*))((::PBYTE)hIl2Cpp + MGENDBNGEEE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MGENDBNGEEE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGENDBNGEEE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MGENDBNGEEE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MGENDBNGEEE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MGENDBNGEEE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MGENDBNGEEE*))((::PBYTE)hIl2Cpp + MGENDBNGEEE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MGENDBNGEEE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
