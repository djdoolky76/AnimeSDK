#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FOKMHCLKPGJ;
class IHEEDBPGHHO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FOKMHCLKPGJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3FE410)
#define FOKMHCLKPGJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3FE780)
#define FOKMHCLKPGJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3FDF50)
#define FOKMHCLKPGJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3FDEC0)
#define FOKMHCLKPGJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3FDE80)
#define FOKMHCLKPGJ_DKMDDCDIPGC_OFFSET UNITYSDK_OFFSET(0x1E3FDFA0)
#define FOKMHCLKPGJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3FE100)
#define FOKMHCLKPGJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3FDFB0)
#define FOKMHCLKPGJ_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E3FDF90)
#define FOKMHCLKPGJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3FE230)
#define FOKMHCLKPGJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E3FDE40)
#define FOKMHCLKPGJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3FE5C0)
#define FOKMHCLKPGJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3FE520)
#define FOKMHCLKPGJ_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E3FDF80)
#define FOKMHCLKPGJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E3FDE70)
#define FOKMHCLKPGJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3FE2A0)
#define FOKMHCLKPGJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3FE300)

inline static constexpr unsigned int FOKMHCLKPGJ_TypeDefinitionIndex = 30767;

	class FOKMHCLKPGJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::IHEEDBPGHHO*>* IEKJEKFBEMM; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::IHEEDBPGHHO*>** StaticGet_EGIJGGHPEPG()
		{
			return (::Google::Protobuf::FieldCodec_1<::IHEEDBPGHHO*>**)UnitySDK::FromName("", "FOKMHCLKPGJ")->GetStaticField(0x66270);
		}

		static ::Google::Protobuf::MessageParser_1<::FOKMHCLKPGJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FOKMHCLKPGJ*>**)UnitySDK::FromName("", "FOKMHCLKPGJ")->GetStaticField(0x66278);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object OCHDNEKCPBF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOKMHCLKPGJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FOKMHCLKPGJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FOKMHCLKPGJ*))((::PBYTE)hIl2Cpp + FOKMHCLKPGJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOKMHCLKPGJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FOKMHCLKPGJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FOKMHCLKPGJ*>*(*)())((::PBYTE)hIl2Cpp + FOKMHCLKPGJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOKMHCLKPGJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FOKMHCLKPGJ* Clone()
		{
			return ((::FOKMHCLKPGJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOKMHCLKPGJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOKMHCLKPGJ_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FOKMHCLKPGJ_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::IHEEDBPGHHO*>* DKMDDCDIPGC()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::IHEEDBPGHHO*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOKMHCLKPGJ_DKMDDCDIPGC_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FOKMHCLKPGJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FOKMHCLKPGJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FOKMHCLKPGJ*))((::PBYTE)hIl2Cpp + FOKMHCLKPGJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOKMHCLKPGJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOKMHCLKPGJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FOKMHCLKPGJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOKMHCLKPGJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FOKMHCLKPGJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FOKMHCLKPGJ*))((::PBYTE)hIl2Cpp + FOKMHCLKPGJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FOKMHCLKPGJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
