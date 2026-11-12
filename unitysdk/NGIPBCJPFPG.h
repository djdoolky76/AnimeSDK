#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NGIPBCJPFPG;
class NNPGLCGNICI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NGIPBCJPFPG_BLBBMAGLFDL_OFFSET UNITYSDK_OFFSET(0x1FE550A0)
#define NGIPBCJPFPG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FE55570)
#define NGIPBCJPFPG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FE55860)
#define NGIPBCJPFPG_CLONE_OFFSET UNITYSDK_OFFSET(0x1FE55020)
#define NGIPBCJPFPG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FE54FB0)
#define NGIPBCJPFPG_CTOR_OFFSET UNITYSDK_OFFSET(0x1FE54FA0)
#define NGIPBCJPFPG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FE55260)
#define NGIPBCJPFPG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FE550E0)
#define NGIPBCJPFPG_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1FE550D0)
#define NGIPBCJPFPG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FE553E0)
#define NGIPBCJPFPG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FE54F60)
#define NGIPBCJPFPG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FE556C0)
#define NGIPBCJPFPG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FE55640)
#define NGIPBCJPFPG_MGBKGAPDHLG_OFFSET UNITYSDK_OFFSET(0x1FE550B0)
#define NGIPBCJPFPG_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1FE550C0)
#define NGIPBCJPFPG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FE54F90)
#define NGIPBCJPFPG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FE55430)
#define NGIPBCJPFPG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FE55490)

inline static constexpr unsigned int NGIPBCJPFPG_TypeDefinitionIndex = 30348;

	class NGIPBCJPFPG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::NNPGLCGNICI* LKDEFKKLEDJ; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::NGIPBCJPFPG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NGIPBCJPFPG*>**)UnitySDK::FromName("", "NGIPBCJPFPG")->GetStaticField(0x6A570);
		}

		// static const ::System::Object HNBHJOFPFLM; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGIPBCJPFPG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NGIPBCJPFPG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NGIPBCJPFPG*))((::PBYTE)hIl2Cpp + NGIPBCJPFPG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NGIPBCJPFPG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NGIPBCJPFPG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NGIPBCJPFPG*>*(*)())((::PBYTE)hIl2Cpp + NGIPBCJPFPG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGIPBCJPFPG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NGIPBCJPFPG* Clone()
		{
			return ((::NGIPBCJPFPG*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGIPBCJPFPG_CLONE_OFFSET))(this);
		}

		::NNPGLCGNICI* BLBBMAGLFDL()
		{
			return ((::NNPGLCGNICI*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGIPBCJPFPG_BLBBMAGLFDL_OFFSET))(this);
		}

		::System::Void MGBKGAPDHLG(::NNPGLCGNICI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NNPGLCGNICI*))((::PBYTE)hIl2Cpp + NGIPBCJPFPG_MGBKGAPDHLG_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NGIPBCJPFPG_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NGIPBCJPFPG_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NGIPBCJPFPG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NGIPBCJPFPG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NGIPBCJPFPG*))((::PBYTE)hIl2Cpp + NGIPBCJPFPG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NGIPBCJPFPG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGIPBCJPFPG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NGIPBCJPFPG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NGIPBCJPFPG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NGIPBCJPFPG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NGIPBCJPFPG*))((::PBYTE)hIl2Cpp + NGIPBCJPFPG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NGIPBCJPFPG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
