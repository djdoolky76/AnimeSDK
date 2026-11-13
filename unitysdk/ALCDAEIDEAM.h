#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ALCDAEIDEAM;
class GAAMBBFPCHB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ALCDAEIDEAM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x200159B0)
#define ALCDAEIDEAM_CCTOR_OFFSET UNITYSDK_OFFSET(0x20015D70)
#define ALCDAEIDEAM_CLONE_OFFSET UNITYSDK_OFFSET(0x20015460)
#define ALCDAEIDEAM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x200153F0)
#define ALCDAEIDEAM_CTOR_OFFSET UNITYSDK_OFFSET(0x200153E0)
#define ALCDAEIDEAM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x200156A0)
#define ALCDAEIDEAM_EQUALS_OFFSET UNITYSDK_OFFSET(0x20015520)
#define ALCDAEIDEAM_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x20015510)
#define ALCDAEIDEAM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x20015820)
#define ALCDAEIDEAM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x200153A0)
#define ALCDAEIDEAM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x20015B90)
#define ALCDAEIDEAM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x20015A80)
#define ALCDAEIDEAM_NMMBFGNHDIH_OFFSET UNITYSDK_OFFSET(0x200154F0)
#define ALCDAEIDEAM_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x20015500)
#define ALCDAEIDEAM_OJECLJEIFLJ_OFFSET UNITYSDK_OFFSET(0x200154E0)
#define ALCDAEIDEAM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x200153D0)
#define ALCDAEIDEAM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x20015870)
#define ALCDAEIDEAM_WRITETO_OFFSET UNITYSDK_OFFSET(0x200158D0)

inline static constexpr unsigned int ALCDAEIDEAM_TypeDefinitionIndex = 31808;

	class ALCDAEIDEAM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::GAAMBBFPCHB* GAPDBIBJBAG; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::ALCDAEIDEAM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::ALCDAEIDEAM*>**)UnitySDK::FromName("", "ALCDAEIDEAM")->GetStaticField(0x364F0);
		}

		// static const ::System::Object LHMKKEEFHLB; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALCDAEIDEAM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ALCDAEIDEAM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ALCDAEIDEAM*))((::PBYTE)hIl2Cpp + ALCDAEIDEAM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ALCDAEIDEAM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::ALCDAEIDEAM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::ALCDAEIDEAM*>*(*)())((::PBYTE)hIl2Cpp + ALCDAEIDEAM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALCDAEIDEAM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ALCDAEIDEAM* Clone()
		{
			return ((::ALCDAEIDEAM*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALCDAEIDEAM_CLONE_OFFSET))(this);
		}

		::GAAMBBFPCHB* OJECLJEIFLJ()
		{
			return ((::GAAMBBFPCHB*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALCDAEIDEAM_OJECLJEIFLJ_OFFSET))(this);
		}

		::System::Void NMMBFGNHDIH(::GAAMBBFPCHB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GAAMBBFPCHB*))((::PBYTE)hIl2Cpp + ALCDAEIDEAM_NMMBFGNHDIH_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALCDAEIDEAM_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ALCDAEIDEAM_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ALCDAEIDEAM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ALCDAEIDEAM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ALCDAEIDEAM*))((::PBYTE)hIl2Cpp + ALCDAEIDEAM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALCDAEIDEAM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALCDAEIDEAM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ALCDAEIDEAM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALCDAEIDEAM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ALCDAEIDEAM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ALCDAEIDEAM*))((::PBYTE)hIl2Cpp + ALCDAEIDEAM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ALCDAEIDEAM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
