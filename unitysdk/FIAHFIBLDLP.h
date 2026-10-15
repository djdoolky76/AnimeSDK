#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FIAHFIBLDLP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FIAHFIBLDLP_ADHDFEOFJNM_OFFSET UNITYSDK_OFFSET(0x1E366EA0)
#define FIAHFIBLDLP_AOFBBABEJCB_OFFSET UNITYSDK_OFFSET(0x1E366E60)
#define FIAHFIBLDLP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E367220)
#define FIAHFIBLDLP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3675A0)
#define FIAHFIBLDLP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E366E00)
#define FIAHFIBLDLP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E366DC0)
#define FIAHFIBLDLP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E366DB0)
#define FIAHFIBLDLP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E366F90)
#define FIAHFIBLDLP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E366EB0)
#define FIAHFIBLDLP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E367060)
#define FIAHFIBLDLP_IPLBECBNJLK_OFFSET UNITYSDK_OFFSET(0x1E366E70)
#define FIAHFIBLDLP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E366D70)
#define FIAHFIBLDLP_LKGJAFJLNMM_OFFSET UNITYSDK_OFFSET(0x1E366E90)
#define FIAHFIBLDLP_LMLKAECMDNH_OFFSET UNITYSDK_OFFSET(0x1E366E80)
#define FIAHFIBLDLP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E367400)
#define FIAHFIBLDLP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3673B0)
#define FIAHFIBLDLP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E366DA0)
#define FIAHFIBLDLP_PPBHLLMLNLH_OFFSET UNITYSDK_OFFSET(0x1E366E50)
#define FIAHFIBLDLP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E367090)
#define FIAHFIBLDLP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3670F0)

inline static constexpr unsigned int FIAHFIBLDLP_TypeDefinitionIndex = 34007;

	class FIAHFIBLDLP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 BHFEEGICLMK; // 0x18
		::System::UInt32 HKMEMBIPHAN; // 0x1C
		::System::UInt32 DKLCPIAINIK; // 0x20
		static ::Google::Protobuf::MessageParser_1<::FIAHFIBLDLP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FIAHFIBLDLP*>**)UnitySDK::FromName("", "FIAHFIBLDLP")->GetStaticField(0x57500);
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

		static ::Google::Protobuf::MessageParser_1<::FIAHFIBLDLP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FIAHFIBLDLP*>*(*)())((::PBYTE)hIl2Cpp + FIAHFIBLDLP_JJGHOBBFNJD_OFFSET))();
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
