#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PIJDFMAJMFD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PIJDFMAJMFD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF699C0)
#define PIJDFMAJMFD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF69BE0)
#define PIJDFMAJMFD_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF69610)
#define PIJDFMAJMFD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF695E0)
#define PIJDFMAJMFD_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF695D0)
#define PIJDFMAJMFD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF69740)
#define PIJDFMAJMFD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF69670)
#define PIJDFMAJMFD_FJPKMBCDIHP_OFFSET UNITYSDK_OFFSET(0x1DF69650)
#define PIJDFMAJMFD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF698B0)
#define PIJDFMAJMFD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF69590)
#define PIJDFMAJMFD_LCJMPFICPLJ_OFFSET UNITYSDK_OFFSET(0x1DF69660)
#define PIJDFMAJMFD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF69A80)
#define PIJDFMAJMFD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF69A50)
#define PIJDFMAJMFD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF695C0)
#define PIJDFMAJMFD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF698E0)
#define PIJDFMAJMFD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF69940)

inline static constexpr unsigned int PIJDFMAJMFD_TypeDefinitionIndex = 33053;

	class PIJDFMAJMFD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 GILCLIIHJPE; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "PIJDFMAJMFD")->GetStaticField(0x440A0);
		}

		// static const ::System::Object BKGKBPKGAEL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIJDFMAJMFD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PIJDFMAJMFD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PIJDFMAJMFD*))((::PBYTE)hIl2Cpp + PIJDFMAJMFD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIJDFMAJMFD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + PIJDFMAJMFD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIJDFMAJMFD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PIJDFMAJMFD* Clone()
		{
			return ((::PIJDFMAJMFD*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIJDFMAJMFD_CLONE_OFFSET))(this);
		}

		::System::UInt32 FJPKMBCDIHP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIJDFMAJMFD_FJPKMBCDIHP_OFFSET))(this);
		}

		::System::Void LCJMPFICPLJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PIJDFMAJMFD_LCJMPFICPLJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PIJDFMAJMFD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PIJDFMAJMFD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PIJDFMAJMFD*))((::PBYTE)hIl2Cpp + PIJDFMAJMFD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIJDFMAJMFD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIJDFMAJMFD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PIJDFMAJMFD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIJDFMAJMFD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PIJDFMAJMFD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PIJDFMAJMFD*))((::PBYTE)hIl2Cpp + PIJDFMAJMFD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PIJDFMAJMFD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
