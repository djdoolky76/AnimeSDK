#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CCKJAEDDDCL;
class NHLDNOOFHCI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NHLDNOOFHCI_BJGJJAIEECN_OFFSET UNITYSDK_OFFSET(0x1EB20810)
#define NHLDNOOFHCI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB20D20)
#define NHLDNOOFHCI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB21150)
#define NHLDNOOFHCI_CHJDPHDGMBD_OFFSET UNITYSDK_OFFSET(0x1EB20800)
#define NHLDNOOFHCI_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB207D0)
#define NHLDNOOFHCI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB20730)
#define NHLDNOOFHCI_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB206F0)
#define NHLDNOOFHCI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB209B0)
#define NHLDNOOFHCI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB20850)
#define NHLDNOOFHCI_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1EB20840)
#define NHLDNOOFHCI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB20AE0)
#define NHLDNOOFHCI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB206B0)
#define NHLDNOOFHCI_KFJGICEKMMD_OFFSET UNITYSDK_OFFSET(0x1EB20820)
#define NHLDNOOFHCI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB20F70)
#define NHLDNOOFHCI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB20EC0)
#define NHLDNOOFHCI_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1EB20830)
#define NHLDNOOFHCI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB206E0)
#define NHLDNOOFHCI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB20B50)
#define NHLDNOOFHCI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB20BB0)

inline static constexpr unsigned int NHLDNOOFHCI_TypeDefinitionIndex = 33251;

	class NHLDNOOFHCI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::CCKJAEDDDCL*>* OKBMHHFOEMO; // 0x18
		::System::UInt32 NMOOBKBKLJB; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x24
		static ::Google::Protobuf::MessageParser_1<::NHLDNOOFHCI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NHLDNOOFHCI*>**)UnitySDK::FromName("", "NHLDNOOFHCI")->GetStaticField(0x606F0);
		}

		static ::Google::Protobuf::FieldCodec_1<::CCKJAEDDDCL*>** StaticGet_HGOJGJOINFB()
		{
			return (::Google::Protobuf::FieldCodec_1<::CCKJAEDDDCL*>**)UnitySDK::FromName("", "NHLDNOOFHCI")->GetStaticField(0x606F8);
		}

		// static const ::System::Object PHPIFEOCONP; // 0x0
		// static const ::System::Object BNLBMFNAOFM; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHLDNOOFHCI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NHLDNOOFHCI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NHLDNOOFHCI*))((::PBYTE)hIl2Cpp + NHLDNOOFHCI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NHLDNOOFHCI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NHLDNOOFHCI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NHLDNOOFHCI*>*(*)())((::PBYTE)hIl2Cpp + NHLDNOOFHCI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHLDNOOFHCI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NHLDNOOFHCI* Clone()
		{
			return ((::NHLDNOOFHCI*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHLDNOOFHCI_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::CCKJAEDDDCL*>* CHJDPHDGMBD()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::CCKJAEDDDCL*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHLDNOOFHCI_CHJDPHDGMBD_OFFSET))(this);
		}

		::System::UInt32 BJGJJAIEECN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NHLDNOOFHCI_BJGJJAIEECN_OFFSET))(this);
		}

		::System::Void KFJGICEKMMD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NHLDNOOFHCI_KFJGICEKMMD_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NHLDNOOFHCI_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NHLDNOOFHCI_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NHLDNOOFHCI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NHLDNOOFHCI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NHLDNOOFHCI*))((::PBYTE)hIl2Cpp + NHLDNOOFHCI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NHLDNOOFHCI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHLDNOOFHCI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NHLDNOOFHCI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NHLDNOOFHCI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NHLDNOOFHCI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NHLDNOOFHCI*))((::PBYTE)hIl2Cpp + NHLDNOOFHCI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NHLDNOOFHCI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
