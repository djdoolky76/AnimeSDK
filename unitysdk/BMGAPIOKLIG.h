#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AANLJBLOOFO;
class BMGAPIOKLIG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BMGAPIOKLIG_AJMNOIINAME_OFFSET UNITYSDK_OFFSET(0x1DFF76D0)
#define BMGAPIOKLIG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DFF7C20)
#define BMGAPIOKLIG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFF7FC0)
#define BMGAPIOKLIG_CIBDMPPKPOB_OFFSET UNITYSDK_OFFSET(0x1DFF76E0)
#define BMGAPIOKLIG_CLONE_OFFSET UNITYSDK_OFFSET(0x1DFF75F0)
#define BMGAPIOKLIG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DFF7560)
#define BMGAPIOKLIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFF7550)
#define BMGAPIOKLIG_EOIFAAMKMHC_OFFSET UNITYSDK_OFFSET(0x1DFF76C0)
#define BMGAPIOKLIG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DFF78B0)
#define BMGAPIOKLIG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DFF7700)
#define BMGAPIOKLIG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DFF7A30)
#define BMGAPIOKLIG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DFF74E0)
#define BMGAPIOKLIG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DFF7DD0)
#define BMGAPIOKLIG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DFF7CF0)
#define BMGAPIOKLIG_MIMHJBHMKGH_OFFSET UNITYSDK_OFFSET(0x1DFF76F0)
#define BMGAPIOKLIG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DFF7540)
#define BMGAPIOKLIG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DFF7AE0)
#define BMGAPIOKLIG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DFF7B40)

inline static constexpr unsigned int BMGAPIOKLIG_TypeDefinitionIndex = 26837;

	class BMGAPIOKLIG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::AANLJBLOOFO* HGJKNMJCENA; // 0x18
		::System::UInt32 NMAMKMKIMPP; // 0x20
		static ::Google::Protobuf::MessageParser_1<::BMGAPIOKLIG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BMGAPIOKLIG*>**)UnitySDK::FromName("", "BMGAPIOKLIG")->GetStaticField(0x5CAE0);
		}

		// static const ::System::Object NPLEFFPGOLJ; // 0x0
		// static const ::System::Object KGBIOKNMNGB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMGAPIOKLIG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BMGAPIOKLIG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BMGAPIOKLIG*))((::PBYTE)hIl2Cpp + BMGAPIOKLIG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BMGAPIOKLIG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BMGAPIOKLIG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BMGAPIOKLIG*>*(*)())((::PBYTE)hIl2Cpp + BMGAPIOKLIG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMGAPIOKLIG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BMGAPIOKLIG* Clone()
		{
			return ((::BMGAPIOKLIG*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMGAPIOKLIG_CLONE_OFFSET))(this);
		}

		::AANLJBLOOFO* EOIFAAMKMHC()
		{
			return ((::AANLJBLOOFO*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMGAPIOKLIG_EOIFAAMKMHC_OFFSET))(this);
		}

		::System::Void AJMNOIINAME(::AANLJBLOOFO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AANLJBLOOFO*))((::PBYTE)hIl2Cpp + BMGAPIOKLIG_AJMNOIINAME_OFFSET))(this, a1);
		}

		::System::UInt32 CIBDMPPKPOB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMGAPIOKLIG_CIBDMPPKPOB_OFFSET))(this);
		}

		::System::Void MIMHJBHMKGH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BMGAPIOKLIG_MIMHJBHMKGH_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BMGAPIOKLIG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BMGAPIOKLIG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BMGAPIOKLIG*))((::PBYTE)hIl2Cpp + BMGAPIOKLIG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMGAPIOKLIG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMGAPIOKLIG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BMGAPIOKLIG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMGAPIOKLIG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BMGAPIOKLIG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BMGAPIOKLIG*))((::PBYTE)hIl2Cpp + BMGAPIOKLIG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BMGAPIOKLIG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
