#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EHKDAJFLIEI;
class IOHKFHBGICD;
class NAPFNBJDIOO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NAPFNBJDIOO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x20152EA0)
#define NAPFNBJDIOO_CCTOR_OFFSET UNITYSDK_OFFSET(0x20153250)
#define NAPFNBJDIOO_CLONE_OFFSET UNITYSDK_OFFSET(0x201525B0)
#define NAPFNBJDIOO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x20152400)
#define NAPFNBJDIOO_CTOR_OFFSET UNITYSDK_OFFSET(0x201523F0)
#define NAPFNBJDIOO_EBOOGFOLDMD_OFFSET UNITYSDK_OFFSET(0x201527A0)
#define NAPFNBJDIOO_ENCAMIDKFMG_OFFSET UNITYSDK_OFFSET(0x201527B0)
#define NAPFNBJDIOO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x20152A30)
#define NAPFNBJDIOO_EQUALS_OFFSET UNITYSDK_OFFSET(0x201527E0)
#define NAPFNBJDIOO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x20152C60)
#define NAPFNBJDIOO_JEADKHMBMAA_OFFSET UNITYSDK_OFFSET(0x201527D0)
#define NAPFNBJDIOO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x20152380)
#define NAPFNBJDIOO_JLLAEEPJDJN_OFFSET UNITYSDK_OFFSET(0x201527C0)
#define NAPFNBJDIOO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x201530A0)
#define NAPFNBJDIOO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x20152F30)
#define NAPFNBJDIOO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x201523E0)
#define NAPFNBJDIOO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x20152D60)
#define NAPFNBJDIOO_WRITETO_OFFSET UNITYSDK_OFFSET(0x20152DC0)

inline static constexpr unsigned int NAPFNBJDIOO_TypeDefinitionIndex = 33837;

	class NAPFNBJDIOO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::EHKDAJFLIEI* BBFLLHIMIKH; // 0x18
		::IOHKFHBGICD* PKMJKBMKCBP; // 0x20
		static ::Google::Protobuf::MessageParser_1<::NAPFNBJDIOO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NAPFNBJDIOO*>**)UnitySDK::FromName("", "NAPFNBJDIOO")->GetStaticField(0x579F0);
		}

		// static const ::System::Object MNNGMPMBBDG; // 0x0
		// static const ::System::Object LCCJCEICAED; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPFNBJDIOO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NAPFNBJDIOO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NAPFNBJDIOO*))((::PBYTE)hIl2Cpp + NAPFNBJDIOO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAPFNBJDIOO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NAPFNBJDIOO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NAPFNBJDIOO*>*(*)())((::PBYTE)hIl2Cpp + NAPFNBJDIOO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPFNBJDIOO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NAPFNBJDIOO* Clone()
		{
			return ((::NAPFNBJDIOO*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPFNBJDIOO_CLONE_OFFSET))(this);
		}

		::IOHKFHBGICD* EBOOGFOLDMD()
		{
			return ((::IOHKFHBGICD*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPFNBJDIOO_EBOOGFOLDMD_OFFSET))(this);
		}

		::System::Void ENCAMIDKFMG(::IOHKFHBGICD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IOHKFHBGICD*))((::PBYTE)hIl2Cpp + NAPFNBJDIOO_ENCAMIDKFMG_OFFSET))(this, a1);
		}

		::EHKDAJFLIEI* JLLAEEPJDJN()
		{
			return ((::EHKDAJFLIEI*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPFNBJDIOO_JLLAEEPJDJN_OFFSET))(this);
		}

		::System::Void JEADKHMBMAA(::EHKDAJFLIEI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EHKDAJFLIEI*))((::PBYTE)hIl2Cpp + NAPFNBJDIOO_JEADKHMBMAA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NAPFNBJDIOO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NAPFNBJDIOO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NAPFNBJDIOO*))((::PBYTE)hIl2Cpp + NAPFNBJDIOO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPFNBJDIOO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPFNBJDIOO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NAPFNBJDIOO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPFNBJDIOO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NAPFNBJDIOO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NAPFNBJDIOO*))((::PBYTE)hIl2Cpp + NAPFNBJDIOO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NAPFNBJDIOO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
