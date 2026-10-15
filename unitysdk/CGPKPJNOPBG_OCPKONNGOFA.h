#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AJHEPIMIGBG;
class LPNPMKNMMOK;
class PGOOHIHKHNJ;

#define CGPKPJNOPBG_OCPKONNGOFA_CLEAR_OFFSET UNITYSDK_OFFSET(0xCC895C0)
#define CGPKPJNOPBG_OCPKONNGOFA_CTOR_OFFSET UNITYSDK_OFFSET(0xCC89640)

inline static constexpr unsigned int CGPKPJNOPBG_OCPKONNGOFA_TypeDefinitionIndex = 56047;

	class CGPKPJNOPBG_OCPKONNGOFA : public ::System::Object
	{
	public:
		::PGOOHIHKHNJ* FOOCPPAJOED; // 0x10
		::LPNPMKNMMOK* CKOLMLLMABE; // 0x18
		::AJHEPIMIGBG* BJLFPOKNIEL; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGPKPJNOPBG_OCPKONNGOFA_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGPKPJNOPBG_OCPKONNGOFA_CLEAR_OFFSET))(this);
		}

	};
