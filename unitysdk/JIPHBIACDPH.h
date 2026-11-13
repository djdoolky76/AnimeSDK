#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JIPHBIACDPH;
class KPNHGDGLICN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JIPHBIACDPH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FF27F20)
#define JIPHBIACDPH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FF28300)
#define JIPHBIACDPH_CLONE_OFFSET UNITYSDK_OFFSET(0x1FF27A90)
#define JIPHBIACDPH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FF279D0)
#define JIPHBIACDPH_CTOR_OFFSET UNITYSDK_OFFSET(0x1FF27980)
#define JIPHBIACDPH_EIOMMLPIAKP_OFFSET UNITYSDK_OFFSET(0x1FF27AD0)
#define JIPHBIACDPH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FF27B60)
#define JIPHBIACDPH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FF27B30)
#define JIPHBIACDPH_GEMDLCGEPMD_OFFSET UNITYSDK_OFFSET(0x1FF27AE0)
#define JIPHBIACDPH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FF27C90)
#define JIPHBIACDPH_JCCIDNDNIAN_OFFSET UNITYSDK_OFFSET(0x1FF27B10)
#define JIPHBIACDPH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FF27940)
#define JIPHBIACDPH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FF28200)
#define JIPHBIACDPH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FF28140)
#define JIPHBIACDPH_MJOEMBBMBON_OFFSET UNITYSDK_OFFSET(0x1FF27AC0)
#define JIPHBIACDPH_MLFCLGKLDIJ_OFFSET UNITYSDK_OFFSET(0x1FF27B00)
#define JIPHBIACDPH_NJFGKMLMANJ_OFFSET UNITYSDK_OFFSET(0x1FF27B20)
#define JIPHBIACDPH_OONLMLJCEMJ_OFFSET UNITYSDK_OFFSET(0x1FF27AF0)
#define JIPHBIACDPH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FF27970)
#define JIPHBIACDPH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FF27D00)
#define JIPHBIACDPH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FF27D60)

inline static constexpr unsigned int JIPHBIACDPH_TypeDefinitionIndex = 29075;

	class JIPHBIACDPH : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::KPNHGDGLICN*>* CBFGBDBJHID; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 EEGOEPEKCFA; // 0x20
		::System::UInt32 HDPHOECPDLH; // 0x24
		::System::UInt32 GEMFJILOPLL; // 0x28
		static ::Google::Protobuf::FieldCodec_1<::KPNHGDGLICN*>** StaticGet_DDFODHOFBIP()
		{
			return (::Google::Protobuf::FieldCodec_1<::KPNHGDGLICN*>**)UnitySDK::FromName("", "JIPHBIACDPH")->GetStaticField(0x61060);
		}

		static ::Google::Protobuf::MessageParser_1<::JIPHBIACDPH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JIPHBIACDPH*>**)UnitySDK::FromName("", "JIPHBIACDPH")->GetStaticField(0x61068);
		}

		// static const ::System::Object IMGDAOEBONP; // 0x0
		// static const ::System::Object AKFFJEHMCCB; // 0x0
		// static const ::System::Object CFOOKLCBKFG; // 0x0
		// static const ::System::Object PAIOBNJICAB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIPHBIACDPH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JIPHBIACDPH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JIPHBIACDPH*))((::PBYTE)hIl2Cpp + JIPHBIACDPH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JIPHBIACDPH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JIPHBIACDPH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JIPHBIACDPH*>*(*)())((::PBYTE)hIl2Cpp + JIPHBIACDPH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIPHBIACDPH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JIPHBIACDPH* Clone()
		{
			return ((::JIPHBIACDPH*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIPHBIACDPH_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::KPNHGDGLICN*>* MJOEMBBMBON()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::KPNHGDGLICN*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIPHBIACDPH_MJOEMBBMBON_OFFSET))(this);
		}

		::System::UInt32 EIOMMLPIAKP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JIPHBIACDPH_EIOMMLPIAKP_OFFSET))(this);
		}

		::System::Void GEMDLCGEPMD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JIPHBIACDPH_GEMDLCGEPMD_OFFSET))(this, a1);
		}

		::System::UInt32 OONLMLJCEMJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JIPHBIACDPH_OONLMLJCEMJ_OFFSET))(this);
		}

		::System::Void MLFCLGKLDIJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JIPHBIACDPH_MLFCLGKLDIJ_OFFSET))(this, a1);
		}

		::System::UInt32 JCCIDNDNIAN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JIPHBIACDPH_JCCIDNDNIAN_OFFSET))(this);
		}

		::System::Void NJFGKMLMANJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JIPHBIACDPH_NJFGKMLMANJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JIPHBIACDPH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JIPHBIACDPH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JIPHBIACDPH*))((::PBYTE)hIl2Cpp + JIPHBIACDPH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JIPHBIACDPH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIPHBIACDPH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JIPHBIACDPH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JIPHBIACDPH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JIPHBIACDPH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JIPHBIACDPH*))((::PBYTE)hIl2Cpp + JIPHBIACDPH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JIPHBIACDPH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
