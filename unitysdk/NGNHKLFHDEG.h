#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MBMEINOEBDJ.h"
#include "unitysdk/MoleMole/UICameraAtom.h"
#include "unitysdk/UnityEngine/Vector3.h"

class HOAAKHNGJJI;
class KHLJFPECEGH;
namespace MoleMole::Config { class ConfigHollowCameraBounce; }
namespace System { class Object; }

#define NGNHKLFHDEG_CELHLLIAIKB_OFFSET UNITYSDK_OFFSET(0x17289890)
#define NGNHKLFHDEG_HBNOIDADKJA_OFFSET UNITYSDK_OFFSET(0x17289A30)
#define NGNHKLFHDEG__CTOR_OFFSET UNITYSDK_OFFSET(0x17289B50)

inline static constexpr unsigned int NGNHKLFHDEG_TypeDefinitionIndex = 84491;

class NGNHKLFHDEG : public ::MBMEINOEBDJ
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGNHKLFHDEG__CTOR_OFFSET))(this);
	}

	::KHLJFPECEGH* CELHLLIAIKB(::Il2CppArray<::System::Object*>* INBACCBOBDN)
	{
		return ((::KHLJFPECEGH*(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + NGNHKLFHDEG_CELHLLIAIKB_OFFSET))(this, INBACCBOBDN);
	}

	static ::HOAAKHNGJJI* HBNOIDADKJA(::MoleMole::UICameraAtom& DADJGKEIIGL, ::UnityEngine::Vector3& IACKHFCLPJI, ::MoleMole::Config::ConfigHollowCameraBounce*& JFMAEMHHJFC)
	{
		return ((::HOAAKHNGJJI*(*)(::MoleMole::UICameraAtom&, ::UnityEngine::Vector3&, ::MoleMole::Config::ConfigHollowCameraBounce*&))((::PBYTE)hIl2Cpp + NGNHKLFHDEG_HBNOIDADKJA_OFFSET))(DADJGKEIIGL, IACKHFCLPJI, JFMAEMHHJFC);
	}
};
