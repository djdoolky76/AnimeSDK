#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GAJFCLMAAAP;
class GAPLJKIPAOF;
class PAALDKHKOLE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GAPLJKIPAOF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E426590)
#define GAPLJKIPAOF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E426980)
#define GAPLJKIPAOF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4260E0)
#define GAPLJKIPAOF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E426000)
#define GAPLJKIPAOF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E425FA0)
#define GAPLJKIPAOF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4261A0)
#define GAPLJKIPAOF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E426170)
#define GAPLJKIPAOF_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E426120)
#define GAPLJKIPAOF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E426300)
#define GAPLJKIPAOF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E425F60)
#define GAPLJKIPAOF_KNFGFHBHDOE_OFFSET UNITYSDK_OFFSET(0x1E426160)
#define GAPLJKIPAOF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E426860)
#define GAPLJKIPAOF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E426750)
#define GAPLJKIPAOF_NBGGLEKELKL_OFFSET UNITYSDK_OFFSET(0x1E426140)
#define GAPLJKIPAOF_NBPHFAPIBCK_OFFSET UNITYSDK_OFFSET(0x1E426150)
#define GAPLJKIPAOF_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E426110)
#define GAPLJKIPAOF_PBIJBAONHPC_OFFSET UNITYSDK_OFFSET(0x1E426130)
#define GAPLJKIPAOF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E425F90)
#define GAPLJKIPAOF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E426390)
#define GAPLJKIPAOF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4263F0)

inline static constexpr unsigned int GAPLJKIPAOF_TypeDefinitionIndex = 25964;

	class GAPLJKIPAOF : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::PAALDKHKOLE*>* ACFDAEFPFGE; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::GAJFCLMAAAP*>* ABNMMKEMNIK; // 0x20
		::System::UInt32 KEPJHNJCPCJ; // 0x28
		::System::UInt32 NAEACGPKNNH; // 0x2C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "GAPLJKIPAOF")->GetStaticField(0xC8A0);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_GGENBKMANLO()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "GAPLJKIPAOF")->GetStaticField(0xC8A8);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_CNADPLMGIGJ()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "GAPLJKIPAOF")->GetStaticField(0xC8B0);
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

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + GAPLJKIPAOF_JJGHOBBFNJD_OFFSET))();
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
