#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GCLDADIKLEG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GCLDADIKLEG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E440F40)
#define GCLDADIKLEG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E441230)
#define GCLDADIKLEG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E440AB0)
#define GCLDADIKLEG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E440A20)
#define GCLDADIKLEG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4409D0)
#define GCLDADIKLEG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E440C10)
#define GCLDADIKLEG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E440B10)
#define GCLDADIKLEG_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E440B00)
#define GCLDADIKLEG_FMGHOGEBEJJ_OFFSET UNITYSDK_OFFSET(0x1E440AE0)
#define GCLDADIKLEG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E440D00)
#define GCLDADIKLEG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E440990)
#define GCLDADIKLEG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E441080)
#define GCLDADIKLEG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E441030)
#define GCLDADIKLEG_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E440AF0)
#define GCLDADIKLEG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4409C0)
#define GCLDADIKLEG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E440E00)
#define GCLDADIKLEG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E440E60)

inline static constexpr unsigned int GCLDADIKLEG_TypeDefinitionIndex = 29851;

	class GCLDADIKLEG : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* DAJAAAPJPNE; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::FieldCodec** StaticGet_JCOLJGNIILJ()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "GCLDADIKLEG")->GetStaticField(0xF8C0);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "GCLDADIKLEG")->GetStaticField(0xF8C8);
		}

		// static const ::System::Object KKEFDKAOBNN; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCLDADIKLEG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GCLDADIKLEG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GCLDADIKLEG*))((::PBYTE)hIl2Cpp + GCLDADIKLEG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GCLDADIKLEG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + GCLDADIKLEG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCLDADIKLEG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GCLDADIKLEG* Clone()
		{
			return ((::GCLDADIKLEG*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCLDADIKLEG_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* FMGHOGEBEJJ()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCLDADIKLEG_FMGHOGEBEJJ_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GCLDADIKLEG_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GCLDADIKLEG_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GCLDADIKLEG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GCLDADIKLEG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GCLDADIKLEG*))((::PBYTE)hIl2Cpp + GCLDADIKLEG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GCLDADIKLEG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCLDADIKLEG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GCLDADIKLEG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GCLDADIKLEG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GCLDADIKLEG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GCLDADIKLEG*))((::PBYTE)hIl2Cpp + GCLDADIKLEG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GCLDADIKLEG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
