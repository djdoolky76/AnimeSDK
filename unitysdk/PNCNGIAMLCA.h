#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NHDGNBKBNDB;
class PNCNGIAMLCA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PNCNGIAMLCA_BANCLADFGNI_OFFSET UNITYSDK_OFFSET(0x1DF857A0)
#define PNCNGIAMLCA_BMEDBCFMGAB_OFFSET UNITYSDK_OFFSET(0x1DF857B0)
#define PNCNGIAMLCA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF85C30)
#define PNCNGIAMLCA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF85F80)
#define PNCNGIAMLCA_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF85750)
#define PNCNGIAMLCA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF85650)
#define PNCNGIAMLCA_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF855D0)
#define PNCNGIAMLCA_DKGIDIJJKKH_OFFSET UNITYSDK_OFFSET(0x1DF85780)
#define PNCNGIAMLCA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF857F0)
#define PNCNGIAMLCA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF857C0)
#define PNCNGIAMLCA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF85940)
#define PNCNGIAMLCA_JALJFGMDLOJ_OFFSET UNITYSDK_OFFSET(0x1DF85790)
#define PNCNGIAMLCA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF85590)
#define PNCNGIAMLCA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF85E50)
#define PNCNGIAMLCA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF85D90)
#define PNCNGIAMLCA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF855C0)
#define PNCNGIAMLCA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF85A90)
#define PNCNGIAMLCA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF85AF0)

inline static constexpr unsigned int PNCNGIAMLCA_TypeDefinitionIndex = 27651;

	class PNCNGIAMLCA : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::NHDGNBKBNDB*>* ANMEKHCCDAA; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* IOJLMOKPCGL; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		::System::UInt32 MOKJAJGEAHM; // 0x28
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_DIOPCFCBHJJ()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "PNCNGIAMLCA")->GetStaticField(0x40F20);
		}

		static ::Google::Protobuf::MessageParser_1<::PNCNGIAMLCA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PNCNGIAMLCA*>**)UnitySDK::FromName("", "PNCNGIAMLCA")->GetStaticField(0x40F28);
		}

		static ::Google::Protobuf::FieldCodec_1<::NHDGNBKBNDB*>** StaticGet_CNDLIJHLHFD()
		{
			return (::Google::Protobuf::FieldCodec_1<::NHDGNBKBNDB*>**)UnitySDK::FromName("", "PNCNGIAMLCA")->GetStaticField(0x40F30);
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

		static ::Google::Protobuf::MessageParser_1<::PNCNGIAMLCA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PNCNGIAMLCA*>*(*)())((::PBYTE)hIl2Cpp + PNCNGIAMLCA_JJGHOBBFNJD_OFFSET))();
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
