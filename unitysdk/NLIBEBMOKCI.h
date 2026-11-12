#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NLIBEBMOKCI;
class PKCIPJBKAFO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NLIBEBMOKCI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F053950)
#define NLIBEBMOKCI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F053D20)
#define NLIBEBMOKCI_CLONE_OFFSET UNITYSDK_OFFSET(0x1F0533E0)
#define NLIBEBMOKCI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F0532E0)
#define NLIBEBMOKCI_CTOR_OFFSET UNITYSDK_OFFSET(0x1F053260)
#define NLIBEBMOKCI_EHMAFEANNKM_OFFSET UNITYSDK_OFFSET(0x1F053440)
#define NLIBEBMOKCI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F0534A0)
#define NLIBEBMOKCI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F053470)
#define NLIBEBMOKCI_FLDEJDGGMGD_OFFSET UNITYSDK_OFFSET(0x1F053430)
#define NLIBEBMOKCI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F053600)
#define NLIBEBMOKCI_IGDPIIJEELD_OFFSET UNITYSDK_OFFSET(0x1F053410)
#define NLIBEBMOKCI_JHEFPOGNBND_OFFSET UNITYSDK_OFFSET(0x1F053450)
#define NLIBEBMOKCI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F053220)
#define NLIBEBMOKCI_KMOAIPBICFE_OFFSET UNITYSDK_OFFSET(0x1F053420)
#define NLIBEBMOKCI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F053BE0)
#define NLIBEBMOKCI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F053B10)
#define NLIBEBMOKCI_MJOEMBBMBON_OFFSET UNITYSDK_OFFSET(0x1F053460)
#define NLIBEBMOKCI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F053250)
#define NLIBEBMOKCI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F053760)
#define NLIBEBMOKCI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F0537C0)

inline static constexpr unsigned int NLIBEBMOKCI_TypeDefinitionIndex = 28842;

	class NLIBEBMOKCI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JLFDMJMJDND; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::PKCIPJBKAFO*>* CBFGBDBJHID; // 0x20
		::System::UInt32 APAHJAEEAIH; // 0x28
		::System::UInt32 EEBKDMBJHEC; // 0x2C
		static ::Google::Protobuf::MessageParser_1<::NLIBEBMOKCI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NLIBEBMOKCI*>**)UnitySDK::FromName("", "NLIBEBMOKCI")->GetStaticField(0x70C30);
		}

		static ::Google::Protobuf::FieldCodec_1<::PKCIPJBKAFO*>** StaticGet_DDFODHOFBIP()
		{
			return (::Google::Protobuf::FieldCodec_1<::PKCIPJBKAFO*>**)UnitySDK::FromName("", "NLIBEBMOKCI")->GetStaticField(0x70C38);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_JKBHDLODNOE()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "NLIBEBMOKCI")->GetStaticField(0x70C40);
		}

		// static const ::System::Object LCLODCLLPDD; // 0x0
		// static const ::System::Object DCPHPJKBJBN; // 0x0
		// static const ::System::Object CPBPPPJBFGH; // 0x0
		// static const ::System::Object IMGDAOEBONP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLIBEBMOKCI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NLIBEBMOKCI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NLIBEBMOKCI*))((::PBYTE)hIl2Cpp + NLIBEBMOKCI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NLIBEBMOKCI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NLIBEBMOKCI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NLIBEBMOKCI*>*(*)())((::PBYTE)hIl2Cpp + NLIBEBMOKCI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLIBEBMOKCI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NLIBEBMOKCI* Clone()
		{
			return ((::NLIBEBMOKCI*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLIBEBMOKCI_CLONE_OFFSET))(this);
		}

		::System::UInt32 IGDPIIJEELD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NLIBEBMOKCI_IGDPIIJEELD_OFFSET))(this);
		}

		::System::Void KMOAIPBICFE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NLIBEBMOKCI_KMOAIPBICFE_OFFSET))(this, a1);
		}

		::System::UInt32 FLDEJDGGMGD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NLIBEBMOKCI_FLDEJDGGMGD_OFFSET))(this);
		}

		::System::Void EHMAFEANNKM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NLIBEBMOKCI_EHMAFEANNKM_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JHEFPOGNBND()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLIBEBMOKCI_JHEFPOGNBND_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::PKCIPJBKAFO*>* MJOEMBBMBON()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::PKCIPJBKAFO*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLIBEBMOKCI_MJOEMBBMBON_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NLIBEBMOKCI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NLIBEBMOKCI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NLIBEBMOKCI*))((::PBYTE)hIl2Cpp + NLIBEBMOKCI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NLIBEBMOKCI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLIBEBMOKCI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NLIBEBMOKCI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NLIBEBMOKCI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NLIBEBMOKCI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NLIBEBMOKCI*))((::PBYTE)hIl2Cpp + NLIBEBMOKCI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NLIBEBMOKCI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
