#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HNOENBKDPFH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HNOENBKDPFH_ACMJOLCDKMC_OFFSET UNITYSDK_OFFSET(0x1E5B4FA0)
#define HNOENBKDPFH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5B5430)
#define HNOENBKDPFH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5B5760)
#define HNOENBKDPFH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5B4F30)
#define HNOENBKDPFH_CPBLBPJOBMN_OFFSET UNITYSDK_OFFSET(0x1E5B4F80)
#define HNOENBKDPFH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5B4EA0)
#define HNOENBKDPFH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5B4E50)
#define HNOENBKDPFH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5B50E0)
#define HNOENBKDPFH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5B4FB0)
#define HNOENBKDPFH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5B51D0)
#define HNOENBKDPFH_IJFJCEOHDLE_OFFSET UNITYSDK_OFFSET(0x1E5B4F90)
#define HNOENBKDPFH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E5B4DE0)
#define HNOENBKDPFH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E5B5590)
#define HNOENBKDPFH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5B5540)
#define HNOENBKDPFH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5B4E40)
#define HNOENBKDPFH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5B52D0)
#define HNOENBKDPFH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5B5330)

inline static constexpr unsigned int HNOENBKDPFH_TypeDefinitionIndex = 28610;

	class HNOENBKDPFH : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* KDKCGFGBJNE; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 KJAENGKDFJD; // 0x20
		static ::Google::Protobuf::MessageParser_1<::HNOENBKDPFH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HNOENBKDPFH*>**)UnitySDK::FromName("", "HNOENBKDPFH")->GetStaticField(0x3C010);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_PGABLILFKNH()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "HNOENBKDPFH")->GetStaticField(0x3C018);
		}

		// static const ::System::Object PIACMPBJOIK; // 0x0
		// static const ::System::Object EDCOLDPLGAA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNOENBKDPFH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HNOENBKDPFH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HNOENBKDPFH*))((::PBYTE)hIl2Cpp + HNOENBKDPFH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HNOENBKDPFH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HNOENBKDPFH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HNOENBKDPFH*>*(*)())((::PBYTE)hIl2Cpp + HNOENBKDPFH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNOENBKDPFH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HNOENBKDPFH* Clone()
		{
			return ((::HNOENBKDPFH*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNOENBKDPFH_CLONE_OFFSET))(this);
		}

		::System::UInt32 CPBLBPJOBMN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HNOENBKDPFH_CPBLBPJOBMN_OFFSET))(this);
		}

		::System::Void IJFJCEOHDLE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HNOENBKDPFH_IJFJCEOHDLE_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* ACMJOLCDKMC()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNOENBKDPFH_ACMJOLCDKMC_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HNOENBKDPFH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HNOENBKDPFH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HNOENBKDPFH*))((::PBYTE)hIl2Cpp + HNOENBKDPFH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HNOENBKDPFH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNOENBKDPFH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HNOENBKDPFH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HNOENBKDPFH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HNOENBKDPFH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HNOENBKDPFH*))((::PBYTE)hIl2Cpp + HNOENBKDPFH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HNOENBKDPFH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
