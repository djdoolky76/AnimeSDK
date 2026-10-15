#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ACINIALAFDE.h"
#include "unitysdk/System/Object.h"
class KPNHGDGLICN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KPNHGDGLICN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8C1B50)
#define KPNHGDGLICN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8C1E60)
#define KPNHGDGLICN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8C1740)
#define KPNHGDGLICN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8C1710)
#define KPNHGDGLICN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8C1700)
#define KPNHGDGLICN_EIOMMLPIAKP_OFFSET UNITYSDK_OFFSET(0x1E8C17D0)
#define KPNHGDGLICN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8C1900)
#define KPNHGDGLICN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8C17F0)
#define KPNHGDGLICN_FMFGOAPKGAB_OFFSET UNITYSDK_OFFSET(0x1E8C17C0)
#define KPNHGDGLICN_GEMDLCGEPMD_OFFSET UNITYSDK_OFFSET(0x1E8C17E0)
#define KPNHGDGLICN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8C19D0)
#define KPNHGDGLICN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E8C1690)
#define KPNHGDGLICN_KMHNKEJMDAK_OFFSET UNITYSDK_OFFSET(0x1E8C17B0)
#define KPNHGDGLICN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8C1CE0)
#define KPNHGDGLICN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8C1CA0)
#define KPNHGDGLICN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8C16F0)
#define KPNHGDGLICN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8C1A00)
#define KPNHGDGLICN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8C1A60)

inline static constexpr unsigned int KPNHGDGLICN_TypeDefinitionIndex = 25307;

	class KPNHGDGLICN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::ACINIALAFDE CFCAMOAGIDE; // 0x18
		::System::UInt32 GEMFJILOPLL; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "KPNHGDGLICN")->GetStaticField(0x17F00);
		}

		// static const ::System::Object BOADFNPOBEP; // 0x0
		// static const ::System::Object AKFFJEHMCCB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPNHGDGLICN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KPNHGDGLICN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KPNHGDGLICN*))((::PBYTE)hIl2Cpp + KPNHGDGLICN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KPNHGDGLICN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + KPNHGDGLICN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPNHGDGLICN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KPNHGDGLICN* Clone()
		{
			return ((::KPNHGDGLICN*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPNHGDGLICN_CLONE_OFFSET))(this);
		}

		::ACINIALAFDE KMHNKEJMDAK()
		{
			return ((::ACINIALAFDE(*)(::PVOID))((::PBYTE)hIl2Cpp + KPNHGDGLICN_KMHNKEJMDAK_OFFSET))(this);
		}

		::System::Void FMFGOAPKGAB(::ACINIALAFDE a1)
		{
			return ((::System::Void(*)(::PVOID, ::ACINIALAFDE))((::PBYTE)hIl2Cpp + KPNHGDGLICN_FMFGOAPKGAB_OFFSET))(this, a1);
		}

		::System::UInt32 EIOMMLPIAKP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KPNHGDGLICN_EIOMMLPIAKP_OFFSET))(this);
		}

		::System::Void GEMDLCGEPMD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KPNHGDGLICN_GEMDLCGEPMD_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KPNHGDGLICN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KPNHGDGLICN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KPNHGDGLICN*))((::PBYTE)hIl2Cpp + KPNHGDGLICN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KPNHGDGLICN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPNHGDGLICN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KPNHGDGLICN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KPNHGDGLICN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KPNHGDGLICN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KPNHGDGLICN*))((::PBYTE)hIl2Cpp + KPNHGDGLICN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KPNHGDGLICN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
