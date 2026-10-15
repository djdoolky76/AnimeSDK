#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CHKKOLCPBOH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CHKKOLCPBOH_BIOOHPIHADO_OFFSET UNITYSDK_OFFSET(0x1E0C9EF0)
#define CHKKOLCPBOH_BMDGCNADLKC_OFFSET UNITYSDK_OFFSET(0x1E0C9F20)
#define CHKKOLCPBOH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0CA350)
#define CHKKOLCPBOH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0CA600)
#define CHKKOLCPBOH_CLCNPIJOIBL_OFFSET UNITYSDK_OFFSET(0x1E0C9F00)
#define CHKKOLCPBOH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0C9EC0)
#define CHKKOLCPBOH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0C9E30)
#define CHKKOLCPBOH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0C9DE0)
#define CHKKOLCPBOH_EEBLEFFIHBP_OFFSET UNITYSDK_OFFSET(0x1E0C9F10)
#define CHKKOLCPBOH_EHLGLIEEOEC_OFFSET UNITYSDK_OFFSET(0x1E0C9F30)
#define CHKKOLCPBOH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0C9FC0)
#define CHKKOLCPBOH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0C9F40)
#define CHKKOLCPBOH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0CA0C0)
#define CHKKOLCPBOH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E0C9DA0)
#define CHKKOLCPBOH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0CA510)
#define CHKKOLCPBOH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0CA4B0)
#define CHKKOLCPBOH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0C9DD0)
#define CHKKOLCPBOH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0CA1C0)
#define CHKKOLCPBOH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0CA220)

inline static constexpr unsigned int CHKKOLCPBOH_TypeDefinitionIndex = 32386;

	class CHKKOLCPBOH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* OMJDOBGDJHM; // 0x18
		::System::UInt32 PLKGEBACJMA; // 0x20
		::System::UInt32 MGPCOLIAECE; // 0x24
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "CHKKOLCPBOH")->GetStaticField(0x16C00);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_JIGKJHDHADH()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "CHKKOLCPBOH")->GetStaticField(0x16C08);
		}

		// static const ::System::Object BOGFCKKNGJB; // 0x0
		// static const ::System::Object OEAKKPCOOJF; // 0x0
		// static const ::System::Object OHPFIJCJOOE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHKKOLCPBOH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CHKKOLCPBOH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CHKKOLCPBOH*))((::PBYTE)hIl2Cpp + CHKKOLCPBOH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CHKKOLCPBOH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + CHKKOLCPBOH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHKKOLCPBOH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CHKKOLCPBOH* Clone()
		{
			return ((::CHKKOLCPBOH*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHKKOLCPBOH_CLONE_OFFSET))(this);
		}

		::System::UInt32 BIOOHPIHADO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CHKKOLCPBOH_BIOOHPIHADO_OFFSET))(this);
		}

		::System::Void CLCNPIJOIBL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CHKKOLCPBOH_CLCNPIJOIBL_OFFSET))(this, a1);
		}

		::System::UInt32 EEBLEFFIHBP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CHKKOLCPBOH_EEBLEFFIHBP_OFFSET))(this);
		}

		::System::Void BMDGCNADLKC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CHKKOLCPBOH_BMDGCNADLKC_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* EHLGLIEEOEC()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHKKOLCPBOH_EHLGLIEEOEC_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CHKKOLCPBOH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CHKKOLCPBOH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CHKKOLCPBOH*))((::PBYTE)hIl2Cpp + CHKKOLCPBOH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CHKKOLCPBOH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHKKOLCPBOH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CHKKOLCPBOH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CHKKOLCPBOH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CHKKOLCPBOH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CHKKOLCPBOH*))((::PBYTE)hIl2Cpp + CHKKOLCPBOH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CHKKOLCPBOH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
