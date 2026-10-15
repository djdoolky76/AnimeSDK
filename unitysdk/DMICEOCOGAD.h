#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DMICEOCOGAD;
class KKFMGCNDHGH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DMICEOCOGAD_ANALOEDDDHD_OFFSET UNITYSDK_OFFSET(0x1E1EF800)
#define DMICEOCOGAD_AOFBBABEJCB_OFFSET UNITYSDK_OFFSET(0x1E1EF830)
#define DMICEOCOGAD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E1EFD20)
#define DMICEOCOGAD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1F00C0)
#define DMICEOCOGAD_CLONE_OFFSET UNITYSDK_OFFSET(0x1E1EF760)
#define DMICEOCOGAD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E1EF6D0)
#define DMICEOCOGAD_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1EF6C0)
#define DMICEOCOGAD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1EF9C0)
#define DMICEOCOGAD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E1EF840)
#define DMICEOCOGAD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E1EFB40)
#define DMICEOCOGAD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E1EF680)
#define DMICEOCOGAD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1EFED0)
#define DMICEOCOGAD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1EFDF0)
#define DMICEOCOGAD_OAJDGCDLFLL_OFFSET UNITYSDK_OFFSET(0x1E1EF810)
#define DMICEOCOGAD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E1EF6B0)
#define DMICEOCOGAD_PPBHLLMLNLH_OFFSET UNITYSDK_OFFSET(0x1E1EF820)
#define DMICEOCOGAD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1EFBE0)
#define DMICEOCOGAD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1EFC40)

inline static constexpr unsigned int DMICEOCOGAD_TypeDefinitionIndex = 28125;

	class DMICEOCOGAD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::KKFMGCNDHGH* CMDGAIOLHKP; // 0x18
		::System::UInt32 DKLCPIAINIK; // 0x20
		static ::Google::Protobuf::MessageParser_1<::DMICEOCOGAD*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DMICEOCOGAD*>**)UnitySDK::FromName("", "DMICEOCOGAD")->GetStaticField(0x3F250);
		}

		// static const ::System::Object BFJOJJHJAIJ; // 0x0
		// static const ::System::Object JFFKLDOPFOJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMICEOCOGAD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DMICEOCOGAD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DMICEOCOGAD*))((::PBYTE)hIl2Cpp + DMICEOCOGAD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DMICEOCOGAD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DMICEOCOGAD*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DMICEOCOGAD*>*(*)())((::PBYTE)hIl2Cpp + DMICEOCOGAD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMICEOCOGAD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DMICEOCOGAD* Clone()
		{
			return ((::DMICEOCOGAD*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMICEOCOGAD_CLONE_OFFSET))(this);
		}

		::KKFMGCNDHGH* ANALOEDDDHD()
		{
			return ((::KKFMGCNDHGH*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMICEOCOGAD_ANALOEDDDHD_OFFSET))(this);
		}

		::System::Void OAJDGCDLFLL(::KKFMGCNDHGH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KKFMGCNDHGH*))((::PBYTE)hIl2Cpp + DMICEOCOGAD_OAJDGCDLFLL_OFFSET))(this, a1);
		}

		::System::UInt32 PPBHLLMLNLH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMICEOCOGAD_PPBHLLMLNLH_OFFSET))(this);
		}

		::System::Void AOFBBABEJCB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DMICEOCOGAD_AOFBBABEJCB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DMICEOCOGAD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DMICEOCOGAD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DMICEOCOGAD*))((::PBYTE)hIl2Cpp + DMICEOCOGAD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMICEOCOGAD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMICEOCOGAD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DMICEOCOGAD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMICEOCOGAD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DMICEOCOGAD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DMICEOCOGAD*))((::PBYTE)hIl2Cpp + DMICEOCOGAD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DMICEOCOGAD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
