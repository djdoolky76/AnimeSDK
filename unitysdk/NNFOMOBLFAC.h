#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MFPDAKOIOED.h"
#include "unitysdk/System/Object.h"
class NNFOMOBLFAC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NNFOMOBLFAC_BIBPBCCNBMK_OFFSET UNITYSDK_OFFSET(0x1FEE06C0)
#define NNFOMOBLFAC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FEE0A90)
#define NNFOMOBLFAC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FEE0E70)
#define NNFOMOBLFAC_CLONE_OFFSET UNITYSDK_OFFSET(0x1FEE0650)
#define NNFOMOBLFAC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FEE0610)
#define NNFOMOBLFAC_CTOR_OFFSET UNITYSDK_OFFSET(0x1FEE0600)
#define NNFOMOBLFAC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FEE07E0)
#define NNFOMOBLFAC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FEE0700)
#define NNFOMOBLFAC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FEE08B0)
#define NNFOMOBLFAC_HNIGPKEECAE_OFFSET UNITYSDK_OFFSET(0x1FEE06B0)
#define NNFOMOBLFAC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FEE05C0)
#define NNFOMOBLFAC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FEE0CB0)
#define NNFOMOBLFAC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FEE0C60)
#define NNFOMOBLFAC_ODBCLGDKOFM_OFFSET UNITYSDK_OFFSET(0x1FEE06A0)
#define NNFOMOBLFAC_OIEMAEFDBCB_OFFSET UNITYSDK_OFFSET(0x1FEE06D0)
#define NNFOMOBLFAC_OIFCKGODKON_OFFSET UNITYSDK_OFFSET(0x1FEE06F0)
#define NNFOMOBLFAC_OPFINOFMACO_OFFSET UNITYSDK_OFFSET(0x1FEE06E0)
#define NNFOMOBLFAC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FEE05F0)
#define NNFOMOBLFAC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FEE08E0)
#define NNFOMOBLFAC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FEE0940)

inline static constexpr unsigned int NNFOMOBLFAC_TypeDefinitionIndex = 35135;

	class NNFOMOBLFAC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::MFPDAKOIOED CIFEGFBGDNB; // 0x18
		::System::UInt32 MIJMCFOKJCH; // 0x1C
		::System::UInt32 BGMLGHECGBM; // 0x20
		static ::Google::Protobuf::MessageParser_1<::NNFOMOBLFAC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NNFOMOBLFAC*>**)UnitySDK::FromName("", "NNFOMOBLFAC")->GetStaticField(0x51120);
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

		static ::Google::Protobuf::MessageParser_1<::NNFOMOBLFAC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NNFOMOBLFAC*>*(*)())((::PBYTE)hIl2Cpp + NNFOMOBLFAC_JJGHOBBFNJD_OFFSET))();
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
