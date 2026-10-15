#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ABCHBKBKCDF;
class MEKPDDBLCGK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MEKPDDBLCGK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA0F490)
#define MEKPDDBLCGK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA0F870)
#define MEKPDDBLCGK_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA0EF00)
#define MEKPDDBLCGK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA0EE00)
#define MEKPDDBLCGK_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA0ED80)
#define MEKPDDBLCGK_DPFLPFADJNK_OFFSET UNITYSDK_OFFSET(0x1EA0EF70)
#define MEKPDDBLCGK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA0EFC0)
#define MEKPDDBLCGK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA0EF90)
#define MEKPDDBLCGK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA0F120)
#define MEKPDDBLCGK_GJDHLMPNHIK_OFFSET UNITYSDK_OFFSET(0x1EA0EF40)
#define MEKPDDBLCGK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA0ED40)
#define MEKPDDBLCGK_JKLDHNNGNCK_OFFSET UNITYSDK_OFFSET(0x1EA0EF60)
#define MEKPDDBLCGK_KHINOGAEHBI_OFFSET UNITYSDK_OFFSET(0x1EA0EF80)
#define MEKPDDBLCGK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA0F740)
#define MEKPDDBLCGK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA0F670)
#define MEKPDDBLCGK_MJOEMBBMBON_OFFSET UNITYSDK_OFFSET(0x1EA0EF30)
#define MEKPDDBLCGK_OACFKOBFCIN_OFFSET UNITYSDK_OFFSET(0x1EA0EF50)
#define MEKPDDBLCGK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA0ED70)
#define MEKPDDBLCGK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA0F270)
#define MEKPDDBLCGK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA0F2D0)

inline static constexpr unsigned int MEKPDDBLCGK_TypeDefinitionIndex = 26880;

	class MEKPDDBLCGK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::ABCHBKBKCDF*>* CBFGBDBJHID; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* FLHOIFJLDCM; // 0x20
		::System::UInt32 IDPMGABNGKO; // 0x28
		::System::UInt32 MNPCFPKHFAB; // 0x2C
		static ::Google::Protobuf::FieldCodec** StaticGet_DDFODHOFBIP()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "MEKPDDBLCGK")->GetStaticField(0x4AFF0);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_JNLOIKKDOFA()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "MEKPDDBLCGK")->GetStaticField(0x4AFF8);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "MEKPDDBLCGK")->GetStaticField(0x4B000);
		}

		// static const ::System::Object IMGDAOEBONP; // 0x0
		// static const ::System::Object INDBKLPEMDP; // 0x0
		// static const ::System::Object OOGKNMKNJNI; // 0x0
		// static const ::System::Object PMGMOKACFAP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEKPDDBLCGK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MEKPDDBLCGK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MEKPDDBLCGK*))((::PBYTE)hIl2Cpp + MEKPDDBLCGK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MEKPDDBLCGK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + MEKPDDBLCGK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEKPDDBLCGK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MEKPDDBLCGK* Clone()
		{
			return ((::MEKPDDBLCGK*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEKPDDBLCGK_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::ABCHBKBKCDF*>* MJOEMBBMBON()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::ABCHBKBKCDF*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEKPDDBLCGK_MJOEMBBMBON_OFFSET))(this);
		}

		::System::UInt32 GJDHLMPNHIK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MEKPDDBLCGK_GJDHLMPNHIK_OFFSET))(this);
		}

		::System::Void OACFKOBFCIN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MEKPDDBLCGK_OACFKOBFCIN_OFFSET))(this, a1);
		}

		::System::UInt32 JKLDHNNGNCK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MEKPDDBLCGK_JKLDHNNGNCK_OFFSET))(this);
		}

		::System::Void DPFLPFADJNK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MEKPDDBLCGK_DPFLPFADJNK_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* KHINOGAEHBI()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEKPDDBLCGK_KHINOGAEHBI_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MEKPDDBLCGK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MEKPDDBLCGK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MEKPDDBLCGK*))((::PBYTE)hIl2Cpp + MEKPDDBLCGK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MEKPDDBLCGK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEKPDDBLCGK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MEKPDDBLCGK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MEKPDDBLCGK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MEKPDDBLCGK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MEKPDDBLCGK*))((::PBYTE)hIl2Cpp + MEKPDDBLCGK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MEKPDDBLCGK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
