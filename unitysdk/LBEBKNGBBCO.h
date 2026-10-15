#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LBEBKNGBBCO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LBEBKNGBBCO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8AD400)
#define LBEBKNGBBCO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8AD700)
#define LBEBKNGBBCO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8ACF70)
#define LBEBKNGBBCO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8ACEE0)
#define LBEBKNGBBCO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8ACE90)
#define LBEBKNGBBCO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8AD0D0)
#define LBEBKNGBBCO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8ACFD0)
#define LBEBKNGBBCO_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E8ACFC0)
#define LBEBKNGBBCO_FMEIAEAMKPP_OFFSET UNITYSDK_OFFSET(0x1E8ACFA0)
#define LBEBKNGBBCO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8AD1C0)
#define LBEBKNGBBCO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E8ACE50)
#define LBEBKNGBBCO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8AD540)
#define LBEBKNGBBCO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8AD4F0)
#define LBEBKNGBBCO_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E8ACFB0)
#define LBEBKNGBBCO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8ACE80)
#define LBEBKNGBBCO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8AD2C0)
#define LBEBKNGBBCO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8AD320)

inline static constexpr unsigned int LBEBKNGBBCO_TypeDefinitionIndex = 30871;

	class LBEBKNGBBCO : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* EJJJNMKINKP; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_MODIEGGDDBH()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "LBEBKNGBBCO")->GetStaticField(0x25A20);
		}

		static ::Google::Protobuf::MessageParser_1<::LBEBKNGBBCO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LBEBKNGBBCO*>**)UnitySDK::FromName("", "LBEBKNGBBCO")->GetStaticField(0x25A28);
		}

		// static const ::System::Object GHAAPPEBMBH; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBEBKNGBBCO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LBEBKNGBBCO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LBEBKNGBBCO*))((::PBYTE)hIl2Cpp + LBEBKNGBBCO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LBEBKNGBBCO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LBEBKNGBBCO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LBEBKNGBBCO*>*(*)())((::PBYTE)hIl2Cpp + LBEBKNGBBCO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBEBKNGBBCO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LBEBKNGBBCO* Clone()
		{
			return ((::LBEBKNGBBCO*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBEBKNGBBCO_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* FMEIAEAMKPP()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBEBKNGBBCO_FMEIAEAMKPP_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LBEBKNGBBCO_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LBEBKNGBBCO_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LBEBKNGBBCO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LBEBKNGBBCO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LBEBKNGBBCO*))((::PBYTE)hIl2Cpp + LBEBKNGBBCO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LBEBKNGBBCO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBEBKNGBBCO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LBEBKNGBBCO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LBEBKNGBBCO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LBEBKNGBBCO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LBEBKNGBBCO*))((::PBYTE)hIl2Cpp + LBEBKNGBBCO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LBEBKNGBBCO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
