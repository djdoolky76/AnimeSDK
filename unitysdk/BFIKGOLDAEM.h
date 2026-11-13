#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector3.h"
class DPFMCCBJGJC;
class FOOIINCDBFA;
class MKLDKDBBDKB;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BFIKGOLDAEM_ANHMDDAGLAF_OFFSET UNITYSDK_OFFSET(0x1A95A170)
#define BFIKGOLDAEM_BHDOOJEKHPE_OFFSET UNITYSDK_OFFSET(0x1A959C80)
#define BFIKGOLDAEM_CHEFCNLOGDI_OFFSET UNITYSDK_OFFSET(0x1A95A080)
#define BFIKGOLDAEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1A959700)
#define BFIKGOLDAEM_DELHPFKKBMP_OFFSET UNITYSDK_OFFSET(0x1A959B00)
#define BFIKGOLDAEM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A959A60)
#define BFIKGOLDAEM_IAAHNNPLPIJ_OFFSET UNITYSDK_OFFSET(0x1A95A3F0)
#define BFIKGOLDAEM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1A959780)
#define BFIKGOLDAEM_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1A959AB0)
#define BFIKGOLDAEM_TICK_OFFSET UNITYSDK_OFFSET(0x1A9598E0)

inline static constexpr unsigned int BFIKGOLDAEM_TypeDefinitionIndex = 53335;

	class BFIKGOLDAEM
	{
	public:
		::FOOIINCDBFA* AGJDABDMMEH; // 0x28
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* IFPFGGKCIKD; // 0x30
		::System::Single OMICMGNDHCF; // 0x38
		::System::Boolean DKBEJGMDLLJ; // 0x3C
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::DPFMCCBJGJC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::DPFMCCBJGJC*))((::PBYTE)hIl2Cpp + BFIKGOLDAEM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFIKGOLDAEM_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFIKGOLDAEM_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFIKGOLDAEM_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BFIKGOLDAEM_TICK_OFFSET))(this, a1);
		}

		::System::Void DELHPFKKBMP(::MKLDKDBBDKB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MKLDKDBBDKB*))((::PBYTE)hIl2Cpp + BFIKGOLDAEM_DELHPFKKBMP_OFFSET))(this, a1);
		}

		::System::Void BHDOOJEKHPE(::RPG::GameCore::GameEntity* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Single))((::PBYTE)hIl2Cpp + BFIKGOLDAEM_BHDOOJEKHPE_OFFSET))(this, a1, a2);
		}

		::System::Boolean CHEFCNLOGDI(::RPG::GameCore::GameEntity* a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + BFIKGOLDAEM_CHEFCNLOGDI_OFFSET))(this, a1, a2, a3);
		}

		::System::Void IAAHNNPLPIJ(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BFIKGOLDAEM_IAAHNNPLPIJ_OFFSET))(this, a1);
		}

		::System::Boolean ANHMDDAGLAF(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BFIKGOLDAEM_ANHMDDAGLAF_OFFSET))(this, a1, a2);
		}

	};
