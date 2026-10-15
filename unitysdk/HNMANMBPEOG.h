#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HNMANMBPEOG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HNMANMBPEOG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5E0B50)
#define HNMANMBPEOG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5E0E40)
#define HNMANMBPEOG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5E06C0)
#define HNMANMBPEOG_CMACNDCLPBF_OFFSET UNITYSDK_OFFSET(0x1E5E0700)
#define HNMANMBPEOG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5E0630)
#define HNMANMBPEOG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5E05E0)
#define HNMANMBPEOG_DJKDLEFGJKN_OFFSET UNITYSDK_OFFSET(0x1E5E06F0)
#define HNMANMBPEOG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5E0820)
#define HNMANMBPEOG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5E0720)
#define HNMANMBPEOG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5E0910)
#define HNMANMBPEOG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E5E05A0)
#define HNMANMBPEOG_LBFFHCPJDDG_OFFSET UNITYSDK_OFFSET(0x1E5E0710)
#define HNMANMBPEOG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E5E0C90)
#define HNMANMBPEOG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5E0C40)
#define HNMANMBPEOG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5E05D0)
#define HNMANMBPEOG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5E0A10)
#define HNMANMBPEOG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5E0A70)

inline static constexpr unsigned int HNMANMBPEOG_TypeDefinitionIndex = 33700;

	class HNMANMBPEOG : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* FBMLIJJKFBD; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 AHFOBLNJJJP; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_BECCCHMAEED()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "HNMANMBPEOG")->GetStaticField(0x4C3A0);
		}

		static ::Google::Protobuf::MessageParser_1<::HNMANMBPEOG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HNMANMBPEOG*>**)UnitySDK::FromName("", "HNMANMBPEOG")->GetStaticField(0x4C3A8);
		}

		// static const ::System::Object CGLMEAHGMNJ; // 0x0
		// static const ::System::Object MBOJMOAJLLH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNMANMBPEOG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HNMANMBPEOG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HNMANMBPEOG*))((::PBYTE)hIl2Cpp + HNMANMBPEOG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HNMANMBPEOG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HNMANMBPEOG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HNMANMBPEOG*>*(*)())((::PBYTE)hIl2Cpp + HNMANMBPEOG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNMANMBPEOG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HNMANMBPEOG* Clone()
		{
			return ((::HNMANMBPEOG*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNMANMBPEOG_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* DJKDLEFGJKN()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNMANMBPEOG_DJKDLEFGJKN_OFFSET))(this);
		}

		::System::UInt32 CMACNDCLPBF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HNMANMBPEOG_CMACNDCLPBF_OFFSET))(this);
		}

		::System::Void LBFFHCPJDDG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HNMANMBPEOG_LBFFHCPJDDG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HNMANMBPEOG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HNMANMBPEOG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HNMANMBPEOG*))((::PBYTE)hIl2Cpp + HNMANMBPEOG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HNMANMBPEOG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNMANMBPEOG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HNMANMBPEOG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HNMANMBPEOG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HNMANMBPEOG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HNMANMBPEOG*))((::PBYTE)hIl2Cpp + HNMANMBPEOG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HNMANMBPEOG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
