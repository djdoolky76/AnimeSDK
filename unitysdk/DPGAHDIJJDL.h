#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DPGAHDIJJDL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DPGAHDIJJDL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E20E180)
#define DPGAHDIJJDL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E20E450)
#define DPGAHDIJJDL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E20DDD0)
#define DPGAHDIJJDL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E20DDA0)
#define DPGAHDIJJDL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E20DD90)
#define DPGAHDIJJDL_ENHCKJDOEEJ_OFFSET UNITYSDK_OFFSET(0x1E20DE40)
#define DPGAHDIJJDL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E20DF40)
#define DPGAHDIJJDL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E20DE60)
#define DPGAHDIJJDL_FENMNEKIJKN_OFFSET UNITYSDK_OFFSET(0x1E20DE50)
#define DPGAHDIJJDL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E20E010)
#define DPGAHDIJJDL_IAHPMMCNAHF_OFFSET UNITYSDK_OFFSET(0x1E20DE20)
#define DPGAHDIJJDL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E20DD50)
#define DPGAHDIJJDL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E20E2D0)
#define DPGAHDIJJDL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E20E290)
#define DPGAHDIJJDL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E20DD80)
#define DPGAHDIJJDL_PNOBGLEHPPO_OFFSET UNITYSDK_OFFSET(0x1E20DE30)
#define DPGAHDIJJDL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E20E040)
#define DPGAHDIJJDL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E20E0A0)

	class DPGAHDIJJDL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 DKMLFMFKHGM; // 0x18
		::System::UInt32 ELNEDBBKMAK; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "DPGAHDIJJDL")->GetStaticField(0x41F20);
		}

		// static const ::System::Object PMMGMKNIEKP; // 0x0
		// static const ::System::Object LJIBNOIJIFO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPGAHDIJJDL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DPGAHDIJJDL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DPGAHDIJJDL*))((::PBYTE)hIl2Cpp + DPGAHDIJJDL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DPGAHDIJJDL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + DPGAHDIJJDL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPGAHDIJJDL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DPGAHDIJJDL* Clone()
		{
			return ((::DPGAHDIJJDL*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPGAHDIJJDL_CLONE_OFFSET))(this);
		}

		::System::UInt32 IAHPMMCNAHF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DPGAHDIJJDL_IAHPMMCNAHF_OFFSET))(this);
		}

		::System::Void PNOBGLEHPPO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DPGAHDIJJDL_PNOBGLEHPPO_OFFSET))(this, a1);
		}

		::System::UInt32 ENHCKJDOEEJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DPGAHDIJJDL_ENHCKJDOEEJ_OFFSET))(this);
		}

		::System::Void FENMNEKIJKN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DPGAHDIJJDL_FENMNEKIJKN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DPGAHDIJJDL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DPGAHDIJJDL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DPGAHDIJJDL*))((::PBYTE)hIl2Cpp + DPGAHDIJJDL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DPGAHDIJJDL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPGAHDIJJDL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DPGAHDIJJDL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DPGAHDIJJDL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DPGAHDIJJDL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DPGAHDIJJDL*))((::PBYTE)hIl2Cpp + DPGAHDIJJDL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DPGAHDIJJDL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
