#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
namespace System { class Object; }

#define FGMIKJHFHIG_AAGAJHCNJMJ_OFFSET UNITYSDK_OFFSET(0x1576AF20)
#define FGMIKJHFHIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1576B450)
#define FGMIKJHFHIG_DBMEJIGJMMJ_OFFSET UNITYSDK_OFFSET(0x1576B2D0)
#define FGMIKJHFHIG_DFDBNKCJIDC_OFFSET UNITYSDK_OFFSET(0x1576AE10)
#define FGMIKJHFHIG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1576B050)
#define FGMIKJHFHIG_HHCPELIMDLB_OFFSET UNITYSDK_OFFSET(0x1576B170)
#define FGMIKJHFHIG_ONMODELROOTLOADED_OFFSET UNITYSDK_OFFSET(0x1576AED0)
#define FGMIKJHFHIG_ONMODELROOTUNLOADED_OFFSET UNITYSDK_OFFSET(0x1576B010)
#define FGMIKJHFHIG_RESETTODEFAULT_OFFSET UNITYSDK_OFFSET(0x1576B410)

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
