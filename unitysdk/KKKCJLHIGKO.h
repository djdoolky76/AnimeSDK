#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BADOONPCDLO;
class KKKCJLHIGKO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KKKCJLHIGKO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E879C90)
#define KKKCJLHIGKO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E87A030)
#define KKKCJLHIGKO_CFDBGNBKDKE_OFFSET UNITYSDK_OFFSET(0x1E879820)
#define KKKCJLHIGKO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8797F0)
#define KKKCJLHIGKO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E879730)
#define KKKCJLHIGKO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8796E0)
#define KKKCJLHIGKO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8799A0)
#define KKKCJLHIGKO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E879850)
#define KKKCJLHIGKO_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E879840)
#define KKKCJLHIGKO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E879AC0)
#define KKKCJLHIGKO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E8796A0)
#define KKKCJLHIGKO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E879E60)
#define KKKCJLHIGKO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E879DC0)
#define KKKCJLHIGKO_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E879830)
#define KKKCJLHIGKO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8796D0)
#define KKKCJLHIGKO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E879B30)
#define KKKCJLHIGKO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E879B90)

inline static constexpr unsigned int KKKCJLHIGKO_TypeDefinitionIndex = 31475;

	class KKKCJLHIGKO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::BADOONPCDLO*>* LPOJKHFKKHE; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::KKKCJLHIGKO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KKKCJLHIGKO*>**)UnitySDK::FromName("", "KKKCJLHIGKO")->GetStaticField(0x1E750);
		}

		static ::Google::Protobuf::FieldCodec_1<::BADOONPCDLO*>** StaticGet_IAPPFECGBND()
		{
			return (::Google::Protobuf::FieldCodec_1<::BADOONPCDLO*>**)UnitySDK::FromName("", "KKKCJLHIGKO")->GetStaticField(0x1E758);
		}

		// static const ::System::Object AGOOEACAFKA; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKKCJLHIGKO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KKKCJLHIGKO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KKKCJLHIGKO*))((::PBYTE)hIl2Cpp + KKKCJLHIGKO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KKKCJLHIGKO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KKKCJLHIGKO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KKKCJLHIGKO*>*(*)())((::PBYTE)hIl2Cpp + KKKCJLHIGKO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KKKCJLHIGKO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KKKCJLHIGKO* Clone()
		{
			return ((::KKKCJLHIGKO*(*)(::PVOID))((::PBYTE)hIl2Cpp + KKKCJLHIGKO_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::BADOONPCDLO*>* CFDBGNBKDKE()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::BADOONPCDLO*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KKKCJLHIGKO_CFDBGNBKDKE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KKKCJLHIGKO_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KKKCJLHIGKO_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KKKCJLHIGKO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KKKCJLHIGKO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KKKCJLHIGKO*))((::PBYTE)hIl2Cpp + KKKCJLHIGKO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KKKCJLHIGKO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KKKCJLHIGKO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KKKCJLHIGKO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KKKCJLHIGKO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KKKCJLHIGKO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KKKCJLHIGKO*))((::PBYTE)hIl2Cpp + KKKCJLHIGKO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KKKCJLHIGKO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
