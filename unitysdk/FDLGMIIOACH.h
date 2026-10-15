#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FDLGMIIOACH_OPOHHCGKFPM.h"
#include "unitysdk/System/Object.h"
class FDLGMIIOACH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FDLGMIIOACH_BEGPKDAIOPO_OFFSET UNITYSDK_OFFSET(0x1E35C3E0)
#define FDLGMIIOACH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E35CB90)
#define FDLGMIIOACH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E35D0C0)
#define FDLGMIIOACH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E35C4C0)
#define FDLGMIIOACH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E35C200)
#define FDLGMIIOACH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E35C1F0)
#define FDLGMIIOACH_DAAMCHBOHOB_OFFSET UNITYSDK_OFFSET(0x1E35C520)
#define FDLGMIIOACH_EBJHNOFJBCH_OFFSET UNITYSDK_OFFSET(0x1E35C410)
#define FDLGMIIOACH_EPFPLLOFFFB_OFFSET UNITYSDK_OFFSET(0x1E35C360)
#define FDLGMIIOACH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E35C590)
#define FDLGMIIOACH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E35C530)
#define FDLGMIIOACH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E35C8A0)
#define FDLGMIIOACH_IPONDLGEAMG_OFFSET UNITYSDK_OFFSET(0x1E35C490)
#define FDLGMIIOACH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E35C180)
#define FDLGMIIOACH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E35CF00)
#define FDLGMIIOACH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E35CDA0)
#define FDLGMIIOACH_OCIJIPCPODD_OFFSET UNITYSDK_OFFSET(0x1E35C510)
#define FDLGMIIOACH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E35C1E0)
#define FDLGMIIOACH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E35C950)
#define FDLGMIIOACH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E35C9B0)

	class FDLGMIIOACH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Object* CLNIKCBNDHL; // 0x18
		::FDLGMIIOACH_OPOHHCGKFPM OIEOHDOICLI; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "FDLGMIIOACH")->GetStaticField(0x5BD30);
		}

		// static const ::System::Object CEDDGAMLKJK; // 0x0
		// static const ::System::Object JKJHNGACNOA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDLGMIIOACH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FDLGMIIOACH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FDLGMIIOACH*))((::PBYTE)hIl2Cpp + FDLGMIIOACH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FDLGMIIOACH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + FDLGMIIOACH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDLGMIIOACH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FDLGMIIOACH* Clone()
		{
			return ((::FDLGMIIOACH*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDLGMIIOACH_CLONE_OFFSET))(this);
		}

		::System::UInt32 EPFPLLOFFFB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FDLGMIIOACH_EPFPLLOFFFB_OFFSET))(this);
		}

		::System::Void BEGPKDAIOPO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FDLGMIIOACH_BEGPKDAIOPO_OFFSET))(this, a1);
		}

		::System::UInt32 EBJHNOFJBCH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FDLGMIIOACH_EBJHNOFJBCH_OFFSET))(this);
		}

		::System::Void IPONDLGEAMG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FDLGMIIOACH_IPONDLGEAMG_OFFSET))(this, a1);
		}

		::FDLGMIIOACH_OPOHHCGKFPM OCIJIPCPODD()
		{
			return ((::FDLGMIIOACH_OPOHHCGKFPM(*)(::PVOID))((::PBYTE)hIl2Cpp + FDLGMIIOACH_OCIJIPCPODD_OFFSET))(this);
		}

		::System::Void DAAMCHBOHOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDLGMIIOACH_DAAMCHBOHOB_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FDLGMIIOACH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FDLGMIIOACH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FDLGMIIOACH*))((::PBYTE)hIl2Cpp + FDLGMIIOACH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FDLGMIIOACH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDLGMIIOACH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FDLGMIIOACH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FDLGMIIOACH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FDLGMIIOACH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FDLGMIIOACH*))((::PBYTE)hIl2Cpp + FDLGMIIOACH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FDLGMIIOACH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
