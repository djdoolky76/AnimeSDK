#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class APCDHOBPBHA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define APCDHOBPBHA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E645360)
#define APCDHOBPBHA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E645580)
#define APCDHOBPBHA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E644F50)
#define APCDHOBPBHA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E644F20)
#define APCDHOBPBHA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E644F10)
#define APCDHOBPBHA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E6450E0)
#define APCDHOBPBHA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E644FE0)
#define APCDHOBPBHA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E645250)
#define APCDHOBPBHA_GJOBMJCOBPE_OFFSET UNITYSDK_OFFSET(0x1E644FD0)
#define APCDHOBPBHA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E644EA0)
#define APCDHOBPBHA_KDIDNNCPODN_OFFSET UNITYSDK_OFFSET(0x1E644FC0)
#define APCDHOBPBHA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E645420)
#define APCDHOBPBHA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E6453F0)
#define APCDHOBPBHA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E644F00)
#define APCDHOBPBHA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E645280)
#define APCDHOBPBHA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E6452E0)

inline static constexpr unsigned int APCDHOBPBHA_TypeDefinitionIndex = 25802;

	class APCDHOBPBHA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 HJEGLCJEOKC; // 0x18
		static ::Google::Protobuf::MessageParser_1<::APCDHOBPBHA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::APCDHOBPBHA*>**)UnitySDK::FromName("", "APCDHOBPBHA")->GetStaticField(0x49CD0);
		}

		// static const ::System::Object IEIFMNNMINA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APCDHOBPBHA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::APCDHOBPBHA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::APCDHOBPBHA*))((::PBYTE)hIl2Cpp + APCDHOBPBHA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + APCDHOBPBHA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::APCDHOBPBHA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::APCDHOBPBHA*>*(*)())((::PBYTE)hIl2Cpp + APCDHOBPBHA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + APCDHOBPBHA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::APCDHOBPBHA* Clone()
		{
			return ((::APCDHOBPBHA*(*)(::PVOID))((::PBYTE)hIl2Cpp + APCDHOBPBHA_CLONE_OFFSET))(this);
		}

		::System::UInt32 KDIDNNCPODN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + APCDHOBPBHA_KDIDNNCPODN_OFFSET))(this);
		}

		::System::Void GJOBMJCOBPE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + APCDHOBPBHA_GJOBMJCOBPE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + APCDHOBPBHA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::APCDHOBPBHA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::APCDHOBPBHA*))((::PBYTE)hIl2Cpp + APCDHOBPBHA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + APCDHOBPBHA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + APCDHOBPBHA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + APCDHOBPBHA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + APCDHOBPBHA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::APCDHOBPBHA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::APCDHOBPBHA*))((::PBYTE)hIl2Cpp + APCDHOBPBHA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + APCDHOBPBHA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
