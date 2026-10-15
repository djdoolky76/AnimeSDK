#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DEMKDHAODBJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DEMKDHAODBJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E197990)
#define DEMKDHAODBJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E197BB0)
#define DEMKDHAODBJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E1975E0)
#define DEMKDHAODBJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E1975B0)
#define DEMKDHAODBJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1975A0)
#define DEMKDHAODBJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E197710)
#define DEMKDHAODBJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E197640)
#define DEMKDHAODBJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E197880)
#define DEMKDHAODBJ_IGDPIIJEELD_OFFSET UNITYSDK_OFFSET(0x1E197620)
#define DEMKDHAODBJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E197560)
#define DEMKDHAODBJ_KMOAIPBICFE_OFFSET UNITYSDK_OFFSET(0x1E197630)
#define DEMKDHAODBJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E197A50)
#define DEMKDHAODBJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E197A20)
#define DEMKDHAODBJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E197590)
#define DEMKDHAODBJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1978B0)
#define DEMKDHAODBJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E197910)

inline static constexpr unsigned int DEMKDHAODBJ_TypeDefinitionIndex = 28244;

	class DEMKDHAODBJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 APAHJAEEAIH; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "DEMKDHAODBJ")->GetStaticField(0x31290);
		}

		// static const ::System::Object LCLODCLLPDD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEMKDHAODBJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DEMKDHAODBJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DEMKDHAODBJ*))((::PBYTE)hIl2Cpp + DEMKDHAODBJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DEMKDHAODBJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + DEMKDHAODBJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEMKDHAODBJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DEMKDHAODBJ* Clone()
		{
			return ((::DEMKDHAODBJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEMKDHAODBJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 IGDPIIJEELD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DEMKDHAODBJ_IGDPIIJEELD_OFFSET))(this);
		}

		::System::Void KMOAIPBICFE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DEMKDHAODBJ_KMOAIPBICFE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DEMKDHAODBJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DEMKDHAODBJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DEMKDHAODBJ*))((::PBYTE)hIl2Cpp + DEMKDHAODBJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DEMKDHAODBJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEMKDHAODBJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DEMKDHAODBJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DEMKDHAODBJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DEMKDHAODBJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DEMKDHAODBJ*))((::PBYTE)hIl2Cpp + DEMKDHAODBJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DEMKDHAODBJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
