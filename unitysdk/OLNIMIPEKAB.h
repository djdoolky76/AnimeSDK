#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FKNKNLGMACL.h"
#include "unitysdk/System/Object.h"
class NEKAOLPJKEE;
class OLNIMIPEKAB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OLNIMIPEKAB_AHCIBNMOLAJ_OFFSET UNITYSDK_OFFSET(0x1FD69790)
#define OLNIMIPEKAB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FD69C80)
#define OLNIMIPEKAB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FD6A0E0)
#define OLNIMIPEKAB_CLONE_OFFSET UNITYSDK_OFFSET(0x1FD69720)
#define OLNIMIPEKAB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FD69660)
#define OLNIMIPEKAB_CTOR_OFFSET UNITYSDK_OFFSET(0x1FD69610)
#define OLNIMIPEKAB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FD69900)
#define OLNIMIPEKAB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FD697A0)
#define OLNIMIPEKAB_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1FD69760)
#define OLNIMIPEKAB_FDDPCJMODGD_OFFSET UNITYSDK_OFFSET(0x1FD69770)
#define OLNIMIPEKAB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FD69A30)
#define OLNIMIPEKAB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FD695D0)
#define OLNIMIPEKAB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FD69EF0)
#define OLNIMIPEKAB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FD69E40)
#define OLNIMIPEKAB_NPHCBOINFMD_OFFSET UNITYSDK_OFFSET(0x1FD69780)
#define OLNIMIPEKAB_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1FD69750)
#define OLNIMIPEKAB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FD69600)
#define OLNIMIPEKAB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FD69AA0)
#define OLNIMIPEKAB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FD69B00)

inline static constexpr unsigned int OLNIMIPEKAB_TypeDefinitionIndex = 26691;

	class OLNIMIPEKAB : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::NEKAOLPJKEE*>* BGOOOPAMDJG; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::FKNKNLGMACL CNKEBBBFBDC; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x24
		static ::Google::Protobuf::FieldCodec_1<::NEKAOLPJKEE*>** StaticGet_NPHBBNDFMJP()
		{
			return (::Google::Protobuf::FieldCodec_1<::NEKAOLPJKEE*>**)UnitySDK::FromName("", "OLNIMIPEKAB")->GetStaticField(0x21360);
		}

		static ::Google::Protobuf::MessageParser_1<::OLNIMIPEKAB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OLNIMIPEKAB*>**)UnitySDK::FromName("", "OLNIMIPEKAB")->GetStaticField(0x21368);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object COICJNBDJFC; // 0x0
		// static const ::System::Object DNFFJDPPHNL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLNIMIPEKAB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OLNIMIPEKAB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OLNIMIPEKAB*))((::PBYTE)hIl2Cpp + OLNIMIPEKAB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OLNIMIPEKAB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OLNIMIPEKAB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OLNIMIPEKAB*>*(*)())((::PBYTE)hIl2Cpp + OLNIMIPEKAB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLNIMIPEKAB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OLNIMIPEKAB* Clone()
		{
			return ((::OLNIMIPEKAB*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLNIMIPEKAB_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OLNIMIPEKAB_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OLNIMIPEKAB_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::FKNKNLGMACL FDDPCJMODGD()
		{
			return ((::FKNKNLGMACL(*)(::PVOID))((::PBYTE)hIl2Cpp + OLNIMIPEKAB_FDDPCJMODGD_OFFSET))(this);
		}

		::System::Void NPHCBOINFMD(::FKNKNLGMACL a1)
		{
			return ((::System::Void(*)(::PVOID, ::FKNKNLGMACL))((::PBYTE)hIl2Cpp + OLNIMIPEKAB_NPHCBOINFMD_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::NEKAOLPJKEE*>* AHCIBNMOLAJ()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::NEKAOLPJKEE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLNIMIPEKAB_AHCIBNMOLAJ_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OLNIMIPEKAB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OLNIMIPEKAB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OLNIMIPEKAB*))((::PBYTE)hIl2Cpp + OLNIMIPEKAB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OLNIMIPEKAB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLNIMIPEKAB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OLNIMIPEKAB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OLNIMIPEKAB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OLNIMIPEKAB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OLNIMIPEKAB*))((::PBYTE)hIl2Cpp + OLNIMIPEKAB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OLNIMIPEKAB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
