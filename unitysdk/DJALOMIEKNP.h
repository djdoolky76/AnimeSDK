#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CDCCPHILOCC;
class DJALOMIEKNP;
class FGFGINEFBBK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DJALOMIEKNP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FB2B8C0)
#define DJALOMIEKNP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB2BD20)
#define DJALOMIEKNP_CLONE_OFFSET UNITYSDK_OFFSET(0x1FB2B4A0)
#define DJALOMIEKNP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FB2B390)
#define DJALOMIEKNP_CTOR_OFFSET UNITYSDK_OFFSET(0x1FB2B320)
#define DJALOMIEKNP_EFIFICGHNMJ_OFFSET UNITYSDK_OFFSET(0x1FB2B4F0)
#define DJALOMIEKNP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FB2B540)
#define DJALOMIEKNP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FB2B510)
#define DJALOMIEKNP_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1FB2B4E0)
#define DJALOMIEKNP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FB2B690)
#define DJALOMIEKNP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FB2B2E0)
#define DJALOMIEKNP_KBKHGBNMMEC_OFFSET UNITYSDK_OFFSET(0x1FB2B500)
#define DJALOMIEKNP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FB2BB00)
#define DJALOMIEKNP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FB2BA00)
#define DJALOMIEKNP_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1FB2B4D0)
#define DJALOMIEKNP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FB2B310)
#define DJALOMIEKNP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FB2B720)
#define DJALOMIEKNP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FB2B780)

inline static constexpr unsigned int DJALOMIEKNP_TypeDefinitionIndex = 33215;

	class DJALOMIEKNP : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::FGFGINEFBBK*>* JPIGHANDECG; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::CDCCPHILOCC*>* GFMLFMHIPGK; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x28
		static ::Google::Protobuf::FieldCodec_1<::FGFGINEFBBK*>** StaticGet_NOOIIDLHMPH()
		{
			return (::Google::Protobuf::FieldCodec_1<::FGFGINEFBBK*>**)UnitySDK::FromName("", "DJALOMIEKNP")->GetStaticField(0x2C040);
		}

		static ::Google::Protobuf::FieldCodec_1<::CDCCPHILOCC*>** StaticGet_AIAFFAPJAAC()
		{
			return (::Google::Protobuf::FieldCodec_1<::CDCCPHILOCC*>**)UnitySDK::FromName("", "DJALOMIEKNP")->GetStaticField(0x2C048);
		}

		static ::Google::Protobuf::MessageParser_1<::DJALOMIEKNP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DJALOMIEKNP*>**)UnitySDK::FromName("", "DJALOMIEKNP")->GetStaticField(0x2C050);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object IJEHLKNDMCO; // 0x0
		// static const ::System::Object EBCAIGBNCLL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJALOMIEKNP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DJALOMIEKNP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DJALOMIEKNP*))((::PBYTE)hIl2Cpp + DJALOMIEKNP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DJALOMIEKNP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DJALOMIEKNP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DJALOMIEKNP*>*(*)())((::PBYTE)hIl2Cpp + DJALOMIEKNP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJALOMIEKNP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DJALOMIEKNP* Clone()
		{
			return ((::DJALOMIEKNP*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJALOMIEKNP_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DJALOMIEKNP_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DJALOMIEKNP_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::CDCCPHILOCC*>* EFIFICGHNMJ()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::CDCCPHILOCC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJALOMIEKNP_EFIFICGHNMJ_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::FGFGINEFBBK*>* KBKHGBNMMEC()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::FGFGINEFBBK*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJALOMIEKNP_KBKHGBNMMEC_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DJALOMIEKNP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DJALOMIEKNP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DJALOMIEKNP*))((::PBYTE)hIl2Cpp + DJALOMIEKNP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DJALOMIEKNP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJALOMIEKNP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DJALOMIEKNP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DJALOMIEKNP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DJALOMIEKNP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DJALOMIEKNP*))((::PBYTE)hIl2Cpp + DJALOMIEKNP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DJALOMIEKNP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
