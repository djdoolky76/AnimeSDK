#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IAFNLKNKPBD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IAFNLKNKPBD_BEBGAIHDMCO_OFFSET UNITYSDK_OFFSET(0x1E5D6BB0)
#define IAFNLKNKPBD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5D6F10)
#define IAFNLKNKPBD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5D71E0)
#define IAFNLKNKPBD_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5D6B60)
#define IAFNLKNKPBD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5D6B30)
#define IAFNLKNKPBD_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5D6B20)
#define IAFNLKNKPBD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5D6CD0)
#define IAFNLKNKPBD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5D6BF0)
#define IAFNLKNKPBD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5D6DA0)
#define IAFNLKNKPBD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E5D6AE0)
#define IAFNLKNKPBD_JKBGCAMIPBC_OFFSET UNITYSDK_OFFSET(0x1E5D6BC0)
#define IAFNLKNKPBD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E5D7060)
#define IAFNLKNKPBD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5D7020)
#define IAFNLKNKPBD_NECKAHHFCLI_OFFSET UNITYSDK_OFFSET(0x1E5D6BE0)
#define IAFNLKNKPBD_NPCOIAEPGPA_OFFSET UNITYSDK_OFFSET(0x1E5D6BD0)
#define IAFNLKNKPBD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5D6B10)
#define IAFNLKNKPBD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5D6DD0)
#define IAFNLKNKPBD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5D6E30)

inline static constexpr unsigned int IAFNLKNKPBD_TypeDefinitionIndex = 27902;

	class IAFNLKNKPBD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 JENHMINODOE; // 0x18
		::System::UInt32 HAPAIDBIBIC; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::IAFNLKNKPBD*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IAFNLKNKPBD*>**)UnitySDK::FromName("", "IAFNLKNKPBD")->GetStaticField(0x40930);
		}

		// static const ::System::Object GCPGNLPODDK; // 0x0
		// static const ::System::Object PMFNLNMINAP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAFNLKNKPBD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IAFNLKNKPBD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IAFNLKNKPBD*))((::PBYTE)hIl2Cpp + IAFNLKNKPBD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IAFNLKNKPBD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::IAFNLKNKPBD*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::IAFNLKNKPBD*>*(*)())((::PBYTE)hIl2Cpp + IAFNLKNKPBD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IAFNLKNKPBD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IAFNLKNKPBD* Clone()
		{
			return ((::IAFNLKNKPBD*(*)(::PVOID))((::PBYTE)hIl2Cpp + IAFNLKNKPBD_CLONE_OFFSET))(this);
		}

		::System::UInt32 BEBGAIHDMCO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IAFNLKNKPBD_BEBGAIHDMCO_OFFSET))(this);
		}

		::System::Void JKBGCAMIPBC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IAFNLKNKPBD_JKBGCAMIPBC_OFFSET))(this, a1);
		}

		::System::UInt32 NPCOIAEPGPA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IAFNLKNKPBD_NPCOIAEPGPA_OFFSET))(this);
		}

		::System::Void NECKAHHFCLI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IAFNLKNKPBD_NECKAHHFCLI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IAFNLKNKPBD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IAFNLKNKPBD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IAFNLKNKPBD*))((::PBYTE)hIl2Cpp + IAFNLKNKPBD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IAFNLKNKPBD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IAFNLKNKPBD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IAFNLKNKPBD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IAFNLKNKPBD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IAFNLKNKPBD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IAFNLKNKPBD*))((::PBYTE)hIl2Cpp + IAFNLKNKPBD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IAFNLKNKPBD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
