#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NHDGNBKBNDB;
class PNCNGIAMLCA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PNCNGIAMLCA_BANCLADFGNI_OFFSET UNITYSDK_OFFSET(0x1DFB2E20)
#define PNCNGIAMLCA_BMEDBCFMGAB_OFFSET UNITYSDK_OFFSET(0x1DFB2E30)
#define PNCNGIAMLCA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DFB32B0)
#define PNCNGIAMLCA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFB3600)
#define PNCNGIAMLCA_CLONE_OFFSET UNITYSDK_OFFSET(0x1DFB2DD0)
#define PNCNGIAMLCA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DFB2CD0)
#define PNCNGIAMLCA_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFB2C50)
#define PNCNGIAMLCA_DKGIDIJJKKH_OFFSET UNITYSDK_OFFSET(0x1DFB2E00)
#define PNCNGIAMLCA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DFB2E70)
#define PNCNGIAMLCA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DFB2E40)
#define PNCNGIAMLCA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DFB2FC0)
#define PNCNGIAMLCA_JALJFGMDLOJ_OFFSET UNITYSDK_OFFSET(0x1DFB2E10)
#define PNCNGIAMLCA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DFB2C10)
#define PNCNGIAMLCA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DFB34D0)
#define PNCNGIAMLCA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DFB3410)
#define PNCNGIAMLCA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DFB2C40)
#define PNCNGIAMLCA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DFB3110)
#define PNCNGIAMLCA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DFB3170)

	class PNCNGIAMLCA : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* IOJLMOKPCGL; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::NHDGNBKBNDB*>* ANMEKHCCDAA; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		::System::UInt32 MOKJAJGEAHM; // 0x28
		static ::Google::Protobuf::FieldCodec** StaticGet_CNDLIJHLHFD()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "PNCNGIAMLCA")->GetStaticField(0x4FC40);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "PNCNGIAMLCA")->GetStaticField(0x4FC48);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_DIOPCFCBHJJ()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "PNCNGIAMLCA")->GetStaticField(0x4FC50);
		}

		// static const ::System::Object DHOPBDGOOLL; // 0x0
		// static const ::System::Object GNBGDANLDAO; // 0x0
		// static const ::System::Object ICBBGLFEJEP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNCNGIAMLCA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PNCNGIAMLCA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PNCNGIAMLCA*))((::PBYTE)hIl2Cpp + PNCNGIAMLCA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PNCNGIAMLCA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + PNCNGIAMLCA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNCNGIAMLCA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PNCNGIAMLCA* Clone()
		{
			return ((::PNCNGIAMLCA*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNCNGIAMLCA_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::NHDGNBKBNDB*>* DKGIDIJJKKH()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::NHDGNBKBNDB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNCNGIAMLCA_DKGIDIJJKKH_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JALJFGMDLOJ()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNCNGIAMLCA_JALJFGMDLOJ_OFFSET))(this);
		}

		::System::UInt32 BANCLADFGNI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PNCNGIAMLCA_BANCLADFGNI_OFFSET))(this);
		}

		::System::Void BMEDBCFMGAB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PNCNGIAMLCA_BMEDBCFMGAB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PNCNGIAMLCA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PNCNGIAMLCA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PNCNGIAMLCA*))((::PBYTE)hIl2Cpp + PNCNGIAMLCA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PNCNGIAMLCA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNCNGIAMLCA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PNCNGIAMLCA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PNCNGIAMLCA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PNCNGIAMLCA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PNCNGIAMLCA*))((::PBYTE)hIl2Cpp + PNCNGIAMLCA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PNCNGIAMLCA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
