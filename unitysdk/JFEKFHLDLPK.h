#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JBNGCJJDLHL;
class JFEKFHLDLPK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JFEKFHLDLPK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E6FAA50)
#define JFEKFHLDLPK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6FADC0)
#define JFEKFHLDLPK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E6FA590)
#define JFEKFHLDLPK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6FA500)
#define JFEKFHLDLPK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6FA4C0)
#define JFEKFHLDLPK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E6FA740)
#define JFEKFHLDLPK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E6FA5F0)
#define JFEKFHLDLPK_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E6FA5D0)
#define JFEKFHLDLPK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6FA870)
#define JFEKFHLDLPK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E6FA480)
#define JFEKFHLDLPK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E6FAC00)
#define JFEKFHLDLPK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E6FAB60)
#define JFEKFHLDLPK_MGNPOGOPCEA_OFFSET UNITYSDK_OFFSET(0x1E6FA5E0)
#define JFEKFHLDLPK_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E6FA5C0)
#define JFEKFHLDLPK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E6FA4B0)
#define JFEKFHLDLPK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6FA8E0)
#define JFEKFHLDLPK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E6FA940)

inline static constexpr unsigned int JFEKFHLDLPK_TypeDefinitionIndex = 32440;

	class JFEKFHLDLPK : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::JBNGCJJDLHL*>* KONALKBONBL; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::JFEKFHLDLPK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JFEKFHLDLPK*>**)UnitySDK::FromName("", "JFEKFHLDLPK")->GetStaticField(0x5CE20);
		}

		static ::Google::Protobuf::FieldCodec_1<::JBNGCJJDLHL*>** StaticGet_KMDKPLGOCHA()
		{
			return (::Google::Protobuf::FieldCodec_1<::JBNGCJJDLHL*>**)UnitySDK::FromName("", "JFEKFHLDLPK")->GetStaticField(0x5CE28);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object PNDKLBEDBLK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFEKFHLDLPK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JFEKFHLDLPK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JFEKFHLDLPK*))((::PBYTE)hIl2Cpp + JFEKFHLDLPK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JFEKFHLDLPK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JFEKFHLDLPK*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JFEKFHLDLPK*>*(*)())((::PBYTE)hIl2Cpp + JFEKFHLDLPK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFEKFHLDLPK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JFEKFHLDLPK* Clone()
		{
			return ((::JFEKFHLDLPK*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFEKFHLDLPK_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JFEKFHLDLPK_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JFEKFHLDLPK_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::JBNGCJJDLHL*>* MGNPOGOPCEA()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::JBNGCJJDLHL*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFEKFHLDLPK_MGNPOGOPCEA_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JFEKFHLDLPK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JFEKFHLDLPK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JFEKFHLDLPK*))((::PBYTE)hIl2Cpp + JFEKFHLDLPK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JFEKFHLDLPK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFEKFHLDLPK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JFEKFHLDLPK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JFEKFHLDLPK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JFEKFHLDLPK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JFEKFHLDLPK*))((::PBYTE)hIl2Cpp + JFEKFHLDLPK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JFEKFHLDLPK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
