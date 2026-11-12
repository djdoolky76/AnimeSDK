#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FNIDIOCNBBI.h"
class PKDBABGBLCA;
namespace RPG::Client { class MatchThreeBoard; }

#define PKDBABGBLCA_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xCBDC3F0)
#define PKDBABGBLCA_CTOR_OFFSET UNITYSDK_OFFSET(0xCBDC6E0)
#define PKDBABGBLCA_ONCLEAR_OFFSET UNITYSDK_OFFSET(0xCBDC6A0)
#define PKDBABGBLCA_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xCBDC470)
#define PKDBABGBLCA__ONEXECUTE_B__1_0_OFFSET UNITYSDK_OFFSET(0xCBDC6F0)

inline static constexpr unsigned int PKDBABGBLCA_TypeDefinitionIndex = 67824;

	class PKDBABGBLCA : public ::FNIDIOCNBBI
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKDBABGBLCA_CTOR_OFFSET))(this);
		}

		static ::PKDBABGBLCA* BPLPBPMEODA(::RPG::Client::MatchThreeBoard* a1)
		{
			return ((::PKDBABGBLCA*(*)(::RPG::Client::MatchThreeBoard*))((::PBYTE)hIl2Cpp + PKDBABGBLCA_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKDBABGBLCA_ONEXECUTE_OFFSET))(this);
		}

		::System::Void OnClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKDBABGBLCA_ONCLEAR_OFFSET))(this);
		}

		::System::Void _OnExecute_b__1_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKDBABGBLCA__ONEXECUTE_B__1_0_OFFSET))(this);
		}

	};
