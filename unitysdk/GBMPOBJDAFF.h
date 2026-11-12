#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DIKCFAICOHB.h"
#include "unitysdk/System/Object.h"
class FOJDKLCHCKG;
class GBMPOBJDAFF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GBMPOBJDAFF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F720A30)
#define GBMPOBJDAFF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F720E10)
#define GBMPOBJDAFF_CLONE_OFFSET UNITYSDK_OFFSET(0x1F7204B0)
#define GBMPOBJDAFF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F720420)
#define GBMPOBJDAFF_CTOR_OFFSET UNITYSDK_OFFSET(0x1F720410)
#define GBMPOBJDAFF_EJDIMEGMAKG_OFFSET UNITYSDK_OFFSET(0x1F720570)
#define GBMPOBJDAFF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F720710)
#define GBMPOBJDAFF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F720590)
#define GBMPOBJDAFF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F720890)
#define GBMPOBJDAFF_GOIACKBBPOD_OFFSET UNITYSDK_OFFSET(0x1F720580)
#define GBMPOBJDAFF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F7203D0)
#define GBMPOBJDAFF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F720C20)
#define GBMPOBJDAFF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F720B40)
#define GBMPOBJDAFF_MLJCADDHPNK_OFFSET UNITYSDK_OFFSET(0x1F720550)
#define GBMPOBJDAFF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F720400)
#define GBMPOBJDAFF_PJHFHFLGBGC_OFFSET UNITYSDK_OFFSET(0x1F720560)
#define GBMPOBJDAFF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F7208E0)
#define GBMPOBJDAFF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F720940)

inline static constexpr unsigned int GBMPOBJDAFF_TypeDefinitionIndex = 29398;

	class GBMPOBJDAFF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::FOJDKLCHCKG* KNNNFHBBKKF; // 0x18
		::DIKCFAICOHB EMHBAOIIKLC; // 0x20
		static ::Google::Protobuf::MessageParser_1<::GBMPOBJDAFF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GBMPOBJDAFF*>**)UnitySDK::FromName("", "GBMPOBJDAFF")->GetStaticField(0x55A80);
		}

		// static const ::System::Object LPDBLAAEICI; // 0x0
		// static const ::System::Object NINHOJDICNH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBMPOBJDAFF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GBMPOBJDAFF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GBMPOBJDAFF*))((::PBYTE)hIl2Cpp + GBMPOBJDAFF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GBMPOBJDAFF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GBMPOBJDAFF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GBMPOBJDAFF*>*(*)())((::PBYTE)hIl2Cpp + GBMPOBJDAFF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBMPOBJDAFF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GBMPOBJDAFF* Clone()
		{
			return ((::GBMPOBJDAFF*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBMPOBJDAFF_CLONE_OFFSET))(this);
		}

		::FOJDKLCHCKG* MLJCADDHPNK()
		{
			return ((::FOJDKLCHCKG*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBMPOBJDAFF_MLJCADDHPNK_OFFSET))(this);
		}

		::System::Void PJHFHFLGBGC(::FOJDKLCHCKG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FOJDKLCHCKG*))((::PBYTE)hIl2Cpp + GBMPOBJDAFF_PJHFHFLGBGC_OFFSET))(this, a1);
		}

		::DIKCFAICOHB EJDIMEGMAKG()
		{
			return ((::DIKCFAICOHB(*)(::PVOID))((::PBYTE)hIl2Cpp + GBMPOBJDAFF_EJDIMEGMAKG_OFFSET))(this);
		}

		::System::Void GOIACKBBPOD(::DIKCFAICOHB a1)
		{
			return ((::System::Void(*)(::PVOID, ::DIKCFAICOHB))((::PBYTE)hIl2Cpp + GBMPOBJDAFF_GOIACKBBPOD_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GBMPOBJDAFF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GBMPOBJDAFF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GBMPOBJDAFF*))((::PBYTE)hIl2Cpp + GBMPOBJDAFF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GBMPOBJDAFF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBMPOBJDAFF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GBMPOBJDAFF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GBMPOBJDAFF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GBMPOBJDAFF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GBMPOBJDAFF*))((::PBYTE)hIl2Cpp + GBMPOBJDAFF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GBMPOBJDAFF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
