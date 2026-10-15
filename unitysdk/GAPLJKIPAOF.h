#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GAJFCLMAAAP;
class GAPLJKIPAOF;
class PAALDKHKOLE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GAPLJKIPAOF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3F8EC0)
#define GAPLJKIPAOF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3F92B0)
#define GAPLJKIPAOF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3F8A10)
#define GAPLJKIPAOF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3F8930)
#define GAPLJKIPAOF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3F88D0)
#define GAPLJKIPAOF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3F8AD0)
#define GAPLJKIPAOF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3F8AA0)
#define GAPLJKIPAOF_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E3F8A50)
#define GAPLJKIPAOF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3F8C30)
#define GAPLJKIPAOF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E3F8890)
#define GAPLJKIPAOF_KNFGFHBHDOE_OFFSET UNITYSDK_OFFSET(0x1E3F8A90)
#define GAPLJKIPAOF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3F9190)
#define GAPLJKIPAOF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3F9080)
#define GAPLJKIPAOF_NBGGLEKELKL_OFFSET UNITYSDK_OFFSET(0x1E3F8A70)
#define GAPLJKIPAOF_NBPHFAPIBCK_OFFSET UNITYSDK_OFFSET(0x1E3F8A80)
#define GAPLJKIPAOF_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E3F8A40)
#define GAPLJKIPAOF_PBIJBAONHPC_OFFSET UNITYSDK_OFFSET(0x1E3F8A60)
#define GAPLJKIPAOF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E3F88C0)
#define GAPLJKIPAOF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3F8CC0)
#define GAPLJKIPAOF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3F8D20)

inline static constexpr unsigned int GAPLJKIPAOF_TypeDefinitionIndex = 25964;

	class GAPLJKIPAOF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::PAALDKHKOLE*>* ACFDAEFPFGE; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::GAJFCLMAAAP*>* ABNMMKEMNIK; // 0x20
		::System::UInt32 KEPJHNJCPCJ; // 0x28
		::System::UInt32 NAEACGPKNNH; // 0x2C
		static ::Google::Protobuf::FieldCodec_1<::GAJFCLMAAAP*>** StaticGet_CNADPLMGIGJ()
		{
			return (::Google::Protobuf::FieldCodec_1<::GAJFCLMAAAP*>**)UnitySDK::FromName("", "GAPLJKIPAOF")->GetStaticField(0xB7A0);
		}

		static ::Google::Protobuf::FieldCodec_1<::PAALDKHKOLE*>** StaticGet_GGENBKMANLO()
		{
			return (::Google::Protobuf::FieldCodec_1<::PAALDKHKOLE*>**)UnitySDK::FromName("", "GAPLJKIPAOF")->GetStaticField(0xB7A8);
		}

		static ::Google::Protobuf::MessageParser_1<::GAPLJKIPAOF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GAPLJKIPAOF*>**)UnitySDK::FromName("", "GAPLJKIPAOF")->GetStaticField(0xB7B0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object BCJHCICIDDG; // 0x0
		// static const ::System::Object LCEPAFHFAAC; // 0x0
		// static const ::System::Object KAEFMCIIFIC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAPLJKIPAOF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GAPLJKIPAOF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GAPLJKIPAOF*))((::PBYTE)hIl2Cpp + GAPLJKIPAOF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GAPLJKIPAOF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GAPLJKIPAOF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GAPLJKIPAOF*>*(*)())((::PBYTE)hIl2Cpp + GAPLJKIPAOF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAPLJKIPAOF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GAPLJKIPAOF* Clone()
		{
			return ((::GAPLJKIPAOF*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAPLJKIPAOF_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GAPLJKIPAOF_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GAPLJKIPAOF_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::PAALDKHKOLE*>* PBIJBAONHPC()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::PAALDKHKOLE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAPLJKIPAOF_PBIJBAONHPC_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::GAJFCLMAAAP*>* NBGGLEKELKL()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::GAJFCLMAAAP*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAPLJKIPAOF_NBGGLEKELKL_OFFSET))(this);
		}

		::System::UInt32 NBPHFAPIBCK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GAPLJKIPAOF_NBPHFAPIBCK_OFFSET))(this);
		}

		::System::Void KNFGFHBHDOE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GAPLJKIPAOF_KNFGFHBHDOE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GAPLJKIPAOF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GAPLJKIPAOF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GAPLJKIPAOF*))((::PBYTE)hIl2Cpp + GAPLJKIPAOF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GAPLJKIPAOF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAPLJKIPAOF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GAPLJKIPAOF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GAPLJKIPAOF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GAPLJKIPAOF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GAPLJKIPAOF*))((::PBYTE)hIl2Cpp + GAPLJKIPAOF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GAPLJKIPAOF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
