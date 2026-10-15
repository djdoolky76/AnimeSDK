#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JMFPICAMLIG;
class KBCHOKFHHIH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JMFPICAMLIG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E78B320)
#define JMFPICAMLIG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E78B620)
#define JMFPICAMLIG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E78ABF0)
#define JMFPICAMLIG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E78AB60)
#define JMFPICAMLIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E78AB50)
#define JMFPICAMLIG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E78AE80)
#define JMFPICAMLIG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E78ACE0)
#define JMFPICAMLIG_GDPHBHKKFBL_OFFSET UNITYSDK_OFFSET(0x1E78ACC0)
#define JMFPICAMLIG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E78B150)
#define JMFPICAMLIG_JFCPFEFKAIA_OFFSET UNITYSDK_OFFSET(0x1E78ACD0)
#define JMFPICAMLIG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E78AAE0)
#define JMFPICAMLIG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E78B450)
#define JMFPICAMLIG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E78B380)
#define JMFPICAMLIG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E78AB40)
#define JMFPICAMLIG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E78B230)
#define JMFPICAMLIG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E78B290)

	class JMFPICAMLIG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::KBCHOKFHHIH* BAKJGGCPGHE; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "JMFPICAMLIG")->GetStaticField(0x6C010);
		}

		// static const ::System::Object IKHAIHFIMBI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMFPICAMLIG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JMFPICAMLIG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JMFPICAMLIG*))((::PBYTE)hIl2Cpp + JMFPICAMLIG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JMFPICAMLIG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + JMFPICAMLIG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMFPICAMLIG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JMFPICAMLIG* Clone()
		{
			return ((::JMFPICAMLIG*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMFPICAMLIG_CLONE_OFFSET))(this);
		}

		::KBCHOKFHHIH* GDPHBHKKFBL()
		{
			return ((::KBCHOKFHHIH*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMFPICAMLIG_GDPHBHKKFBL_OFFSET))(this);
		}

		::System::Void JFCPFEFKAIA(::KBCHOKFHHIH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KBCHOKFHHIH*))((::PBYTE)hIl2Cpp + JMFPICAMLIG_JFCPFEFKAIA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JMFPICAMLIG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JMFPICAMLIG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JMFPICAMLIG*))((::PBYTE)hIl2Cpp + JMFPICAMLIG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JMFPICAMLIG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMFPICAMLIG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JMFPICAMLIG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JMFPICAMLIG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JMFPICAMLIG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JMFPICAMLIG*))((::PBYTE)hIl2Cpp + JMFPICAMLIG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JMFPICAMLIG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
