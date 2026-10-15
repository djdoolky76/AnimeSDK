#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FPPLEPMEEHJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FPPLEPMEEHJ_BCMOHGCDGPG_OFFSET UNITYSDK_OFFSET(0x1E410A50)
#define FPPLEPMEEHJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E410EA0)
#define FPPLEPMEEHJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E411160)
#define FPPLEPMEEHJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E410A10)
#define FPPLEPMEEHJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E410970)
#define FPPLEPMEEHJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E410920)
#define FPPLEPMEEHJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E410B10)
#define FPPLEPMEEHJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E410A90)
#define FPPLEPMEEHJ_FABJLAACOCJ_OFFSET UNITYSDK_OFFSET(0x1E410A40)
#define FPPLEPMEEHJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E410C10)
#define FPPLEPMEEHJ_HEJEGDJBBKO_OFFSET UNITYSDK_OFFSET(0x1E410A70)
#define FPPLEPMEEHJ_ICLHMABKNKF_OFFSET UNITYSDK_OFFSET(0x1E410A80)
#define FPPLEPMEEHJ_JALJFGMDLOJ_OFFSET UNITYSDK_OFFSET(0x1E410A60)
#define FPPLEPMEEHJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4108E0)
#define FPPLEPMEEHJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E411070)
#define FPPLEPMEEHJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E411010)
#define FPPLEPMEEHJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E410910)
#define FPPLEPMEEHJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E410D10)
#define FPPLEPMEEHJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E410D70)

inline static constexpr unsigned int FPPLEPMEEHJ_TypeDefinitionIndex = 27639;

	class FPPLEPMEEHJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* IOJLMOKPCGL; // 0x18
		::System::UInt32 CHCOHEPOGDI; // 0x20
		::System::UInt32 ODNEPFOBDPC; // 0x24
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_DIOPCFCBHJJ()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "FPPLEPMEEHJ")->GetStaticField(0x6BB10);
		}

		static ::Google::Protobuf::MessageParser_1<::FPPLEPMEEHJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FPPLEPMEEHJ*>**)UnitySDK::FromName("", "FPPLEPMEEHJ")->GetStaticField(0x6BB18);
		}

		// static const ::System::Object IONGKCKEHHH; // 0x0
		// static const ::System::Object GNBGDANLDAO; // 0x0
		// static const ::System::Object MJCIOCFLCMP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPPLEPMEEHJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FPPLEPMEEHJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FPPLEPMEEHJ*))((::PBYTE)hIl2Cpp + FPPLEPMEEHJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FPPLEPMEEHJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FPPLEPMEEHJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FPPLEPMEEHJ*>*(*)())((::PBYTE)hIl2Cpp + FPPLEPMEEHJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPPLEPMEEHJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FPPLEPMEEHJ* Clone()
		{
			return ((::FPPLEPMEEHJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPPLEPMEEHJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 FABJLAACOCJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FPPLEPMEEHJ_FABJLAACOCJ_OFFSET))(this);
		}

		::System::Void BCMOHGCDGPG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FPPLEPMEEHJ_BCMOHGCDGPG_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JALJFGMDLOJ()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPPLEPMEEHJ_JALJFGMDLOJ_OFFSET))(this);
		}

		::System::UInt32 HEJEGDJBBKO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FPPLEPMEEHJ_HEJEGDJBBKO_OFFSET))(this);
		}

		::System::Void ICLHMABKNKF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FPPLEPMEEHJ_ICLHMABKNKF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FPPLEPMEEHJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FPPLEPMEEHJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FPPLEPMEEHJ*))((::PBYTE)hIl2Cpp + FPPLEPMEEHJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FPPLEPMEEHJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPPLEPMEEHJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FPPLEPMEEHJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FPPLEPMEEHJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FPPLEPMEEHJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FPPLEPMEEHJ*))((::PBYTE)hIl2Cpp + FPPLEPMEEHJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FPPLEPMEEHJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
