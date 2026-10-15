#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GELEDBJOGNM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GELEDBJOGNM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E42FF60)
#define GELEDBJOGNM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E430240)
#define GELEDBJOGNM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E42FAD0)
#define GELEDBJOGNM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E42FA40)
#define GELEDBJOGNM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E42F9F0)
#define GELEDBJOGNM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E42FC30)
#define GELEDBJOGNM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E42FB30)
#define GELEDBJOGNM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E42FD20)
#define GELEDBJOGNM_JALJFGMDLOJ_OFFSET UNITYSDK_OFFSET(0x1E42FB20)
#define GELEDBJOGNM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E42F9B0)
#define GELEDBJOGNM_KECEFHGCBGH_OFFSET UNITYSDK_OFFSET(0x1E42FB00)
#define GELEDBJOGNM_KIJINHPMFJC_OFFSET UNITYSDK_OFFSET(0x1E42FB10)
#define GELEDBJOGNM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E430090)
#define GELEDBJOGNM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E430040)
#define GELEDBJOGNM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E42F9E0)
#define GELEDBJOGNM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E42FE20)
#define GELEDBJOGNM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E42FE80)

inline static constexpr unsigned int GELEDBJOGNM_TypeDefinitionIndex = 27643;

	class GELEDBJOGNM : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* IOJLMOKPCGL; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 AAMBOGIBJKK; // 0x20
		static ::Google::Protobuf::MessageParser_1<::GELEDBJOGNM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GELEDBJOGNM*>**)UnitySDK::FromName("", "GELEDBJOGNM")->GetStaticField(0x121C0);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_DIOPCFCBHJJ()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "GELEDBJOGNM")->GetStaticField(0x121C8);
		}

		// static const ::System::Object IIKDJEJFAOG; // 0x0
		// static const ::System::Object GNBGDANLDAO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GELEDBJOGNM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GELEDBJOGNM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GELEDBJOGNM*))((::PBYTE)hIl2Cpp + GELEDBJOGNM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GELEDBJOGNM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GELEDBJOGNM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GELEDBJOGNM*>*(*)())((::PBYTE)hIl2Cpp + GELEDBJOGNM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GELEDBJOGNM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GELEDBJOGNM* Clone()
		{
			return ((::GELEDBJOGNM*(*)(::PVOID))((::PBYTE)hIl2Cpp + GELEDBJOGNM_CLONE_OFFSET))(this);
		}

		::System::UInt32 KECEFHGCBGH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GELEDBJOGNM_KECEFHGCBGH_OFFSET))(this);
		}

		::System::Void KIJINHPMFJC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GELEDBJOGNM_KIJINHPMFJC_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JALJFGMDLOJ()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GELEDBJOGNM_JALJFGMDLOJ_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GELEDBJOGNM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GELEDBJOGNM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GELEDBJOGNM*))((::PBYTE)hIl2Cpp + GELEDBJOGNM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GELEDBJOGNM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GELEDBJOGNM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GELEDBJOGNM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GELEDBJOGNM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GELEDBJOGNM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GELEDBJOGNM*))((::PBYTE)hIl2Cpp + GELEDBJOGNM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GELEDBJOGNM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
