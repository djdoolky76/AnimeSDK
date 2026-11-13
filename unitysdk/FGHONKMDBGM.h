#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CMKLCKLAEPI;
class FGHONKMDBGM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FGHONKMDBGM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F8C49F0)
#define FGHONKMDBGM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F8C4E20)
#define FGHONKMDBGM_CLONE_OFFSET UNITYSDK_OFFSET(0x1F8C44A0)
#define FGHONKMDBGM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F8C43E0)
#define FGHONKMDBGM_CTOR_OFFSET UNITYSDK_OFFSET(0x1F8C4390)
#define FGHONKMDBGM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F8C4680)
#define FGHONKMDBGM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F8C4520)
#define FGHONKMDBGM_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1F8C44E0)
#define FGHONKMDBGM_FIKLGPLLNFI_OFFSET UNITYSDK_OFFSET(0x1F8C4500)
#define FGHONKMDBGM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F8C47B0)
#define FGHONKMDBGM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F8C4350)
#define FGHONKMDBGM_JLBFCOCKFNM_OFFSET UNITYSDK_OFFSET(0x1F8C4510)
#define FGHONKMDBGM_LJHPCHKDBLJ_OFFSET UNITYSDK_OFFSET(0x1F8C44F0)
#define FGHONKMDBGM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F8C4C30)
#define FGHONKMDBGM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F8C4B80)
#define FGHONKMDBGM_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1F8C44D0)
#define FGHONKMDBGM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F8C4380)
#define FGHONKMDBGM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F8C4820)
#define FGHONKMDBGM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F8C4880)

inline static constexpr unsigned int FGHONKMDBGM_TypeDefinitionIndex = 27437;

	class FGHONKMDBGM : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::CMKLCKLAEPI*>* LMIIBKNMIDB; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 GIJAABDJGDA; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x24
		static ::Google::Protobuf::MessageParser_1<::FGHONKMDBGM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FGHONKMDBGM*>**)UnitySDK::FromName("", "FGHONKMDBGM")->GetStaticField(0x50750);
		}

		static ::Google::Protobuf::FieldCodec_1<::CMKLCKLAEPI*>** StaticGet_EPLFEGANJLJ()
		{
			return (::Google::Protobuf::FieldCodec_1<::CMKLCKLAEPI*>**)UnitySDK::FromName("", "FGHONKMDBGM")->GetStaticField(0x50758);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object IAIEJMNDKNN; // 0x0
		// static const ::System::Object GADBEOGJMCH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGHONKMDBGM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FGHONKMDBGM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FGHONKMDBGM*))((::PBYTE)hIl2Cpp + FGHONKMDBGM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FGHONKMDBGM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FGHONKMDBGM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FGHONKMDBGM*>*(*)())((::PBYTE)hIl2Cpp + FGHONKMDBGM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGHONKMDBGM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FGHONKMDBGM* Clone()
		{
			return ((::FGHONKMDBGM*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGHONKMDBGM_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FGHONKMDBGM_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FGHONKMDBGM_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::CMKLCKLAEPI*>* LJHPCHKDBLJ()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::CMKLCKLAEPI*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGHONKMDBGM_LJHPCHKDBLJ_OFFSET))(this);
		}

		::System::UInt32 FIKLGPLLNFI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FGHONKMDBGM_FIKLGPLLNFI_OFFSET))(this);
		}

		::System::Void JLBFCOCKFNM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FGHONKMDBGM_JLBFCOCKFNM_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FGHONKMDBGM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FGHONKMDBGM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FGHONKMDBGM*))((::PBYTE)hIl2Cpp + FGHONKMDBGM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FGHONKMDBGM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGHONKMDBGM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FGHONKMDBGM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FGHONKMDBGM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FGHONKMDBGM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FGHONKMDBGM*))((::PBYTE)hIl2Cpp + FGHONKMDBGM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FGHONKMDBGM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
