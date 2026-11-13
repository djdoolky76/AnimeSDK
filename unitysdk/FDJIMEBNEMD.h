#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FDJIMEBNEMD;
class JEIAEAEGEBJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FDJIMEBNEMD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x20538C40)
#define FDJIMEBNEMD_CCTOR_OFFSET UNITYSDK_OFFSET(0x20538FC0)
#define FDJIMEBNEMD_CLONE_OFFSET UNITYSDK_OFFSET(0x20538780)
#define FDJIMEBNEMD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x205386C0)
#define FDJIMEBNEMD_CTOR_OFFSET UNITYSDK_OFFSET(0x20538670)
#define FDJIMEBNEMD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x20538930)
#define FDJIMEBNEMD_EQUALS_OFFSET UNITYSDK_OFFSET(0x205387E0)
#define FDJIMEBNEMD_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x205387C0)
#define FDJIMEBNEMD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x20538A60)
#define FDJIMEBNEMD_IFFEEMHIHEP_OFFSET UNITYSDK_OFFSET(0x205387D0)
#define FDJIMEBNEMD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x20538630)
#define FDJIMEBNEMD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x20538DF0)
#define FDJIMEBNEMD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x20538D50)
#define FDJIMEBNEMD_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x205387B0)
#define FDJIMEBNEMD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x20538660)
#define FDJIMEBNEMD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x20538AD0)
#define FDJIMEBNEMD_WRITETO_OFFSET UNITYSDK_OFFSET(0x20538B30)

inline static constexpr unsigned int FDJIMEBNEMD_TypeDefinitionIndex = 33183;

	class FDJIMEBNEMD : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::JEIAEAEGEBJ*>* ABMPKGNBMNA; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::JEIAEAEGEBJ*>** StaticGet_ELINIFIFONO()
		{
			return (::Google::Protobuf::FieldCodec_1<::JEIAEAEGEBJ*>**)UnitySDK::FromName("", "FDJIMEBNEMD")->GetStaticField(0x48EF0);
		}

		static ::Google::Protobuf::MessageParser_1<::FDJIMEBNEMD*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FDJIMEBNEMD*>**)UnitySDK::FromName("", "FDJIMEBNEMD")->GetStaticField(0x48EF8);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object EGIFDDMMJBK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDJIMEBNEMD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FDJIMEBNEMD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FDJIMEBNEMD*))((::PBYTE)hIl2Cpp + FDJIMEBNEMD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FDJIMEBNEMD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FDJIMEBNEMD*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FDJIMEBNEMD*>*(*)())((::PBYTE)hIl2Cpp + FDJIMEBNEMD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDJIMEBNEMD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FDJIMEBNEMD* Clone()
		{
			return ((::FDJIMEBNEMD*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDJIMEBNEMD_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FDJIMEBNEMD_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FDJIMEBNEMD_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::JEIAEAEGEBJ*>* IFFEEMHIHEP()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::JEIAEAEGEBJ*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDJIMEBNEMD_IFFEEMHIHEP_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FDJIMEBNEMD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FDJIMEBNEMD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FDJIMEBNEMD*))((::PBYTE)hIl2Cpp + FDJIMEBNEMD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FDJIMEBNEMD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDJIMEBNEMD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FDJIMEBNEMD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FDJIMEBNEMD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FDJIMEBNEMD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FDJIMEBNEMD*))((::PBYTE)hIl2Cpp + FDJIMEBNEMD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FDJIMEBNEMD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
