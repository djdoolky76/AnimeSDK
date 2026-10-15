#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KNFCEJEJINK.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class DADDJLABCNM;
class DLECIKAMKEG;
namespace RPG::Client::Prop { class DuelChimeraProxy; }

#define EOECLJCFFEB_CTOR_OFFSET UNITYSDK_OFFSET(0x155B1250)
#define EOECLJCFFEB_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x155B18B0)
#define EOECLJCFFEB_MGFLFCHMGPA_OFFSET UNITYSDK_OFFSET(0x155B1260)

inline static constexpr unsigned int EOECLJCFFEB_TypeDefinitionIndex = 78264;

	class EOECLJCFFEB : public ::KNFCEJEJINK
	{
	public:
		::RPG::Client::Prop::DuelChimeraProxy* IBLBKLNHKLL; // 0x18
		::DADDJLABCNM* MKKLHFCCCNF; // 0x20
		::DLECIKAMKEG* EEFMDEHLLFI; // 0x28
		::RPG::Client::Prop::DuelChimeraProxy* HKJLKMCDMGB; // 0x30
		::UnityEngine::Vector3 KGMNHAFNOHK; // 0x38
		::System::Single MFLNKDOADDG; // 0x44
		::UnityEngine::Quaternion OKBPGPNJMFL; // 0x48
		::System::Single FOMCKBAHCFM; // 0x58
		::UnityEngine::Vector3 JNFHAIACECG; // 0x5C
		::UnityEngine::Quaternion NGIMALNHLNI; // 0x68
		::System::Void _ctor(::DADDJLABCNM* a1, ::DLECIKAMKEG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::DADDJLABCNM*, ::DLECIKAMKEG*))((::PBYTE)hIl2Cpp + EOECLJCFFEB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void MGFLFCHMGPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOECLJCFFEB_MGFLFCHMGPA_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EOECLJCFFEB_JLANKNHFKCN_OFFSET))(this, a1);
		}

	};
