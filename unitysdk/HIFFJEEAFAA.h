#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HIFFJEEAFAA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HIFFJEEAFAA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E594470)
#define HIFFJEEAFAA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E594750)
#define HIFFJEEAFAA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E593FE0)
#define HIFFJEEAFAA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E593F50)
#define HIFFJEEAFAA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E593F00)
#define HIFFJEEAFAA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E594140)
#define HIFFJEEAFAA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E594040)
#define HIFFJEEAFAA_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E594020)
#define HIFFJEEAFAA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E594230)
#define HIFFJEEAFAA_JALJFGMDLOJ_OFFSET UNITYSDK_OFFSET(0x1E594030)
#define HIFFJEEAFAA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E593EC0)
#define HIFFJEEAFAA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E5945A0)
#define HIFFJEEAFAA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E594550)
#define HIFFJEEAFAA_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E594010)
#define HIFFJEEAFAA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E593EF0)
#define HIFFJEEAFAA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E594330)
#define HIFFJEEAFAA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E594390)

inline static constexpr unsigned int HIFFJEEAFAA_TypeDefinitionIndex = 27641;

	class HIFFJEEAFAA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* IOJLMOKPCGL; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::HIFFJEEAFAA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HIFFJEEAFAA*>**)UnitySDK::FromName("", "HIFFJEEAFAA")->GetStaticField(0x3CAE0);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_DIOPCFCBHJJ()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "HIFFJEEAFAA")->GetStaticField(0x3CAE8);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object GNBGDANLDAO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIFFJEEAFAA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HIFFJEEAFAA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIFFJEEAFAA*))((::PBYTE)hIl2Cpp + HIFFJEEAFAA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HIFFJEEAFAA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HIFFJEEAFAA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HIFFJEEAFAA*>*(*)())((::PBYTE)hIl2Cpp + HIFFJEEAFAA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIFFJEEAFAA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HIFFJEEAFAA* Clone()
		{
			return ((::HIFFJEEAFAA*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIFFJEEAFAA_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HIFFJEEAFAA_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HIFFJEEAFAA_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JALJFGMDLOJ()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIFFJEEAFAA_JALJFGMDLOJ_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HIFFJEEAFAA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HIFFJEEAFAA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HIFFJEEAFAA*))((::PBYTE)hIl2Cpp + HIFFJEEAFAA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HIFFJEEAFAA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIFFJEEAFAA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HIFFJEEAFAA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HIFFJEEAFAA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HIFFJEEAFAA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIFFJEEAFAA*))((::PBYTE)hIl2Cpp + HIFFJEEAFAA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HIFFJEEAFAA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
