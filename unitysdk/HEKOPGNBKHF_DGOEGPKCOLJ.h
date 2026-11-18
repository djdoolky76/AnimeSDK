#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HEKOPGNBKHF;
namespace MoleMole { class ServerListInfo; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HEKOPGNBKHF_DGOEGPKCOLJ_BBILMCBIHCN_OFFSET UNITYSDK_OFFSET(0x16F2E0A0)
#define HEKOPGNBKHF_DGOEGPKCOLJ__CTOR_OFFSET UNITYSDK_OFFSET(0x16F2E090)

inline static constexpr unsigned int HEKOPGNBKHF_DGOEGPKCOLJ_TypeDefinitionIndex = 85175;

class HEKOPGNBKHF_DGOEGPKCOLJ : public ::System::Object
{
public:
	::System::Action_1<::MoleMole::ServerListInfo*>* PDPHACAMING; // 0x10
	::System::Collections::Generic::List_1<::MoleMole::ServerListInfo*>* JMJDLAONMIL; // 0x18
	::HEKOPGNBKHF* KLHPEBKNIFB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEKOPGNBKHF_DGOEGPKCOLJ__CTOR_OFFSET))(this);
	}

	::System::Void BBILMCBIHCN(::MoleMole::ServerListInfo* GFEHDJEOEIA)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ServerListInfo*))((::PBYTE)hIl2Cpp + HEKOPGNBKHF_DGOEGPKCOLJ_BBILMCBIHCN_OFFSET))(this, GFEHDJEOEIA);
	}
};
