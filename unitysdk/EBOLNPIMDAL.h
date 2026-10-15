#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EBOLNPIMDAL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EBOLNPIMDAL_BAODMKIEFJB_OFFSET UNITYSDK_OFFSET(0x1E246200)
#define EBOLNPIMDAL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E246630)
#define EBOLNPIMDAL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E246990)
#define EBOLNPIMDAL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E246130)
#define EBOLNPIMDAL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2460C0)
#define EBOLNPIMDAL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E246090)
#define EBOLNPIMDAL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2462D0)
#define EBOLNPIMDAL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E246220)
#define EBOLNPIMDAL_GEFKFCHHKII_OFFSET UNITYSDK_OFFSET(0x1E2461F0)
#define EBOLNPIMDAL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2463E0)
#define EBOLNPIMDAL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E246020)
#define EBOLNPIMDAL_LDHFLPOIGGN_OFFSET UNITYSDK_OFFSET(0x1E246210)
#define EBOLNPIMDAL_LHOPHLMOHMJ_OFFSET UNITYSDK_OFFSET(0x1E2461E0)
#define EBOLNPIMDAL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2467A0)
#define EBOLNPIMDAL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E246740)
#define EBOLNPIMDAL_OGGIEJLNGHO_OFFSET UNITYSDK_OFFSET(0x1E2461D0)
#define EBOLNPIMDAL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E246080)
#define EBOLNPIMDAL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E246430)
#define EBOLNPIMDAL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E246490)

inline static constexpr unsigned int EBOLNPIMDAL_TypeDefinitionIndex = 33117;

	class EBOLNPIMDAL : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* PCCEBNMGAEL; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 IOBJJKGNBLF; // 0x20
		::System::Boolean BBJIDLMAPDF; // 0x24
		static ::Google::Protobuf::MessageParser_1<::EBOLNPIMDAL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::EBOLNPIMDAL*>**)UnitySDK::FromName("", "EBOLNPIMDAL")->GetStaticField(0x4C900);
		}

		static ::System::Object** StaticGet_IDFDCOMPPGL()
		{
			return (::System::Object**)UnitySDK::FromName("", "EBOLNPIMDAL")->GetStaticField(0x4C908);
		}

		// static const ::System::Object EKJIPCEFPOG; // 0x0
		// static const ::System::Object ELMAAKPCAON; // 0x0
		// static const ::System::Object MLKLGOIOBJN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBOLNPIMDAL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EBOLNPIMDAL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EBOLNPIMDAL*))((::PBYTE)hIl2Cpp + EBOLNPIMDAL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EBOLNPIMDAL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::EBOLNPIMDAL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::EBOLNPIMDAL*>*(*)())((::PBYTE)hIl2Cpp + EBOLNPIMDAL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBOLNPIMDAL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EBOLNPIMDAL* Clone()
		{
			return ((::EBOLNPIMDAL*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBOLNPIMDAL_CLONE_OFFSET))(this);
		}

		::System::Boolean OGGIEJLNGHO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EBOLNPIMDAL_OGGIEJLNGHO_OFFSET))(this);
		}

		::System::Void LHOPHLMOHMJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EBOLNPIMDAL_LHOPHLMOHMJ_OFFSET))(this, a1);
		}

		::System::UInt32 GEFKFCHHKII()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EBOLNPIMDAL_GEFKFCHHKII_OFFSET))(this);
		}

		::System::Void BAODMKIEFJB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EBOLNPIMDAL_BAODMKIEFJB_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* LDHFLPOIGGN()
		{
			return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBOLNPIMDAL_LDHFLPOIGGN_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EBOLNPIMDAL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EBOLNPIMDAL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EBOLNPIMDAL*))((::PBYTE)hIl2Cpp + EBOLNPIMDAL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EBOLNPIMDAL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBOLNPIMDAL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EBOLNPIMDAL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EBOLNPIMDAL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EBOLNPIMDAL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EBOLNPIMDAL*))((::PBYTE)hIl2Cpp + EBOLNPIMDAL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EBOLNPIMDAL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
