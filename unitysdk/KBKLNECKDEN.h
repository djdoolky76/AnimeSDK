#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KBKLNECKDEN;
class OKCCLEEPELM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KBKLNECKDEN_ABMLMINDCHE_OFFSET UNITYSDK_OFFSET(0x1E7C33F0)
#define KBKLNECKDEN_ADFJLJCNOPK_OFFSET UNITYSDK_OFFSET(0x1E7C33B0)
#define KBKLNECKDEN_BPPFDFEBHNN_OFFSET UNITYSDK_OFFSET(0x1E7C3410)
#define KBKLNECKDEN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E7C38F0)
#define KBKLNECKDEN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7C3D90)
#define KBKLNECKDEN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E7C3380)
#define KBKLNECKDEN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7C32A0)
#define KBKLNECKDEN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7C3260)
#define KBKLNECKDEN_EAFFODAOIEA_OFFSET UNITYSDK_OFFSET(0x1E7C33D0)
#define KBKLNECKDEN_EFADKOKEDIF_OFFSET UNITYSDK_OFFSET(0x1E7C3400)
#define KBKLNECKDEN_EMPMJGOJEFG_OFFSET UNITYSDK_OFFSET(0x1E7C33C0)
#define KBKLNECKDEN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E7C3470)
#define KBKLNECKDEN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E7C3440)
#define KBKLNECKDEN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E7C35C0)
#define KBKLNECKDEN_GOLPFFCDICE_OFFSET UNITYSDK_OFFSET(0x1E7C3430)
#define KBKLNECKDEN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E7C3220)
#define KBKLNECKDEN_KDLPHFPDMIE_OFFSET UNITYSDK_OFFSET(0x1E7C33E0)
#define KBKLNECKDEN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E7C3C70)
#define KBKLNECKDEN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E7C3B40)
#define KBKLNECKDEN_OGMHHLBHKOF_OFFSET UNITYSDK_OFFSET(0x1E7C3420)
#define KBKLNECKDEN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E7C3250)
#define KBKLNECKDEN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E7C3660)
#define KBKLNECKDEN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E7C36C0)

inline static constexpr unsigned int KBKLNECKDEN_TypeDefinitionIndex = 33085;

	class KBKLNECKDEN : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::OKCCLEEPELM*>* MIKPPLIHHFO; // 0x10
		::OKCCLEEPELM* HHPDMLAGDGP; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		::System::UInt32 NBPCBKCMPMB; // 0x28
		::System::UInt32 JCGMPJONLCA; // 0x2C
		::System::UInt32 LOKFCLDAMBK; // 0x30
		static ::Google::Protobuf::MessageParser_1<::KBKLNECKDEN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KBKLNECKDEN*>**)UnitySDK::FromName("", "KBKLNECKDEN")->GetStaticField(0xE9F0);
		}

		static ::Google::Protobuf::FieldCodec_1<::OKCCLEEPELM*>** StaticGet_JBLJOHABIHO()
		{
			return (::Google::Protobuf::FieldCodec_1<::OKCCLEEPELM*>**)UnitySDK::FromName("", "KBKLNECKDEN")->GetStaticField(0xE9F8);
		}

		// static const ::System::Object PEBEFKEJDEI; // 0x0
		// static const ::System::Object IIJNKKCGKJG; // 0x0
		// static const ::System::Object HCFOFCCGFOC; // 0x0
		// static const ::System::Object PHAHKBNJODH; // 0x0
		// static const ::System::Object GAHLJEECCFB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBKLNECKDEN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KBKLNECKDEN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KBKLNECKDEN*))((::PBYTE)hIl2Cpp + KBKLNECKDEN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KBKLNECKDEN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KBKLNECKDEN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KBKLNECKDEN*>*(*)())((::PBYTE)hIl2Cpp + KBKLNECKDEN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBKLNECKDEN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KBKLNECKDEN* Clone()
		{
			return ((::KBKLNECKDEN*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBKLNECKDEN_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::OKCCLEEPELM*>* ADFJLJCNOPK()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::OKCCLEEPELM*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBKLNECKDEN_ADFJLJCNOPK_OFFSET))(this);
		}

		::System::UInt32 EMPMJGOJEFG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KBKLNECKDEN_EMPMJGOJEFG_OFFSET))(this);
		}

		::System::Void EAFFODAOIEA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KBKLNECKDEN_EAFFODAOIEA_OFFSET))(this, a1);
		}

		::OKCCLEEPELM* KDLPHFPDMIE()
		{
			return ((::OKCCLEEPELM*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBKLNECKDEN_KDLPHFPDMIE_OFFSET))(this);
		}

		::System::Void ABMLMINDCHE(::OKCCLEEPELM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OKCCLEEPELM*))((::PBYTE)hIl2Cpp + KBKLNECKDEN_ABMLMINDCHE_OFFSET))(this, a1);
		}

		::System::UInt32 EFADKOKEDIF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KBKLNECKDEN_EFADKOKEDIF_OFFSET))(this);
		}

		::System::Void BPPFDFEBHNN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KBKLNECKDEN_BPPFDFEBHNN_OFFSET))(this, a1);
		}

		::System::UInt32 OGMHHLBHKOF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KBKLNECKDEN_OGMHHLBHKOF_OFFSET))(this);
		}

		::System::Void GOLPFFCDICE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KBKLNECKDEN_GOLPFFCDICE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KBKLNECKDEN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KBKLNECKDEN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KBKLNECKDEN*))((::PBYTE)hIl2Cpp + KBKLNECKDEN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KBKLNECKDEN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBKLNECKDEN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KBKLNECKDEN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KBKLNECKDEN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KBKLNECKDEN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KBKLNECKDEN*))((::PBYTE)hIl2Cpp + KBKLNECKDEN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KBKLNECKDEN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
