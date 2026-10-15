#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class LPKGCDELJML;
namespace System { class String; }

#define LPKGCDELJML_CTOR_OFFSET UNITYSDK_OFFSET(0x1D12A930)
#define LPKGCDELJML_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D12A730)

	class LPKGCDELJML : public ::System::Object
	{
	public:
		::System::String* BDACPPLKLGL; // 0x10
		::System::String* OLOIFNNLKJP; // 0x18
		::RPG::Client::TextID OENAMINOLLF; // 0x20
		::System::UInt32 KJCGGEPHCMC; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPKGCDELJML_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::LPKGCDELJML* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LPKGCDELJML*))((::PBYTE)hIl2Cpp + LPKGCDELJML_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
