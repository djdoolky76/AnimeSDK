#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NNDKLIBALLC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NNDKLIBALLC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB80530)
#define NNDKLIBALLC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB80800)
#define NNDKLIBALLC_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB80130)
#define NNDKLIBALLC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB80100)
#define NNDKLIBALLC_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB800F0)
#define NNDKLIBALLC_DCBGNHEKEHL_OFFSET UNITYSDK_OFFSET(0x1EB801B0)
#define NNDKLIBALLC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB802F0)
#define NNDKLIBALLC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB801E0)
#define NNDKLIBALLC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB803C0)
#define NNDKLIBALLC_GHBBCPIBEPG_OFFSET UNITYSDK_OFFSET(0x1EB801D0)
#define NNDKLIBALLC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB80080)
#define NNDKLIBALLC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB80680)
#define NNDKLIBALLC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB80640)
#define NNDKLIBALLC_MFKBCBOKOCH_OFFSET UNITYSDK_OFFSET(0x1EB801A0)
#define NNDKLIBALLC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB800E0)
#define NNDKLIBALLC_PLJJMLKIJPA_OFFSET UNITYSDK_OFFSET(0x1EB801C0)
#define NNDKLIBALLC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB803F0)
#define NNDKLIBALLC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB80450)

inline static constexpr unsigned int NNDKLIBALLC_TypeDefinitionIndex = 31141;

	class NNDKLIBALLC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 ADKJHHDHJLB; // 0x18
		::System::UInt32 OJJIEKJCHMD; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "NNDKLIBALLC")->GetStaticField(0x28E0);
		}

		// static const ::System::Object EOFKGOFAAPP; // 0x0
		// static const ::System::Object GENFPMAKLPB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNDKLIBALLC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NNDKLIBALLC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NNDKLIBALLC*))((::PBYTE)hIl2Cpp + NNDKLIBALLC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NNDKLIBALLC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + NNDKLIBALLC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNDKLIBALLC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NNDKLIBALLC* Clone()
		{
			return ((::NNDKLIBALLC*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNDKLIBALLC_CLONE_OFFSET))(this);
		}

		::System::UInt32 MFKBCBOKOCH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NNDKLIBALLC_MFKBCBOKOCH_OFFSET))(this);
		}

		::System::Void DCBGNHEKEHL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NNDKLIBALLC_DCBGNHEKEHL_OFFSET))(this, a1);
		}

		::System::UInt32 PLJJMLKIJPA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NNDKLIBALLC_PLJJMLKIJPA_OFFSET))(this);
		}

		::System::Void GHBBCPIBEPG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NNDKLIBALLC_GHBBCPIBEPG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NNDKLIBALLC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NNDKLIBALLC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NNDKLIBALLC*))((::PBYTE)hIl2Cpp + NNDKLIBALLC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NNDKLIBALLC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNDKLIBALLC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NNDKLIBALLC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NNDKLIBALLC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NNDKLIBALLC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NNDKLIBALLC*))((::PBYTE)hIl2Cpp + NNDKLIBALLC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NNDKLIBALLC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
