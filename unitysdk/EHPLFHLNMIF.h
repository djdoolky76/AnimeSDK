#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ACINIALAFDE.h"
#include "unitysdk/System/Object.h"
class EHPLFHLNMIF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EHPLFHLNMIF_AENLBGLIBJL_OFFSET UNITYSDK_OFFSET(0x1E2A3180)
#define EHPLFHLNMIF_AIMMOANBDCA_OFFSET UNITYSDK_OFFSET(0x1E2A3190)
#define EHPLFHLNMIF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2A36A0)
#define EHPLFHLNMIF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2A3A00)
#define EHPLFHLNMIF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2A30F0)
#define EHPLFHLNMIF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2A30B0)
#define EHPLFHLNMIF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2A30A0)
#define EHPLFHLNMIF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2A31D0)
#define EHPLFHLNMIF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2A31A0)
#define EHPLFHLNMIF_FMFGOAPKGAB_OFFSET UNITYSDK_OFFSET(0x1E2A3170)
#define EHPLFHLNMIF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2A33C0)
#define EHPLFHLNMIF_GNBIPGJGOAJ_OFFSET UNITYSDK_OFFSET(0x1E2A3150)
#define EHPLFHLNMIF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2A3060)
#define EHPLFHLNMIF_KMHNKEJMDAK_OFFSET UNITYSDK_OFFSET(0x1E2A3160)
#define EHPLFHLNMIF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2A3860)
#define EHPLFHLNMIF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2A3800)
#define EHPLFHLNMIF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2A3090)
#define EHPLFHLNMIF_PJLEOJKPGAJ_OFFSET UNITYSDK_OFFSET(0x1E2A3140)
#define EHPLFHLNMIF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2A34E0)
#define EHPLFHLNMIF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2A3540)

inline static constexpr unsigned int EHPLFHLNMIF_TypeDefinitionIndex = 28131;

	class EHPLFHLNMIF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Double BCLKCLDFMOA; // 0x18
		::System::UInt32 LJDBCGPFFDH; // 0x20
		::ACINIALAFDE CFCAMOAGIDE; // 0x24
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "EHPLFHLNMIF")->GetStaticField(0x36120);
		}

		// static const ::System::Object IBJNBJNDPIK; // 0x0
		// static const ::System::Object BOADFNPOBEP; // 0x0
		// static const ::System::Object KOEOEHIMOEI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHPLFHLNMIF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EHPLFHLNMIF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EHPLFHLNMIF*))((::PBYTE)hIl2Cpp + EHPLFHLNMIF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EHPLFHLNMIF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + EHPLFHLNMIF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHPLFHLNMIF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EHPLFHLNMIF* Clone()
		{
			return ((::EHPLFHLNMIF*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHPLFHLNMIF_CLONE_OFFSET))(this);
		}

		::System::Double PJLEOJKPGAJ()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + EHPLFHLNMIF_PJLEOJKPGAJ_OFFSET))(this);
		}

		::System::Void GNBIPGJGOAJ(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + EHPLFHLNMIF_GNBIPGJGOAJ_OFFSET))(this, a1);
		}

		::ACINIALAFDE KMHNKEJMDAK()
		{
			return ((::ACINIALAFDE(*)(::PVOID))((::PBYTE)hIl2Cpp + EHPLFHLNMIF_KMHNKEJMDAK_OFFSET))(this);
		}

		::System::Void FMFGOAPKGAB(::ACINIALAFDE a1)
		{
			return ((::System::Void(*)(::PVOID, ::ACINIALAFDE))((::PBYTE)hIl2Cpp + EHPLFHLNMIF_FMFGOAPKGAB_OFFSET))(this, a1);
		}

		::System::UInt32 AENLBGLIBJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EHPLFHLNMIF_AENLBGLIBJL_OFFSET))(this);
		}

		::System::Void AIMMOANBDCA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EHPLFHLNMIF_AIMMOANBDCA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EHPLFHLNMIF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EHPLFHLNMIF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EHPLFHLNMIF*))((::PBYTE)hIl2Cpp + EHPLFHLNMIF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EHPLFHLNMIF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHPLFHLNMIF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EHPLFHLNMIF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EHPLFHLNMIF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EHPLFHLNMIF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EHPLFHLNMIF*))((::PBYTE)hIl2Cpp + EHPLFHLNMIF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EHPLFHLNMIF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
