#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BBHJHADOEID.h"
class EKFMIDBJDIA;
namespace RPG::GameCore { class PhotoGraphAimContainerConfig; }
namespace RPG::GameCore { class TaskContext; }

#define NGDAKPKPOPE_BFALCBKCFFF_OFFSET UNITYSDK_OFFSET(0xBBA2990)
#define NGDAKPKPOPE_CTOR_OFFSET UNITYSDK_OFFSET(0xBBA2930)
#define NGDAKPKPOPE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBBA2C50)
#define NGDAKPKPOPE_GNBPOHIGELI_OFFSET UNITYSDK_OFFSET(0xBBA2B90)

inline static constexpr unsigned int NGDAKPKPOPE_TypeDefinitionIndex = 69436;

	class NGDAKPKPOPE : public ::BBHJHADOEID
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGDAKPKPOPE_CTOR_OFFSET))(this);
		}

		::System::Void BFALCBKCFFF(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PhotoGraphAimContainerConfig* a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PhotoGraphAimContainerConfig*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NGDAKPKPOPE_BFALCBKCFFF_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void GNBPOHIGELI(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + NGDAKPKPOPE_GNBPOHIGELI_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGDAKPKPOPE_DISPOSE_OFFSET))(this);
		}

	};
