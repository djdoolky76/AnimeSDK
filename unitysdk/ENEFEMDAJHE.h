#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LHJPMDPJPEC.h"
class FBDPOPBPHKP;
class JMOHKKCNCMA;
namespace RPG::GameCore { class MarbleBySealCount; }

#define ENEFEMDAJHE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA615D0)
#define ENEFEMDAJHE_HDGEJBEENPD_OFFSET UNITYSDK_OFFSET(0x1CA61750)
#define ENEFEMDAJHE_KHNFOOKHOJF_OFFSET UNITYSDK_OFFSET(0x1CA615F0)

inline static constexpr unsigned int ENEFEMDAJHE_TypeDefinitionIndex = 43152;

	class ENEFEMDAJHE : public ::LHJPMDPJPEC
	{
	public:
		::RPG::GameCore::MarbleBySealCount* IGHAHBNLIJA; // 0x30
		::System::Void _ctor(::RPG::GameCore::MarbleBySealCount* a1, ::JMOHKKCNCMA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleBySealCount*, ::JMOHKKCNCMA*))((::PBYTE)hIl2Cpp + ENEFEMDAJHE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean KHNFOOKHOJF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ENEFEMDAJHE_KHNFOOKHOJF_OFFSET))(this);
		}

		::System::Int32 HDGEJBEENPD(::FBDPOPBPHKP* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::FBDPOPBPHKP*))((::PBYTE)hIl2Cpp + ENEFEMDAJHE_HDGEJBEENPD_OFFSET))(this, a1);
		}

	};
