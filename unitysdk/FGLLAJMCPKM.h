#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FGLLAJMCPKM;
class PGECGKEKFNC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FGLLAJMCPKM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E354C50)
#define FGLLAJMCPKM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E354FF0)
#define FGLLAJMCPKM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E354740)
#define FGLLAJMCPKM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E354680)
#define FGLLAJMCPKM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E354630)
#define FGLLAJMCPKM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E354950)
#define FGLLAJMCPKM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3547C0)
#define FGLLAJMCPKM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E354A70)
#define FGLLAJMCPKM_GLDKEOMJEBI_OFFSET UNITYSDK_OFFSET(0x1E354790)
#define FGLLAJMCPKM_HLEOFMBAIKL_OFFSET UNITYSDK_OFFSET(0x1E3547B0)
#define FGLLAJMCPKM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E3545C0)
#define FGLLAJMCPKM_JPAPEJBMCON_OFFSET UNITYSDK_OFFSET(0x1E3547A0)
#define FGLLAJMCPKM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E354E20)
#define FGLLAJMCPKM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E354D80)
#define FGLLAJMCPKM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E354620)
#define FGLLAJMCPKM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E354AE0)
#define FGLLAJMCPKM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E354B40)

inline static constexpr unsigned int FGLLAJMCPKM_TypeDefinitionIndex = 29488;

	class FGLLAJMCPKM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::PGECGKEKFNC*>* EJGPLBIGAJK; // 0x18
		::System::UInt32 BIBJLJPBEGM; // 0x20
		static ::Google::Protobuf::MessageParser_1<::FGLLAJMCPKM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FGLLAJMCPKM*>**)UnitySDK::FromName("", "FGLLAJMCPKM")->GetStaticField(0x559B0);
		}

		static ::Google::Protobuf::FieldCodec_1<::PGECGKEKFNC*>** StaticGet_MEKNLBBHAND()
		{
			return (::Google::Protobuf::FieldCodec_1<::PGECGKEKFNC*>**)UnitySDK::FromName("", "FGLLAJMCPKM")->GetStaticField(0x559B8);
		}

		// static const ::System::Object BAAJCNPLNLK; // 0x0
		// static const ::System::Object MEEPAJDICIE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGLLAJMCPKM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FGLLAJMCPKM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FGLLAJMCPKM*))((::PBYTE)hIl2Cpp + FGLLAJMCPKM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FGLLAJMCPKM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FGLLAJMCPKM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FGLLAJMCPKM*>*(*)())((::PBYTE)hIl2Cpp + FGLLAJMCPKM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGLLAJMCPKM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FGLLAJMCPKM* Clone()
		{
			return ((::FGLLAJMCPKM*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGLLAJMCPKM_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::PGECGKEKFNC*>* GLDKEOMJEBI()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::PGECGKEKFNC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGLLAJMCPKM_GLDKEOMJEBI_OFFSET))(this);
		}

		::System::UInt32 JPAPEJBMCON()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FGLLAJMCPKM_JPAPEJBMCON_OFFSET))(this);
		}

		::System::Void HLEOFMBAIKL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FGLLAJMCPKM_HLEOFMBAIKL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FGLLAJMCPKM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FGLLAJMCPKM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FGLLAJMCPKM*))((::PBYTE)hIl2Cpp + FGLLAJMCPKM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FGLLAJMCPKM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGLLAJMCPKM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FGLLAJMCPKM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FGLLAJMCPKM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FGLLAJMCPKM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FGLLAJMCPKM*))((::PBYTE)hIl2Cpp + FGLLAJMCPKM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FGLLAJMCPKM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
