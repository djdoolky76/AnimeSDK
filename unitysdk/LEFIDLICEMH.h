#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DFJPGILAAON;
class LEFIDLICEMH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LEFIDLICEMH_AFMBMHLAHPD_OFFSET UNITYSDK_OFFSET(0x1E928570)
#define LEFIDLICEMH_ANJAMMBMJIE_OFFSET UNITYSDK_OFFSET(0x1E928520)
#define LEFIDLICEMH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E928C10)
#define LEFIDLICEMH_CBGEKBBDMMO_OFFSET UNITYSDK_OFFSET(0x1E928510)
#define LEFIDLICEMH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E929020)
#define LEFIDLICEMH_CIMOJEJNCAB_OFFSET UNITYSDK_OFFSET(0x1E928540)
#define LEFIDLICEMH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E9284C0)
#define LEFIDLICEMH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9283F0)
#define LEFIDLICEMH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9283A0)
#define LEFIDLICEMH_ENIKNMBBKBG_OFFSET UNITYSDK_OFFSET(0x1E928560)
#define LEFIDLICEMH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E9286E0)
#define LEFIDLICEMH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E928580)
#define LEFIDLICEMH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E928890)
#define LEFIDLICEMH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E928330)
#define LEFIDLICEMH_LGFLFJPKPOH_OFFSET UNITYSDK_OFFSET(0x1E928550)
#define LEFIDLICEMH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E928E90)
#define LEFIDLICEMH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E928D60)
#define LEFIDLICEMH_NNBPACJONHP_OFFSET UNITYSDK_OFFSET(0x1E928530)
#define LEFIDLICEMH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E928390)
#define LEFIDLICEMH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9289C0)
#define LEFIDLICEMH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E928A20)

inline static constexpr unsigned int LEFIDLICEMH_TypeDefinitionIndex = 27957;

	class LEFIDLICEMH : public ::System::Object
	{
	public:
		::DFJPGILAAON* PJFFAIDNPAP; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* LEENHPJKADF; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		::System::Boolean GBHEPKCCBDA; // 0x28
		::System::Byte _padding0[0x3];
		::System::UInt32 NHMLHCNGJFM; // 0x2C
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_MBNNKDMGHCD()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "LEFIDLICEMH")->GetStaticField(0x17F30);
		}

		static ::Google::Protobuf::MessageParser_1<::LEFIDLICEMH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LEFIDLICEMH*>**)UnitySDK::FromName("", "LEFIDLICEMH")->GetStaticField(0x17F38);
		}

		// static const ::System::Object PLGABPIAIHO; // 0x0
		// static const ::System::Object DKIDDABHCKD; // 0x0
		// static const ::System::Object FAAHNFNPAAM; // 0x0
		// static const ::System::Object NOBNEKGEAPH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEFIDLICEMH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LEFIDLICEMH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LEFIDLICEMH*))((::PBYTE)hIl2Cpp + LEFIDLICEMH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LEFIDLICEMH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LEFIDLICEMH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LEFIDLICEMH*>*(*)())((::PBYTE)hIl2Cpp + LEFIDLICEMH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEFIDLICEMH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LEFIDLICEMH* Clone()
		{
			return ((::LEFIDLICEMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEFIDLICEMH_CLONE_OFFSET))(this);
		}

		::DFJPGILAAON* CBGEKBBDMMO()
		{
			return ((::DFJPGILAAON*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEFIDLICEMH_CBGEKBBDMMO_OFFSET))(this);
		}

		::System::Void ANJAMMBMJIE(::DFJPGILAAON* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DFJPGILAAON*))((::PBYTE)hIl2Cpp + LEFIDLICEMH_ANJAMMBMJIE_OFFSET))(this, a1);
		}

		::System::Boolean NNBPACJONHP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LEFIDLICEMH_NNBPACJONHP_OFFSET))(this);
		}

		::System::Void CIMOJEJNCAB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LEFIDLICEMH_CIMOJEJNCAB_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* LGFLFJPKPOH()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEFIDLICEMH_LGFLFJPKPOH_OFFSET))(this);
		}

		::System::UInt32 ENIKNMBBKBG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LEFIDLICEMH_ENIKNMBBKBG_OFFSET))(this);
		}

		::System::Void AFMBMHLAHPD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LEFIDLICEMH_AFMBMHLAHPD_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LEFIDLICEMH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LEFIDLICEMH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LEFIDLICEMH*))((::PBYTE)hIl2Cpp + LEFIDLICEMH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LEFIDLICEMH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEFIDLICEMH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LEFIDLICEMH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LEFIDLICEMH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LEFIDLICEMH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LEFIDLICEMH*))((::PBYTE)hIl2Cpp + LEFIDLICEMH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LEFIDLICEMH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
