#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BPHIKPCNBHM;
class CIGDBCKOFBN;
class NHGJEIHKKHB;
class NMDKHGGGMBC;
class NMHMGHEHHCM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NHGJEIHKKHB_AFFFMINNBPK_OFFSET UNITYSDK_OFFSET(0x1EB1AA90)
#define NHGJEIHKKHB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB1AF30)
#define NHGJEIHKKHB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB1B3E0)
#define NHGJEIHKKHB_CLGKBEDEGIG_OFFSET UNITYSDK_OFFSET(0x1EB1AAC0)
#define NHGJEIHKKHB_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB1AA60)
#define NHGJEIHKKHB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB1A900)
#define NHGJEIHKKHB_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB1A860)
#define NHGJEIHKKHB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB1AB00)
#define NHGJEIHKKHB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB1AAD0)
#define NHGJEIHKKHB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB1ACA0)
#define NHGJEIHKKHB_JHEFPOGNBND_OFFSET UNITYSDK_OFFSET(0x1EB1AAB0)
#define NHGJEIHKKHB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB1A820)
#define NHGJEIHKKHB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB1B210)
#define NHGJEIHKKHB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB1B070)
#define NHGJEIHKKHB_NLPALKLGKEF_OFFSET UNITYSDK_OFFSET(0x1EB1AAA0)
#define NHGJEIHKKHB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB1A850)
#define NHGJEIHKKHB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB1AD80)
#define NHGJEIHKKHB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB1ADE0)

inline static constexpr unsigned int NHGJEIHKKHB_TypeDefinitionIndex = 33201;

	class NHGJEIHKKHB : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::NMHMGHEHHCM*>* CEHDJOCBNIL; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::BPHIKPCNBHM*>* JLFDMJMJDND; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::NMDKHGGGMBC*>* LJPDDDJMMLO; // 0x20
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x28
		::Google::Protobuf::Collections::RepeatedField_1<::CIGDBCKOFBN*>* JDLFCGELGAK; // 0x30
		static ::Google::Protobuf::MessageParser_1<::NHGJEIHKKHB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NHGJEIHKKHB*>**)UnitySDK::FromName("", "NHGJEIHKKHB")->GetStaticField(0x60150);
		}

		static ::Google::Protobuf::FieldCodec_1<::NMHMGHEHHCM*>** StaticGet_AMCKCGGPJMP()
		{
			return (::Google::Protobuf::FieldCodec_1<::NMHMGHEHHCM*>**)UnitySDK::FromName("", "NHGJEIHKKHB")->GetStaticField(0x60158);
		}

		static ::Google::Protobuf::FieldCodec_1<::BPHIKPCNBHM*>** StaticGet_JKBHDLODNOE()
		{
			return (::Google::Protobuf::FieldCodec_1<::BPHIKPCNBHM*>**)UnitySDK::FromName("", "NHGJEIHKKHB")->GetStaticField(0x60160);
		}

		static ::Google::Protobuf::FieldCodec_1<::CIGDBCKOFBN*>** StaticGet_GFDIPJMHIPE()
		{
			return (::Google::Protobuf::FieldCodec_1<::CIGDBCKOFBN*>**)UnitySDK::FromName("", "NHGJEIHKKHB")->GetStaticField(0x60168);
		}

		static ::Google::Protobuf::FieldCodec_1<::NMDKHGGGMBC*>** StaticGet_MPDFEKFIIDJ()
		{
			return (::Google::Protobuf::FieldCodec_1<::NMDKHGGGMBC*>**)UnitySDK::FromName("", "NHGJEIHKKHB")->GetStaticField(0x60170);
		}

		// static const ::System::Object DDKAMGMEGCN; // 0x0
		// static const ::System::Object LGGGLPCPMFJ; // 0x0
		// static const ::System::Object CPBPPPJBFGH; // 0x0
		// static const ::System::Object GLCPDKCMHHN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHGJEIHKKHB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NHGJEIHKKHB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NHGJEIHKKHB*))((::PBYTE)hIl2Cpp + NHGJEIHKKHB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NHGJEIHKKHB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NHGJEIHKKHB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NHGJEIHKKHB*>*(*)())((::PBYTE)hIl2Cpp + NHGJEIHKKHB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHGJEIHKKHB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NHGJEIHKKHB* Clone()
		{
			return ((::NHGJEIHKKHB*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHGJEIHKKHB_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::CIGDBCKOFBN*>* AFFFMINNBPK()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::CIGDBCKOFBN*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHGJEIHKKHB_AFFFMINNBPK_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::NMHMGHEHHCM*>* NLPALKLGKEF()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::NMHMGHEHHCM*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHGJEIHKKHB_NLPALKLGKEF_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::BPHIKPCNBHM*>* JHEFPOGNBND()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::BPHIKPCNBHM*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHGJEIHKKHB_JHEFPOGNBND_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::NMDKHGGGMBC*>* CLGKBEDEGIG()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::NMDKHGGGMBC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHGJEIHKKHB_CLGKBEDEGIG_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NHGJEIHKKHB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NHGJEIHKKHB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NHGJEIHKKHB*))((::PBYTE)hIl2Cpp + NHGJEIHKKHB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NHGJEIHKKHB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHGJEIHKKHB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NHGJEIHKKHB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NHGJEIHKKHB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NHGJEIHKKHB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NHGJEIHKKHB*))((::PBYTE)hIl2Cpp + NHGJEIHKKHB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NHGJEIHKKHB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
