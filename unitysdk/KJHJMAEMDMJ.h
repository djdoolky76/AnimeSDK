#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KJHJMAEMDMJ;
class ONFLANPGHHL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KJHJMAEMDMJ_AENLBGLIBJL_OFFSET UNITYSDK_OFFSET(0x1E83EF00)
#define KJHJMAEMDMJ_AIMMOANBDCA_OFFSET UNITYSDK_OFFSET(0x1E83EF10)
#define KJHJMAEMDMJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E83F3E0)
#define KJHJMAEMDMJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E83F810)
#define KJHJMAEMDMJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E83EEA0)
#define KJHJMAEMDMJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E83EDE0)
#define KJHJMAEMDMJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E83ED90)
#define KJHJMAEMDMJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E83F080)
#define KJHJMAEMDMJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E83EF20)
#define KJHJMAEMDMJ_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E83EEE0)
#define KJHJMAEMDMJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E83F1B0)
#define KJHJMAEMDMJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E83ED50)
#define KJHJMAEMDMJ_KOHFMEKKOME_OFFSET UNITYSDK_OFFSET(0x1E83EEF0)
#define KJHJMAEMDMJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E83F620)
#define KJHJMAEMDMJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E83F570)
#define KJHJMAEMDMJ_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E83EED0)
#define KJHJMAEMDMJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E83ED80)
#define KJHJMAEMDMJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E83F220)
#define KJHJMAEMDMJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E83F280)

inline static constexpr unsigned int KJHJMAEMDMJ_TypeDefinitionIndex = 32613;

	class KJHJMAEMDMJ : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::ONFLANPGHHL*>* AMHLLOBFPHK; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		::System::UInt32 LJDBCGPFFDH; // 0x24
		static ::Google::Protobuf::MessageParser_1<::KJHJMAEMDMJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KJHJMAEMDMJ*>**)UnitySDK::FromName("", "KJHJMAEMDMJ")->GetStaticField(0x1A0B0);
		}

		static ::Google::Protobuf::FieldCodec_1<::ONFLANPGHHL*>** StaticGet_ENHMBCHBBCH()
		{
			return (::Google::Protobuf::FieldCodec_1<::ONFLANPGHHL*>**)UnitySDK::FromName("", "KJHJMAEMDMJ")->GetStaticField(0x1A0B8);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object GNMMKPOJCLI; // 0x0
		// static const ::System::Object KOEOEHIMOEI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJHJMAEMDMJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KJHJMAEMDMJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KJHJMAEMDMJ*))((::PBYTE)hIl2Cpp + KJHJMAEMDMJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KJHJMAEMDMJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KJHJMAEMDMJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KJHJMAEMDMJ*>*(*)())((::PBYTE)hIl2Cpp + KJHJMAEMDMJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJHJMAEMDMJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KJHJMAEMDMJ* Clone()
		{
			return ((::KJHJMAEMDMJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJHJMAEMDMJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJHJMAEMDMJ_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KJHJMAEMDMJ_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::ONFLANPGHHL*>* KOHFMEKKOME()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::ONFLANPGHHL*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJHJMAEMDMJ_KOHFMEKKOME_OFFSET))(this);
		}

		::System::UInt32 AENLBGLIBJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJHJMAEMDMJ_AENLBGLIBJL_OFFSET))(this);
		}

		::System::Void AIMMOANBDCA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KJHJMAEMDMJ_AIMMOANBDCA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KJHJMAEMDMJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KJHJMAEMDMJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KJHJMAEMDMJ*))((::PBYTE)hIl2Cpp + KJHJMAEMDMJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJHJMAEMDMJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJHJMAEMDMJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KJHJMAEMDMJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJHJMAEMDMJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KJHJMAEMDMJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KJHJMAEMDMJ*))((::PBYTE)hIl2Cpp + KJHJMAEMDMJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KJHJMAEMDMJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
