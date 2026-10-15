#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CAGKEDMHEOI;
class NEFBECKCJIH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NEFBECKCJIH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EAF39E0)
#define NEFBECKCJIH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAF3D00)
#define NEFBECKCJIH_CLONE_OFFSET UNITYSDK_OFFSET(0x1EAF3400)
#define NEFBECKCJIH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EAF3390)
#define NEFBECKCJIH_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAF3380)
#define NEFBECKCJIH_EMMJPJAMEFL_OFFSET UNITYSDK_OFFSET(0x1EAF34A0)
#define NEFBECKCJIH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EAF3690)
#define NEFBECKCJIH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EAF34E0)
#define NEFBECKCJIH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EAF3810)
#define NEFBECKCJIH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EAF3310)
#define NEFBECKCJIH_JLCKFMGKJPB_OFFSET UNITYSDK_OFFSET(0x1EAF34B0)
#define NEFBECKCJIH_MCOODDIIOIH_OFFSET UNITYSDK_OFFSET(0x1EAF34C0)
#define NEFBECKCJIH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EAF3B40)
#define NEFBECKCJIH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EAF3AB0)
#define NEFBECKCJIH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EAF3370)
#define NEFBECKCJIH_PMODGCHEFJC_OFFSET UNITYSDK_OFFSET(0x1EAF34D0)
#define NEFBECKCJIH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EAF38A0)
#define NEFBECKCJIH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EAF3900)

inline static constexpr unsigned int NEFBECKCJIH_TypeDefinitionIndex = 33327;

	class NEFBECKCJIH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::CAGKEDMHEOI* IPBMAGNJAML; // 0x18
		::System::UInt32 PBPJNDEHDNK; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "NEFBECKCJIH")->GetStaticField(0x48EA0);
		}

		// static const ::System::Object JOKMIFACEIK; // 0x0
		// static const ::System::Object NGPKIDLBPIA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEFBECKCJIH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NEFBECKCJIH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NEFBECKCJIH*))((::PBYTE)hIl2Cpp + NEFBECKCJIH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEFBECKCJIH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + NEFBECKCJIH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEFBECKCJIH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NEFBECKCJIH* Clone()
		{
			return ((::NEFBECKCJIH*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEFBECKCJIH_CLONE_OFFSET))(this);
		}

		::System::UInt32 EMMJPJAMEFL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEFBECKCJIH_EMMJPJAMEFL_OFFSET))(this);
		}

		::System::Void JLCKFMGKJPB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NEFBECKCJIH_JLCKFMGKJPB_OFFSET))(this, a1);
		}

		::CAGKEDMHEOI* MCOODDIIOIH()
		{
			return ((::CAGKEDMHEOI*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEFBECKCJIH_MCOODDIIOIH_OFFSET))(this);
		}

		::System::Void PMODGCHEFJC(::CAGKEDMHEOI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CAGKEDMHEOI*))((::PBYTE)hIl2Cpp + NEFBECKCJIH_PMODGCHEFJC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEFBECKCJIH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NEFBECKCJIH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NEFBECKCJIH*))((::PBYTE)hIl2Cpp + NEFBECKCJIH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEFBECKCJIH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEFBECKCJIH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NEFBECKCJIH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEFBECKCJIH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NEFBECKCJIH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NEFBECKCJIH*))((::PBYTE)hIl2Cpp + NEFBECKCJIH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NEFBECKCJIH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
