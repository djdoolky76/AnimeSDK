#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MPPDHJKKEAD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class Object; }
namespace System { class String; }

#define MPPDHJKKEAD_CACOAPFOAAM_OFFSET UNITYSDK_OFFSET(0x1FDF6B70)
#define MPPDHJKKEAD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FDF71D0)
#define MPPDHJKKEAD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FDF74C0)
#define MPPDHJKKEAD_CLONE_OFFSET UNITYSDK_OFFSET(0x1FDF6B30)
#define MPPDHJKKEAD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FDF6A70)
#define MPPDHJKKEAD_CTOR_OFFSET UNITYSDK_OFFSET(0x1FDF6A20)
#define MPPDHJKKEAD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FDF6CE0)
#define MPPDHJKKEAD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FDF6BB0)
#define MPPDHJKKEAD_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1FDF6BA0)
#define MPPDHJKKEAD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FDF6E90)
#define MPPDHJKKEAD_GOFNCFIBHHP_OFFSET UNITYSDK_OFFSET(0x1FDF6B60)
#define MPPDHJKKEAD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FDF69E0)
#define MPPDHJKKEAD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FDF73A0)
#define MPPDHJKKEAD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FDF72F0)
#define MPPDHJKKEAD_NGBNPMPMDEL_OFFSET UNITYSDK_OFFSET(0x1FDF6B80)
#define MPPDHJKKEAD_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1FDF6B90)
#define MPPDHJKKEAD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FDF6A10)
#define MPPDHJKKEAD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FDF7040)
#define MPPDHJKKEAD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FDF70A0)

inline static constexpr unsigned int MPPDHJKKEAD_TypeDefinitionIndex = 32450;

	class MPPDHJKKEAD : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt64>* BAIDFHCBDLG; // 0x10
		::Proto::ItemList* MIEINLKPIMJ; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x28
		static ::Google::Protobuf::FieldCodec_1<::System::UInt64>** StaticGet_MGJJAGCGDIO()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt64>**)UnitySDK::FromName("", "MPPDHJKKEAD")->GetStaticField(0x66640);
		}

		static ::Google::Protobuf::MessageParser_1<::MPPDHJKKEAD*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MPPDHJKKEAD*>**)UnitySDK::FromName("", "MPPDHJKKEAD")->GetStaticField(0x66648);
		}

		// static const ::System::Object BILNABFICOB; // 0x0
		// static const ::System::Object DFABHHAPAEA; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPPDHJKKEAD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MPPDHJKKEAD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MPPDHJKKEAD*))((::PBYTE)hIl2Cpp + MPPDHJKKEAD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MPPDHJKKEAD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MPPDHJKKEAD*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MPPDHJKKEAD*>*(*)())((::PBYTE)hIl2Cpp + MPPDHJKKEAD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPPDHJKKEAD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MPPDHJKKEAD* Clone()
		{
			return ((::MPPDHJKKEAD*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPPDHJKKEAD_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt64>* GOFNCFIBHHP()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt64>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPPDHJKKEAD_GOFNCFIBHHP_OFFSET))(this);
		}

		::Proto::ItemList* CACOAPFOAAM()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPPDHJKKEAD_CACOAPFOAAM_OFFSET))(this);
		}

		::System::Void NGBNPMPMDEL(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + MPPDHJKKEAD_NGBNPMPMDEL_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MPPDHJKKEAD_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MPPDHJKKEAD_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MPPDHJKKEAD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MPPDHJKKEAD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MPPDHJKKEAD*))((::PBYTE)hIl2Cpp + MPPDHJKKEAD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MPPDHJKKEAD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPPDHJKKEAD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MPPDHJKKEAD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MPPDHJKKEAD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MPPDHJKKEAD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MPPDHJKKEAD*))((::PBYTE)hIl2Cpp + MPPDHJKKEAD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MPPDHJKKEAD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
