#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AGBAOKHOJJP;
class OMIIKPCJHEM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AGBAOKHOJJP_ANALOEDDDHD_OFFSET UNITYSDK_OFFSET(0x1E125EE0)
#define AGBAOKHOJJP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E126480)
#define AGBAOKHOJJP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E126830)
#define AGBAOKHOJJP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E125E40)
#define AGBAOKHOJJP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E125DB0)
#define AGBAOKHOJJP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E125DA0)
#define AGBAOKHOJJP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E126070)
#define AGBAOKHOJJP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E125F00)
#define AGBAOKHOJJP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E126340)
#define AGBAOKHOJJP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E125D60)
#define AGBAOKHOJJP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E126610)
#define AGBAOKHOJJP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1264E0)
#define AGBAOKHOJJP_OAJDGCDLFLL_OFFSET UNITYSDK_OFFSET(0x1E125EF0)
#define AGBAOKHOJJP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E125D90)
#define AGBAOKHOJJP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E126390)
#define AGBAOKHOJJP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1263F0)

inline static constexpr unsigned int AGBAOKHOJJP_TypeDefinitionIndex = 32094;

	class AGBAOKHOJJP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::OMIIKPCJHEM* CMDGAIOLHKP; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "AGBAOKHOJJP")->GetStaticField(0x2FE90);
		}

		// static const ::System::Object BFJOJJHJAIJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGBAOKHOJJP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AGBAOKHOJJP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AGBAOKHOJJP*))((::PBYTE)hIl2Cpp + AGBAOKHOJJP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AGBAOKHOJJP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + AGBAOKHOJJP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGBAOKHOJJP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AGBAOKHOJJP* Clone()
		{
			return ((::AGBAOKHOJJP*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGBAOKHOJJP_CLONE_OFFSET))(this);
		}

		::OMIIKPCJHEM* ANALOEDDDHD()
		{
			return ((::OMIIKPCJHEM*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGBAOKHOJJP_ANALOEDDDHD_OFFSET))(this);
		}

		::System::Void OAJDGCDLFLL(::OMIIKPCJHEM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OMIIKPCJHEM*))((::PBYTE)hIl2Cpp + AGBAOKHOJJP_OAJDGCDLFLL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AGBAOKHOJJP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AGBAOKHOJJP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AGBAOKHOJJP*))((::PBYTE)hIl2Cpp + AGBAOKHOJJP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AGBAOKHOJJP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGBAOKHOJJP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AGBAOKHOJJP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AGBAOKHOJJP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AGBAOKHOJJP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AGBAOKHOJJP*))((::PBYTE)hIl2Cpp + AGBAOKHOJJP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AGBAOKHOJJP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
