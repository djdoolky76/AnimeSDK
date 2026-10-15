#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FIAHFIBLDLP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FIAHFIBLDLP_ADHDFEOFJNM_OFFSET UNITYSDK_OFFSET(0x1E394500)
#define FIAHFIBLDLP_AOFBBABEJCB_OFFSET UNITYSDK_OFFSET(0x1E3944C0)
#define FIAHFIBLDLP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E394880)
#define FIAHFIBLDLP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E394C00)
#define FIAHFIBLDLP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E394460)
#define FIAHFIBLDLP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E394420)
#define FIAHFIBLDLP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E394410)
#define FIAHFIBLDLP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3945F0)
#define FIAHFIBLDLP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E394510)
#define FIAHFIBLDLP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3946C0)
#define FIAHFIBLDLP_IPLBECBNJLK_OFFSET UNITYSDK_OFFSET(0x1E3944D0)
#define FIAHFIBLDLP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E3943D0)
#define FIAHFIBLDLP_LKGJAFJLNMM_OFFSET UNITYSDK_OFFSET(0x1E3944F0)
#define FIAHFIBLDLP_LMLKAECMDNH_OFFSET UNITYSDK_OFFSET(0x1E3944E0)
#define FIAHFIBLDLP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E394A60)
#define FIAHFIBLDLP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E394A10)
#define FIAHFIBLDLP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E394400)
#define FIAHFIBLDLP_PPBHLLMLNLH_OFFSET UNITYSDK_OFFSET(0x1E3944B0)
#define FIAHFIBLDLP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3946F0)
#define FIAHFIBLDLP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E394750)

inline static constexpr unsigned int FIAHFIBLDLP_TypeDefinitionIndex = 34007;

	class FIAHFIBLDLP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 DKLCPIAINIK; // 0x18
		::System::UInt32 HKMEMBIPHAN; // 0x1C
		::System::UInt32 BHFEEGICLMK; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "FIAHFIBLDLP")->GetStaticField(0x5FE10);
		}

		// static const ::System::Object JFFKLDOPFOJ; // 0x0
		// static const ::System::Object OEMNIDFIJEO; // 0x0
		// static const ::System::Object BKCLJIHIJIJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIAHFIBLDLP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FIAHFIBLDLP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FIAHFIBLDLP*))((::PBYTE)hIl2Cpp + FIAHFIBLDLP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FIAHFIBLDLP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + FIAHFIBLDLP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIAHFIBLDLP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FIAHFIBLDLP* Clone()
		{
			return ((::FIAHFIBLDLP*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIAHFIBLDLP_CLONE_OFFSET))(this);
		}

		::System::UInt32 PPBHLLMLNLH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FIAHFIBLDLP_PPBHLLMLNLH_OFFSET))(this);
		}

		::System::Void AOFBBABEJCB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FIAHFIBLDLP_AOFBBABEJCB_OFFSET))(this, a1);
		}

		::System::UInt32 IPLBECBNJLK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FIAHFIBLDLP_IPLBECBNJLK_OFFSET))(this);
		}

		::System::Void LMLKAECMDNH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FIAHFIBLDLP_LMLKAECMDNH_OFFSET))(this, a1);
		}

		::System::UInt32 LKGJAFJLNMM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FIAHFIBLDLP_LKGJAFJLNMM_OFFSET))(this);
		}

		::System::Void ADHDFEOFJNM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FIAHFIBLDLP_ADHDFEOFJNM_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FIAHFIBLDLP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FIAHFIBLDLP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FIAHFIBLDLP*))((::PBYTE)hIl2Cpp + FIAHFIBLDLP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FIAHFIBLDLP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIAHFIBLDLP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FIAHFIBLDLP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FIAHFIBLDLP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FIAHFIBLDLP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FIAHFIBLDLP*))((::PBYTE)hIl2Cpp + FIAHFIBLDLP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FIAHFIBLDLP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
