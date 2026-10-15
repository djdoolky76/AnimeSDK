#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GFDJLBJPNMC;
class JGPMBLAJJJG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GFDJLBJPNMC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E439180)
#define GFDJLBJPNMC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E439480)
#define GFDJLBJPNMC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E438D00)
#define GFDJLBJPNMC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E438C50)
#define GFDJLBJPNMC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E438C00)
#define GFDJLBJPNMC_DKOHEKOFACL_OFFSET UNITYSDK_OFFSET(0x1E438D50)
#define GFDJLBJPNMC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E438EE0)
#define GFDJLBJPNMC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E438D60)
#define GFDJLBJPNMC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E439000)
#define GFDJLBJPNMC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E438B90)
#define GFDJLBJPNMC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4392C0)
#define GFDJLBJPNMC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E439220)
#define GFDJLBJPNMC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E438BF0)
#define GFDJLBJPNMC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E439070)
#define GFDJLBJPNMC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4390D0)

inline static constexpr unsigned int GFDJLBJPNMC_TypeDefinitionIndex = 25164;

	class GFDJLBJPNMC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::JGPMBLAJJJG*>* OHKFNPKLNPA; // 0x18
		static ::Google::Protobuf::FieldCodec_1<::JGPMBLAJJJG*>** StaticGet_LLPOHHGCHJH()
		{
			return (::Google::Protobuf::FieldCodec_1<::JGPMBLAJJJG*>**)UnitySDK::FromName("", "GFDJLBJPNMC")->GetStaticField(0x12DA0);
		}

		static ::Google::Protobuf::MessageParser_1<::GFDJLBJPNMC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GFDJLBJPNMC*>**)UnitySDK::FromName("", "GFDJLBJPNMC")->GetStaticField(0x12DA8);
		}

		// static const ::System::Object CJPFBABILKP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFDJLBJPNMC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GFDJLBJPNMC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GFDJLBJPNMC*))((::PBYTE)hIl2Cpp + GFDJLBJPNMC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GFDJLBJPNMC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GFDJLBJPNMC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GFDJLBJPNMC*>*(*)())((::PBYTE)hIl2Cpp + GFDJLBJPNMC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFDJLBJPNMC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GFDJLBJPNMC* Clone()
		{
			return ((::GFDJLBJPNMC*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFDJLBJPNMC_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::JGPMBLAJJJG*>* DKOHEKOFACL()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::JGPMBLAJJJG*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFDJLBJPNMC_DKOHEKOFACL_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GFDJLBJPNMC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GFDJLBJPNMC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GFDJLBJPNMC*))((::PBYTE)hIl2Cpp + GFDJLBJPNMC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GFDJLBJPNMC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFDJLBJPNMC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GFDJLBJPNMC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GFDJLBJPNMC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GFDJLBJPNMC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GFDJLBJPNMC*))((::PBYTE)hIl2Cpp + GFDJLBJPNMC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GFDJLBJPNMC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
