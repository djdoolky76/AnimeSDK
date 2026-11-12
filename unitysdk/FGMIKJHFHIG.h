#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
namespace System { class Object; }

#define FGMIKJHFHIG_AAGAJHCNJMJ_OFFSET UNITYSDK_OFFSET(0x1668B720)
#define FGMIKJHFHIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1668BC50)
#define FGMIKJHFHIG_DBMEJIGJMMJ_OFFSET UNITYSDK_OFFSET(0x1668BAD0)
#define FGMIKJHFHIG_DFDBNKCJIDC_OFFSET UNITYSDK_OFFSET(0x1668B610)
#define FGMIKJHFHIG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1668B850)
#define FGMIKJHFHIG_HHCPELIMDLB_OFFSET UNITYSDK_OFFSET(0x1668B970)
#define FGMIKJHFHIG_ONMODELROOTLOADED_OFFSET UNITYSDK_OFFSET(0x1668B6D0)
#define FGMIKJHFHIG_ONMODELROOTUNLOADED_OFFSET UNITYSDK_OFFSET(0x1668B810)
#define FGMIKJHFHIG_RESETTODEFAULT_OFFSET UNITYSDK_OFFSET(0x1668BC10)

inline static constexpr unsigned int FGMIKJHFHIG_TypeDefinitionIndex = 75442;

	class FGMIKJHFHIG : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGMIKJHFHIG_CTOR_OFFSET))(this);
		}

		::System::Void DFDBNKCJIDC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGMIKJHFHIG_DFDBNKCJIDC_OFFSET))(this);
		}

		::System::Void OnModelRootLoaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGMIKJHFHIG_ONMODELROOTLOADED_OFFSET))(this);
		}

		::System::Void OnModelRootUnloaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGMIKJHFHIG_ONMODELROOTUNLOADED_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGMIKJHFHIG_DISPOSE_OFFSET))(this);
		}

		::System::Void AAGAJHCNJMJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FGMIKJHFHIG_AAGAJHCNJMJ_OFFSET))(this, a1);
		}

		::System::Void DBMEJIGJMMJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGMIKJHFHIG_DBMEJIGJMMJ_OFFSET))(this);
		}

		::System::Void HHCPELIMDLB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGMIKJHFHIG_HHCPELIMDLB_OFFSET))(this);
		}

		::System::Void ResetToDefault()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGMIKJHFHIG_RESETTODEFAULT_OFFSET))(this);
		}

	};
