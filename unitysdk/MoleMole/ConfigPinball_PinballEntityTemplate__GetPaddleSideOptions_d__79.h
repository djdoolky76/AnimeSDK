#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KFDJGBJKGPL.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define MOLEMOLE_CONFIGPINBALL_PINBALLENTITYTEMPLATE__GETPADDLESIDEOPTIONS_D__79_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x142CE720)
#define MOLEMOLE_CONFIGPINBALL_PINBALLENTITYTEMPLATE__GETPADDLESIDEOPTIONS_D__79_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_MOLEMOLE_BATTLE_PINBALLPADDLESIDE__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x142CE800)
#define MOLEMOLE_CONFIGPINBALL_PINBALLENTITYTEMPLATE__GETPADDLESIDEOPTIONS_D__79_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_MOLEMOLE_BATTLE_PINBALLPADDLESIDE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x142CE750)
#define MOLEMOLE_CONFIGPINBALL_PINBALLENTITYTEMPLATE__GETPADDLESIDEOPTIONS_D__79_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x142CE870)
#define MOLEMOLE_CONFIGPINBALL_PINBALLENTITYTEMPLATE__GETPADDLESIDEOPTIONS_D__79_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x142CE7B0)
#define MOLEMOLE_CONFIGPINBALL_PINBALLENTITYTEMPLATE__GETPADDLESIDEOPTIONS_D__79_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x142CE760)
#define MOLEMOLE_CONFIGPINBALL_PINBALLENTITYTEMPLATE__GETPADDLESIDEOPTIONS_D__79_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x142CE710)
#define MOLEMOLE_CONFIGPINBALL_PINBALLENTITYTEMPLATE__GETPADDLESIDEOPTIONS_D__79__CTOR_OFFSET UNITYSDK_OFFSET(0x142CE6F0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigPinball_PinballEntityTemplate__GetPaddleSideOptions_d__79_TypeDefinitionIndex = 92188;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30, typename T31, typename T32, typename T33, typename T34, typename T35, typename T36, typename T37, typename T38, typename T39, typename T40, typename T41, typename T42, typename T43, typename T44, typename T45, typename T46, typename T47, typename T48, typename T49, typename T50, typename T51, typename T52, typename T53, typename T54, typename T55, typename T56, typename T57, typename T58, typename T59, typename T60, typename T61, typename T62, typename T63, typename T64, typename T65, typename T66, typename T67, typename T68, typename T69, typename T70, typename T71, typename T72, typename T73, typename T74, typename T75, typename T76, typename T77, typename T78, typename T79>
	class ConfigPinball_PinballEntityTemplate__GetPaddleSideOptions_d__79 : public ::System::Object
	{
	public:
		::KFDJGBJKGPL __2__current; // 0x10
		::System::Int32 __l__initialThreadId; // 0x14
		::System::Int32 __1__state; // 0x18

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGPINBALL_PINBALLENTITYTEMPLATE__GETPADDLESIDEOPTIONS_D__79__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGPINBALL_PINBALLENTITYTEMPLATE__GETPADDLESIDEOPTIONS_D__79_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGPINBALL_PINBALLENTITYTEMPLATE__GETPADDLESIDEOPTIONS_D__79_MOVENEXT_OFFSET))(this);
		}

		::KFDJGBJKGPL System_Collections_Generic_IEnumerator_MoleMole_Battle_PinballPaddleSide__get_Current()
		{
			return ((::KFDJGBJKGPL(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGPINBALL_PINBALLENTITYTEMPLATE__GETPADDLESIDEOPTIONS_D__79_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_MOLEMOLE_BATTLE_PINBALLPADDLESIDE__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGPINBALL_PINBALLENTITYTEMPLATE__GETPADDLESIDEOPTIONS_D__79_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGPINBALL_PINBALLENTITYTEMPLATE__GETPADDLESIDEOPTIONS_D__79_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::KFDJGBJKGPL>* System_Collections_Generic_IEnumerable_MoleMole_Battle_PinballPaddleSide__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::KFDJGBJKGPL>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGPINBALL_PINBALLENTITYTEMPLATE__GETPADDLESIDEOPTIONS_D__79_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_MOLEMOLE_BATTLE_PINBALLPADDLESIDE__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGPINBALL_PINBALLENTITYTEMPLATE__GETPADDLESIDEOPTIONS_D__79_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
