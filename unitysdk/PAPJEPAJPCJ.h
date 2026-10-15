#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PAPJEPAJPCJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PAPJEPAJPCJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DEC5C20)
#define PAPJEPAJPCJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEC5F10)
#define PAPJEPAJPCJ_CGOGCHMOMJK_OFFSET UNITYSDK_OFFSET(0x1DEC5790)
#define PAPJEPAJPCJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1DEC5730)
#define PAPJEPAJPCJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DEC56F0)
#define PAPJEPAJPCJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEC56E0)
#define PAPJEPAJPCJ_DKDLBLLMPNE_OFFSET UNITYSDK_OFFSET(0x1DEC57C0)
#define PAPJEPAJPCJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DEC5910)
#define PAPJEPAJPCJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DEC5810)
#define PAPJEPAJPCJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DEC5A10)
#define PAPJEPAJPCJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DEC56A0)
#define PAPJEPAJPCJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DEC5D60)
#define PAPJEPAJPCJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DEC5D10)
#define PAPJEPAJPCJ_MNLDMBGAJIF_OFFSET UNITYSDK_OFFSET(0x1DEC57B0)
#define PAPJEPAJPCJ_OPBEJBCJMHA_OFFSET UNITYSDK_OFFSET(0x1DEC57A0)
#define PAPJEPAJPCJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DEC56D0)
#define PAPJEPAJPCJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DEC5AC0)
#define PAPJEPAJPCJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DEC5B20)

inline static constexpr unsigned int PAPJEPAJPCJ_TypeDefinitionIndex = 25439;

	class PAPJEPAJPCJ : public ::System::Object
	{
	public:
		::System::String* DFKHBNCHKBI; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::Int32 LFKLHAEEDJB; // 0x20
		static ::Google::Protobuf::MessageParser_1<::PAPJEPAJPCJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PAPJEPAJPCJ*>**)UnitySDK::FromName("", "PAPJEPAJPCJ")->GetStaticField(0x2C320);
		}

		// static const ::System::Object IHEJPPEONCG; // 0x0
		// static const ::System::Object JLAAHBJNEML; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAPJEPAJPCJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PAPJEPAJPCJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PAPJEPAJPCJ*))((::PBYTE)hIl2Cpp + PAPJEPAJPCJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PAPJEPAJPCJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PAPJEPAJPCJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PAPJEPAJPCJ*>*(*)())((::PBYTE)hIl2Cpp + PAPJEPAJPCJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAPJEPAJPCJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PAPJEPAJPCJ* Clone()
		{
			return ((::PAPJEPAJPCJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAPJEPAJPCJ_CLONE_OFFSET))(this);
		}

		::System::Int32 CGOGCHMOMJK()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PAPJEPAJPCJ_CGOGCHMOMJK_OFFSET))(this);
		}

		::System::Void OPBEJBCJMHA(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PAPJEPAJPCJ_OPBEJBCJMHA_OFFSET))(this, a1);
		}

		::System::String* MNLDMBGAJIF()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAPJEPAJPCJ_MNLDMBGAJIF_OFFSET))(this);
		}

		::System::Void DKDLBLLMPNE(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PAPJEPAJPCJ_DKDLBLLMPNE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PAPJEPAJPCJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PAPJEPAJPCJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PAPJEPAJPCJ*))((::PBYTE)hIl2Cpp + PAPJEPAJPCJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PAPJEPAJPCJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAPJEPAJPCJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PAPJEPAJPCJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PAPJEPAJPCJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PAPJEPAJPCJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PAPJEPAJPCJ*))((::PBYTE)hIl2Cpp + PAPJEPAJPCJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PAPJEPAJPCJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
