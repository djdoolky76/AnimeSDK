#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JHFCIOJIONP.h"
#include "unitysdk/RPG/GameCore/DeferDeleteStatus.h"
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define DEJDBBDDNEH_CTOR_OFFSET UNITYSDK_OFFSET(0xF170A30)
#define DEJDBBDDNEH_DLAILGNMFGI_OFFSET UNITYSDK_OFFSET(0xF170300)
#define DEJDBBDDNEH_DOGONNEEEOI_OFFSET UNITYSDK_OFFSET(0xF170060)
#define DEJDBBDDNEH_GFGAHNGLIJK_OFFSET UNITYSDK_OFFSET(0xF170810)
#define DEJDBBDDNEH_HDNHBCHJMLN_OFFSET UNITYSDK_OFFSET(0xF170400)
#define DEJDBBDDNEH_JBENBABCOGB_OFFSET UNITYSDK_OFFSET(0xF1700E0)
#define DEJDBBDDNEH_OCNHICIMMKN_OFFSET UNITYSDK_OFFSET(0xF170000)
#define DEJDBBDDNEH_OIDNEGMICEK_OFFSET UNITYSDK_OFFSET(0xF16FFE0)
#define DEJDBBDDNEH_PIEONCFHBFI_OFFSET UNITYSDK_OFFSET(0xF170860)
#define DEJDBBDDNEH_TOSTRING_OFFSET UNITYSDK_OFFSET(0xF170170)

inline static constexpr unsigned int DEJDBBDDNEH_TypeDefinitionIndex = 59050;

	class DEJDBBDDNEH : public ::JHFCIOJIONP
	{
	public:
		::System::Boolean LEAEOJCKEBK; // 0x20
		::System::Boolean DPFBKBKFIBM; // 0x21
		::System::Boolean GAAMOPAIMPE; // 0x22
		::System::Boolean HCDLBIABKNE; // 0x23
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEJDBBDDNEH_CTOR_OFFSET))(this);
		}

		::System::Boolean OIDNEGMICEK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DEJDBBDDNEH_OIDNEGMICEK_OFFSET))(this);
		}

		::System::Boolean OCNHICIMMKN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DEJDBBDDNEH_OCNHICIMMKN_OFFSET))(this);
		}

		::System::Boolean DOGONNEEEOI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DEJDBBDDNEH_DOGONNEEEOI_OFFSET))(this);
		}

		::RPG::GameCore::DeferDeleteStatus JBENBABCOGB()
		{
			return ((::RPG::GameCore::DeferDeleteStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + DEJDBBDDNEH_JBENBABCOGB_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEJDBBDDNEH_TOSTRING_OFFSET))(this);
		}

		::System::Void DLAILGNMFGI(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + DEJDBBDDNEH_DLAILGNMFGI_OFFSET))(this, a1, a2);
		}

		::System::Void HDNHBCHJMLN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DEJDBBDDNEH_HDNHBCHJMLN_OFFSET))(this, a1);
		}

		::System::Void GFGAHNGLIJK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEJDBBDDNEH_GFGAHNGLIJK_OFFSET))(this);
		}

		::System::Boolean PIEONCFHBFI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DEJDBBDDNEH_PIEONCFHBFI_OFFSET))(this);
		}

	};
