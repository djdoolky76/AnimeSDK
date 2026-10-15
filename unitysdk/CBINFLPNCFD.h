#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CBINFLPNCFD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CBINFLPNCFD_AGJCEKCCBIM_OFFSET UNITYSDK_OFFSET(0x1E06BBE0)
#define CBINFLPNCFD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E06BF40)
#define CBINFLPNCFD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E06C2D0)
#define CBINFLPNCFD_CLGNLFIBNBO_OFFSET UNITYSDK_OFFSET(0x1E06BC10)
#define CBINFLPNCFD_CLONE_OFFSET UNITYSDK_OFFSET(0x1E06BB50)
#define CBINFLPNCFD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E06BB10)
#define CBINFLPNCFD_CTOR_OFFSET UNITYSDK_OFFSET(0x1E06BB00)
#define CBINFLPNCFD_DJOOFABHMHD_OFFSET UNITYSDK_OFFSET(0x1E06BC20)
#define CBINFLPNCFD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E06BCB0)
#define CBINFLPNCFD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E06BC30)
#define CBINFLPNCFD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E06BD80)
#define CBINFLPNCFD_GIAELBCNMNF_OFFSET UNITYSDK_OFFSET(0x1E06BBD0)
#define CBINFLPNCFD_HEAAAHGAAAM_OFFSET UNITYSDK_OFFSET(0x1E06BC00)
#define CBINFLPNCFD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E06BA90)
#define CBINFLPNCFD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E06C120)
#define CBINFLPNCFD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E06C0D0)
#define CBINFLPNCFD_OGFFLIBDIOP_OFFSET UNITYSDK_OFFSET(0x1E06BBF0)
#define CBINFLPNCFD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E06BAF0)
#define CBINFLPNCFD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E06BDB0)
#define CBINFLPNCFD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E06BE10)

inline static constexpr unsigned int CBINFLPNCFD_TypeDefinitionIndex = 25136;

	class CBINFLPNCFD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 AEHEGPLHKJH; // 0x18
		::System::UInt32 DBAIOJNLCJF; // 0x1C
		::System::UInt32 CLMGMDLHLHE; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "CBINFLPNCFD")->GetStaticField(0xC7A0);
		}

		// static const ::System::Object BEKKJEALIFD; // 0x0
		// static const ::System::Object BPCPDHKJOFP; // 0x0
		// static const ::System::Object NLBPDAIIOHD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBINFLPNCFD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CBINFLPNCFD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CBINFLPNCFD*))((::PBYTE)hIl2Cpp + CBINFLPNCFD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CBINFLPNCFD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + CBINFLPNCFD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBINFLPNCFD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CBINFLPNCFD* Clone()
		{
			return ((::CBINFLPNCFD*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBINFLPNCFD_CLONE_OFFSET))(this);
		}

		::System::UInt32 GIAELBCNMNF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CBINFLPNCFD_GIAELBCNMNF_OFFSET))(this);
		}

		::System::Void AGJCEKCCBIM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CBINFLPNCFD_AGJCEKCCBIM_OFFSET))(this, a1);
		}

		::System::UInt32 OGFFLIBDIOP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CBINFLPNCFD_OGFFLIBDIOP_OFFSET))(this);
		}

		::System::Void HEAAAHGAAAM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CBINFLPNCFD_HEAAAHGAAAM_OFFSET))(this, a1);
		}

		::System::UInt32 CLGNLFIBNBO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CBINFLPNCFD_CLGNLFIBNBO_OFFSET))(this);
		}

		::System::Void DJOOFABHMHD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CBINFLPNCFD_DJOOFABHMHD_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CBINFLPNCFD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CBINFLPNCFD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CBINFLPNCFD*))((::PBYTE)hIl2Cpp + CBINFLPNCFD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CBINFLPNCFD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBINFLPNCFD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CBINFLPNCFD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CBINFLPNCFD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CBINFLPNCFD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CBINFLPNCFD*))((::PBYTE)hIl2Cpp + CBINFLPNCFD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CBINFLPNCFD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
