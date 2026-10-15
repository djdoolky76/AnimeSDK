#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FDGKFJFICDN;
class HOMMPJIOPGI;
class IDJIAGLCAPE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IDJIAGLCAPE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E62DCB0)
#define IDJIAGLCAPE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E62E190)
#define IDJIAGLCAPE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E62D840)
#define IDJIAGLCAPE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E62D730)
#define IDJIAGLCAPE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E62D6C0)
#define IDJIAGLCAPE_DNHEKBCJIDI_OFFSET UNITYSDK_OFFSET(0x1E62D890)
#define IDJIAGLCAPE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E62D930)
#define IDJIAGLCAPE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E62D8D0)
#define IDJIAGLCAPE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E62DA80)
#define IDJIAGLCAPE_HDBKIGCAPCO_OFFSET UNITYSDK_OFFSET(0x1E62D8C0)
#define IDJIAGLCAPE_IIKGDNONMEA_OFFSET UNITYSDK_OFFSET(0x1E62D8A0)
#define IDJIAGLCAPE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E62D650)
#define IDJIAGLCAPE_KCDFAMFJHAJ_OFFSET UNITYSDK_OFFSET(0x1E62D8B0)
#define IDJIAGLCAPE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E62DEF0)
#define IDJIAGLCAPE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E62DDF0)
#define IDJIAGLCAPE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E62D6B0)
#define IDJIAGLCAPE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E62DB10)
#define IDJIAGLCAPE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E62DB70)

inline static constexpr unsigned int IDJIAGLCAPE_TypeDefinitionIndex = 25497;

	class IDJIAGLCAPE : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::FDGKFJFICDN*>* ECDANCLNHCL; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::HOMMPJIOPGI*>* GLFMPJBFJMC; // 0x20
		::System::UInt32 NAMKMPJNDEP; // 0x28
		static ::Google::Protobuf::FieldCodec_1<::HOMMPJIOPGI*>** StaticGet_NLAEGIHEGPA()
		{
			return (::Google::Protobuf::FieldCodec_1<::HOMMPJIOPGI*>**)UnitySDK::FromName("", "IDJIAGLCAPE")->GetStaticField(0x46640);
		}

		static ::Google::Protobuf::MessageParser_1<::IDJIAGLCAPE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IDJIAGLCAPE*>**)UnitySDK::FromName("", "IDJIAGLCAPE")->GetStaticField(0x46648);
		}

		static ::Google::Protobuf::FieldCodec_1<::FDGKFJFICDN*>** StaticGet_ICCJACIDLFN()
		{
			return (::Google::Protobuf::FieldCodec_1<::FDGKFJFICDN*>**)UnitySDK::FromName("", "IDJIAGLCAPE")->GetStaticField(0x46650);
		}

		// static const ::System::Object HAOEGFFAKGH; // 0x0
		// static const ::System::Object BGCDBMBJNBH; // 0x0
		// static const ::System::Object DOGACDBNEOB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDJIAGLCAPE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IDJIAGLCAPE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IDJIAGLCAPE*))((::PBYTE)hIl2Cpp + IDJIAGLCAPE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IDJIAGLCAPE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::IDJIAGLCAPE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::IDJIAGLCAPE*>*(*)())((::PBYTE)hIl2Cpp + IDJIAGLCAPE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDJIAGLCAPE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IDJIAGLCAPE* Clone()
		{
			return ((::IDJIAGLCAPE*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDJIAGLCAPE_CLONE_OFFSET))(this);
		}

		::System::UInt32 DNHEKBCJIDI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IDJIAGLCAPE_DNHEKBCJIDI_OFFSET))(this);
		}

		::System::Void IIKGDNONMEA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IDJIAGLCAPE_IIKGDNONMEA_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::HOMMPJIOPGI*>* KCDFAMFJHAJ()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::HOMMPJIOPGI*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDJIAGLCAPE_KCDFAMFJHAJ_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::FDGKFJFICDN*>* HDBKIGCAPCO()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::FDGKFJFICDN*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDJIAGLCAPE_HDBKIGCAPCO_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IDJIAGLCAPE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IDJIAGLCAPE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IDJIAGLCAPE*))((::PBYTE)hIl2Cpp + IDJIAGLCAPE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IDJIAGLCAPE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDJIAGLCAPE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IDJIAGLCAPE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IDJIAGLCAPE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IDJIAGLCAPE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IDJIAGLCAPE*))((::PBYTE)hIl2Cpp + IDJIAGLCAPE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IDJIAGLCAPE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
