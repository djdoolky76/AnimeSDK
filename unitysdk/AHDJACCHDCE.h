#pragma once
#include "unitysdk/unitysdk.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define AHDJACCHDCE_CTOR_OFFSET UNITYSDK_OFFSET(0x3E41390)
#define AHDJACCHDCE_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x3E413A0)
#define AHDJACCHDCE_LDAMHBBILAD_OFFSET UNITYSDK_OFFSET(0x7EEC20)
#define AHDJACCHDCE_LOPMAMIJKDA_OFFSET UNITYSDK_OFFSET(0x3E413B0)

inline static constexpr unsigned int AHDJACCHDCE_TypeDefinitionIndex = 55937;

	struct alignas(8) AHDJACCHDCE
	{
		::RPG::GameCore::TaskContext* GPKCGOLOJKC; // 0x10
		::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::TaskConfig*>* LJDEEMCDIHJ; // 0x18
		::Il2CppArray<::KFELGAIGHAP*>* LMGEPKFLEJG; // 0x20
		::System::Int32 GLEMFGJBPKH; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::TaskConfig*>* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::TaskConfig*>*, ::System::Int32))((::PBYTE)hIl2Cpp + AHDJACCHDCE_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHDJACCHDCE_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Boolean LDAMHBBILAD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AHDJACCHDCE_LDAMHBBILAD_OFFSET))(this);
		}

		::System::Boolean LOPMAMIJKDA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AHDJACCHDCE_LOPMAMIJKDA_OFFSET))(this);
		}

	};
