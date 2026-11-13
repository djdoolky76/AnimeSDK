#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AJGLEIOGOID;
class EABDMCJDJFA;
class GNNAEMBFINJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GNNAEMBFINJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FE06B10)
#define GNNAEMBFINJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FE06F40)
#define GNNAEMBFINJ_CLKDKFOCOJM_OFFSET UNITYSDK_OFFSET(0x1FE066B0)
#define GNNAEMBFINJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1FE06660)
#define GNNAEMBFINJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FE06580)
#define GNNAEMBFINJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1FE06520)
#define GNNAEMBFINJ_ENOBOBELOMB_OFFSET UNITYSDK_OFFSET(0x1FE066D0)
#define GNNAEMBFINJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FE06720)
#define GNNAEMBFINJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FE066F0)
#define GNNAEMBFINJ_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1FE066A0)
#define GNNAEMBFINJ_FCIPIJINIAM_OFFSET UNITYSDK_OFFSET(0x1FE066E0)
#define GNNAEMBFINJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FE06880)
#define GNNAEMBFINJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FE064E0)
#define GNNAEMBFINJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FE06E00)
#define GNNAEMBFINJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FE06CF0)
#define GNNAEMBFINJ_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1FE06690)
#define GNNAEMBFINJ_OOILLAJKOBD_OFFSET UNITYSDK_OFFSET(0x1FE066C0)
#define GNNAEMBFINJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FE06510)
#define GNNAEMBFINJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FE06910)
#define GNNAEMBFINJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FE06970)

inline static constexpr unsigned int GNNAEMBFINJ_TypeDefinitionIndex = 35522;

	class GNNAEMBFINJ : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::AJGLEIOGOID*>* JAODKINDHBE; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::EABDMCJDJFA*>* CJMEDHMBLGG; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x28
		::System::UInt32 PBEOFHHEDOM; // 0x2C
		static ::Google::Protobuf::FieldCodec_1<::EABDMCJDJFA*>** StaticGet_OOAOCABAIPP()
		{
			return (::Google::Protobuf::FieldCodec_1<::EABDMCJDJFA*>**)UnitySDK::FromName("", "GNNAEMBFINJ")->GetStaticField(0x1A490);
		}

		static ::Google::Protobuf::MessageParser_1<::GNNAEMBFINJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GNNAEMBFINJ*>**)UnitySDK::FromName("", "GNNAEMBFINJ")->GetStaticField(0x1A498);
		}

		static ::Google::Protobuf::FieldCodec_1<::AJGLEIOGOID*>** StaticGet_MFJLNGBOJOJ()
		{
			return (::Google::Protobuf::FieldCodec_1<::AJGLEIOGOID*>**)UnitySDK::FromName("", "GNNAEMBFINJ")->GetStaticField(0x1A4A0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object ILKPFOKONEK; // 0x0
		// static const ::System::Object IAMEGLBLKPK; // 0x0
		// static const ::System::Object MEKPIJHGCHM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNNAEMBFINJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GNNAEMBFINJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GNNAEMBFINJ*))((::PBYTE)hIl2Cpp + GNNAEMBFINJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GNNAEMBFINJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GNNAEMBFINJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GNNAEMBFINJ*>*(*)())((::PBYTE)hIl2Cpp + GNNAEMBFINJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNNAEMBFINJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GNNAEMBFINJ* Clone()
		{
			return ((::GNNAEMBFINJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNNAEMBFINJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GNNAEMBFINJ_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GNNAEMBFINJ_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::EABDMCJDJFA*>* CLKDKFOCOJM()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::EABDMCJDJFA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNNAEMBFINJ_CLKDKFOCOJM_OFFSET))(this);
		}

		::System::UInt32 OOILLAJKOBD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GNNAEMBFINJ_OOILLAJKOBD_OFFSET))(this);
		}

		::System::Void ENOBOBELOMB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GNNAEMBFINJ_ENOBOBELOMB_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::AJGLEIOGOID*>* FCIPIJINIAM()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::AJGLEIOGOID*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNNAEMBFINJ_FCIPIJINIAM_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GNNAEMBFINJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GNNAEMBFINJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GNNAEMBFINJ*))((::PBYTE)hIl2Cpp + GNNAEMBFINJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GNNAEMBFINJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNNAEMBFINJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GNNAEMBFINJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GNNAEMBFINJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GNNAEMBFINJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GNNAEMBFINJ*))((::PBYTE)hIl2Cpp + GNNAEMBFINJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GNNAEMBFINJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
