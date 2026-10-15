#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class COCHLLCNDJF;
class GADFFIFFNHM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GADFFIFFNHM_BKNIHHPKIIH_OFFSET UNITYSDK_OFFSET(0x1E4162F0)
#define GADFFIFFNHM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E416860)
#define GADFFIFFNHM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E416D30)
#define GADFFIFFNHM_CKIAMHOIHMO_OFFSET UNITYSDK_OFFSET(0x1E416250)
#define GADFFIFFNHM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E416220)
#define GADFFIFFNHM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E416140)
#define GADFFIFFNHM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4160F0)
#define GADFFIFFNHM_EIOMMLPIAKP_OFFSET UNITYSDK_OFFSET(0x1E4162C0)
#define GADFFIFFNHM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E416330)
#define GADFFIFFNHM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E416300)
#define GADFFIFFNHM_GEMDLCGEPMD_OFFSET UNITYSDK_OFFSET(0x1E4162D0)
#define GADFFIFFNHM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4163D0)
#define GADFFIFFNHM_GJGHABLELGJ_OFFSET UNITYSDK_OFFSET(0x1E4162E0)
#define GADFFIFFNHM_IJAIDEGCMOF_OFFSET UNITYSDK_OFFSET(0x1E416280)
#define GADFFIFFNHM_JHILJPIGEDO_OFFSET UNITYSDK_OFFSET(0x1E416270)
#define GADFFIFFNHM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4160B0)
#define GADFFIFFNHM_KAKICHLIJNJ_OFFSET UNITYSDK_OFFSET(0x1E4162A0)
#define GADFFIFFNHM_LFFOMLOABMM_OFFSET UNITYSDK_OFFSET(0x1E4162B0)
#define GADFFIFFNHM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E416BA0)
#define GADFFIFFNHM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E416AB0)
#define GADFFIFFNHM_OCNIMJOLHFC_OFFSET UNITYSDK_OFFSET(0x1E416260)
#define GADFFIFFNHM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4160E0)
#define GADFFIFFNHM_PDEKBGEHKCH_OFFSET UNITYSDK_OFFSET(0x1E416290)
#define GADFFIFFNHM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E416540)
#define GADFFIFFNHM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4165A0)

inline static constexpr unsigned int GADFFIFFNHM_TypeDefinitionIndex = 27502;

	class GADFFIFFNHM : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* NKEBMAIIIIC; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::COCHLLCNDJF* GEPKKCJOFGO; // 0x20
		::System::UInt32 GEMFJILOPLL; // 0x28
		::System::Int32 IINJKLMMBLJ; // 0x2C
		::System::Int32 MLFLEEGBFJP; // 0x30
		::System::Boolean DPJGLMGEKOE; // 0x34
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "GADFFIFFNHM")->GetStaticField(0x1A80);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_JFEEFIMPAMK()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "GADFFIFFNHM")->GetStaticField(0x1A88);
		}

		// static const ::System::Object DOIBBNNHOCD; // 0x0
		// static const ::System::Object LIDEACIPLJP; // 0x0
		// static const ::System::Object JEIKOLGIKKH; // 0x0
		// static const ::System::Object JHPHPDPGLLF; // 0x0
		// static const ::System::Object AKFFJEHMCCB; // 0x0
		// static const ::System::Object MGBNDLBFPEO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GADFFIFFNHM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GADFFIFFNHM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GADFFIFFNHM*))((::PBYTE)hIl2Cpp + GADFFIFFNHM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GADFFIFFNHM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + GADFFIFFNHM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GADFFIFFNHM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GADFFIFFNHM* Clone()
		{
			return ((::GADFFIFFNHM*(*)(::PVOID))((::PBYTE)hIl2Cpp + GADFFIFFNHM_CLONE_OFFSET))(this);
		}

		::System::Int32 CKIAMHOIHMO()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GADFFIFFNHM_CKIAMHOIHMO_OFFSET))(this);
		}

		::System::Void OCNIMJOLHFC(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GADFFIFFNHM_OCNIMJOLHFC_OFFSET))(this, a1);
		}

		::System::Boolean JHILJPIGEDO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GADFFIFFNHM_JHILJPIGEDO_OFFSET))(this);
		}

		::System::Void IJAIDEGCMOF(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GADFFIFFNHM_IJAIDEGCMOF_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* PDEKBGEHKCH()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GADFFIFFNHM_PDEKBGEHKCH_OFFSET))(this);
		}

		::System::Int32 KAKICHLIJNJ()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GADFFIFFNHM_KAKICHLIJNJ_OFFSET))(this);
		}

		::System::Void LFFOMLOABMM(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GADFFIFFNHM_LFFOMLOABMM_OFFSET))(this, a1);
		}

		::System::UInt32 EIOMMLPIAKP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GADFFIFFNHM_EIOMMLPIAKP_OFFSET))(this);
		}

		::System::Void GEMDLCGEPMD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GADFFIFFNHM_GEMDLCGEPMD_OFFSET))(this, a1);
		}

		::COCHLLCNDJF* GJGHABLELGJ()
		{
			return ((::COCHLLCNDJF*(*)(::PVOID))((::PBYTE)hIl2Cpp + GADFFIFFNHM_GJGHABLELGJ_OFFSET))(this);
		}

		::System::Void BKNIHHPKIIH(::COCHLLCNDJF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::COCHLLCNDJF*))((::PBYTE)hIl2Cpp + GADFFIFFNHM_BKNIHHPKIIH_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GADFFIFFNHM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GADFFIFFNHM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GADFFIFFNHM*))((::PBYTE)hIl2Cpp + GADFFIFFNHM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GADFFIFFNHM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GADFFIFFNHM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GADFFIFFNHM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GADFFIFFNHM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GADFFIFFNHM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GADFFIFFNHM*))((::PBYTE)hIl2Cpp + GADFFIFFNHM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GADFFIFFNHM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
