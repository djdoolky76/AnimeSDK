#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JCKGBFJJFFC;
class PMMOFOBCINL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JCKGBFJJFFC_AOCGEAACGMF_OFFSET UNITYSDK_OFFSET(0x1E702600)
#define JCKGBFJJFFC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E702C40)
#define JCKGBFJJFFC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E702F20)
#define JCKGBFJJFFC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E7025B0)
#define JCKGBFJJFFC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7024E0)
#define JCKGBFJJFFC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E702490)
#define JCKGBFJJFFC_DJEOJNCPAGI_OFFSET UNITYSDK_OFFSET(0x1E702640)
#define JCKGBFJJFFC_DMCKGGJKLHE_OFFSET UNITYSDK_OFFSET(0x1E702610)
#define JCKGBFJJFFC_EGLGKOAFDGJ_OFFSET UNITYSDK_OFFSET(0x1E702630)
#define JCKGBFJJFFC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E7027B0)
#define JCKGBFJJFFC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E702650)
#define JCKGBFJJFFC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E702960)
#define JCKGBFJJFFC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E702420)
#define JCKGBFJJFFC_KHINOGAEHBI_OFFSET UNITYSDK_OFFSET(0x1E702620)
#define JCKGBFJJFFC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E702DE0)
#define JCKGBFJJFFC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E702D30)
#define JCKGBFJJFFC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E702480)
#define JCKGBFJJFFC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E702A80)
#define JCKGBFJJFFC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E702AE0)

inline static constexpr unsigned int JCKGBFJJFFC_TypeDefinitionIndex = 26959;

	class JCKGBFJJFFC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* FLHOIFJLDCM; // 0x18
		::PMMOFOBCINL* KBJDINAFOMC; // 0x20
		::System::Boolean HAEKCLLKFIE; // 0x28
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "JCKGBFJJFFC")->GetStaticField(0x5D860);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_JNLOIKKDOFA()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "JCKGBFJJFFC")->GetStaticField(0x5D868);
		}

		// static const ::System::Object AMAPFHMGLEN; // 0x0
		// static const ::System::Object PMGMOKACFAP; // 0x0
		// static const ::System::Object FMFKHGPLEFN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCKGBFJJFFC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JCKGBFJJFFC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JCKGBFJJFFC*))((::PBYTE)hIl2Cpp + JCKGBFJJFFC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JCKGBFJJFFC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + JCKGBFJJFFC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCKGBFJJFFC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JCKGBFJJFFC* Clone()
		{
			return ((::JCKGBFJJFFC*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCKGBFJJFFC_CLONE_OFFSET))(this);
		}

		::PMMOFOBCINL* AOCGEAACGMF()
		{
			return ((::PMMOFOBCINL*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCKGBFJJFFC_AOCGEAACGMF_OFFSET))(this);
		}

		::System::Void DMCKGGJKLHE(::PMMOFOBCINL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PMMOFOBCINL*))((::PBYTE)hIl2Cpp + JCKGBFJJFFC_DMCKGGJKLHE_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* KHINOGAEHBI()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCKGBFJJFFC_KHINOGAEHBI_OFFSET))(this);
		}

		::System::Boolean EGLGKOAFDGJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JCKGBFJJFFC_EGLGKOAFDGJ_OFFSET))(this);
		}

		::System::Void DJEOJNCPAGI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JCKGBFJJFFC_DJEOJNCPAGI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JCKGBFJJFFC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JCKGBFJJFFC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JCKGBFJJFFC*))((::PBYTE)hIl2Cpp + JCKGBFJJFFC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JCKGBFJJFFC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCKGBFJJFFC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JCKGBFJJFFC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JCKGBFJJFFC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JCKGBFJJFFC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JCKGBFJJFFC*))((::PBYTE)hIl2Cpp + JCKGBFJJFFC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JCKGBFJJFFC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
