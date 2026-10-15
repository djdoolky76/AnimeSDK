#pragma once
#include "unitysdk/unitysdk.h"
class HCPNPACKLGI;
class IFBFJDCECML;
class PBGNKMMDBGD;
namespace RPG::GameCore { class CakeRaceBaseTargetSelectorConfig; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define HCPNPACKLGI_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1C6363D0)
#define HCPNPACKLGI_CTOR_OFFSET UNITYSDK_OFFSET(0x1C636470)
#define HCPNPACKLGI_IMBNGHDBDLJ_OFFSET UNITYSDK_OFFSET(0x1C6364A0)

inline static constexpr unsigned int HCPNPACKLGI_TypeDefinitionIndex = 37435;

	class HCPNPACKLGI
	{
	public:
		::System::Void _ctor(::System::Int32 a1, ::RPG::GameCore::CakeRaceBaseTargetSelectorConfig* a2, ::PBGNKMMDBGD* a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::CakeRaceBaseTargetSelectorConfig*, ::PBGNKMMDBGD*, ::System::Int32))((::PBYTE)hIl2Cpp + HCPNPACKLGI_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::HCPNPACKLGI* BPLPBPMEODA(::System::Int32 a1, ::RPG::GameCore::CakeRaceBaseTargetSelectorConfig* a2, ::PBGNKMMDBGD* a3, ::System::Int32 a4)
		{
			return ((::HCPNPACKLGI*(*)(::System::Int32, ::RPG::GameCore::CakeRaceBaseTargetSelectorConfig*, ::PBGNKMMDBGD*, ::System::Int32))((::PBYTE)hIl2Cpp + HCPNPACKLGI_BPLPBPMEODA_OFFSET))(a1, a2, a3, a4);
		}

		::System::Collections::Generic::IReadOnlyList_1<::IFBFJDCECML*>* IMBNGHDBDLJ()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::IFBFJDCECML*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCPNPACKLGI_IMBNGHDBDLJ_OFFSET))(this);
		}

	};
