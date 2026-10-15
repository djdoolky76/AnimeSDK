#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OFFMCODMKDL_LENGEHAAFDE.h"
#include "unitysdk/System/Object.h"
class APCDHOBPBHA;
class CEOJGIDJLOA;
class EDLENJAPMBJ;
class HGLDJBNCABP;
class NFDHOCKEPGD;
class OFFMCODMKDL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OFFMCODMKDL_AKNLMDCDFJG_OFFSET UNITYSDK_OFFSET(0x1DE13C10)
#define OFFMCODMKDL_ALJOCGIDLAJ_OFFSET UNITYSDK_OFFSET(0x1DE13930)
#define OFFMCODMKDL_BLLGMNIHDCJ_OFFSET UNITYSDK_OFFSET(0x1DE13B10)
#define OFFMCODMKDL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE147E0)
#define OFFMCODMKDL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE15710)
#define OFFMCODMKDL_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE13BB0)
#define OFFMCODMKDL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE13610)
#define OFFMCODMKDL_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE13600)
#define OFFMCODMKDL_DKJNPIJGECA_OFFSET UNITYSDK_OFFSET(0x1DE139B0)
#define OFFMCODMKDL_EBFFKACLFCD_OFFSET UNITYSDK_OFFSET(0x1DE13A30)
#define OFFMCODMKDL_EPOBMAOGKIJ_OFFSET UNITYSDK_OFFSET(0x1DE13990)
#define OFFMCODMKDL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE13C80)
#define OFFMCODMKDL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE13C20)
#define OFFMCODMKDL_GEGCKIMILMP_OFFSET UNITYSDK_OFFSET(0x1DE13AB0)
#define OFFMCODMKDL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE142A0)
#define OFFMCODMKDL_HBPOGPEINHG_OFFSET UNITYSDK_OFFSET(0x1DE13B90)
#define OFFMCODMKDL_HKENHINIBMN_OFFSET UNITYSDK_OFFSET(0x1DE13A90)
#define OFFMCODMKDL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE13590)
#define OFFMCODMKDL_LLPNNGMEJIM_OFFSET UNITYSDK_OFFSET(0x1DE13B30)
#define OFFMCODMKDL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE151F0)
#define OFFMCODMKDL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE14AF0)
#define OFFMCODMKDL_MIBGCOGNPME_OFFSET UNITYSDK_OFFSET(0x1DE13C00)
#define OFFMCODMKDL_NHDGELMJCOJ_OFFSET UNITYSDK_OFFSET(0x1DE13A10)
#define OFFMCODMKDL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE135F0)
#define OFFMCODMKDL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE14510)
#define OFFMCODMKDL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE14570)

inline static constexpr unsigned int OFFMCODMKDL_TypeDefinitionIndex = 25808;

	class OFFMCODMKDL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Object* FGOINBLCEJK; // 0x18
		::OFFMCODMKDL_LENGEHAAFDE PJKJJMLPDKB; // 0x20
		static ::Google::Protobuf::MessageParser_1<::OFFMCODMKDL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OFFMCODMKDL*>**)UnitySDK::FromName("", "OFFMCODMKDL")->GetStaticField(0x16450);
		}

		// static const ::System::Object DBPEMHDLHJE; // 0x0
		// static const ::System::Object ECPNKGHCHLH; // 0x0
		// static const ::System::Object INDFIEDHAJF; // 0x0
		// static const ::System::Object NIDICPCNADH; // 0x0
		// static const ::System::Object HAHMOCELMEM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFFMCODMKDL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OFFMCODMKDL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OFFMCODMKDL*))((::PBYTE)hIl2Cpp + OFFMCODMKDL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OFFMCODMKDL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OFFMCODMKDL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OFFMCODMKDL*>*(*)())((::PBYTE)hIl2Cpp + OFFMCODMKDL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFFMCODMKDL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OFFMCODMKDL* Clone()
		{
			return ((::OFFMCODMKDL*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFFMCODMKDL_CLONE_OFFSET))(this);
		}

		::NFDHOCKEPGD* ALJOCGIDLAJ()
		{
			return ((::NFDHOCKEPGD*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFFMCODMKDL_ALJOCGIDLAJ_OFFSET))(this);
		}

		::System::Void EPOBMAOGKIJ(::NFDHOCKEPGD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NFDHOCKEPGD*))((::PBYTE)hIl2Cpp + OFFMCODMKDL_EPOBMAOGKIJ_OFFSET))(this, a1);
		}

		::CEOJGIDJLOA* DKJNPIJGECA()
		{
			return ((::CEOJGIDJLOA*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFFMCODMKDL_DKJNPIJGECA_OFFSET))(this);
		}

		::System::Void NHDGELMJCOJ(::CEOJGIDJLOA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CEOJGIDJLOA*))((::PBYTE)hIl2Cpp + OFFMCODMKDL_NHDGELMJCOJ_OFFSET))(this, a1);
		}

		::APCDHOBPBHA* EBFFKACLFCD()
		{
			return ((::APCDHOBPBHA*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFFMCODMKDL_EBFFKACLFCD_OFFSET))(this);
		}

		::System::Void HKENHINIBMN(::APCDHOBPBHA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::APCDHOBPBHA*))((::PBYTE)hIl2Cpp + OFFMCODMKDL_HKENHINIBMN_OFFSET))(this, a1);
		}

		::EDLENJAPMBJ* GEGCKIMILMP()
		{
			return ((::EDLENJAPMBJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFFMCODMKDL_GEGCKIMILMP_OFFSET))(this);
		}

		::System::Void BLLGMNIHDCJ(::EDLENJAPMBJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EDLENJAPMBJ*))((::PBYTE)hIl2Cpp + OFFMCODMKDL_BLLGMNIHDCJ_OFFSET))(this, a1);
		}

		::HGLDJBNCABP* LLPNNGMEJIM()
		{
			return ((::HGLDJBNCABP*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFFMCODMKDL_LLPNNGMEJIM_OFFSET))(this);
		}

		::System::Void HBPOGPEINHG(::HGLDJBNCABP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGLDJBNCABP*))((::PBYTE)hIl2Cpp + OFFMCODMKDL_HBPOGPEINHG_OFFSET))(this, a1);
		}

		::OFFMCODMKDL_LENGEHAAFDE MIBGCOGNPME()
		{
			return ((::OFFMCODMKDL_LENGEHAAFDE(*)(::PVOID))((::PBYTE)hIl2Cpp + OFFMCODMKDL_MIBGCOGNPME_OFFSET))(this);
		}

		::System::Void AKNLMDCDFJG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFFMCODMKDL_AKNLMDCDFJG_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OFFMCODMKDL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OFFMCODMKDL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OFFMCODMKDL*))((::PBYTE)hIl2Cpp + OFFMCODMKDL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFFMCODMKDL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFFMCODMKDL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OFFMCODMKDL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFFMCODMKDL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OFFMCODMKDL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OFFMCODMKDL*))((::PBYTE)hIl2Cpp + OFFMCODMKDL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OFFMCODMKDL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
