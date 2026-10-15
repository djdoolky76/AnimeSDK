#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class OCCEBMOBBBM;
namespace System { class String; }

#define OCCEBMOBBBM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D250FD0)
#define OCCEBMOBBBM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D250D50)

	class OCCEBMOBBBM : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* AKOCMKFLEBF; // 0x10
		::System::String* OLOIFNNLKJP; // 0x18
		::System::String* OPBOFEBHDCM; // 0x20
		::RPG::Client::TextID OENAMINOLLF; // 0x28
		::System::UInt32 HDDIKPLHHPP; // 0x38
		::System::UInt32 BEOFPCAACEP; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCCEBMOBBBM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::OCCEBMOBBBM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::OCCEBMOBBBM*))((::PBYTE)hIl2Cpp + OCCEBMOBBBM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
