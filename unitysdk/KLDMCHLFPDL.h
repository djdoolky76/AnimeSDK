#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KLDMCHLFPDL;
class OINGMPMHDKF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KLDMCHLFPDL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E887840)
#define KLDMCHLFPDL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E887AC0)
#define KLDMCHLFPDL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E887200)
#define KLDMCHLFPDL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E887170)
#define KLDMCHLFPDL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E887160)
#define KLDMCHLFPDL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E887430)
#define KLDMCHLFPDL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8872C0)
#define KLDMCHLFPDL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E887700)
#define KLDMCHLFPDL_GHGJKHCAPKJ_OFFSET UNITYSDK_OFFSET(0x1E8872A0)
#define KLDMCHLFPDL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E887120)
#define KLDMCHLFPDL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E887930)
#define KLDMCHLFPDL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8878A0)
#define KLDMCHLFPDL_NBDDIBFCONG_OFFSET UNITYSDK_OFFSET(0x1E8872B0)
#define KLDMCHLFPDL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E887150)
#define KLDMCHLFPDL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E887750)
#define KLDMCHLFPDL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8877B0)

inline static constexpr unsigned int KLDMCHLFPDL_TypeDefinitionIndex = 32149;

	class KLDMCHLFPDL : public ::System::Object
	{
	public:
		::OINGMPMHDKF* JBDNOGHIKPO; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "KLDMCHLFPDL")->GetStaticField(0x20030);
		}

		// static const ::System::Object DNKCALCEPJI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLDMCHLFPDL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KLDMCHLFPDL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KLDMCHLFPDL*))((::PBYTE)hIl2Cpp + KLDMCHLFPDL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KLDMCHLFPDL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + KLDMCHLFPDL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLDMCHLFPDL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KLDMCHLFPDL* Clone()
		{
			return ((::KLDMCHLFPDL*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLDMCHLFPDL_CLONE_OFFSET))(this);
		}

		::OINGMPMHDKF* GHGJKHCAPKJ()
		{
			return ((::OINGMPMHDKF*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLDMCHLFPDL_GHGJKHCAPKJ_OFFSET))(this);
		}

		::System::Void NBDDIBFCONG(::OINGMPMHDKF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OINGMPMHDKF*))((::PBYTE)hIl2Cpp + KLDMCHLFPDL_NBDDIBFCONG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KLDMCHLFPDL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KLDMCHLFPDL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KLDMCHLFPDL*))((::PBYTE)hIl2Cpp + KLDMCHLFPDL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLDMCHLFPDL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLDMCHLFPDL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KLDMCHLFPDL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLDMCHLFPDL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KLDMCHLFPDL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KLDMCHLFPDL*))((::PBYTE)hIl2Cpp + KLDMCHLFPDL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KLDMCHLFPDL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
