#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MBMEINOEBDJ.h"
#include "unitysdk/MoleMole/UICameraAtom.h"
#include "unitysdk/UnityEngine/Vector3.h"

class KHLJFPECEGH;
class OKLNFDLFBIH;
namespace MoleMole::Config { class ConfigHollowCameraDrag; }
namespace System { class Object; }

#define PNKJAAKFDDJ_CELHLLIAIKB_OFFSET UNITYSDK_OFFSET(0x1B9F87B0)
#define PNKJAAKFDDJ_HBNOIDADKJA_OFFSET UNITYSDK_OFFSET(0x1B9F8950)
#define PNKJAAKFDDJ_IKOIILIHJCE_OFFSET UNITYSDK_OFFSET(0x1B9F8A70)
#define PNKJAAKFDDJ_LMJALKBGKCP_OFFSET UNITYSDK_OFFSET(0x1B9F8A60)
#define PNKJAAKFDDJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9F8A50)

inline static constexpr unsigned int PNKJAAKFDDJ_TypeDefinitionIndex = 72078;

class PNKJAAKFDDJ : public ::MBMEINOEBDJ
{
public:
	::OKLNFDLFBIH* _NOAGGAGLLKA_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNKJAAKFDDJ__CTOR_OFFSET))(this);
	}

	::KHLJFPECEGH* CELHLLIAIKB(::Il2CppArray<::System::Object*>* INBACCBOBDN)
	{
		return ((::KHLJFPECEGH*(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + PNKJAAKFDDJ_CELHLLIAIKB_OFFSET))(this, INBACCBOBDN);
	}

	::System::Void LMJALKBGKCP(::OKLNFDLFBIH* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::OKLNFDLFBIH*))((::PBYTE)hIl2Cpp + PNKJAAKFDDJ_LMJALKBGKCP_OFFSET))(this, EGEGIMGMJHN);
	}

	static ::OKLNFDLFBIH* HBNOIDADKJA(::MoleMole::UICameraAtom& DADJGKEIIGL, ::UnityEngine::Vector3& JHPBEGCLADE, ::MoleMole::Config::ConfigHollowCameraDrag*& PNBBJFEOOPI)
	{
		return ((::OKLNFDLFBIH*(*)(::MoleMole::UICameraAtom&, ::UnityEngine::Vector3&, ::MoleMole::Config::ConfigHollowCameraDrag*&))((::PBYTE)hIl2Cpp + PNKJAAKFDDJ_HBNOIDADKJA_OFFSET))(DADJGKEIIGL, JHPBEGCLADE, PNBBJFEOOPI);
	}

	::OKLNFDLFBIH* IKOIILIHJCE()
	{
		return ((::OKLNFDLFBIH*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNKJAAKFDDJ_IKOIILIHJCE_OFFSET))(this);
	}
};
