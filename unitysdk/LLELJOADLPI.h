#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BKJCADFCHAB;
class LLELJOADLPI;
class PJBODOPJFGA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LLELJOADLPI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E999E30)
#define LLELJOADLPI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E99A2C0)
#define LLELJOADLPI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E999A10)
#define LLELJOADLPI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E999930)
#define LLELJOADLPI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9998D0)
#define LLELJOADLPI_EBKHBLMOPAD_OFFSET UNITYSDK_OFFSET(0x1E999A40)
#define LLELJOADLPI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E999AB0)
#define LLELJOADLPI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E999A80)
#define LLELJOADLPI_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E999A60)
#define LLELJOADLPI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E999C00)
#define LLELJOADLPI_HKNAGCCCLEM_OFFSET UNITYSDK_OFFSET(0x1E999A70)
#define LLELJOADLPI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E999890)
#define LLELJOADLPI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E99A0B0)
#define LLELJOADLPI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E999FB0)
#define LLELJOADLPI_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E999A50)
#define LLELJOADLPI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E9998C0)
#define LLELJOADLPI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E999C90)
#define LLELJOADLPI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E999CF0)

inline static constexpr unsigned int LLELJOADLPI_TypeDefinitionIndex = 27459;

	class LLELJOADLPI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::PJBODOPJFGA*>* NAJGODJDFLB; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::BKJCADFCHAB*>* GFGMEOEFIMB; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x28
		static ::Google::Protobuf::FieldCodec** StaticGet_IJCJOMNDMFO()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "LLELJOADLPI")->GetStaticField(0x4B980);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "LLELJOADLPI")->GetStaticField(0x4B988);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_GMNOJOCHGMM()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "LLELJOADLPI")->GetStaticField(0x4B990);
		}

		// static const ::System::Object FOPDAOKLCOJ; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object DBOIPELDIGB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLELJOADLPI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LLELJOADLPI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LLELJOADLPI*))((::PBYTE)hIl2Cpp + LLELJOADLPI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LLELJOADLPI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + LLELJOADLPI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLELJOADLPI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LLELJOADLPI* Clone()
		{
			return ((::LLELJOADLPI*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLELJOADLPI_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::PJBODOPJFGA*>* EBKHBLMOPAD()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::PJBODOPJFGA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLELJOADLPI_EBKHBLMOPAD_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LLELJOADLPI_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LLELJOADLPI_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::BKJCADFCHAB*>* HKNAGCCCLEM()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::BKJCADFCHAB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLELJOADLPI_HKNAGCCCLEM_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LLELJOADLPI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LLELJOADLPI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LLELJOADLPI*))((::PBYTE)hIl2Cpp + LLELJOADLPI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LLELJOADLPI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLELJOADLPI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LLELJOADLPI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LLELJOADLPI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LLELJOADLPI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LLELJOADLPI*))((::PBYTE)hIl2Cpp + LLELJOADLPI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LLELJOADLPI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
