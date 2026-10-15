#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NOHPJFOGFLM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NOHPJFOGFLM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB5E4C0)
#define NOHPJFOGFLM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB5E790)
#define NOHPJFOGFLM_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB5E0C0)
#define NOHPJFOGFLM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB5E090)
#define NOHPJFOGFLM_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB5E080)
#define NOHPJFOGFLM_DFENDJFEOJF_OFFSET UNITYSDK_OFFSET(0x1EB5E140)
#define NOHPJFOGFLM_EAFHNCNPEGE_OFFSET UNITYSDK_OFFSET(0x1EB5E130)
#define NOHPJFOGFLM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB5E280)
#define NOHPJFOGFLM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB5E170)
#define NOHPJFOGFLM_FJNIJBIIFGO_OFFSET UNITYSDK_OFFSET(0x1EB5E150)
#define NOHPJFOGFLM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB5E350)
#define NOHPJFOGFLM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB5E010)
#define NOHPJFOGFLM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB5E610)
#define NOHPJFOGFLM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB5E5D0)
#define NOHPJFOGFLM_NGCIBAOKDNB_OFFSET UNITYSDK_OFFSET(0x1EB5E160)
#define NOHPJFOGFLM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB5E070)
#define NOHPJFOGFLM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB5E380)
#define NOHPJFOGFLM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB5E3E0)

inline static constexpr unsigned int NOHPJFOGFLM_TypeDefinitionIndex = 27987;

	class NOHPJFOGFLM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 IBBDNAAMBOF; // 0x18
		::System::UInt32 NDFIDCNNGMJ; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::NOHPJFOGFLM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NOHPJFOGFLM*>**)UnitySDK::FromName("", "NOHPJFOGFLM")->GetStaticField(0xB4F0);
		}

		// static const ::System::Object DFAHNEMAMLA; // 0x0
		// static const ::System::Object KLJANMLJHEF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHPJFOGFLM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NOHPJFOGFLM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NOHPJFOGFLM*))((::PBYTE)hIl2Cpp + NOHPJFOGFLM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NOHPJFOGFLM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NOHPJFOGFLM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NOHPJFOGFLM*>*(*)())((::PBYTE)hIl2Cpp + NOHPJFOGFLM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHPJFOGFLM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NOHPJFOGFLM* Clone()
		{
			return ((::NOHPJFOGFLM*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHPJFOGFLM_CLONE_OFFSET))(this);
		}

		::System::UInt32 EAFHNCNPEGE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHPJFOGFLM_EAFHNCNPEGE_OFFSET))(this);
		}

		::System::Void DFENDJFEOJF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NOHPJFOGFLM_DFENDJFEOJF_OFFSET))(this, a1);
		}

		::System::UInt32 FJNIJBIIFGO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHPJFOGFLM_FJNIJBIIFGO_OFFSET))(this);
		}

		::System::Void NGCIBAOKDNB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NOHPJFOGFLM_NGCIBAOKDNB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NOHPJFOGFLM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NOHPJFOGFLM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NOHPJFOGFLM*))((::PBYTE)hIl2Cpp + NOHPJFOGFLM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHPJFOGFLM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHPJFOGFLM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NOHPJFOGFLM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHPJFOGFLM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NOHPJFOGFLM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NOHPJFOGFLM*))((::PBYTE)hIl2Cpp + NOHPJFOGFLM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NOHPJFOGFLM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
