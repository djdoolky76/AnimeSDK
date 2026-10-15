#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FJEBMHIBJPL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FJEBMHIBJPL_BMMFJCHEBEP_OFFSET UNITYSDK_OFFSET(0x1E39FA00)
#define FJEBMHIBJPL_BNIGIFEHBAN_OFFSET UNITYSDK_OFFSET(0x1E39F9F0)
#define FJEBMHIBJPL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E39FD80)
#define FJEBMHIBJPL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3A0050)
#define FJEBMHIBJPL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E39F980)
#define FJEBMHIBJPL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E39F950)
#define FJEBMHIBJPL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E39F940)
#define FJEBMHIBJPL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E39FB40)
#define FJEBMHIBJPL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E39FA30)
#define FJEBMHIBJPL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E39FC10)
#define FJEBMHIBJPL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E39F8D0)
#define FJEBMHIBJPL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E39FED0)
#define FJEBMHIBJPL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E39FE90)
#define FJEBMHIBJPL_NCBMGKODPAA_OFFSET UNITYSDK_OFFSET(0x1E39FA10)
#define FJEBMHIBJPL_OJKFLNMLJNG_OFFSET UNITYSDK_OFFSET(0x1E39FA20)
#define FJEBMHIBJPL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E39F930)
#define FJEBMHIBJPL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E39FC40)
#define FJEBMHIBJPL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E39FCA0)

inline static constexpr unsigned int FJEBMHIBJPL_TypeDefinitionIndex = 28078;

	class FJEBMHIBJPL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 DOBFBELHLGF; // 0x18
		::System::UInt32 DGEBDPGMDGE; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::FJEBMHIBJPL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FJEBMHIBJPL*>**)UnitySDK::FromName("", "FJEBMHIBJPL")->GetStaticField(0x42E00);
		}

		// static const ::System::Object AMKANJMGAED; // 0x0
		// static const ::System::Object DIGJPEBBAIF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJEBMHIBJPL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FJEBMHIBJPL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FJEBMHIBJPL*))((::PBYTE)hIl2Cpp + FJEBMHIBJPL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FJEBMHIBJPL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FJEBMHIBJPL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FJEBMHIBJPL*>*(*)())((::PBYTE)hIl2Cpp + FJEBMHIBJPL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJEBMHIBJPL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FJEBMHIBJPL* Clone()
		{
			return ((::FJEBMHIBJPL*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJEBMHIBJPL_CLONE_OFFSET))(this);
		}

		::System::UInt32 BNIGIFEHBAN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FJEBMHIBJPL_BNIGIFEHBAN_OFFSET))(this);
		}

		::System::Void BMMFJCHEBEP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FJEBMHIBJPL_BMMFJCHEBEP_OFFSET))(this, a1);
		}

		::System::UInt32 NCBMGKODPAA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FJEBMHIBJPL_NCBMGKODPAA_OFFSET))(this);
		}

		::System::Void OJKFLNMLJNG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FJEBMHIBJPL_OJKFLNMLJNG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FJEBMHIBJPL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FJEBMHIBJPL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FJEBMHIBJPL*))((::PBYTE)hIl2Cpp + FJEBMHIBJPL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FJEBMHIBJPL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJEBMHIBJPL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FJEBMHIBJPL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FJEBMHIBJPL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FJEBMHIBJPL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FJEBMHIBJPL*))((::PBYTE)hIl2Cpp + FJEBMHIBJPL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FJEBMHIBJPL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
