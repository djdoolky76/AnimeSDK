#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KAKCDBGNJKN.h"
class FCOEMCEDLNL;
class GOMPCGKKCJE;
namespace System { class String; }

#define GOMPCGKKCJE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CE75D70)
#define GOMPCGKKCJE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CE75DB0)
#define GOMPCGKKCJE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CE75CF0)

	class GOMPCGKKCJE : public ::KAKCDBGNJKN
	{
	public:
		::System::String* BDACPPLKLGL; // 0x20
		::System::String* LIBDKHPBKDA; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOMPCGKKCJE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::GOMPCGKKCJE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GOMPCGKKCJE*))((::PBYTE)hIl2Cpp + GOMPCGKKCJE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::GOMPCGKKCJE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GOMPCGKKCJE*))((::PBYTE)hIl2Cpp + GOMPCGKKCJE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
