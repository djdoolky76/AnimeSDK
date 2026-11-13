#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HELGMBBOGMJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HELGMBBOGMJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F884DE0)
#define HELGMBBOGMJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F885000)
#define HELGMBBOGMJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1F8849D0)
#define HELGMBBOGMJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F8849A0)
#define HELGMBBOGMJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1F884990)
#define HELGMBBOGMJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F884B60)
#define HELGMBBOGMJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F884A60)
#define HELGMBBOGMJ_FJPKMBCDIHP_OFFSET UNITYSDK_OFFSET(0x1F884A40)
#define HELGMBBOGMJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F884CD0)
#define HELGMBBOGMJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F884920)
#define HELGMBBOGMJ_LCJMPFICPLJ_OFFSET UNITYSDK_OFFSET(0x1F884A50)
#define HELGMBBOGMJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F884EA0)
#define HELGMBBOGMJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F884E70)
#define HELGMBBOGMJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F884980)
#define HELGMBBOGMJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F884D00)
#define HELGMBBOGMJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F884D60)

inline static constexpr unsigned int HELGMBBOGMJ_TypeDefinitionIndex = 33980;

	class HELGMBBOGMJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 GILCLIIHJPE; // 0x18
		static ::Google::Protobuf::MessageParser_1<::HELGMBBOGMJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HELGMBBOGMJ*>**)UnitySDK::FromName("", "HELGMBBOGMJ")->GetStaticField(0x29660);
		}

		// static const ::System::Object BKGKBPKGAEL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HELGMBBOGMJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HELGMBBOGMJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HELGMBBOGMJ*))((::PBYTE)hIl2Cpp + HELGMBBOGMJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HELGMBBOGMJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HELGMBBOGMJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HELGMBBOGMJ*>*(*)())((::PBYTE)hIl2Cpp + HELGMBBOGMJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HELGMBBOGMJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HELGMBBOGMJ* Clone()
		{
			return ((::HELGMBBOGMJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + HELGMBBOGMJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 FJPKMBCDIHP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HELGMBBOGMJ_FJPKMBCDIHP_OFFSET))(this);
		}

		::System::Void LCJMPFICPLJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HELGMBBOGMJ_LCJMPFICPLJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HELGMBBOGMJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HELGMBBOGMJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HELGMBBOGMJ*))((::PBYTE)hIl2Cpp + HELGMBBOGMJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HELGMBBOGMJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HELGMBBOGMJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HELGMBBOGMJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HELGMBBOGMJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HELGMBBOGMJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HELGMBBOGMJ*))((::PBYTE)hIl2Cpp + HELGMBBOGMJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HELGMBBOGMJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
