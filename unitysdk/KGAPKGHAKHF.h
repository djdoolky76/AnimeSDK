#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ILKADBIDKAA;
class KGAPKGHAKHF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KGAPKGHAKHF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FB4DD60)
#define KGAPKGHAKHF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB4E0D0)
#define KGAPKGHAKHF_CLONE_OFFSET UNITYSDK_OFFSET(0x1FB4D8A0)
#define KGAPKGHAKHF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FB4D810)
#define KGAPKGHAKHF_CTOR_OFFSET UNITYSDK_OFFSET(0x1FB4D7D0)
#define KGAPKGHAKHF_DGNDGNIHODA_OFFSET UNITYSDK_OFFSET(0x1FB4D8F0)
#define KGAPKGHAKHF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FB4DA50)
#define KGAPKGHAKHF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FB4D900)
#define KGAPKGHAKHF_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1FB4D8E0)
#define KGAPKGHAKHF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FB4DB80)
#define KGAPKGHAKHF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FB4D790)
#define KGAPKGHAKHF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FB4DF10)
#define KGAPKGHAKHF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FB4DE70)
#define KGAPKGHAKHF_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1FB4D8D0)
#define KGAPKGHAKHF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FB4D7C0)
#define KGAPKGHAKHF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FB4DBF0)
#define KGAPKGHAKHF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FB4DC50)

inline static constexpr unsigned int KGAPKGHAKHF_TypeDefinitionIndex = 35453;

	class KGAPKGHAKHF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::ILKADBIDKAA*>* KFIFCCIFGDP; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::ILKADBIDKAA*>** StaticGet_DLCDOBJKEDC()
		{
			return (::Google::Protobuf::FieldCodec_1<::ILKADBIDKAA*>**)UnitySDK::FromName("", "KGAPKGHAKHF")->GetStaticField(0xF0E0);
		}

		static ::Google::Protobuf::MessageParser_1<::KGAPKGHAKHF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KGAPKGHAKHF*>**)UnitySDK::FromName("", "KGAPKGHAKHF")->GetStaticField(0xF0E8);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object ICHKMKKLPEG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGAPKGHAKHF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KGAPKGHAKHF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KGAPKGHAKHF*))((::PBYTE)hIl2Cpp + KGAPKGHAKHF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KGAPKGHAKHF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KGAPKGHAKHF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KGAPKGHAKHF*>*(*)())((::PBYTE)hIl2Cpp + KGAPKGHAKHF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGAPKGHAKHF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KGAPKGHAKHF* Clone()
		{
			return ((::KGAPKGHAKHF*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGAPKGHAKHF_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGAPKGHAKHF_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KGAPKGHAKHF_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::ILKADBIDKAA*>* DGNDGNIHODA()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::ILKADBIDKAA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGAPKGHAKHF_DGNDGNIHODA_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KGAPKGHAKHF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KGAPKGHAKHF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KGAPKGHAKHF*))((::PBYTE)hIl2Cpp + KGAPKGHAKHF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGAPKGHAKHF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGAPKGHAKHF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KGAPKGHAKHF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGAPKGHAKHF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KGAPKGHAKHF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KGAPKGHAKHF*))((::PBYTE)hIl2Cpp + KGAPKGHAKHF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KGAPKGHAKHF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
