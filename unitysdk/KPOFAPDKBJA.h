#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KPOFAPDKBJA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KPOFAPDKBJA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8C2680)
#define KPOFAPDKBJA_CAPJEMAIAHH_OFFSET UNITYSDK_OFFSET(0x1E8C2200)
#define KPOFAPDKBJA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8C2A60)
#define KPOFAPDKBJA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8C2150)
#define KPOFAPDKBJA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8C20C0)
#define KPOFAPDKBJA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8C2070)
#define KPOFAPDKBJA_DHLMAJDPJKL_OFFSET UNITYSDK_OFFSET(0x1E8C21B0)
#define KPOFAPDKBJA_EJMMJJIOPHM_OFFSET UNITYSDK_OFFSET(0x1E8C2180)
#define KPOFAPDKBJA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8C22A0)
#define KPOFAPDKBJA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8C2210)
#define KPOFAPDKBJA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8C2320)
#define KPOFAPDKBJA_GIMJBNBABDC_OFFSET UNITYSDK_OFFSET(0x1E8C21F0)
#define KPOFAPDKBJA_GNAMNDMKGMP_OFFSET UNITYSDK_OFFSET(0x1E8C21D0)
#define KPOFAPDKBJA_GOLPFFCDICE_OFFSET UNITYSDK_OFFSET(0x1E8C21A0)
#define KPOFAPDKBJA_IKBGGJFFGLD_OFFSET UNITYSDK_OFFSET(0x1E8C21C0)
#define KPOFAPDKBJA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E8C2030)
#define KPOFAPDKBJA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8C2950)
#define KPOFAPDKBJA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8C28E0)
#define KPOFAPDKBJA_OGCGGDEEKIJ_OFFSET UNITYSDK_OFFSET(0x1E8C21E0)
#define KPOFAPDKBJA_OGMHHLBHKOF_OFFSET UNITYSDK_OFFSET(0x1E8C2190)
#define KPOFAPDKBJA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8C2060)
#define KPOFAPDKBJA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8C2430)
#define KPOFAPDKBJA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8C2490)

inline static constexpr unsigned int KPOFAPDKBJA_TypeDefinitionIndex = 33107;

	class KPOFAPDKBJA : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* HCJFIMHIAIG; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 HEJKOADHLEP; // 0x20
		::System::UInt32 JCGMPJONLCA; // 0x24
		::System::UInt32 AJNGCBPGNHP; // 0x28
		::System::UInt32 BJJEIECJFJH; // 0x2C
		static ::Google::Protobuf::MessageParser_1<::KPOFAPDKBJA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KPOFAPDKBJA*>**)UnitySDK::FromName("", "KPOFAPDKBJA")->GetStaticField(0x2D5C0);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_EABOIGKAFKI()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "KPOFAPDKBJA")->GetStaticField(0x2D5C8);
		}

		// static const ::System::Object AHHPAJNKPCE; // 0x0
		// static const ::System::Object GAHLJEECCFB; // 0x0
		// static const ::System::Object JIGJIADCICG; // 0x0
		// static const ::System::Object KJOFBAAHDCO; // 0x0
		// static const ::System::Object CKDKFJCFOAB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPOFAPDKBJA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KPOFAPDKBJA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KPOFAPDKBJA*))((::PBYTE)hIl2Cpp + KPOFAPDKBJA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KPOFAPDKBJA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KPOFAPDKBJA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KPOFAPDKBJA*>*(*)())((::PBYTE)hIl2Cpp + KPOFAPDKBJA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPOFAPDKBJA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KPOFAPDKBJA* Clone()
		{
			return ((::KPOFAPDKBJA*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPOFAPDKBJA_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* EJMMJJIOPHM()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPOFAPDKBJA_EJMMJJIOPHM_OFFSET))(this);
		}

		::System::UInt32 OGMHHLBHKOF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KPOFAPDKBJA_OGMHHLBHKOF_OFFSET))(this);
		}

		::System::Void GOLPFFCDICE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KPOFAPDKBJA_GOLPFFCDICE_OFFSET))(this, a1);
		}

		::System::UInt32 DHLMAJDPJKL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KPOFAPDKBJA_DHLMAJDPJKL_OFFSET))(this);
		}

		::System::Void IKBGGJFFGLD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KPOFAPDKBJA_IKBGGJFFGLD_OFFSET))(this, a1);
		}

		::System::UInt32 GNAMNDMKGMP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KPOFAPDKBJA_GNAMNDMKGMP_OFFSET))(this);
		}

		::System::Void OGCGGDEEKIJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KPOFAPDKBJA_OGCGGDEEKIJ_OFFSET))(this, a1);
		}

		::System::UInt32 GIMJBNBABDC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KPOFAPDKBJA_GIMJBNBABDC_OFFSET))(this);
		}

		::System::Void CAPJEMAIAHH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KPOFAPDKBJA_CAPJEMAIAHH_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KPOFAPDKBJA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KPOFAPDKBJA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KPOFAPDKBJA*))((::PBYTE)hIl2Cpp + KPOFAPDKBJA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KPOFAPDKBJA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPOFAPDKBJA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KPOFAPDKBJA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KPOFAPDKBJA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KPOFAPDKBJA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KPOFAPDKBJA*))((::PBYTE)hIl2Cpp + KPOFAPDKBJA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KPOFAPDKBJA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
