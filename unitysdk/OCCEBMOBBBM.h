#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class OCCEBMOBBBM;
namespace System { class String; }

#define OCCEBMOBBBM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D2233B0)
#define OCCEBMOBBBM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D223130)

inline static constexpr unsigned int OCCEBMOBBBM_TypeDefinitionIndex = 14409;

	class OCCEBMOBBBM : public ::System::Object
	{
	public:
		::System::String* OLOIFNNLKJP; // 0x10
		::System::String* OPBOFEBHDCM; // 0x18
		::Il2CppArray<::System::UInt32>* AKOCMKFLEBF; // 0x20
		::System::UInt32 HDDIKPLHHPP; // 0x28
		::System::UInt32 BEOFPCAACEP; // 0x2C
		::RPG::Client::TextID OENAMINOLLF; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCCEBMOBBBM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::OCCEBMOBBBM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::OCCEBMOBBBM*))((::PBYTE)hIl2Cpp + OCCEBMOBBBM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
