#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
class CMLPCCDBGKD;
class FCOEMCEDLNL;
namespace System { class String; }

#define CMLPCCDBGKD_CTOR_OFFSET UNITYSDK_OFFSET(0x1DCB0C40)
#define CMLPCCDBGKD_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DCB0C50)
#define CMLPCCDBGKD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DCB0C00)

	class CMLPCCDBGKD : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::String* PKGIGDIFCOC; // 0x18
		::System::String* DHPNGKCIHJM; // 0x20
		::System::Boolean INAFNJMLPFA; // 0x28
		::System::Boolean OLHGCELNFKN; // 0x29
		::System::Boolean OCPPAAFCGBD; // 0x2A
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMLPCCDBGKD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::CMLPCCDBGKD* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::CMLPCCDBGKD*))((::PBYTE)hIl2Cpp + CMLPCCDBGKD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::CMLPCCDBGKD* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::CMLPCCDBGKD*))((::PBYTE)hIl2Cpp + CMLPCCDBGKD_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
