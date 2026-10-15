#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LimaoNewsSwitchUI3DLimaoType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class JLGNGMLHKHJ;

#define JLGNGMLHKHJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1D046050)
#define JLGNGMLHKHJ_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D046060)
#define JLGNGMLHKHJ_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D046020)

	class JLGNGMLHKHJ : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::System::UInt32>* EIAFAKDMGBO; // 0x18
		::Il2CppArray<::System::UInt32>* JBDKDPNPCDI; // 0x20
		::Il2CppArray<::System::UInt32>* AFKFBFDBJCM; // 0x28
		::System::Boolean JCJDLNJONMO; // 0x30
		::System::Byte _padding0[0x3];
		::RPG::Client::LimaoNewsSwitchUI3DLimaoType DKCCEPAGPDB; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLGNGMLHKHJ_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::JLGNGMLHKHJ* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::JLGNGMLHKHJ*))((::PBYTE)hIl2Cpp + JLGNGMLHKHJ_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::JLGNGMLHKHJ* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::JLGNGMLHKHJ*))((::PBYTE)hIl2Cpp + JLGNGMLHKHJ_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
