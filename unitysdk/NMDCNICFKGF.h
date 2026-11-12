#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NMDCNICFKGF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NMDCNICFKGF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F060160)
#define NMDCNICFKGF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F060380)
#define NMDCNICFKGF_CLONE_OFFSET UNITYSDK_OFFSET(0x1F05FD50)
#define NMDCNICFKGF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F05FD20)
#define NMDCNICFKGF_CTOR_OFFSET UNITYSDK_OFFSET(0x1F05FD10)
#define NMDCNICFKGF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F05FEE0)
#define NMDCNICFKGF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F05FDE0)
#define NMDCNICFKGF_GAEJCNLBMOG_OFFSET UNITYSDK_OFFSET(0x1F05FDC0)
#define NMDCNICFKGF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F060050)
#define NMDCNICFKGF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F05FCA0)
#define NMDCNICFKGF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F060220)
#define NMDCNICFKGF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F0601F0)
#define NMDCNICFKGF_NHNGGGEBOAC_OFFSET UNITYSDK_OFFSET(0x1F05FDD0)
#define NMDCNICFKGF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F05FD00)
#define NMDCNICFKGF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F060080)
#define NMDCNICFKGF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F0600E0)

inline static constexpr unsigned int NMDCNICFKGF_TypeDefinitionIndex = 30368;

	class NMDCNICFKGF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 HIOHMLINHPC; // 0x18
		static ::Google::Protobuf::MessageParser_1<::NMDCNICFKGF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NMDCNICFKGF*>**)UnitySDK::FromName("", "NMDCNICFKGF")->GetStaticField(0x714B0);
		}

		// static const ::System::Object MIFCIPEBBEN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMDCNICFKGF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NMDCNICFKGF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NMDCNICFKGF*))((::PBYTE)hIl2Cpp + NMDCNICFKGF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NMDCNICFKGF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NMDCNICFKGF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NMDCNICFKGF*>*(*)())((::PBYTE)hIl2Cpp + NMDCNICFKGF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMDCNICFKGF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NMDCNICFKGF* Clone()
		{
			return ((::NMDCNICFKGF*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMDCNICFKGF_CLONE_OFFSET))(this);
		}

		::System::UInt32 GAEJCNLBMOG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NMDCNICFKGF_GAEJCNLBMOG_OFFSET))(this);
		}

		::System::Void NHNGGGEBOAC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NMDCNICFKGF_NHNGGGEBOAC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NMDCNICFKGF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NMDCNICFKGF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NMDCNICFKGF*))((::PBYTE)hIl2Cpp + NMDCNICFKGF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NMDCNICFKGF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMDCNICFKGF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NMDCNICFKGF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NMDCNICFKGF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NMDCNICFKGF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NMDCNICFKGF*))((::PBYTE)hIl2Cpp + NMDCNICFKGF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NMDCNICFKGF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
