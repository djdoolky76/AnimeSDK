#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OIJOHMLIEII_JFDHNLNBLMG.h"
#include "unitysdk/System/Object.h"
class DNHFLGJJKHN;
class OIJOHMLIEII;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OIJOHMLIEII_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE447E0)
#define OIJOHMLIEII_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE44BA0)
#define OIJOHMLIEII_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE44410)
#define OIJOHMLIEII_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE44320)
#define OIJOHMLIEII_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE44310)
#define OIJOHMLIEII_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE44490)
#define OIJOHMLIEII_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE44460)
#define OIJOHMLIEII_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE44670)
#define OIJOHMLIEII_IEJBIJIKDPB_OFFSET UNITYSDK_OFFSET(0x1DE44440)
#define OIJOHMLIEII_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE442D0)
#define OIJOHMLIEII_KPIIDAEFPLA_OFFSET UNITYSDK_OFFSET(0x1DE443F0)
#define OIJOHMLIEII_LCGFNMHIOGB_OFFSET UNITYSDK_OFFSET(0x1DE44450)
#define OIJOHMLIEII_LOOKEHFGBIO_OFFSET UNITYSDK_OFFSET(0x1DE443B0)
#define OIJOHMLIEII_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE44990)
#define OIJOHMLIEII_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE44850)
#define OIJOHMLIEII_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE44300)
#define OIJOHMLIEII_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE446D0)
#define OIJOHMLIEII_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE44730)

inline static constexpr unsigned int OIJOHMLIEII_TypeDefinitionIndex = 26671;

	class OIJOHMLIEII : public ::System::Object
	{
	public:
		::System::Object* GAPGOEGADAD; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::OIJOHMLIEII_JFDHNLNBLMG MGAKGNOKNPH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::OIJOHMLIEII*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OIJOHMLIEII*>**)UnitySDK::FromName("", "OIJOHMLIEII")->GetStaticField(0x1ACE0);
		}

		// static const ::System::Object BELGJCEOMBE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIJOHMLIEII_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OIJOHMLIEII* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OIJOHMLIEII*))((::PBYTE)hIl2Cpp + OIJOHMLIEII_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OIJOHMLIEII_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OIJOHMLIEII*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OIJOHMLIEII*>*(*)())((::PBYTE)hIl2Cpp + OIJOHMLIEII_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIJOHMLIEII_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OIJOHMLIEII* Clone()
		{
			return ((::OIJOHMLIEII*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIJOHMLIEII_CLONE_OFFSET))(this);
		}

		::DNHFLGJJKHN* LOOKEHFGBIO()
		{
			return ((::DNHFLGJJKHN*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIJOHMLIEII_LOOKEHFGBIO_OFFSET))(this);
		}

		::System::Void KPIIDAEFPLA(::DNHFLGJJKHN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DNHFLGJJKHN*))((::PBYTE)hIl2Cpp + OIJOHMLIEII_KPIIDAEFPLA_OFFSET))(this, a1);
		}

		::OIJOHMLIEII_JFDHNLNBLMG IEJBIJIKDPB()
		{
			return ((::OIJOHMLIEII_JFDHNLNBLMG(*)(::PVOID))((::PBYTE)hIl2Cpp + OIJOHMLIEII_IEJBIJIKDPB_OFFSET))(this);
		}

		::System::Void LCGFNMHIOGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIJOHMLIEII_LCGFNMHIOGB_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OIJOHMLIEII_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OIJOHMLIEII* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OIJOHMLIEII*))((::PBYTE)hIl2Cpp + OIJOHMLIEII_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OIJOHMLIEII_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIJOHMLIEII_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OIJOHMLIEII_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OIJOHMLIEII_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OIJOHMLIEII* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OIJOHMLIEII*))((::PBYTE)hIl2Cpp + OIJOHMLIEII_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OIJOHMLIEII_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
