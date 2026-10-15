#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FDGKFJFICDN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FDGKFJFICDN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E32B370)
#define FDGKFJFICDN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E32B5F0)
#define FDGKFJFICDN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E32ADF0)
#define FDGKFJFICDN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E32ADB0)
#define FDGKFJFICDN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E32ADA0)
#define FDGKFJFICDN_DPGDICFGIAG_OFFSET UNITYSDK_OFFSET(0x1E32AE90)
#define FDGKFJFICDN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E32AF10)
#define FDGKFJFICDN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E32AEB0)
#define FDGKFJFICDN_FBMKNCACCGD_OFFSET UNITYSDK_OFFSET(0x1E32AEA0)
#define FDGKFJFICDN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E32B100)
#define FDGKFJFICDN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E32AD30)
#define FDGKFJFICDN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E32B470)
#define FDGKFJFICDN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E32B420)
#define FDGKFJFICDN_MIIIIINLMKC_OFFSET UNITYSDK_OFFSET(0x1E32AE80)
#define FDGKFJFICDN_NGLCKJEFKIN_OFFSET UNITYSDK_OFFSET(0x1E32AE70)
#define FDGKFJFICDN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E32AD90)
#define FDGKFJFICDN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E32B220)
#define FDGKFJFICDN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E32B280)

inline static constexpr unsigned int FDGKFJFICDN_TypeDefinitionIndex = 25495;

	class FDGKFJFICDN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 BLCIEPPJJCC; // 0x18
		::System::Byte _padding0[0x4];
		::System::Double EEFAOKNJGJK; // 0x20
		static ::Google::Protobuf::MessageParser_1<::FDGKFJFICDN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FDGKFJFICDN*>**)UnitySDK::FromName("", "FDGKFJFICDN")->GetStaticField(0x48F20);
		}

		// static const ::System::Object KKAFPBONMMD; // 0x0
		// static const ::System::Object PFIEAJFDPKN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDGKFJFICDN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FDGKFJFICDN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FDGKFJFICDN*))((::PBYTE)hIl2Cpp + FDGKFJFICDN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FDGKFJFICDN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FDGKFJFICDN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FDGKFJFICDN*>*(*)())((::PBYTE)hIl2Cpp + FDGKFJFICDN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDGKFJFICDN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FDGKFJFICDN* Clone()
		{
			return ((::FDGKFJFICDN*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDGKFJFICDN_CLONE_OFFSET))(this);
		}

		::System::UInt32 NGLCKJEFKIN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FDGKFJFICDN_NGLCKJEFKIN_OFFSET))(this);
		}

		::System::Void MIIIIINLMKC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FDGKFJFICDN_MIIIIINLMKC_OFFSET))(this, a1);
		}

		::System::Double DPGDICFGIAG()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + FDGKFJFICDN_DPGDICFGIAG_OFFSET))(this);
		}

		::System::Void FBMKNCACCGD(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + FDGKFJFICDN_FBMKNCACCGD_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FDGKFJFICDN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FDGKFJFICDN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FDGKFJFICDN*))((::PBYTE)hIl2Cpp + FDGKFJFICDN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FDGKFJFICDN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDGKFJFICDN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FDGKFJFICDN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FDGKFJFICDN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FDGKFJFICDN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FDGKFJFICDN*))((::PBYTE)hIl2Cpp + FDGKFJFICDN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FDGKFJFICDN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
