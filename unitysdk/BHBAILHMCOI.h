#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BHBAILHMCOI;
class KINJHHBJNJP;
class NFIDNDFHJGN;
class PLFKMENCDMM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BHBAILHMCOI_APJNCOIKGGK_OFFSET UNITYSDK_OFFSET(0x1DDF2210)
#define BHBAILHMCOI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DDF2620)
#define BHBAILHMCOI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDF2B20)
#define BHBAILHMCOI_CLONE_OFFSET UNITYSDK_OFFSET(0x1DDF21A0)
#define BHBAILHMCOI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DDF20E0)
#define BHBAILHMCOI_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDF2040)
#define BHBAILHMCOI_DMCFFFMJPHM_OFFSET UNITYSDK_OFFSET(0x1DDF2200)
#define BHBAILHMCOI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DDF2280)
#define BHBAILHMCOI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DDF2220)
#define BHBAILHMCOI_GEBAJCLPCCF_OFFSET UNITYSDK_OFFSET(0x1DDF21F0)
#define BHBAILHMCOI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DDF23F0)
#define BHBAILHMCOI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DDF1FD0)
#define BHBAILHMCOI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DDF2880)
#define BHBAILHMCOI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DDF2730)
#define BHBAILHMCOI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DDF2030)
#define BHBAILHMCOI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DDF24A0)
#define BHBAILHMCOI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DDF2500)

inline static constexpr unsigned int BHBAILHMCOI_TypeDefinitionIndex = 29227;

	class BHBAILHMCOI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::NFIDNDFHJGN*>* KNJIFFEOPFG; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::KINJHHBJNJP*>* CILIMDNIADN; // 0x20
		::Google::Protobuf::Collections::RepeatedField_1<::PLFKMENCDMM*>* KKDPMDHJAPK; // 0x28
		static ::Google::Protobuf::FieldCodec_1<::NFIDNDFHJGN*>** StaticGet_IHGNMOECLFJ()
		{
			return (::Google::Protobuf::FieldCodec_1<::NFIDNDFHJGN*>**)UnitySDK::FromName("", "BHBAILHMCOI")->GetStaticField(0x44F20);
		}

		static ::Google::Protobuf::FieldCodec_1<::KINJHHBJNJP*>** StaticGet_INKKFBIKCIC()
		{
			return (::Google::Protobuf::FieldCodec_1<::KINJHHBJNJP*>**)UnitySDK::FromName("", "BHBAILHMCOI")->GetStaticField(0x44F28);
		}

		static ::Google::Protobuf::MessageParser_1<::BHBAILHMCOI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BHBAILHMCOI*>**)UnitySDK::FromName("", "BHBAILHMCOI")->GetStaticField(0x44F30);
		}

		static ::Google::Protobuf::FieldCodec_1<::PLFKMENCDMM*>** StaticGet_DFIOHKPABHL()
		{
			return (::Google::Protobuf::FieldCodec_1<::PLFKMENCDMM*>**)UnitySDK::FromName("", "BHBAILHMCOI")->GetStaticField(0x44F38);
		}

		// static const ::System::Object OMAFBDDNICI; // 0x0
		// static const ::System::Object NGEPPJGNGDC; // 0x0
		// static const ::System::Object GFJKMPJDIGD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHBAILHMCOI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BHBAILHMCOI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BHBAILHMCOI*))((::PBYTE)hIl2Cpp + BHBAILHMCOI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BHBAILHMCOI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BHBAILHMCOI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BHBAILHMCOI*>*(*)())((::PBYTE)hIl2Cpp + BHBAILHMCOI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHBAILHMCOI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BHBAILHMCOI* Clone()
		{
			return ((::BHBAILHMCOI*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHBAILHMCOI_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::NFIDNDFHJGN*>* GEBAJCLPCCF()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::NFIDNDFHJGN*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHBAILHMCOI_GEBAJCLPCCF_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::KINJHHBJNJP*>* DMCFFFMJPHM()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::KINJHHBJNJP*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHBAILHMCOI_DMCFFFMJPHM_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::PLFKMENCDMM*>* APJNCOIKGGK()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::PLFKMENCDMM*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHBAILHMCOI_APJNCOIKGGK_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BHBAILHMCOI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BHBAILHMCOI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BHBAILHMCOI*))((::PBYTE)hIl2Cpp + BHBAILHMCOI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BHBAILHMCOI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHBAILHMCOI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BHBAILHMCOI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BHBAILHMCOI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BHBAILHMCOI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BHBAILHMCOI*))((::PBYTE)hIl2Cpp + BHBAILHMCOI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BHBAILHMCOI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
