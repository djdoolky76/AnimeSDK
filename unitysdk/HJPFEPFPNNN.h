#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MBMEINOEBDJ.h"
#include "unitysdk/MoleMole/UICameraAtom.h"
#include "unitysdk/UnityEngine/Vector3.h"

class HOAAKHNGJJI;
class KHLJFPECEGH;
namespace MoleMole::Config { class ConfigHollowCameraInit; }
namespace System { class Object; }

#define HJPFEPFPNNN_CELHLLIAIKB_OFFSET UNITYSDK_OFFSET(0x14952BB0)
#define HJPFEPFPNNN_HBNOIDADKJA_OFFSET UNITYSDK_OFFSET(0x14952D50)
#define HJPFEPFPNNN__CTOR_OFFSET UNITYSDK_OFFSET(0x14952E50)

inline static constexpr unsigned int HJPFEPFPNNN_TypeDefinitionIndex = 57227;

class HJPFEPFPNNN : public ::MBMEINOEBDJ
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJPFEPFPNNN__CTOR_OFFSET))(this);
	}

	::KHLJFPECEGH* CELHLLIAIKB(::Il2CppArray<::System::Object*>* INBACCBOBDN)
	{
		return ((::KHLJFPECEGH*(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + HJPFEPFPNNN_CELHLLIAIKB_OFFSET))(this, INBACCBOBDN);
	}

	static ::HOAAKHNGJJI* HBNOIDADKJA(::MoleMole::UICameraAtom& DADJGKEIIGL, ::UnityEngine::Vector3& IACKHFCLPJI, ::MoleMole::Config::ConfigHollowCameraInit*& GJFONMCGOBG)
	{
		return ((::HOAAKHNGJJI*(*)(::MoleMole::UICameraAtom&, ::UnityEngine::Vector3&, ::MoleMole::Config::ConfigHollowCameraInit*&))((::PBYTE)hIl2Cpp + HJPFEPFPNNN_HBNOIDADKJA_OFFSET))(DADJGKEIIGL, IACKHFCLPJI, GJFONMCGOBG);
	}
};
