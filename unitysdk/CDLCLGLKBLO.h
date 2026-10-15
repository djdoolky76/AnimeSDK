#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CDLCLGLKBLO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CDLCLGLKBLO_AFMCDJJPIIN_OFFSET UNITYSDK_OFFSET(0x1E086980)
#define CDLCLGLKBLO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E086E90)
#define CDLCLGLKBLO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E087220)
#define CDLCLGLKBLO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E086910)
#define CDLCLGLKBLO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0868C0)
#define CDLCLGLKBLO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0868B0)
#define CDLCLGLKBLO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E086B20)
#define CDLCLGLKBLO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E086A10)
#define CDLCLGLKBLO_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E086A00)
#define CDLCLGLKBLO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E086C30)
#define CDLCLGLKBLO_HCOIFBALCNA_OFFSET UNITYSDK_OFFSET(0x1E086970)
#define CDLCLGLKBLO_HCPHCMPGDLE_OFFSET UNITYSDK_OFFSET(0x1E086990)
#define CDLCLGLKBLO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E086870)
#define CDLCLGLKBLO_KPPNLCJKJAD_OFFSET UNITYSDK_OFFSET(0x1E0869A0)
#define CDLCLGLKBLO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E087050)
#define CDLCLGLKBLO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E086FF0)
#define CDLCLGLKBLO_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E0869F0)
#define CDLCLGLKBLO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0868A0)
#define CDLCLGLKBLO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E086CE0)
#define CDLCLGLKBLO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E086D40)

inline static constexpr unsigned int CDLCLGLKBLO_TypeDefinitionIndex = 28985;

	class CDLCLGLKBLO : public ::System::Object
	{
	public:
		::System::String* LBGDMOBHJCE; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 IBEBBFIHLLP; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x24
		static ::Google::Protobuf::MessageParser_1<::CDLCLGLKBLO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CDLCLGLKBLO*>**)UnitySDK::FromName("", "CDLCLGLKBLO")->GetStaticField(0xF4B0);
		}

		// static const ::System::Object AODKNNMBGAD; // 0x0
		// static const ::System::Object ANPOGEGPGFP; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDLCLGLKBLO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CDLCLGLKBLO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CDLCLGLKBLO*))((::PBYTE)hIl2Cpp + CDLCLGLKBLO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CDLCLGLKBLO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CDLCLGLKBLO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CDLCLGLKBLO*>*(*)())((::PBYTE)hIl2Cpp + CDLCLGLKBLO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDLCLGLKBLO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CDLCLGLKBLO* Clone()
		{
			return ((::CDLCLGLKBLO*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDLCLGLKBLO_CLONE_OFFSET))(this);
		}

		::System::UInt32 HCOIFBALCNA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CDLCLGLKBLO_HCOIFBALCNA_OFFSET))(this);
		}

		::System::Void AFMCDJJPIIN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CDLCLGLKBLO_AFMCDJJPIIN_OFFSET))(this, a1);
		}

		::System::String* HCPHCMPGDLE()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDLCLGLKBLO_HCPHCMPGDLE_OFFSET))(this);
		}

		::System::Void KPPNLCJKJAD(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CDLCLGLKBLO_KPPNLCJKJAD_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CDLCLGLKBLO_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CDLCLGLKBLO_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CDLCLGLKBLO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CDLCLGLKBLO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CDLCLGLKBLO*))((::PBYTE)hIl2Cpp + CDLCLGLKBLO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CDLCLGLKBLO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDLCLGLKBLO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CDLCLGLKBLO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CDLCLGLKBLO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CDLCLGLKBLO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CDLCLGLKBLO*))((::PBYTE)hIl2Cpp + CDLCLGLKBLO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CDLCLGLKBLO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
