#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BGFBIFLPBHD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BGFBIFLPBHD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA478A0)
#define BGFBIFLPBHD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA47AC0)
#define BGFBIFLPBHD_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA47490)
#define BGFBIFLPBHD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA47460)
#define BGFBIFLPBHD_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA47450)
#define BGFBIFLPBHD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA47620)
#define BGFBIFLPBHD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA47520)
#define BGFBIFLPBHD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA47790)
#define BGFBIFLPBHD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA473E0)
#define BGFBIFLPBHD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA47960)
#define BGFBIFLPBHD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA47930)
#define BGFBIFLPBHD_MMMGPIHKCPP_OFFSET UNITYSDK_OFFSET(0x1EA47500)
#define BGFBIFLPBHD_OMHBMDBPMDJ_OFFSET UNITYSDK_OFFSET(0x1EA47510)
#define BGFBIFLPBHD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA47440)
#define BGFBIFLPBHD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA477C0)
#define BGFBIFLPBHD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA47820)

inline static constexpr unsigned int BGFBIFLPBHD_TypeDefinitionIndex = 25503;

	class BGFBIFLPBHD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 KNDADMADOOH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::BGFBIFLPBHD*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BGFBIFLPBHD*>**)UnitySDK::FromName("", "BGFBIFLPBHD")->GetStaticField(0x54980);
		}

		// static const ::System::Object EEOCIAMHNPK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGFBIFLPBHD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BGFBIFLPBHD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BGFBIFLPBHD*))((::PBYTE)hIl2Cpp + BGFBIFLPBHD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BGFBIFLPBHD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BGFBIFLPBHD*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BGFBIFLPBHD*>*(*)())((::PBYTE)hIl2Cpp + BGFBIFLPBHD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGFBIFLPBHD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BGFBIFLPBHD* Clone()
		{
			return ((::BGFBIFLPBHD*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGFBIFLPBHD_CLONE_OFFSET))(this);
		}

		::System::UInt32 MMMGPIHKCPP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGFBIFLPBHD_MMMGPIHKCPP_OFFSET))(this);
		}

		::System::Void OMHBMDBPMDJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BGFBIFLPBHD_OMHBMDBPMDJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BGFBIFLPBHD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BGFBIFLPBHD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BGFBIFLPBHD*))((::PBYTE)hIl2Cpp + BGFBIFLPBHD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGFBIFLPBHD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGFBIFLPBHD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BGFBIFLPBHD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGFBIFLPBHD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BGFBIFLPBHD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BGFBIFLPBHD*))((::PBYTE)hIl2Cpp + BGFBIFLPBHD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BGFBIFLPBHD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
