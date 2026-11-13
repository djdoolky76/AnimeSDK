#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ACFLKPFDHIM;
class BFMDDFLMAKD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BFMDDFLMAKD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FA09080)
#define BFMDDFLMAKD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA09540)
#define BFMDDFLMAKD_CLONE_OFFSET UNITYSDK_OFFSET(0x1FA08C20)
#define BFMDDFLMAKD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FA08B20)
#define BFMDDFLMAKD_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA08AB0)
#define BFMDDFLMAKD_DCKAMLHKADM_OFFSET UNITYSDK_OFFSET(0x1FA08C70)
#define BFMDDFLMAKD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FA08D10)
#define BFMDDFLMAKD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FA08CB0)
#define BFMDDFLMAKD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FA08E60)
#define BFMDDFLMAKD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FA08A40)
#define BFMDDFLMAKD_JJPBLLFHHBI_OFFSET UNITYSDK_OFFSET(0x1FA08C90)
#define BFMDDFLMAKD_KKGOFMBMMAC_OFFSET UNITYSDK_OFFSET(0x1FA08C80)
#define BFMDDFLMAKD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FA092A0)
#define BFMDDFLMAKD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FA091E0)
#define BFMDDFLMAKD_MPABFGOJFMM_OFFSET UNITYSDK_OFFSET(0x1FA08CA0)
#define BFMDDFLMAKD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FA08AA0)
#define BFMDDFLMAKD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FA08EE0)
#define BFMDDFLMAKD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FA08F40)

inline static constexpr unsigned int BFMDDFLMAKD_TypeDefinitionIndex = 25996;

	class BFMDDFLMAKD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* DFFEGIMOJGB; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::ACFLKPFDHIM*>* ELBGFDFFBPH; // 0x20
		::System::UInt32 JDNEJDMHBEN; // 0x28
		static ::System::Object** StaticGet_LHGPCNNBOCL()
		{
			return (::System::Object**)UnitySDK::FromName("", "BFMDDFLMAKD")->GetStaticField(0x4C680);
		}

		static ::Google::Protobuf::FieldCodec_1<::ACFLKPFDHIM*>** StaticGet_EHPMIHMAMFE()
		{
			return (::Google::Protobuf::FieldCodec_1<::ACFLKPFDHIM*>**)UnitySDK::FromName("", "BFMDDFLMAKD")->GetStaticField(0x4C688);
		}

		static ::Google::Protobuf::MessageParser_1<::BFMDDFLMAKD*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BFMDDFLMAKD*>**)UnitySDK::FromName("", "BFMDDFLMAKD")->GetStaticField(0x4C690);
		}

		// static const ::System::Object JBKGNCCMBND; // 0x0
		// static const ::System::Object JEALEDAFMPN; // 0x0
		// static const ::System::Object ELKELHFEEEN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFMDDFLMAKD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BFMDDFLMAKD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BFMDDFLMAKD*))((::PBYTE)hIl2Cpp + BFMDDFLMAKD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BFMDDFLMAKD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BFMDDFLMAKD*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BFMDDFLMAKD*>*(*)())((::PBYTE)hIl2Cpp + BFMDDFLMAKD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFMDDFLMAKD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BFMDDFLMAKD* Clone()
		{
			return ((::BFMDDFLMAKD*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFMDDFLMAKD_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::ACFLKPFDHIM*>* DCKAMLHKADM()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::ACFLKPFDHIM*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFMDDFLMAKD_DCKAMLHKADM_OFFSET))(this);
		}

		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* KKGOFMBMMAC()
		{
			return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFMDDFLMAKD_KKGOFMBMMAC_OFFSET))(this);
		}

		::System::UInt32 JJPBLLFHHBI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BFMDDFLMAKD_JJPBLLFHHBI_OFFSET))(this);
		}

		::System::Void MPABFGOJFMM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BFMDDFLMAKD_MPABFGOJFMM_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BFMDDFLMAKD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BFMDDFLMAKD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BFMDDFLMAKD*))((::PBYTE)hIl2Cpp + BFMDDFLMAKD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BFMDDFLMAKD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFMDDFLMAKD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BFMDDFLMAKD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BFMDDFLMAKD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BFMDDFLMAKD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BFMDDFLMAKD*))((::PBYTE)hIl2Cpp + BFMDDFLMAKD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BFMDDFLMAKD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
