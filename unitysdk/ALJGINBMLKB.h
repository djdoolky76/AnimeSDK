#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ALJGINBMLKB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ALJGINBMLKB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E50FAA0)
#define ALJGINBMLKB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E50FD70)
#define ALJGINBMLKB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E50F6F0)
#define ALJGINBMLKB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E50F6C0)
#define ALJGINBMLKB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E50F6B0)
#define ALJGINBMLKB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E50F860)
#define ALJGINBMLKB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E50F780)
#define ALJGINBMLKB_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E50F750)
#define ALJGINBMLKB_GBDHEJPLLHG_OFFSET UNITYSDK_OFFSET(0x1E50F760)
#define ALJGINBMLKB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E50F930)
#define ALJGINBMLKB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E50F670)
#define ALJGINBMLKB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E50FBF0)
#define ALJGINBMLKB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E50FBB0)
#define ALJGINBMLKB_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E50F740)
#define ALJGINBMLKB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E50F6A0)
#define ALJGINBMLKB_PFFFCAHMPOK_OFFSET UNITYSDK_OFFSET(0x1E50F770)
#define ALJGINBMLKB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E50F960)
#define ALJGINBMLKB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E50F9C0)

inline static constexpr unsigned int ALJGINBMLKB_TypeDefinitionIndex = 35140;

	class ALJGINBMLKB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 GFCPCAFJHNB; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "ALJGINBMLKB")->GetStaticField(0x39340);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object LFMAGKAHAOK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALJGINBMLKB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ALJGINBMLKB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ALJGINBMLKB*))((::PBYTE)hIl2Cpp + ALJGINBMLKB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ALJGINBMLKB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + ALJGINBMLKB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALJGINBMLKB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ALJGINBMLKB* Clone()
		{
			return ((::ALJGINBMLKB*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALJGINBMLKB_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALJGINBMLKB_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ALJGINBMLKB_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 GBDHEJPLLHG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALJGINBMLKB_GBDHEJPLLHG_OFFSET))(this);
		}

		::System::Void PFFFCAHMPOK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ALJGINBMLKB_PFFFCAHMPOK_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ALJGINBMLKB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ALJGINBMLKB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ALJGINBMLKB*))((::PBYTE)hIl2Cpp + ALJGINBMLKB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALJGINBMLKB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALJGINBMLKB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ALJGINBMLKB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALJGINBMLKB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ALJGINBMLKB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ALJGINBMLKB*))((::PBYTE)hIl2Cpp + ALJGINBMLKB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ALJGINBMLKB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
