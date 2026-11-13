#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CAFIDFIIEKE;
class JGLCNFPHNEA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CAFIDFIIEKE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x2034B7E0)
#define CAFIDFIIEKE_CCTOR_OFFSET UNITYSDK_OFFSET(0x2034BB80)
#define CAFIDFIIEKE_CLONE_OFFSET UNITYSDK_OFFSET(0x2034B340)
#define CAFIDFIIEKE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x2034B2B0)
#define CAFIDFIIEKE_CTOR_OFFSET UNITYSDK_OFFSET(0x2034B270)
#define CAFIDFIIEKE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x2034B4F0)
#define CAFIDFIIEKE_EQUALS_OFFSET UNITYSDK_OFFSET(0x2034B3A0)
#define CAFIDFIIEKE_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x2034B390)
#define CAFIDFIIEKE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2034B610)
#define CAFIDFIIEKE_INJLCGGALGC_OFFSET UNITYSDK_OFFSET(0x2034B370)
#define CAFIDFIIEKE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x2034B230)
#define CAFIDFIIEKE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x2034B9B0)
#define CAFIDFIIEKE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x2034B910)
#define CAFIDFIIEKE_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x2034B380)
#define CAFIDFIIEKE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x2034B260)
#define CAFIDFIIEKE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x2034B680)
#define CAFIDFIIEKE_WRITETO_OFFSET UNITYSDK_OFFSET(0x2034B6E0)

inline static constexpr unsigned int CAFIDFIIEKE_TypeDefinitionIndex = 28458;

	class CAFIDFIIEKE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::JGLCNFPHNEA*>* EFHEPAJIOHG; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::JGLCNFPHNEA*>** StaticGet_NLAAEADFOIK()
		{
			return (::Google::Protobuf::FieldCodec_1<::JGLCNFPHNEA*>**)UnitySDK::FromName("", "CAFIDFIIEKE")->GetStaticField(0x5F870);
		}

		static ::Google::Protobuf::MessageParser_1<::CAFIDFIIEKE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CAFIDFIIEKE*>**)UnitySDK::FromName("", "CAFIDFIIEKE")->GetStaticField(0x5F878);
		}

		// static const ::System::Object LDPIDBDJDLO; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFIDFIIEKE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CAFIDFIIEKE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CAFIDFIIEKE*))((::PBYTE)hIl2Cpp + CAFIDFIIEKE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CAFIDFIIEKE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CAFIDFIIEKE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CAFIDFIIEKE*>*(*)())((::PBYTE)hIl2Cpp + CAFIDFIIEKE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFIDFIIEKE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CAFIDFIIEKE* Clone()
		{
			return ((::CAFIDFIIEKE*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFIDFIIEKE_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::JGLCNFPHNEA*>* INJLCGGALGC()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::JGLCNFPHNEA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFIDFIIEKE_INJLCGGALGC_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFIDFIIEKE_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CAFIDFIIEKE_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CAFIDFIIEKE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CAFIDFIIEKE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CAFIDFIIEKE*))((::PBYTE)hIl2Cpp + CAFIDFIIEKE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFIDFIIEKE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFIDFIIEKE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CAFIDFIIEKE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFIDFIIEKE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CAFIDFIIEKE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CAFIDFIIEKE*))((::PBYTE)hIl2Cpp + CAFIDFIIEKE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CAFIDFIIEKE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
