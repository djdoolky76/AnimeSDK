#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JLBGMJFLJEE;
class LEBJPFBMOJM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JLBGMJFLJEE_BAHCDLCBGHK_OFFSET UNITYSDK_OFFSET(0x1E746D60)
#define JLBGMJFLJEE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E747190)
#define JLBGMJFLJEE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E747560)
#define JLBGMJFLJEE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E746CE0)
#define JLBGMJFLJEE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E746C20)
#define JLBGMJFLJEE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E746BD0)
#define JLBGMJFLJEE_DFIJENKEJNE_OFFSET UNITYSDK_OFFSET(0x1E746D40)
#define JLBGMJFLJEE_EEEJBCFIKCH_OFFSET UNITYSDK_OFFSET(0x1E746D50)
#define JLBGMJFLJEE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E746DB0)
#define JLBGMJFLJEE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E746D80)
#define JLBGMJFLJEE_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E746D20)
#define JLBGMJFLJEE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E746EF0)
#define JLBGMJFLJEE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E746B90)
#define JLBGMJFLJEE_KDKFDHIMJCN_OFFSET UNITYSDK_OFFSET(0x1E746D70)
#define JLBGMJFLJEE_LLMANKFGNIN_OFFSET UNITYSDK_OFFSET(0x1E746D30)
#define JLBGMJFLJEE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E747460)
#define JLBGMJFLJEE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E7473A0)
#define JLBGMJFLJEE_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E746D10)
#define JLBGMJFLJEE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E746BC0)
#define JLBGMJFLJEE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E746F70)
#define JLBGMJFLJEE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E746FD0)

inline static constexpr unsigned int JLBGMJFLJEE_TypeDefinitionIndex = 27003;

	class JLBGMJFLJEE : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::LEBJPFBMOJM*>* DFCLAHLBHEB; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		::System::UInt32 KHNEMPCDLJC; // 0x24
		::System::UInt32 GIBEGMIBKIM; // 0x28
		static ::Google::Protobuf::FieldCodec_1<::LEBJPFBMOJM*>** StaticGet_GPALJJOLPOL()
		{
			return (::Google::Protobuf::FieldCodec_1<::LEBJPFBMOJM*>**)UnitySDK::FromName("", "JLBGMJFLJEE")->GetStaticField(0x63CD0);
		}

		static ::Google::Protobuf::MessageParser_1<::JLBGMJFLJEE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JLBGMJFLJEE*>**)UnitySDK::FromName("", "JLBGMJFLJEE")->GetStaticField(0x63CD8);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object ABFCGHDJEJA; // 0x0
		// static const ::System::Object BBPEIEAMMLA; // 0x0
		// static const ::System::Object OIFMPNNBOBO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLBGMJFLJEE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JLBGMJFLJEE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JLBGMJFLJEE*))((::PBYTE)hIl2Cpp + JLBGMJFLJEE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JLBGMJFLJEE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JLBGMJFLJEE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JLBGMJFLJEE*>*(*)())((::PBYTE)hIl2Cpp + JLBGMJFLJEE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLBGMJFLJEE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JLBGMJFLJEE* Clone()
		{
			return ((::JLBGMJFLJEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLBGMJFLJEE_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JLBGMJFLJEE_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JLBGMJFLJEE_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::LEBJPFBMOJM*>* LLMANKFGNIN()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::LEBJPFBMOJM*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLBGMJFLJEE_LLMANKFGNIN_OFFSET))(this);
		}

		::System::UInt32 DFIJENKEJNE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JLBGMJFLJEE_DFIJENKEJNE_OFFSET))(this);
		}

		::System::Void EEEJBCFIKCH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JLBGMJFLJEE_EEEJBCFIKCH_OFFSET))(this, a1);
		}

		::System::UInt32 BAHCDLCBGHK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JLBGMJFLJEE_BAHCDLCBGHK_OFFSET))(this);
		}

		::System::Void KDKFDHIMJCN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JLBGMJFLJEE_KDKFDHIMJCN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JLBGMJFLJEE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JLBGMJFLJEE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JLBGMJFLJEE*))((::PBYTE)hIl2Cpp + JLBGMJFLJEE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JLBGMJFLJEE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLBGMJFLJEE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JLBGMJFLJEE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JLBGMJFLJEE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JLBGMJFLJEE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JLBGMJFLJEE*))((::PBYTE)hIl2Cpp + JLBGMJFLJEE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JLBGMJFLJEE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
