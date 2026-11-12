#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AJHEPIMIGBG;
class LPNPMKNMMOK;
class PGOOHIHKHNJ;

#define CGPKPJNOPBG_OCPKONNGOFA_CLEAR_OFFSET UNITYSDK_OFFSET(0xD63C5F0)
#define CGPKPJNOPBG_OCPKONNGOFA_CTOR_OFFSET UNITYSDK_OFFSET(0xD63C670)

inline static constexpr unsigned int CGPKPJNOPBG_OCPKONNGOFA_TypeDefinitionIndex = 57259;

	class CGPKPJNOPBG_OCPKONNGOFA : public ::System::Object
	{
	public:
		::LPNPMKNMMOK* CKOLMLLMABE; // 0x10
		::AJHEPIMIGBG* BJLFPOKNIEL; // 0x18
		::PGOOHIHKHNJ* FOOCPPAJOED; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGPKPJNOPBG_OCPKONNGOFA_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGPKPJNOPBG_OCPKONNGOFA_CLEAR_OFFSET))(this);
		}

	};
