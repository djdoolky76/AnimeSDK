#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MIGPNAOGHEP.h"
#include "unitysdk/System/Object.h"
class ILCJAJBPOMO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ILCJAJBPOMO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E67C450)
#define ILCJAJBPOMO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E67C7C0)
#define ILCJAJBPOMO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E67BED0)
#define ILCJAJBPOMO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E67BE20)
#define ILCJAJBPOMO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E67BD40)
#define ILCJAJBPOMO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E67BF60)
#define ILCJAJBPOMO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E67BF30)
#define ILCJAJBPOMO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E67C0D0)
#define ILCJAJBPOMO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E67BD00)
#define ILCJAJBPOMO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E67C630)
#define ILCJAJBPOMO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E67C560)
#define ILCJAJBPOMO_NMKCNFCKKCJ_OFFSET UNITYSDK_OFFSET(0x1E67BF00)
#define ILCJAJBPOMO_OGCAMMLHFHM_OFFSET UNITYSDK_OFFSET(0x1E67BF20)
#define ILCJAJBPOMO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E67BD30)
#define ILCJAJBPOMO_PNODNGEMEKA_OFFSET UNITYSDK_OFFSET(0x1E67BF10)
#define ILCJAJBPOMO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E67C2E0)
#define ILCJAJBPOMO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E67C340)

inline static constexpr unsigned int ILCJAJBPOMO_TypeDefinitionIndex = 33378;

	class ILCJAJBPOMO : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* EJOOPJGHANJ; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::MIGPNAOGHEP>* AGHNCMEICBD; // 0x20
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* KGKIFFLEIJK; // 0x28
		static ::Google::Protobuf::FieldCodec_1<::MIGPNAOGHEP>** StaticGet_DAGDEKKAOBB()
		{
			return (::Google::Protobuf::FieldCodec_1<::MIGPNAOGHEP>**)UnitySDK::FromName("", "ILCJAJBPOMO")->GetStaticField(0x51460);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_KKHLNKNMOFG()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "ILCJAJBPOMO")->GetStaticField(0x51468);
		}

		static ::Google::Protobuf::MessageParser_1<::ILCJAJBPOMO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::ILCJAJBPOMO*>**)UnitySDK::FromName("", "ILCJAJBPOMO")->GetStaticField(0x51470);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_LEAHAIGAFLP()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "ILCJAJBPOMO")->GetStaticField(0x51478);
		}

		// static const ::System::Object NBFJADJEBPF; // 0x0
		// static const ::System::Object BLFNBCNJEDB; // 0x0
		// static const ::System::Object KFLPOIEPBNG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILCJAJBPOMO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ILCJAJBPOMO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ILCJAJBPOMO*))((::PBYTE)hIl2Cpp + ILCJAJBPOMO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ILCJAJBPOMO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::ILCJAJBPOMO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::ILCJAJBPOMO*>*(*)())((::PBYTE)hIl2Cpp + ILCJAJBPOMO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILCJAJBPOMO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ILCJAJBPOMO* Clone()
		{
			return ((::ILCJAJBPOMO*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILCJAJBPOMO_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* NMKCNFCKKCJ()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILCJAJBPOMO_NMKCNFCKKCJ_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::MIGPNAOGHEP>* PNODNGEMEKA()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::MIGPNAOGHEP>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILCJAJBPOMO_PNODNGEMEKA_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* OGCAMMLHFHM()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILCJAJBPOMO_OGCAMMLHFHM_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ILCJAJBPOMO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ILCJAJBPOMO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ILCJAJBPOMO*))((::PBYTE)hIl2Cpp + ILCJAJBPOMO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ILCJAJBPOMO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILCJAJBPOMO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ILCJAJBPOMO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ILCJAJBPOMO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ILCJAJBPOMO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ILCJAJBPOMO*))((::PBYTE)hIl2Cpp + ILCJAJBPOMO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ILCJAJBPOMO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
