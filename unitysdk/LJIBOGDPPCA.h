#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class LJIBOGDPPCA;
namespace System { class String; }

#define LJIBOGDPPCA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D101910)
#define LJIBOGDPPCA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D1017A0)

inline static constexpr unsigned int LJIBOGDPPCA_TypeDefinitionIndex = 12010;

	class LJIBOGDPPCA : public ::System::Object
	{
	public:
		::System::String* FBKAMIHGLFK; // 0x10
		::System::UInt32 OHKMNJCINAE; // 0x18
		::System::UInt32 PHFMCACHFIJ; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJIBOGDPPCA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::LJIBOGDPPCA* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LJIBOGDPPCA*))((::PBYTE)hIl2Cpp + LJIBOGDPPCA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
