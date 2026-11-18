#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ALMLLFFEJOC.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/UnityEngine/Vector3.h"

class PJAIOKMDGAB;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define JNDCBDMFEHA_EIFIFCFJFLB_OFFSET UNITYSDK_OFFSET(0x157D2C80)
#define JNDCBDMFEHA_ELAMMNOAAIF_OFFSET UNITYSDK_OFFSET(0x157D3660)
#define JNDCBDMFEHA_JILOBLHOCDM_OFFSET UNITYSDK_OFFSET(0x157D2B40)

inline static constexpr unsigned int JNDCBDMFEHA_TypeDefinitionIndex = 62560;

class JNDCBDMFEHA : public ::System::Object
{
public:
	static ::System::Void JILOBLHOCDM(::MoleMole::Battle::Entity* OEJJEINGHLN, ::System::UInt32& AFEJKNAJGBN, ::System::UInt32& KHBAJKCFJBN)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::UInt32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + JNDCBDMFEHA_JILOBLHOCDM_OFFSET))(OEJJEINGHLN, AFEJKNAJGBN, KHBAJKCFJBN);
	}

	static ::UnityEngine::Vector3 EIFIFCFJFLB(::MoleMole::EntityHandle HODAIDNDKHD, ::ALMLLFFEJOC KDMGHOAFBGL, ::UnityEngine::Vector3 LEMFLBLCKJF, ::System::String* JMBNHKNMAND)
	{
		return ((::UnityEngine::Vector3(*)(::MoleMole::EntityHandle, ::ALMLLFFEJOC, ::UnityEngine::Vector3, ::System::String*))((::PBYTE)hIl2Cpp + JNDCBDMFEHA_EIFIFCFJFLB_OFFSET))(HODAIDNDKHD, KDMGHOAFBGL, LEMFLBLCKJF, JMBNHKNMAND);
	}

	static ::MoleMole::Battle::Entity* ELAMMNOAAIF(::PJAIOKMDGAB* KCLAKBACAGJ)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PJAIOKMDGAB*))((::PBYTE)hIl2Cpp + JNDCBDMFEHA_ELAMMNOAAIF_OFFSET))(KCLAKBACAGJ);
	}
};
