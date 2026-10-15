#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DDENCEMCKLN;
namespace System { class String; }

#define OOIKBOEFNFN_FJBIOOBJGGG_OFFSET UNITYSDK_OFFSET(0x1C4CC0E0)
#define OOIKBOEFNFN_IILBIBBMGEP_OFFSET UNITYSDK_OFFSET(0x1C4CFA20)
#define OOIKBOEFNFN_MONGBEMJDBO_OFFSET UNITYSDK_OFFSET(0x1C4CC070)

inline static constexpr unsigned int OOIKBOEFNFN_TypeDefinitionIndex = 41428;

	class OOIKBOEFNFN : public ::System::Object
	{
	public:
		// static const ::System::Object NIKDLGAMAAC; // 0x0
		// static const ::System::Object JKOPJEDPHGL; // 0x0
		static ::System::String* FJBIOOBJGGG(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + OOIKBOEFNFN_FJBIOOBJGGG_OFFSET))(a1);
		}

		static ::System::String* MONGBEMJDBO(::DDENCEMCKLN* a1)
		{
			return ((::System::String*(*)(::DDENCEMCKLN*))((::PBYTE)hIl2Cpp + OOIKBOEFNFN_MONGBEMJDBO_OFFSET))(a1);
		}

		static ::System::Void IILBIBBMGEP(::DDENCEMCKLN* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::DDENCEMCKLN*, ::System::String*))((::PBYTE)hIl2Cpp + OOIKBOEFNFN_IILBIBBMGEP_OFFSET))(a1, a2);
		}

	};
