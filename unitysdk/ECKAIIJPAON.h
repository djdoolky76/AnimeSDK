#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ECKAIIJPAON;
class IKMLLJNNKJB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ECKAIIJPAON_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E253CC0)
#define ECKAIIJPAON_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E254160)
#define ECKAIIJPAON_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2536B0)
#define ECKAIIJPAON_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E253620)
#define ECKAIIJPAON_CTOR_OFFSET UNITYSDK_OFFSET(0x1E253610)
#define ECKAIIJPAON_DOKCLOPEKLK_OFFSET UNITYSDK_OFFSET(0x1E253780)
#define ECKAIIJPAON_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E253940)
#define ECKAIIJPAON_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2537B0)
#define ECKAIIJPAON_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E2537A0)
#define ECKAIIJPAON_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E253AD0)
#define ECKAIIJPAON_GKELBJMEELI_OFFSET UNITYSDK_OFFSET(0x1E253750)
#define ECKAIIJPAON_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2535D0)
#define ECKAIIJPAON_LNACAEMACAD_OFFSET UNITYSDK_OFFSET(0x1E253770)
#define ECKAIIJPAON_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E253F30)
#define ECKAIIJPAON_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E253E20)
#define ECKAIIJPAON_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E253790)
#define ECKAIIJPAON_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E253600)
#define ECKAIIJPAON_PDEEPGNLDOP_OFFSET UNITYSDK_OFFSET(0x1E253760)
#define ECKAIIJPAON_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E253B20)
#define ECKAIIJPAON_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E253B80)

inline static constexpr unsigned int ECKAIIJPAON_TypeDefinitionIndex = 31857;

	class ECKAIIJPAON : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::IKMLLJNNKJB* IHEBCNHICPH; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		::System::UInt32 DJIJMBMGAPB; // 0x24
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "ECKAIIJPAON")->GetStaticField(0x3E840);
		}

		// static const ::System::Object BLLLJDBIBJG; // 0x0
		// static const ::System::Object HDEAOOJANDH; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECKAIIJPAON_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ECKAIIJPAON* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ECKAIIJPAON*))((::PBYTE)hIl2Cpp + ECKAIIJPAON_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ECKAIIJPAON_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + ECKAIIJPAON_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECKAIIJPAON_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ECKAIIJPAON* Clone()
		{
			return ((::ECKAIIJPAON*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECKAIIJPAON_CLONE_OFFSET))(this);
		}

		::IKMLLJNNKJB* GKELBJMEELI()
		{
			return ((::IKMLLJNNKJB*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECKAIIJPAON_GKELBJMEELI_OFFSET))(this);
		}

		::System::Void PDEEPGNLDOP(::IKMLLJNNKJB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IKMLLJNNKJB*))((::PBYTE)hIl2Cpp + ECKAIIJPAON_PDEEPGNLDOP_OFFSET))(this, a1);
		}

		::System::UInt32 LNACAEMACAD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ECKAIIJPAON_LNACAEMACAD_OFFSET))(this);
		}

		::System::Void DOKCLOPEKLK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ECKAIIJPAON_DOKCLOPEKLK_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ECKAIIJPAON_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ECKAIIJPAON_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ECKAIIJPAON_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ECKAIIJPAON* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ECKAIIJPAON*))((::PBYTE)hIl2Cpp + ECKAIIJPAON_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ECKAIIJPAON_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECKAIIJPAON_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ECKAIIJPAON_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ECKAIIJPAON_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ECKAIIJPAON* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ECKAIIJPAON*))((::PBYTE)hIl2Cpp + ECKAIIJPAON_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ECKAIIJPAON_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
