#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CNFPBAJNIEL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CNFPBAJNIEL_AABOOKNIJKN_OFFSET UNITYSDK_OFFSET(0x1E108E40)
#define CNFPBAJNIEL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E1091C0)
#define CNFPBAJNIEL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E109490)
#define CNFPBAJNIEL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E108DC0)
#define CNFPBAJNIEL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E108D90)
#define CNFPBAJNIEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E108D80)
#define CNFPBAJNIEL_DMNBOHEBCBI_OFFSET UNITYSDK_OFFSET(0x1E108E50)
#define CNFPBAJNIEL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E108F80)
#define CNFPBAJNIEL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E108E70)
#define CNFPBAJNIEL_FEGIMNBKFHN_OFFSET UNITYSDK_OFFSET(0x1E108E30)
#define CNFPBAJNIEL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E109050)
#define CNFPBAJNIEL_JJDLCIMKGHA_OFFSET UNITYSDK_OFFSET(0x1E108E60)
#define CNFPBAJNIEL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E108D10)
#define CNFPBAJNIEL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E109310)
#define CNFPBAJNIEL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1092D0)
#define CNFPBAJNIEL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E108D70)
#define CNFPBAJNIEL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E109080)
#define CNFPBAJNIEL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1090E0)

	class CNFPBAJNIEL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 OBIDEEGNKHJ; // 0x18
		::System::UInt32 MLCHFINKHHM; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "CNFPBAJNIEL")->GetStaticField(0x1FB90);
		}

		// static const ::System::Object HBIJBPKKMNN; // 0x0
		// static const ::System::Object FHJHJPEMHCO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNFPBAJNIEL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CNFPBAJNIEL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CNFPBAJNIEL*))((::PBYTE)hIl2Cpp + CNFPBAJNIEL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CNFPBAJNIEL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + CNFPBAJNIEL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNFPBAJNIEL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CNFPBAJNIEL* Clone()
		{
			return ((::CNFPBAJNIEL*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNFPBAJNIEL_CLONE_OFFSET))(this);
		}

		::System::UInt32 FEGIMNBKFHN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CNFPBAJNIEL_FEGIMNBKFHN_OFFSET))(this);
		}

		::System::Void AABOOKNIJKN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CNFPBAJNIEL_AABOOKNIJKN_OFFSET))(this, a1);
		}

		::System::UInt32 DMNBOHEBCBI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CNFPBAJNIEL_DMNBOHEBCBI_OFFSET))(this);
		}

		::System::Void JJDLCIMKGHA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CNFPBAJNIEL_JJDLCIMKGHA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CNFPBAJNIEL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CNFPBAJNIEL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CNFPBAJNIEL*))((::PBYTE)hIl2Cpp + CNFPBAJNIEL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CNFPBAJNIEL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNFPBAJNIEL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CNFPBAJNIEL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CNFPBAJNIEL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CNFPBAJNIEL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CNFPBAJNIEL*))((::PBYTE)hIl2Cpp + CNFPBAJNIEL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CNFPBAJNIEL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
