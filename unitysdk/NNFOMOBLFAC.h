#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MFPDAKOIOED.h"
#include "unitysdk/System/Object.h"
class NNFOMOBLFAC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NNFOMOBLFAC_BIBPBCCNBMK_OFFSET UNITYSDK_OFFSET(0x1EB82610)
#define NNFOMOBLFAC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB829E0)
#define NNFOMOBLFAC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB82DA0)
#define NNFOMOBLFAC_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB825A0)
#define NNFOMOBLFAC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB82560)
#define NNFOMOBLFAC_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB82550)
#define NNFOMOBLFAC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB82730)
#define NNFOMOBLFAC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB82650)
#define NNFOMOBLFAC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB82800)
#define NNFOMOBLFAC_HNIGPKEECAE_OFFSET UNITYSDK_OFFSET(0x1EB82600)
#define NNFOMOBLFAC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB82510)
#define NNFOMOBLFAC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB82C00)
#define NNFOMOBLFAC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB82BB0)
#define NNFOMOBLFAC_ODBCLGDKOFM_OFFSET UNITYSDK_OFFSET(0x1EB825F0)
#define NNFOMOBLFAC_OIEMAEFDBCB_OFFSET UNITYSDK_OFFSET(0x1EB82620)
#define NNFOMOBLFAC_OIFCKGODKON_OFFSET UNITYSDK_OFFSET(0x1EB82640)
#define NNFOMOBLFAC_OPFINOFMACO_OFFSET UNITYSDK_OFFSET(0x1EB82630)
#define NNFOMOBLFAC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB82540)
#define NNFOMOBLFAC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB82830)
#define NNFOMOBLFAC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB82890)

	class NNFOMOBLFAC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 MIJMCFOKJCH; // 0x18
		::System::UInt32 BGMLGHECGBM; // 0x1C
		::MFPDAKOIOED CIFEGFBGDNB; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "NNFOMOBLFAC")->GetStaticField(0x3140);
		}

		// static const ::System::Object EPHDHCDELFA; // 0x0
		// static const ::System::Object LANLJAPHOCL; // 0x0
		// static const ::System::Object ELMGEBCLLFP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNFOMOBLFAC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NNFOMOBLFAC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NNFOMOBLFAC*))((::PBYTE)hIl2Cpp + NNFOMOBLFAC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NNFOMOBLFAC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + NNFOMOBLFAC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNFOMOBLFAC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NNFOMOBLFAC* Clone()
		{
			return ((::NNFOMOBLFAC*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNFOMOBLFAC_CLONE_OFFSET))(this);
		}

		::MFPDAKOIOED ODBCLGDKOFM()
		{
			return ((::MFPDAKOIOED(*)(::PVOID))((::PBYTE)hIl2Cpp + NNFOMOBLFAC_ODBCLGDKOFM_OFFSET))(this);
		}

		::System::Void HNIGPKEECAE(::MFPDAKOIOED a1)
		{
			return ((::System::Void(*)(::PVOID, ::MFPDAKOIOED))((::PBYTE)hIl2Cpp + NNFOMOBLFAC_HNIGPKEECAE_OFFSET))(this, a1);
		}

		::System::UInt32 BIBPBCCNBMK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NNFOMOBLFAC_BIBPBCCNBMK_OFFSET))(this);
		}

		::System::Void OIEMAEFDBCB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NNFOMOBLFAC_OIEMAEFDBCB_OFFSET))(this, a1);
		}

		::System::UInt32 OPFINOFMACO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NNFOMOBLFAC_OPFINOFMACO_OFFSET))(this);
		}

		::System::Void OIFCKGODKON(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NNFOMOBLFAC_OIFCKGODKON_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NNFOMOBLFAC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NNFOMOBLFAC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NNFOMOBLFAC*))((::PBYTE)hIl2Cpp + NNFOMOBLFAC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NNFOMOBLFAC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNFOMOBLFAC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NNFOMOBLFAC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NNFOMOBLFAC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NNFOMOBLFAC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NNFOMOBLFAC*))((::PBYTE)hIl2Cpp + NNFOMOBLFAC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NNFOMOBLFAC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
