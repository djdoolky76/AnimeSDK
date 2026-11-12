#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KIBIPJKMLBM;
class MCHADDCNKPC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MCHADDCNKPC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FD3ECB0)
#define MCHADDCNKPC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FD3EF90)
#define MCHADDCNKPC_CLONE_OFFSET UNITYSDK_OFFSET(0x1FD3E690)
#define MCHADDCNKPC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FD3E620)
#define MCHADDCNKPC_CTOR_OFFSET UNITYSDK_OFFSET(0x1FD3E610)
#define MCHADDCNKPC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FD3E8A0)
#define MCHADDCNKPC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FD3E730)
#define MCHADDCNKPC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FD3EB70)
#define MCHADDCNKPC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FD3E5D0)
#define MCHADDCNKPC_MBNMLONMDIC_OFFSET UNITYSDK_OFFSET(0x1FD3E710)
#define MCHADDCNKPC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FD3EDC0)
#define MCHADDCNKPC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FD3ED10)
#define MCHADDCNKPC_NGOLKFONAMD_OFFSET UNITYSDK_OFFSET(0x1FD3E720)
#define MCHADDCNKPC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FD3E600)
#define MCHADDCNKPC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FD3EBC0)
#define MCHADDCNKPC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FD3EC20)

inline static constexpr unsigned int MCHADDCNKPC_TypeDefinitionIndex = 35660;

	class MCHADDCNKPC : public ::System::Object
	{
	public:
		::KIBIPJKMLBM* NFLFBPDADPE; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::MCHADDCNKPC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MCHADDCNKPC*>**)UnitySDK::FromName("", "MCHADDCNKPC")->GetStaticField(0x4E060);
		}

		// static const ::System::Object KFABEHIKFNO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCHADDCNKPC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MCHADDCNKPC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MCHADDCNKPC*))((::PBYTE)hIl2Cpp + MCHADDCNKPC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MCHADDCNKPC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MCHADDCNKPC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MCHADDCNKPC*>*(*)())((::PBYTE)hIl2Cpp + MCHADDCNKPC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCHADDCNKPC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MCHADDCNKPC* Clone()
		{
			return ((::MCHADDCNKPC*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCHADDCNKPC_CLONE_OFFSET))(this);
		}

		::KIBIPJKMLBM* MBNMLONMDIC()
		{
			return ((::KIBIPJKMLBM*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCHADDCNKPC_MBNMLONMDIC_OFFSET))(this);
		}

		::System::Void NGOLKFONAMD(::KIBIPJKMLBM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KIBIPJKMLBM*))((::PBYTE)hIl2Cpp + MCHADDCNKPC_NGOLKFONAMD_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MCHADDCNKPC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MCHADDCNKPC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MCHADDCNKPC*))((::PBYTE)hIl2Cpp + MCHADDCNKPC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MCHADDCNKPC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCHADDCNKPC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MCHADDCNKPC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MCHADDCNKPC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MCHADDCNKPC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MCHADDCNKPC*))((::PBYTE)hIl2Cpp + MCHADDCNKPC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MCHADDCNKPC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
