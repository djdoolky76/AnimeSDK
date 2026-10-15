#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BPDKJKJGECM;
class JGNCJOINEMP;
class LIKNJLCIAGI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JGNCJOINEMP_ACOJNBBKMOE_OFFSET UNITYSDK_OFFSET(0x1E70FD40)
#define JGNCJOINEMP_BEKIAONFNHN_OFFSET UNITYSDK_OFFSET(0x1E70FD70)
#define JGNCJOINEMP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E7103A0)
#define JGNCJOINEMP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7107D0)
#define JGNCJOINEMP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E70FBA0)
#define JGNCJOINEMP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E70FAA0)
#define JGNCJOINEMP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E70FA90)
#define JGNCJOINEMP_EBCGLAPICMG_OFFSET UNITYSDK_OFFSET(0x1E70FD10)
#define JGNCJOINEMP_EODGHOPFDCJ_OFFSET UNITYSDK_OFFSET(0x1E70FD50)
#define JGNCJOINEMP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E70FEE0)
#define JGNCJOINEMP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E70FD80)
#define JGNCJOINEMP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E710090)
#define JGNCJOINEMP_GLKDMGKPMKK_OFFSET UNITYSDK_OFFSET(0x1E70FCF0)
#define JGNCJOINEMP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E70FA20)
#define JGNCJOINEMP_KMPCMIHIJLA_OFFSET UNITYSDK_OFFSET(0x1E70FD00)
#define JGNCJOINEMP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E7106C0)
#define JGNCJOINEMP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E710550)
#define JGNCJOINEMP_MHHDBKELGIO_OFFSET UNITYSDK_OFFSET(0x1E70FD60)
#define JGNCJOINEMP_NKDINAILHGG_OFFSET UNITYSDK_OFFSET(0x1E70FCE0)
#define JGNCJOINEMP_NKGENFICNDN_OFFSET UNITYSDK_OFFSET(0x1E70FD30)
#define JGNCJOINEMP_OPDFLOPPHOC_OFFSET UNITYSDK_OFFSET(0x1E70FD20)
#define JGNCJOINEMP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E70FA80)
#define JGNCJOINEMP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E7100F0)
#define JGNCJOINEMP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E710150)

inline static constexpr unsigned int JGNCJOINEMP_TypeDefinitionIndex = 28603;

	class JGNCJOINEMP : public ::System::Object
	{
	public:
		::BPDKJKJGECM* EOEMPHLGGLE; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::LIKNJLCIAGI* KLINKNMHOCI; // 0x20
		::System::UInt32 IDDLDFAPGBE; // 0x28
		::System::Boolean FMDKGNNNIPH; // 0x2C
		::System::Byte _padding0[0x3];
		::System::Int32 NPFBAFODCBI; // 0x30
		static ::Google::Protobuf::MessageParser_1<::JGNCJOINEMP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JGNCJOINEMP*>**)UnitySDK::FromName("", "JGNCJOINEMP")->GetStaticField(0x2F670);
		}

		// static const ::System::Object BGEAMGMALCL; // 0x0
		// static const ::System::Object IBLBAHIMHJK; // 0x0
		// static const ::System::Object FDIBOICNAOE; // 0x0
		// static const ::System::Object JJDOFLLPDJE; // 0x0
		// static const ::System::Object GKKKEHJAKII; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGNCJOINEMP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JGNCJOINEMP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JGNCJOINEMP*))((::PBYTE)hIl2Cpp + JGNCJOINEMP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JGNCJOINEMP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JGNCJOINEMP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JGNCJOINEMP*>*(*)())((::PBYTE)hIl2Cpp + JGNCJOINEMP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGNCJOINEMP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JGNCJOINEMP* Clone()
		{
			return ((::JGNCJOINEMP*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGNCJOINEMP_CLONE_OFFSET))(this);
		}

		::System::UInt32 NKDINAILHGG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JGNCJOINEMP_NKDINAILHGG_OFFSET))(this);
		}

		::System::Void GLKDMGKPMKK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JGNCJOINEMP_GLKDMGKPMKK_OFFSET))(this, a1);
		}

		::BPDKJKJGECM* KMPCMIHIJLA()
		{
			return ((::BPDKJKJGECM*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGNCJOINEMP_KMPCMIHIJLA_OFFSET))(this);
		}

		::System::Void EBCGLAPICMG(::BPDKJKJGECM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BPDKJKJGECM*))((::PBYTE)hIl2Cpp + JGNCJOINEMP_EBCGLAPICMG_OFFSET))(this, a1);
		}

		::System::Boolean OPDFLOPPHOC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JGNCJOINEMP_OPDFLOPPHOC_OFFSET))(this);
		}

		::System::Void NKGENFICNDN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JGNCJOINEMP_NKGENFICNDN_OFFSET))(this, a1);
		}

		::System::Int32 ACOJNBBKMOE()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JGNCJOINEMP_ACOJNBBKMOE_OFFSET))(this);
		}

		::System::Void EODGHOPFDCJ(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JGNCJOINEMP_EODGHOPFDCJ_OFFSET))(this, a1);
		}

		::LIKNJLCIAGI* MHHDBKELGIO()
		{
			return ((::LIKNJLCIAGI*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGNCJOINEMP_MHHDBKELGIO_OFFSET))(this);
		}

		::System::Void BEKIAONFNHN(::LIKNJLCIAGI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LIKNJLCIAGI*))((::PBYTE)hIl2Cpp + JGNCJOINEMP_BEKIAONFNHN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JGNCJOINEMP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JGNCJOINEMP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JGNCJOINEMP*))((::PBYTE)hIl2Cpp + JGNCJOINEMP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JGNCJOINEMP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGNCJOINEMP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JGNCJOINEMP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JGNCJOINEMP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JGNCJOINEMP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JGNCJOINEMP*))((::PBYTE)hIl2Cpp + JGNCJOINEMP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JGNCJOINEMP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
