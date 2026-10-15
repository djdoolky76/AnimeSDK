#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CDMFOJKAHFC;
class JOCIBBFJPMP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CDMFOJKAHFC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E05C0D0)
#define CDMFOJKAHFC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E05C500)
#define CDMFOJKAHFC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E05B960)
#define CDMFOJKAHFC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E05B860)
#define CDMFOJKAHFC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E05B810)
#define CDMFOJKAHFC_DPFLPFADJNK_OFFSET UNITYSDK_OFFSET(0x1E05B9C0)
#define CDMFOJKAHFC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E05BB80)
#define CDMFOJKAHFC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E05BA20)
#define CDMFOJKAHFC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E05BD30)
#define CDMFOJKAHFC_GJDHLMPNHIK_OFFSET UNITYSDK_OFFSET(0x1E05BA00)
#define CDMFOJKAHFC_JIFPIGBJFEH_OFFSET UNITYSDK_OFFSET(0x1E05B9D0)
#define CDMFOJKAHFC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E05B7A0)
#define CDMFOJKAHFC_JKLDHNNGNCK_OFFSET UNITYSDK_OFFSET(0x1E05B9B0)
#define CDMFOJKAHFC_KGNEKEHJDCC_OFFSET UNITYSDK_OFFSET(0x1E05B9F0)
#define CDMFOJKAHFC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E05C390)
#define CDMFOJKAHFC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E05C290)
#define CDMFOJKAHFC_MIILIPJBOKO_OFFSET UNITYSDK_OFFSET(0x1E05B9E0)
#define CDMFOJKAHFC_OACFKOBFCIN_OFFSET UNITYSDK_OFFSET(0x1E05BA10)
#define CDMFOJKAHFC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E05B800)
#define CDMFOJKAHFC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E05BEA0)
#define CDMFOJKAHFC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E05BF00)

inline static constexpr unsigned int CDMFOJKAHFC_TypeDefinitionIndex = 28918;

	class CDMFOJKAHFC : public ::System::Object
	{
	public:
		::JOCIBBFJPMP* MNJNMPKLFAI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* BBJDNPLDEPH; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		::System::UInt32 IDPMGABNGKO; // 0x28
		::System::UInt32 MNPCFPKHFAB; // 0x2C
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_BHCGHOEAPBO()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "CDMFOJKAHFC")->GetStaticField(0xF070);
		}

		static ::Google::Protobuf::MessageParser_1<::CDMFOJKAHFC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CDMFOJKAHFC*>**)UnitySDK::FromName("", "CDMFOJKAHFC")->GetStaticField(0xF078);
		}

		// static const ::System::Object OOGKNMKNJNI; // 0x0
		// static const ::System::Object KBMGGGHELJP; // 0x0
		// static const ::System::Object BBFFKFBONFO; // 0x0
		// static const ::System::Object INDBKLPEMDP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDMFOJKAHFC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CDMFOJKAHFC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CDMFOJKAHFC*))((::PBYTE)hIl2Cpp + CDMFOJKAHFC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CDMFOJKAHFC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CDMFOJKAHFC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CDMFOJKAHFC*>*(*)())((::PBYTE)hIl2Cpp + CDMFOJKAHFC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDMFOJKAHFC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CDMFOJKAHFC* Clone()
		{
			return ((::CDMFOJKAHFC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDMFOJKAHFC_CLONE_OFFSET))(this);
		}

		::System::UInt32 JKLDHNNGNCK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CDMFOJKAHFC_JKLDHNNGNCK_OFFSET))(this);
		}

		::System::Void DPFLPFADJNK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CDMFOJKAHFC_DPFLPFADJNK_OFFSET))(this, a1);
		}

		::JOCIBBFJPMP* JIFPIGBJFEH()
		{
			return ((::JOCIBBFJPMP*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDMFOJKAHFC_JIFPIGBJFEH_OFFSET))(this);
		}

		::System::Void MIILIPJBOKO(::JOCIBBFJPMP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JOCIBBFJPMP*))((::PBYTE)hIl2Cpp + CDMFOJKAHFC_MIILIPJBOKO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* KGNEKEHJDCC()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDMFOJKAHFC_KGNEKEHJDCC_OFFSET))(this);
		}

		::System::UInt32 GJDHLMPNHIK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CDMFOJKAHFC_GJDHLMPNHIK_OFFSET))(this);
		}

		::System::Void OACFKOBFCIN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CDMFOJKAHFC_OACFKOBFCIN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CDMFOJKAHFC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CDMFOJKAHFC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CDMFOJKAHFC*))((::PBYTE)hIl2Cpp + CDMFOJKAHFC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CDMFOJKAHFC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDMFOJKAHFC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CDMFOJKAHFC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CDMFOJKAHFC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CDMFOJKAHFC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CDMFOJKAHFC*))((::PBYTE)hIl2Cpp + CDMFOJKAHFC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CDMFOJKAHFC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
