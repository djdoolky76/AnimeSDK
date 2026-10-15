#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PELDIEOMMDM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PELDIEOMMDM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DEEE220)
#define PELDIEOMMDM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEEE570)
#define PELDIEOMMDM_CLONE_OFFSET UNITYSDK_OFFSET(0x1DEEDBF0)
#define PELDIEOMMDM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DEEDB50)
#define PELDIEOMMDM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEEDAF0)
#define PELDIEOMMDM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DEEDE00)
#define PELDIEOMMDM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DEEDCB0)
#define PELDIEOMMDM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DEEDF20)
#define PELDIEOMMDM_HIGMHCHDPDL_OFFSET UNITYSDK_OFFSET(0x1DEEDC50)
#define PELDIEOMMDM_JINLEONNCEN_OFFSET UNITYSDK_OFFSET(0x1DEEDC40)
#define PELDIEOMMDM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DEEDA80)
#define PELDIEOMMDM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DEEE370)
#define PELDIEOMMDM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DEEE310)
#define PELDIEOMMDM_MJDLJPBICHP_OFFSET UNITYSDK_OFFSET(0x1DEEDC60)
#define PELDIEOMMDM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DEEDAE0)
#define PELDIEOMMDM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DEEE0A0)
#define PELDIEOMMDM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DEEE100)

inline static constexpr unsigned int PELDIEOMMDM_TypeDefinitionIndex = 25241;

	class PELDIEOMMDM : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* KHHJMABBLAH; // 0x10
		::System::String* JDOJAMHCAJD; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_JPAEBNKOHFA()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "PELDIEOMMDM")->GetStaticField(0x30EA0);
		}

		static ::Google::Protobuf::MessageParser_1<::PELDIEOMMDM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PELDIEOMMDM*>**)UnitySDK::FromName("", "PELDIEOMMDM")->GetStaticField(0x30EA8);
		}

		// static const ::System::Object DGOKAKPOELJ; // 0x0
		// static const ::System::Object DBKOHLFBPNI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PELDIEOMMDM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PELDIEOMMDM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PELDIEOMMDM*))((::PBYTE)hIl2Cpp + PELDIEOMMDM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PELDIEOMMDM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PELDIEOMMDM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PELDIEOMMDM*>*(*)())((::PBYTE)hIl2Cpp + PELDIEOMMDM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PELDIEOMMDM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PELDIEOMMDM* Clone()
		{
			return ((::PELDIEOMMDM*(*)(::PVOID))((::PBYTE)hIl2Cpp + PELDIEOMMDM_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JINLEONNCEN()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PELDIEOMMDM_JINLEONNCEN_OFFSET))(this);
		}

		::System::String* HIGMHCHDPDL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PELDIEOMMDM_HIGMHCHDPDL_OFFSET))(this);
		}

		::System::Void MJDLJPBICHP(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PELDIEOMMDM_MJDLJPBICHP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PELDIEOMMDM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PELDIEOMMDM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PELDIEOMMDM*))((::PBYTE)hIl2Cpp + PELDIEOMMDM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PELDIEOMMDM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PELDIEOMMDM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PELDIEOMMDM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PELDIEOMMDM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PELDIEOMMDM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PELDIEOMMDM*))((::PBYTE)hIl2Cpp + PELDIEOMMDM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PELDIEOMMDM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
