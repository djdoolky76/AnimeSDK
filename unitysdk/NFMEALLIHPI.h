#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BIFJCEEMDKE.h"
#include "unitysdk/NFMEALLIHPI_IBMAFCPAOOB.h"
#include "unitysdk/System/Object.h"
class BJLOENPDAHE;
class NFMEALLIHPI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NFMEALLIHPI_AGBPCLNECNO_OFFSET UNITYSDK_OFFSET(0x1EB06090)
#define NFMEALLIHPI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB068F0)
#define NFMEALLIHPI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB06F90)
#define NFMEALLIHPI_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB06160)
#define NFMEALLIHPI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB05F10)
#define NFMEALLIHPI_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB05F00)
#define NFMEALLIHPI_EBCKEDFGMOC_OFFSET UNITYSDK_OFFSET(0x1EB060B0)
#define NFMEALLIHPI_EEJIKGAKOMP_OFFSET UNITYSDK_OFFSET(0x1EB06050)
#define NFMEALLIHPI_EJDIMEGMAKG_OFFSET UNITYSDK_OFFSET(0x1EB061D0)
#define NFMEALLIHPI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB06240)
#define NFMEALLIHPI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB06210)
#define NFMEALLIHPI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB064F0)
#define NFMEALLIHPI_GNCMNBHMIPE_OFFSET UNITYSDK_OFFSET(0x1EB06200)
#define NFMEALLIHPI_GOIACKBBPOD_OFFSET UNITYSDK_OFFSET(0x1EB061E0)
#define NFMEALLIHPI_HCCIGODMKBK_OFFSET UNITYSDK_OFFSET(0x1EB06130)
#define NFMEALLIHPI_IFGMGBAAKBM_OFFSET UNITYSDK_OFFSET(0x1EB061A0)
#define NFMEALLIHPI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB05EC0)
#define NFMEALLIHPI_JNFBHFOFHFO_OFFSET UNITYSDK_OFFSET(0x1EB061C0)
#define NFMEALLIHPI_KFLDFIGDABN_OFFSET UNITYSDK_OFFSET(0x1EB061F0)
#define NFMEALLIHPI_KLKAIAKLHMF_OFFSET UNITYSDK_OFFSET(0x1EB061B0)
#define NFMEALLIHPI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB06E20)
#define NFMEALLIHPI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB06C60)
#define NFMEALLIHPI_OPDMPOKGBCA_OFFSET UNITYSDK_OFFSET(0x1EB06190)
#define NFMEALLIHPI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB05EF0)
#define NFMEALLIHPI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB065D0)
#define NFMEALLIHPI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB06630)

inline static constexpr unsigned int NFMEALLIHPI_TypeDefinitionIndex = 34002;

	class NFMEALLIHPI : public ::System::Object
	{
	public:
		::System::Object* JEFEMOPFJOP; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 CHMFPHPJAIA; // 0x20
		::NFMEALLIHPI_IBMAFCPAOOB NPIBMNININN; // 0x24
		::BIFJCEEMDKE EMHBAOIIKLC; // 0x28
		::System::UInt32 AMOPIFLCGOO; // 0x2C
		static ::Google::Protobuf::MessageParser_1<::NFMEALLIHPI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NFMEALLIHPI*>**)UnitySDK::FromName("", "NFMEALLIHPI")->GetStaticField(0xE270);
		}

		// static const ::System::Object NKLILADIPNI; // 0x0
		// static const ::System::Object OFLJMOKMMHF; // 0x0
		// static const ::System::Object EAEJNMMGICL; // 0x0
		// static const ::System::Object KKHPBDAEOLM; // 0x0
		// static const ::System::Object NINHOJDICNH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFMEALLIHPI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NFMEALLIHPI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NFMEALLIHPI*))((::PBYTE)hIl2Cpp + NFMEALLIHPI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NFMEALLIHPI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NFMEALLIHPI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NFMEALLIHPI*>*(*)())((::PBYTE)hIl2Cpp + NFMEALLIHPI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFMEALLIHPI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NFMEALLIHPI* Clone()
		{
			return ((::NFMEALLIHPI*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFMEALLIHPI_CLONE_OFFSET))(this);
		}

		::System::UInt32 OPDMPOKGBCA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NFMEALLIHPI_OPDMPOKGBCA_OFFSET))(this);
		}

		::System::Void IFGMGBAAKBM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NFMEALLIHPI_IFGMGBAAKBM_OFFSET))(this, a1);
		}

		::BJLOENPDAHE* EEJIKGAKOMP()
		{
			return ((::BJLOENPDAHE*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFMEALLIHPI_EEJIKGAKOMP_OFFSET))(this);
		}

		::System::Void AGBPCLNECNO(::BJLOENPDAHE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BJLOENPDAHE*))((::PBYTE)hIl2Cpp + NFMEALLIHPI_AGBPCLNECNO_OFFSET))(this, a1);
		}

		::System::UInt32 EBCKEDFGMOC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NFMEALLIHPI_EBCKEDFGMOC_OFFSET))(this);
		}

		::System::Void HCCIGODMKBK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NFMEALLIHPI_HCCIGODMKBK_OFFSET))(this, a1);
		}

		::System::UInt32 KLKAIAKLHMF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NFMEALLIHPI_KLKAIAKLHMF_OFFSET))(this);
		}

		::System::Void JNFBHFOFHFO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NFMEALLIHPI_JNFBHFOFHFO_OFFSET))(this, a1);
		}

		::BIFJCEEMDKE EJDIMEGMAKG()
		{
			return ((::BIFJCEEMDKE(*)(::PVOID))((::PBYTE)hIl2Cpp + NFMEALLIHPI_EJDIMEGMAKG_OFFSET))(this);
		}

		::System::Void GOIACKBBPOD(::BIFJCEEMDKE a1)
		{
			return ((::System::Void(*)(::PVOID, ::BIFJCEEMDKE))((::PBYTE)hIl2Cpp + NFMEALLIHPI_GOIACKBBPOD_OFFSET))(this, a1);
		}

		::NFMEALLIHPI_IBMAFCPAOOB KFLDFIGDABN()
		{
			return ((::NFMEALLIHPI_IBMAFCPAOOB(*)(::PVOID))((::PBYTE)hIl2Cpp + NFMEALLIHPI_KFLDFIGDABN_OFFSET))(this);
		}

		::System::Void GNCMNBHMIPE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFMEALLIHPI_GNCMNBHMIPE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NFMEALLIHPI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NFMEALLIHPI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NFMEALLIHPI*))((::PBYTE)hIl2Cpp + NFMEALLIHPI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NFMEALLIHPI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFMEALLIHPI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NFMEALLIHPI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NFMEALLIHPI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NFMEALLIHPI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NFMEALLIHPI*))((::PBYTE)hIl2Cpp + NFMEALLIHPI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NFMEALLIHPI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
