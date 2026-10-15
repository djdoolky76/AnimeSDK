#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DJIIJODNAOF;
class OFMDLKJHMED;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DJIIJODNAOF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E19E690)
#define DJIIJODNAOF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E19EA60)
#define DJIIJODNAOF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E19E110)
#define DJIIJODNAOF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E19E050)
#define DJIIJODNAOF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E19E000)
#define DJIIJODNAOF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E19E2F0)
#define DJIIJODNAOF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E19E190)
#define DJIIJODNAOF_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E19E180)
#define DJIIJODNAOF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E19E430)
#define DJIIJODNAOF_HNLDLOOFCCF_OFFSET UNITYSDK_OFFSET(0x1E19E140)
#define DJIIJODNAOF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E19DFC0)
#define DJIIJODNAOF_KIDIEFMGGFE_OFFSET UNITYSDK_OFFSET(0x1E19E150)
#define DJIIJODNAOF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E19E870)
#define DJIIJODNAOF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E19E7C0)
#define DJIIJODNAOF_NLADDCDFKCP_OFFSET UNITYSDK_OFFSET(0x1E19E160)
#define DJIIJODNAOF_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E19E170)
#define DJIIJODNAOF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E19DFF0)
#define DJIIJODNAOF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E19E4A0)
#define DJIIJODNAOF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E19E500)

inline static constexpr unsigned int DJIIJODNAOF_TypeDefinitionIndex = 26570;

	class DJIIJODNAOF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::OFMDLKJHMED*>* MLONOBFFALP; // 0x18
		::System::Boolean MGMABOFMOFI; // 0x20
		::System::Byte _padding0[0x3];
		::System::UInt32 NAEACGPKNNH; // 0x24
		static ::Google::Protobuf::MessageParser_1<::DJIIJODNAOF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DJIIJODNAOF*>**)UnitySDK::FromName("", "DJIIJODNAOF")->GetStaticField(0x32F50);
		}

		static ::Google::Protobuf::FieldCodec_1<::OFMDLKJHMED*>** StaticGet_CFBPOAELIAM()
		{
			return (::Google::Protobuf::FieldCodec_1<::OFMDLKJHMED*>**)UnitySDK::FromName("", "DJIIJODNAOF")->GetStaticField(0x32F58);
		}

		// static const ::System::Object BKMAIBMPLPC; // 0x0
		// static const ::System::Object KPKCEEGLBBH; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJIIJODNAOF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DJIIJODNAOF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DJIIJODNAOF*))((::PBYTE)hIl2Cpp + DJIIJODNAOF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DJIIJODNAOF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DJIIJODNAOF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DJIIJODNAOF*>*(*)())((::PBYTE)hIl2Cpp + DJIIJODNAOF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJIIJODNAOF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DJIIJODNAOF* Clone()
		{
			return ((::DJIIJODNAOF*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJIIJODNAOF_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::OFMDLKJHMED*>* HNLDLOOFCCF()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::OFMDLKJHMED*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJIIJODNAOF_HNLDLOOFCCF_OFFSET))(this);
		}

		::System::Boolean KIDIEFMGGFE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DJIIJODNAOF_KIDIEFMGGFE_OFFSET))(this);
		}

		::System::Void NLADDCDFKCP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DJIIJODNAOF_NLADDCDFKCP_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DJIIJODNAOF_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DJIIJODNAOF_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DJIIJODNAOF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DJIIJODNAOF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DJIIJODNAOF*))((::PBYTE)hIl2Cpp + DJIIJODNAOF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DJIIJODNAOF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJIIJODNAOF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DJIIJODNAOF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DJIIJODNAOF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DJIIJODNAOF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DJIIJODNAOF*))((::PBYTE)hIl2Cpp + DJIIJODNAOF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DJIIJODNAOF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
