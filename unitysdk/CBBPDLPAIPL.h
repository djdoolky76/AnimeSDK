#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CBBPDLPAIPL;
class GHMINCEANHG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CBBPDLPAIPL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0627C0)
#define CBBPDLPAIPL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E062B60)
#define CBBPDLPAIPL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0622C0)
#define CBBPDLPAIPL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E062200)
#define CBBPDLPAIPL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0621B0)
#define CBBPDLPAIPL_DKHEMJGCFIA_OFFSET UNITYSDK_OFFSET(0x1E062320)
#define CBBPDLPAIPL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0624D0)
#define CBBPDLPAIPL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E062340)
#define CBBPDLPAIPL_FALBGMBIMLP_OFFSET UNITYSDK_OFFSET(0x1E062310)
#define CBBPDLPAIPL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0625F0)
#define CBBPDLPAIPL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E062140)
#define CBBPDLPAIPL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E062990)
#define CBBPDLPAIPL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0628F0)
#define CBBPDLPAIPL_OLPCNEADPCP_OFFSET UNITYSDK_OFFSET(0x1E062330)
#define CBBPDLPAIPL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0621A0)
#define CBBPDLPAIPL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E062660)
#define CBBPDLPAIPL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0626C0)

inline static constexpr unsigned int CBBPDLPAIPL_TypeDefinitionIndex = 26212;

	class CBBPDLPAIPL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::GHMINCEANHG*>* HCLLINMFJHA; // 0x18
		::System::UInt32 IJDGOPFHKMG; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::GHMINCEANHG*>** StaticGet_HLGHLHLPKKP()
		{
			return (::Google::Protobuf::FieldCodec_1<::GHMINCEANHG*>**)UnitySDK::FromName("", "CBBPDLPAIPL")->GetStaticField(0xB1F0);
		}

		static ::Google::Protobuf::MessageParser_1<::CBBPDLPAIPL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CBBPDLPAIPL*>**)UnitySDK::FromName("", "CBBPDLPAIPL")->GetStaticField(0xB1F8);
		}

		// static const ::System::Object JNPMDIILCBO; // 0x0
		// static const ::System::Object EBMJNLIEPFI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBBPDLPAIPL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CBBPDLPAIPL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CBBPDLPAIPL*))((::PBYTE)hIl2Cpp + CBBPDLPAIPL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CBBPDLPAIPL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CBBPDLPAIPL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CBBPDLPAIPL*>*(*)())((::PBYTE)hIl2Cpp + CBBPDLPAIPL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBBPDLPAIPL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CBBPDLPAIPL* Clone()
		{
			return ((::CBBPDLPAIPL*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBBPDLPAIPL_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::GHMINCEANHG*>* FALBGMBIMLP()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::GHMINCEANHG*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBBPDLPAIPL_FALBGMBIMLP_OFFSET))(this);
		}

		::System::UInt32 DKHEMJGCFIA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CBBPDLPAIPL_DKHEMJGCFIA_OFFSET))(this);
		}

		::System::Void OLPCNEADPCP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CBBPDLPAIPL_OLPCNEADPCP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CBBPDLPAIPL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CBBPDLPAIPL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CBBPDLPAIPL*))((::PBYTE)hIl2Cpp + CBBPDLPAIPL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CBBPDLPAIPL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBBPDLPAIPL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CBBPDLPAIPL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CBBPDLPAIPL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CBBPDLPAIPL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CBBPDLPAIPL*))((::PBYTE)hIl2Cpp + CBBPDLPAIPL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CBBPDLPAIPL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
