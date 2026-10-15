#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LOHLENBEIEB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LOHLENBEIEB_BKHPBOLHNCP_OFFSET UNITYSDK_OFFSET(0x1E991F20)
#define LOHLENBEIEB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E9924C0)
#define LOHLENBEIEB_CBMGICEDPMD_OFFSET UNITYSDK_OFFSET(0x1E991F30)
#define LOHLENBEIEB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E992790)
#define LOHLENBEIEB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E991E60)
#define LOHLENBEIEB_COEONDABKIH_OFFSET UNITYSDK_OFFSET(0x1E991F00)
#define LOHLENBEIEB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E991E20)
#define LOHLENBEIEB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E991E10)
#define LOHLENBEIEB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E991FA0)
#define LOHLENBEIEB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E991F40)
#define LOHLENBEIEB_FOCIPHMHHEB_OFFSET UNITYSDK_OFFSET(0x1E991F10)
#define LOHLENBEIEB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E9921A0)
#define LOHLENBEIEB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E991DA0)
#define LOHLENBEIEB_LDAMHBBILAD_OFFSET UNITYSDK_OFFSET(0x1E991EE0)
#define LOHLENBEIEB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E9925F0)
#define LOHLENBEIEB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E992590)
#define LOHLENBEIEB_MOAKACHAAMM_OFFSET UNITYSDK_OFFSET(0x1E991EF0)
#define LOHLENBEIEB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E991E00)
#define LOHLENBEIEB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9922C0)
#define LOHLENBEIEB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E992320)

inline static constexpr unsigned int LOHLENBEIEB_TypeDefinitionIndex = 32692;

	class LOHLENBEIEB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Int32 LFCNOIPGGGI; // 0x18
		::System::Boolean PFLGHHDHBDB; // 0x1C
		::System::Byte _padding0[0x3];
		::System::Single OCCJEGBDDNG; // 0x20
		static ::Google::Protobuf::MessageParser_1<::LOHLENBEIEB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LOHLENBEIEB*>**)UnitySDK::FromName("", "LOHLENBEIEB")->GetStaticField(0x41A90);
		}

		// static const ::System::Object LDBJJPBGLNG; // 0x0
		// static const ::System::Object LCEHCAOINBN; // 0x0
		// static const ::System::Object PODKPKOCLFH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOHLENBEIEB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LOHLENBEIEB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LOHLENBEIEB*))((::PBYTE)hIl2Cpp + LOHLENBEIEB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LOHLENBEIEB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LOHLENBEIEB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LOHLENBEIEB*>*(*)())((::PBYTE)hIl2Cpp + LOHLENBEIEB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOHLENBEIEB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LOHLENBEIEB* Clone()
		{
			return ((::LOHLENBEIEB*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOHLENBEIEB_CLONE_OFFSET))(this);
		}

		::System::Boolean LDAMHBBILAD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LOHLENBEIEB_LDAMHBBILAD_OFFSET))(this);
		}

		::System::Void MOAKACHAAMM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LOHLENBEIEB_MOAKACHAAMM_OFFSET))(this, a1);
		}

		::System::Single COEONDABKIH()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LOHLENBEIEB_COEONDABKIH_OFFSET))(this);
		}

		::System::Void FOCIPHMHHEB(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LOHLENBEIEB_FOCIPHMHHEB_OFFSET))(this, a1);
		}

		::System::Int32 BKHPBOLHNCP()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LOHLENBEIEB_BKHPBOLHNCP_OFFSET))(this);
		}

		::System::Void CBMGICEDPMD(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LOHLENBEIEB_CBMGICEDPMD_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LOHLENBEIEB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LOHLENBEIEB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LOHLENBEIEB*))((::PBYTE)hIl2Cpp + LOHLENBEIEB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LOHLENBEIEB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOHLENBEIEB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LOHLENBEIEB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LOHLENBEIEB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LOHLENBEIEB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LOHLENBEIEB*))((::PBYTE)hIl2Cpp + LOHLENBEIEB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LOHLENBEIEB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
