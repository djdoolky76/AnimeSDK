#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PGPHEKKPBLD_MMADKDHIKON.h"
#include "unitysdk/System/Object.h"
class NMKNOLPFJDN;
class PGPHEKKPBLD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PGPHEKKPBLD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF09080)
#define PGPHEKKPBLD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF096E0)
#define PGPHEKKPBLD_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF08AF0)
#define PGPHEKKPBLD_COEONDABKIH_OFFSET UNITYSDK_OFFSET(0x1DF08B60)
#define PGPHEKKPBLD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF089A0)
#define PGPHEKKPBLD_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF08990)
#define PGPHEKKPBLD_EANKDDIIMHM_OFFSET UNITYSDK_OFFSET(0x1DF08B90)
#define PGPHEKKPBLD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF08C00)
#define PGPHEKKPBLD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF08BA0)
#define PGPHEKKPBLD_FOCIPHMHHEB_OFFSET UNITYSDK_OFFSET(0x1DF08B70)
#define PGPHEKKPBLD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF08E20)
#define PGPHEKKPBLD_ILBBNKLIIJJ_OFFSET UNITYSDK_OFFSET(0x1DF08A70)
#define PGPHEKKPBLD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF08920)
#define PGPHEKKPBLD_LOOMPBFMBCN_OFFSET UNITYSDK_OFFSET(0x1DF08B50)
#define PGPHEKKPBLD_MCKAAMENFCE_OFFSET UNITYSDK_OFFSET(0x1DF08B40)
#define PGPHEKKPBLD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF09430)
#define PGPHEKKPBLD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF09230)
#define PGPHEKKPBLD_NCDBPIIKPDI_OFFSET UNITYSDK_OFFSET(0x1DF08B80)
#define PGPHEKKPBLD_NCGPFEIGDJO_OFFSET UNITYSDK_OFFSET(0x1DF08AD0)
#define PGPHEKKPBLD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF08980)
#define PGPHEKKPBLD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF08EB0)
#define PGPHEKKPBLD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF08F10)

inline static constexpr unsigned int PGPHEKKPBLD_TypeDefinitionIndex = 31918;

	class PGPHEKKPBLD : public ::System::Object
	{
	public:
		::System::Object* NIBJKKOGKAE; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 CPHKLPMPADB; // 0x20
		::System::UInt32 OCCJEGBDDNG; // 0x24
		::PGPHEKKPBLD_MMADKDHIKON DKIIPHICJCP; // 0x28
		static ::Google::Protobuf::MessageParser_1<::PGPHEKKPBLD*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PGPHEKKPBLD*>**)UnitySDK::FromName("", "PGPHEKKPBLD")->GetStaticField(0x33360);
		}

		// static const ::System::Object MCCPOKCDGKE; // 0x0
		// static const ::System::Object LCEHCAOINBN; // 0x0
		// static const ::System::Object LFAACKNPMAC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGPHEKKPBLD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PGPHEKKPBLD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PGPHEKKPBLD*))((::PBYTE)hIl2Cpp + PGPHEKKPBLD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PGPHEKKPBLD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PGPHEKKPBLD*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PGPHEKKPBLD*>*(*)())((::PBYTE)hIl2Cpp + PGPHEKKPBLD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGPHEKKPBLD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PGPHEKKPBLD* Clone()
		{
			return ((::PGPHEKKPBLD*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGPHEKKPBLD_CLONE_OFFSET))(this);
		}

		::System::UInt32 MCKAAMENFCE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PGPHEKKPBLD_MCKAAMENFCE_OFFSET))(this);
		}

		::System::Void LOOMPBFMBCN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PGPHEKKPBLD_LOOMPBFMBCN_OFFSET))(this, a1);
		}

		::System::UInt32 COEONDABKIH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PGPHEKKPBLD_COEONDABKIH_OFFSET))(this);
		}

		::System::Void FOCIPHMHHEB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PGPHEKKPBLD_FOCIPHMHHEB_OFFSET))(this, a1);
		}

		::NMKNOLPFJDN* ILBBNKLIIJJ()
		{
			return ((::NMKNOLPFJDN*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGPHEKKPBLD_ILBBNKLIIJJ_OFFSET))(this);
		}

		::System::Void NCGPFEIGDJO(::NMKNOLPFJDN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NMKNOLPFJDN*))((::PBYTE)hIl2Cpp + PGPHEKKPBLD_NCGPFEIGDJO_OFFSET))(this, a1);
		}

		::PGPHEKKPBLD_MMADKDHIKON NCDBPIIKPDI()
		{
			return ((::PGPHEKKPBLD_MMADKDHIKON(*)(::PVOID))((::PBYTE)hIl2Cpp + PGPHEKKPBLD_NCDBPIIKPDI_OFFSET))(this);
		}

		::System::Void EANKDDIIMHM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGPHEKKPBLD_EANKDDIIMHM_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PGPHEKKPBLD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PGPHEKKPBLD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PGPHEKKPBLD*))((::PBYTE)hIl2Cpp + PGPHEKKPBLD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PGPHEKKPBLD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGPHEKKPBLD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PGPHEKKPBLD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PGPHEKKPBLD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PGPHEKKPBLD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PGPHEKKPBLD*))((::PBYTE)hIl2Cpp + PGPHEKKPBLD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PGPHEKKPBLD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
