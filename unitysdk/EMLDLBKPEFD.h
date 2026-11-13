#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EMLDLBKPEFD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EMLDLBKPEFD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x206DCAB0)
#define EMLDLBKPEFD_CCTOR_OFFSET UNITYSDK_OFFSET(0x206DCD30)
#define EMLDLBKPEFD_CLONE_OFFSET UNITYSDK_OFFSET(0x206DC5E0)
#define EMLDLBKPEFD_COOJCNNMGGP_OFFSET UNITYSDK_OFFSET(0x206DC630)
#define EMLDLBKPEFD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x206DC550)
#define EMLDLBKPEFD_CTOR_OFFSET UNITYSDK_OFFSET(0x206DC500)
#define EMLDLBKPEFD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x206DC740)
#define EMLDLBKPEFD_EQUALS_OFFSET UNITYSDK_OFFSET(0x206DC640)
#define EMLDLBKPEFD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x206DC840)
#define EMLDLBKPEFD_GOBCLJFPCAF_OFFSET UNITYSDK_OFFSET(0x206DC620)
#define EMLDLBKPEFD_IEDOGJFAGIE_OFFSET UNITYSDK_OFFSET(0x206DC610)
#define EMLDLBKPEFD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x206DC4C0)
#define EMLDLBKPEFD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x206DCB70)
#define EMLDLBKPEFD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x206DCB20)
#define EMLDLBKPEFD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x206DC4F0)
#define EMLDLBKPEFD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x206DC940)
#define EMLDLBKPEFD_WRITETO_OFFSET UNITYSDK_OFFSET(0x206DC9A0)

inline static constexpr unsigned int EMLDLBKPEFD_TypeDefinitionIndex = 31116;

	class EMLDLBKPEFD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* HIBIIFNLNJJ; // 0x18
		::System::Boolean DKDLLJDGCCB; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_FLJBJMDPFHH()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "EMLDLBKPEFD")->GetStaticField(0x4A620);
		}

		static ::Google::Protobuf::MessageParser_1<::EMLDLBKPEFD*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::EMLDLBKPEFD*>**)UnitySDK::FromName("", "EMLDLBKPEFD")->GetStaticField(0x4A628);
		}

		// static const ::System::Object IICKCIKPOKO; // 0x0
		// static const ::System::Object DGBMBFCBOMK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMLDLBKPEFD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EMLDLBKPEFD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EMLDLBKPEFD*))((::PBYTE)hIl2Cpp + EMLDLBKPEFD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EMLDLBKPEFD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::EMLDLBKPEFD*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::EMLDLBKPEFD*>*(*)())((::PBYTE)hIl2Cpp + EMLDLBKPEFD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMLDLBKPEFD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EMLDLBKPEFD* Clone()
		{
			return ((::EMLDLBKPEFD*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMLDLBKPEFD_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* IEDOGJFAGIE()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMLDLBKPEFD_IEDOGJFAGIE_OFFSET))(this);
		}

		::System::Boolean GOBCLJFPCAF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EMLDLBKPEFD_GOBCLJFPCAF_OFFSET))(this);
		}

		::System::Void COOJCNNMGGP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EMLDLBKPEFD_COOJCNNMGGP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EMLDLBKPEFD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EMLDLBKPEFD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EMLDLBKPEFD*))((::PBYTE)hIl2Cpp + EMLDLBKPEFD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EMLDLBKPEFD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMLDLBKPEFD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EMLDLBKPEFD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EMLDLBKPEFD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EMLDLBKPEFD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EMLDLBKPEFD*))((::PBYTE)hIl2Cpp + EMLDLBKPEFD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EMLDLBKPEFD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
