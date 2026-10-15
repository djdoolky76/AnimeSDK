#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AMCGEGIPAKJ;
class LJOLNGEEKFE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AMCGEGIPAKJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4EB9B0)
#define AMCGEGIPAKJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4EBD50)
#define AMCGEGIPAKJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4EB500)
#define AMCGEGIPAKJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4EB440)
#define AMCGEGIPAKJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4EB3F0)
#define AMCGEGIPAKJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4EB6B0)
#define AMCGEGIPAKJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4EB560)
#define AMCGEGIPAKJ_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E4EB550)
#define AMCGEGIPAKJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4EB7D0)
#define AMCGEGIPAKJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4EB3B0)
#define AMCGEGIPAKJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4EBB80)
#define AMCGEGIPAKJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4EBAE0)
#define AMCGEGIPAKJ_MJOPELGMGPM_OFFSET UNITYSDK_OFFSET(0x1E4EB530)
#define AMCGEGIPAKJ_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E4EB540)
#define AMCGEGIPAKJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4EB3E0)
#define AMCGEGIPAKJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4EB840)
#define AMCGEGIPAKJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4EB8A0)

inline static constexpr unsigned int AMCGEGIPAKJ_TypeDefinitionIndex = 28981;

	class AMCGEGIPAKJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::LJOLNGEEKFE*>* EFMGBOIFOCO; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::LJOLNGEEKFE*>** StaticGet_KOJIJONHFNF()
		{
			return (::Google::Protobuf::FieldCodec_1<::LJOLNGEEKFE*>**)UnitySDK::FromName("", "AMCGEGIPAKJ")->GetStaticField(0x44440);
		}

		static ::Google::Protobuf::MessageParser_1<::AMCGEGIPAKJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::AMCGEGIPAKJ*>**)UnitySDK::FromName("", "AMCGEGIPAKJ")->GetStaticField(0x44448);
		}

		// static const ::System::Object DBKNLADGHCI; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMCGEGIPAKJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AMCGEGIPAKJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AMCGEGIPAKJ*))((::PBYTE)hIl2Cpp + AMCGEGIPAKJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AMCGEGIPAKJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::AMCGEGIPAKJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::AMCGEGIPAKJ*>*(*)())((::PBYTE)hIl2Cpp + AMCGEGIPAKJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMCGEGIPAKJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AMCGEGIPAKJ* Clone()
		{
			return ((::AMCGEGIPAKJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMCGEGIPAKJ_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::LJOLNGEEKFE*>* MJOPELGMGPM()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::LJOLNGEEKFE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMCGEGIPAKJ_MJOPELGMGPM_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AMCGEGIPAKJ_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AMCGEGIPAKJ_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AMCGEGIPAKJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AMCGEGIPAKJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AMCGEGIPAKJ*))((::PBYTE)hIl2Cpp + AMCGEGIPAKJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AMCGEGIPAKJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMCGEGIPAKJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AMCGEGIPAKJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AMCGEGIPAKJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AMCGEGIPAKJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AMCGEGIPAKJ*))((::PBYTE)hIl2Cpp + AMCGEGIPAKJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AMCGEGIPAKJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
