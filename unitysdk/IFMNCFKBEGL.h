#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IFMNCFKBEGL;
class KPNHGDGLICN;
class LFIKNHJBDBJ;
class NNPGLCGNICI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IFMNCFKBEGL_BLBBMAGLFDL_OFFSET UNITYSDK_OFFSET(0x202961B0)
#define IFMNCFKBEGL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x20296750)
#define IFMNCFKBEGL_CCTOR_OFFSET UNITYSDK_OFFSET(0x20296C90)
#define IFMNCFKBEGL_CLONE_OFFSET UNITYSDK_OFFSET(0x20296150)
#define IFMNCFKBEGL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x20295FF0)
#define IFMNCFKBEGL_CTOR_OFFSET UNITYSDK_OFFSET(0x20295FA0)
#define IFMNCFKBEGL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x20296240)
#define IFMNCFKBEGL_EQUALS_OFFSET UNITYSDK_OFFSET(0x20296210)
#define IFMNCFKBEGL_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x20296200)
#define IFMNCFKBEGL_FHEBONKJALP_OFFSET UNITYSDK_OFFSET(0x202961E0)
#define IFMNCFKBEGL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x20296430)
#define IFMNCFKBEGL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x20295F60)
#define IFMNCFKBEGL_MDCPLOEONPG_OFFSET UNITYSDK_OFFSET(0x20296180)
#define IFMNCFKBEGL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x20296AE0)
#define IFMNCFKBEGL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x20296960)
#define IFMNCFKBEGL_MFDGNAJMGLB_OFFSET UNITYSDK_OFFSET(0x202961A0)
#define IFMNCFKBEGL_MGBKGAPDHLG_OFFSET UNITYSDK_OFFSET(0x202961C0)
#define IFMNCFKBEGL_MGDACGAHKDE_OFFSET UNITYSDK_OFFSET(0x202961D0)
#define IFMNCFKBEGL_NOHEIINLGMA_OFFSET UNITYSDK_OFFSET(0x20296190)
#define IFMNCFKBEGL_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x202961F0)
#define IFMNCFKBEGL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x20295F90)
#define IFMNCFKBEGL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x202964C0)
#define IFMNCFKBEGL_WRITETO_OFFSET UNITYSDK_OFFSET(0x20296520)

inline static constexpr unsigned int IFMNCFKBEGL_TypeDefinitionIndex = 26520;

	class IFMNCFKBEGL : public ::System::Object
	{
	public:
		::NNPGLCGNICI* LKDEFKKLEDJ; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::KPNHGDGLICN*>* ANLOFEJACIF; // 0x20
		::LFIKNHJBDBJ* ICDCMLCALLD; // 0x28
		::System::UInt32 ABPDPMHFFNN; // 0x30
		::System::UInt32 NAEACGPKNNH; // 0x34
		static ::Google::Protobuf::MessageParser_1<::IFMNCFKBEGL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IFMNCFKBEGL*>**)UnitySDK::FromName("", "IFMNCFKBEGL")->GetStaticField(0x461D0);
		}

		static ::Google::Protobuf::FieldCodec_1<::KPNHGDGLICN*>** StaticGet_KCAPMKNIJLM()
		{
			return (::Google::Protobuf::FieldCodec_1<::KPNHGDGLICN*>**)UnitySDK::FromName("", "IFMNCFKBEGL")->GetStaticField(0x461D8);
		}

		// static const ::System::Object EPOLDFHNNFN; // 0x0
		// static const ::System::Object EDGGGCNOFHI; // 0x0
		// static const ::System::Object HNBHJOFPFLM; // 0x0
		// static const ::System::Object BFCAOBLJBOI; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFMNCFKBEGL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IFMNCFKBEGL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IFMNCFKBEGL*))((::PBYTE)hIl2Cpp + IFMNCFKBEGL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFMNCFKBEGL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::IFMNCFKBEGL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::IFMNCFKBEGL*>*(*)())((::PBYTE)hIl2Cpp + IFMNCFKBEGL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFMNCFKBEGL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IFMNCFKBEGL* Clone()
		{
			return ((::IFMNCFKBEGL*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFMNCFKBEGL_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::KPNHGDGLICN*>* MDCPLOEONPG()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::KPNHGDGLICN*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFMNCFKBEGL_MDCPLOEONPG_OFFSET))(this);
		}

		::System::UInt32 NOHEIINLGMA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IFMNCFKBEGL_NOHEIINLGMA_OFFSET))(this);
		}

		::System::Void MFDGNAJMGLB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IFMNCFKBEGL_MFDGNAJMGLB_OFFSET))(this, a1);
		}

		::NNPGLCGNICI* BLBBMAGLFDL()
		{
			return ((::NNPGLCGNICI*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFMNCFKBEGL_BLBBMAGLFDL_OFFSET))(this);
		}

		::System::Void MGBKGAPDHLG(::NNPGLCGNICI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NNPGLCGNICI*))((::PBYTE)hIl2Cpp + IFMNCFKBEGL_MGBKGAPDHLG_OFFSET))(this, a1);
		}

		::LFIKNHJBDBJ* MGDACGAHKDE()
		{
			return ((::LFIKNHJBDBJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFMNCFKBEGL_MGDACGAHKDE_OFFSET))(this);
		}

		::System::Void FHEBONKJALP(::LFIKNHJBDBJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LFIKNHJBDBJ*))((::PBYTE)hIl2Cpp + IFMNCFKBEGL_FHEBONKJALP_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IFMNCFKBEGL_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IFMNCFKBEGL_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IFMNCFKBEGL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IFMNCFKBEGL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IFMNCFKBEGL*))((::PBYTE)hIl2Cpp + IFMNCFKBEGL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IFMNCFKBEGL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFMNCFKBEGL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IFMNCFKBEGL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IFMNCFKBEGL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IFMNCFKBEGL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IFMNCFKBEGL*))((::PBYTE)hIl2Cpp + IFMNCFKBEGL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IFMNCFKBEGL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
