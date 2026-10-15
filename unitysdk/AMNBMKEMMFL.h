#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AMNBMKEMMFL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class PileItem; }
namespace System { class Object; }
namespace System { class String; }

#define AMNBMKEMMFL_CACOAPFOAAM_OFFSET UNITYSDK_OFFSET(0x1E4F8590)
#define AMNBMKEMMFL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4F8A10)
#define AMNBMKEMMFL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4F8DA0)
#define AMNBMKEMMFL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4F8560)
#define AMNBMKEMMFL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4F84D0)
#define AMNBMKEMMFL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4F8490)
#define AMNBMKEMMFL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4F8710)
#define AMNBMKEMMFL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4F85C0)
#define AMNBMKEMMFL_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E4F85B0)
#define AMNBMKEMMFL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4F8830)
#define AMNBMKEMMFL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4F8450)
#define AMNBMKEMMFL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4F8BE0)
#define AMNBMKEMMFL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4F8B40)
#define AMNBMKEMMFL_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E4F85A0)
#define AMNBMKEMMFL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4F8480)
#define AMNBMKEMMFL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4F88A0)
#define AMNBMKEMMFL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4F8900)

inline static constexpr unsigned int AMNBMKEMMFL_TypeDefinitionIndex = 30238;

	class AMNBMKEMMFL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::Proto::PileItem*>* MIEINLKPIMJ; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::AMNBMKEMMFL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::AMNBMKEMMFL*>**)UnitySDK::FromName("", "AMNBMKEMMFL")->GetStaticField(0x45D90);
		}

		static ::Google::Protobuf::FieldCodec_1<::Proto::PileItem*>** StaticGet_EDEMPAMDAFD()
		{
			return (::Google::Protobuf::FieldCodec_1<::Proto::PileItem*>**)UnitySDK::FromName("", "AMNBMKEMMFL")->GetStaticField(0x45D98);
		}

		// static const ::System::Object DFABHHAPAEA; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMNBMKEMMFL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AMNBMKEMMFL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AMNBMKEMMFL*))((::PBYTE)hIl2Cpp + AMNBMKEMMFL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AMNBMKEMMFL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::AMNBMKEMMFL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::AMNBMKEMMFL*>*(*)())((::PBYTE)hIl2Cpp + AMNBMKEMMFL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMNBMKEMMFL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AMNBMKEMMFL* Clone()
		{
			return ((::AMNBMKEMMFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMNBMKEMMFL_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Proto::PileItem*>* CACOAPFOAAM()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::PileItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMNBMKEMMFL_CACOAPFOAAM_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AMNBMKEMMFL_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AMNBMKEMMFL_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AMNBMKEMMFL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AMNBMKEMMFL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AMNBMKEMMFL*))((::PBYTE)hIl2Cpp + AMNBMKEMMFL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AMNBMKEMMFL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMNBMKEMMFL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AMNBMKEMMFL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AMNBMKEMMFL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AMNBMKEMMFL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AMNBMKEMMFL*))((::PBYTE)hIl2Cpp + AMNBMKEMMFL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AMNBMKEMMFL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
