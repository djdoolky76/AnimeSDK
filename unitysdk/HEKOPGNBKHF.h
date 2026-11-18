#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/OEPFGCNCGKD.h"

namespace MoleMole { class ServerListInfo; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Net { class WebResponse; }
namespace System::Threading::Tasks { template <typename T> class Task_1; }

#define HEKOPGNBKHF_BHIMAIKEBBB_OFFSET UNITYSDK_OFFSET(0x17A3FC40)
#define HEKOPGNBKHF_CMNGOBDPBOK_OFFSET UNITYSDK_OFFSET(0x17A400C0)
#define HEKOPGNBKHF_CPJPNDMMPIN_OFFSET UNITYSDK_OFFSET(0x17A404D0)
#define HEKOPGNBKHF_ECIKGCPKCCI_OFFSET UNITYSDK_OFFSET(0x17A40640)
#define HEKOPGNBKHF_EDGKCHANLCE_OFFSET UNITYSDK_OFFSET(0x17A3FE70)
#define HEKOPGNBKHF_EMDPOEOMCON_OFFSET UNITYSDK_OFFSET(0x17A40800)
#define HEKOPGNBKHF_FBAMJOJEPIO_OFFSET UNITYSDK_OFFSET(0x17A40280)
#define HEKOPGNBKHF_GDJCIMLDNCC_OFFSET UNITYSDK_OFFSET(0x17A40160)
#define HEKOPGNBKHF_KLCNEMJFFEE_OFFSET UNITYSDK_OFFSET(0x17A40330)
#define HEKOPGNBKHF_LCBKPFIAMDA_OFFSET UNITYSDK_OFFSET(0x17A40590)
#define HEKOPGNBKHF_NBBMLPMCDGD_OFFSET UNITYSDK_OFFSET(0x17A3FF90)
#define HEKOPGNBKHF_PDICAIGOMMH_OFFSET UNITYSDK_OFFSET(0x17A3FAD0)
#define HEKOPGNBKHF__CCTOR_OFFSET UNITYSDK_OFFSET(0x17A3FAC0)
#define HEKOPGNBKHF__CTOR_OFFSET UNITYSDK_OFFSET(0x17A3F9F0)

inline static constexpr unsigned int HEKOPGNBKHF_TypeDefinitionIndex = 85174;

class HEKOPGNBKHF : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet_EBLAKJCLNFH()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(HEKOPGNBKHF_TypeDefinitionIndex)->GetStaticField(0x113D0);
	}
	// static const ::System::Int32 AFJINOKBEPP = 0x3E8; // 0x0
	// static const ::System::Int32 CHLIJCHJFMC = 0x3; // 0x0
	::System::Action_1<::MoleMole::ServerListInfo*>* BGGJJKGIEOE; // 0x10
	::System::Collections::Generic::List_1<::MoleMole::ServerListInfo*>* FFEPNPKLEEN; // 0x18
	::System::Collections::Generic::List_1<::MoleMole::ServerListInfo*>* AIJDKGECHOF; // 0x20
	::System::Int32 PGNAHFCJFCA; // 0x28
	::System::Boolean JKLOEKJHOPE; // 0x2C
	::System::Boolean FKGMECIECDM; // 0x2D
	::System::Byte _padding0[0x2];
	::System::Int32 OJOEBEBNFCJ; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEKOPGNBKHF__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HEKOPGNBKHF__CCTOR_OFFSET))();
	}

	::System::Void PDICAIGOMMH(::System::Collections::Generic::List_1<::MoleMole::ServerListInfo*>* JMJDLAONMIL, ::System::Action_1<::MoleMole::ServerListInfo*>* PDPHACAMING)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::ServerListInfo*>*, ::System::Action_1<::MoleMole::ServerListInfo*>*))((::PBYTE)hIl2Cpp + HEKOPGNBKHF_PDICAIGOMMH_OFFSET))(this, JMJDLAONMIL, PDPHACAMING);
	}

	static ::System::Collections::IEnumerator* CMNGOBDPBOK(::MoleMole::ServerListInfo* GFEHDJEOEIA, ::System::Action_1<::OEPFGCNCGKD>* IGAAKDOIPNN)
	{
		return ((::System::Collections::IEnumerator*(*)(::MoleMole::ServerListInfo*, ::System::Action_1<::OEPFGCNCGKD>*))((::PBYTE)hIl2Cpp + HEKOPGNBKHF_CMNGOBDPBOK_OFFSET))(GFEHDJEOEIA, IGAAKDOIPNN);
	}

	::MoleMole::ServerListInfo* GDJCIMLDNCC(::System::Collections::Generic::List_1<::MoleMole::ServerListInfo*>* AHLKDDNJHEO)
	{
		return ((::MoleMole::ServerListInfo*(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::ServerListInfo*>*))((::PBYTE)hIl2Cpp + HEKOPGNBKHF_GDJCIMLDNCC_OFFSET))(this, AHLKDDNJHEO);
	}

	::System::Void FBAMJOJEPIO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEKOPGNBKHF_FBAMJOJEPIO_OFFSET))(this);
	}

	::MoleMole::ServerListInfo* KLCNEMJFFEE(::System::Collections::Generic::List_1<::MoleMole::ServerListInfo*>* JMJDLAONMIL)
	{
		return ((::MoleMole::ServerListInfo*(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::ServerListInfo*>*))((::PBYTE)hIl2Cpp + HEKOPGNBKHF_KLCNEMJFFEE_OFFSET))(this, JMJDLAONMIL);
	}

	static ::System::Void CPJPNDMMPIN(::System::String* OAMCPEJPHLP, ::System::Int32 NCLPFEMNHBC)
	{
		return ((::System::Void(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + HEKOPGNBKHF_CPJPNDMMPIN_OFFSET))(OAMCPEJPHLP, NCLPFEMNHBC);
	}

	static ::System::Collections::IEnumerator* LCBKPFIAMDA(::MoleMole::ServerListInfo* GFEHDJEOEIA, ::OEPFGCNCGKD FGOLMIJFHIO, ::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Collections::IEnumerator*(*)(::MoleMole::ServerListInfo*, ::OEPFGCNCGKD, ::System::Int32))((::PBYTE)hIl2Cpp + HEKOPGNBKHF_LCBKPFIAMDA_OFFSET))(GFEHDJEOEIA, FGOLMIJFHIO, ABHBKFJKINO);
	}

	::System::Void EDGKCHANLCE(::System::Collections::Generic::List_1<::MoleMole::ServerListInfo*>* JMJDLAONMIL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::ServerListInfo*>*))((::PBYTE)hIl2Cpp + HEKOPGNBKHF_EDGKCHANLCE_OFFSET))(this, JMJDLAONMIL);
	}

	::System::Void ECIKGCPKCCI(::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HEKOPGNBKHF_ECIKGCPKCCI_OFFSET))(this, ABHBKFJKINO);
	}

	static ::System::Threading::Tasks::Task_1<::System::Net::WebResponse*>* EMDPOEOMCON(::System::String* OLOMNNBBHPJ)
	{
		return ((::System::Threading::Tasks::Task_1<::System::Net::WebResponse*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + HEKOPGNBKHF_EMDPOEOMCON_OFFSET))(OLOMNNBBHPJ);
	}

	::MoleMole::ServerListInfo* BHIMAIKEBBB(::System::Collections::Generic::List_1<::MoleMole::ServerListInfo*>* JMJDLAONMIL)
	{
		return ((::MoleMole::ServerListInfo*(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::ServerListInfo*>*))((::PBYTE)hIl2Cpp + HEKOPGNBKHF_BHIMAIKEBBB_OFFSET))(this, JMJDLAONMIL);
	}

	::System::Void NBBMLPMCDGD(::System::Action_1<::MoleMole::ServerListInfo*>* GAGPPIAPKPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::ServerListInfo*>*))((::PBYTE)hIl2Cpp + HEKOPGNBKHF_NBBMLPMCDGD_OFFSET))(this, GAGPPIAPKPI);
	}
};
