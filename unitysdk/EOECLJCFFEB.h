#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KNFCEJEJINK.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class DADDJLABCNM;
class DLECIKAMKEG;
namespace RPG::Client::Prop { class DuelChimeraProxy; }

#define EOECLJCFFEB_CTOR_OFFSET UNITYSDK_OFFSET(0x155BCC40)
#define EOECLJCFFEB_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x155BD2A0)
#define EOECLJCFFEB_MGFLFCHMGPA_OFFSET UNITYSDK_OFFSET(0x155BCC50)

inline static constexpr unsigned int EOECLJCFFEB_TypeDefinitionIndex = 78265;

	class EOECLJCFFEB : public ::KNFCEJEJINK
	{
	public:
		::RPG::Client::Prop::DuelChimeraProxy* HKJLKMCDMGB; // 0x18
		::RPG::Client::Prop::DuelChimeraProxy* IBLBKLNHKLL; // 0x20
		::DLECIKAMKEG* EEFMDEHLLFI; // 0x28
		::DADDJLABCNM* MKKLHFCCCNF; // 0x30
		::System::Single FOMCKBAHCFM; // 0x38
		::UnityEngine::Quaternion NGIMALNHLNI; // 0x3C
		::UnityEngine::Vector3 JNFHAIACECG; // 0x4C
		::System::Single MFLNKDOADDG; // 0x58
		::UnityEngine::Quaternion OKBPGPNJMFL; // 0x5C
		::UnityEngine::Vector3 KGMNHAFNOHK; // 0x6C
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
