#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KAJGFEJKOIC;
class KKFMGCNDHGH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KAJGFEJKOIC_ANALOEDDDHD_OFFSET UNITYSDK_OFFSET(0x1E7E55C0)
#define KAJGFEJKOIC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E7E5AB0)
#define KAJGFEJKOIC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7E5E50)
#define KAJGFEJKOIC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E7E5510)
#define KAJGFEJKOIC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7E5490)
#define KAJGFEJKOIC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7E5480)
#define KAJGFEJKOIC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E7E5760)
#define KAJGFEJKOIC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E7E55E0)
#define KAJGFEJKOIC_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E7E55B0)
#define KAJGFEJKOIC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E7E58E0)
#define KAJGFEJKOIC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E7E5440)
#define KAJGFEJKOIC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E7E5C60)
#define KAJGFEJKOIC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E7E5B80)
#define KAJGFEJKOIC_OAJDGCDLFLL_OFFSET UNITYSDK_OFFSET(0x1E7E55D0)
#define KAJGFEJKOIC_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E7E55A0)
#define KAJGFEJKOIC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E7E5470)
#define KAJGFEJKOIC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E7E5970)
#define KAJGFEJKOIC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E7E59D0)

inline static constexpr unsigned int KAJGFEJKOIC_TypeDefinitionIndex = 28111;

	class KAJGFEJKOIC : public ::System::Object
	{
	public:
		::KKFMGCNDHGH* CMDGAIOLHKP; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "KAJGFEJKOIC")->GetStaticField(0xDF00);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object BFJOJJHJAIJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAJGFEJKOIC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KAJGFEJKOIC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KAJGFEJKOIC*))((::PBYTE)hIl2Cpp + KAJGFEJKOIC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KAJGFEJKOIC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + KAJGFEJKOIC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAJGFEJKOIC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KAJGFEJKOIC* Clone()
		{
			return ((::KAJGFEJKOIC*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAJGFEJKOIC_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KAJGFEJKOIC_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KAJGFEJKOIC_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::KKFMGCNDHGH* ANALOEDDDHD()
		{
			return ((::KKFMGCNDHGH*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAJGFEJKOIC_ANALOEDDDHD_OFFSET))(this);
		}

		::System::Void OAJDGCDLFLL(::KKFMGCNDHGH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KKFMGCNDHGH*))((::PBYTE)hIl2Cpp + KAJGFEJKOIC_OAJDGCDLFLL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KAJGFEJKOIC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KAJGFEJKOIC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KAJGFEJKOIC*))((::PBYTE)hIl2Cpp + KAJGFEJKOIC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KAJGFEJKOIC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAJGFEJKOIC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KAJGFEJKOIC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KAJGFEJKOIC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KAJGFEJKOIC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KAJGFEJKOIC*))((::PBYTE)hIl2Cpp + KAJGFEJKOIC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KAJGFEJKOIC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
