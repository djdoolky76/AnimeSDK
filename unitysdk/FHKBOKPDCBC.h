#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MBMEINOEBDJ.h"
#include "unitysdk/MoleMole/UICameraAtom.h"
#include "unitysdk/UnityEngine/Vector3.h"

class HOAAKHNGJJI;
class KHLJFPECEGH;
namespace MoleMole::Config { class ConfigHollowCameraEasing; }
namespace System { class Object; }

#define FHKBOKPDCBC_CELHLLIAIKB_OFFSET UNITYSDK_OFFSET(0x191C36E0)
#define FHKBOKPDCBC_HBNOIDADKJA_OFFSET UNITYSDK_OFFSET(0x191C3880)
#define FHKBOKPDCBC__CTOR_OFFSET UNITYSDK_OFFSET(0x191C3990)

inline static constexpr unsigned int FHKBOKPDCBC_TypeDefinitionIndex = 52977;

class FHKBOKPDCBC : public ::MBMEINOEBDJ
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHKBOKPDCBC__CTOR_OFFSET))(this);
	}

	::KHLJFPECEGH* CELHLLIAIKB(::Il2CppArray<::System::Object*>* INBACCBOBDN)
	{
		return ((::KHLJFPECEGH*(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + FHKBOKPDCBC_CELHLLIAIKB_OFFSET))(this, INBACCBOBDN);
	}

	static ::HOAAKHNGJJI* HBNOIDADKJA(::MoleMole::UICameraAtom& DADJGKEIIGL, ::UnityEngine::Vector3& NEKNMFCMMKI, ::MoleMole::Config::ConfigHollowCameraEasing*& BDFLCCPMENK)
	{
		return ((::HOAAKHNGJJI*(*)(::MoleMole::UICameraAtom&, ::UnityEngine::Vector3&, ::MoleMole::Config::ConfigHollowCameraEasing*&))((::PBYTE)hIl2Cpp + FHKBOKPDCBC_HBNOIDADKJA_OFFSET))(DADJGKEIIGL, NEKNMFCMMKI, BDFLCCPMENK);
	}
};
