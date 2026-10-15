#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NCGNOILONNI;
class NJEBDKOJNGA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NCGNOILONNI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EADCB40)
#define NCGNOILONNI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EADCEE0)
#define NCGNOILONNI_CLONE_OFFSET UNITYSDK_OFFSET(0x1EADC6A0)
#define NCGNOILONNI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EADC5E0)
#define NCGNOILONNI_CTOR_OFFSET UNITYSDK_OFFSET(0x1EADC590)
#define NCGNOILONNI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EADC850)
#define NCGNOILONNI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EADC700)
#define NCGNOILONNI_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1EADC6F0)
#define NCGNOILONNI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EADC970)
#define NCGNOILONNI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EADC550)
#define NCGNOILONNI_LPALIBHPDHP_OFFSET UNITYSDK_OFFSET(0x1EADC6D0)
#define NCGNOILONNI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EADCD10)
#define NCGNOILONNI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EADCC70)
#define NCGNOILONNI_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1EADC6E0)
#define NCGNOILONNI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EADC580)
#define NCGNOILONNI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EADC9E0)
#define NCGNOILONNI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EADCA40)

	class NCGNOILONNI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::NJEBDKOJNGA*>* DBEKKECJOJD; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::FieldCodec** StaticGet_AAHKGCJBAEA()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "NCGNOILONNI")->GetStaticField(0x5D290);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "NCGNOILONNI")->GetStaticField(0x5D298);
		}

		// static const ::System::Object ENDNCBMFFMI; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCGNOILONNI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NCGNOILONNI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NCGNOILONNI*))((::PBYTE)hIl2Cpp + NCGNOILONNI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NCGNOILONNI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + NCGNOILONNI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCGNOILONNI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NCGNOILONNI* Clone()
		{
			return ((::NCGNOILONNI*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCGNOILONNI_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::NJEBDKOJNGA*>* LPALIBHPDHP()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::NJEBDKOJNGA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCGNOILONNI_LPALIBHPDHP_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NCGNOILONNI_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NCGNOILONNI_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NCGNOILONNI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NCGNOILONNI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NCGNOILONNI*))((::PBYTE)hIl2Cpp + NCGNOILONNI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NCGNOILONNI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCGNOILONNI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NCGNOILONNI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NCGNOILONNI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NCGNOILONNI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NCGNOILONNI*))((::PBYTE)hIl2Cpp + NCGNOILONNI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NCGNOILONNI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
