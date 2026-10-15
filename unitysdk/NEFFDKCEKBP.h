#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KIDPCOMKMKJ.h"
#include "unitysdk/RPG/Client/LittleGame/TRFOperate.h"

#define NEFFDKCEKBP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C927780)
#define NEFFDKCEKBP_CTOR_OFFSET UNITYSDK_OFFSET(0x1C9274D0)
#define NEFFDKCEKBP_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0x1C9274E0)

inline static constexpr unsigned int NEFFDKCEKBP_TypeDefinitionIndex = 42479;

	class NEFFDKCEKBP : public ::KIDPCOMKMKJ
	{
	public:
		::RPG::Client::LittleGame::TRFOperate JELPBNHCPCO; // 0x18
		static ::Il2CppArray<::System::Single>** StaticGet_CPHDAELGKIA()
		{
			return (::Il2CppArray<::System::Single>**)UnitySDK::FromName("", "NEFFDKCEKBP")->GetStaticField(0x53700);
		}

		::System::Void _ctor(::RPG::Client::LittleGame::TRFOperate a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::TRFOperate))((::PBYTE)hIl2Cpp + NEFFDKCEKBP_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEFFDKCEKBP_CCTOR_OFFSET))();
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEFFDKCEKBP_NPAFMEBNFOB_OFFSET))(this);
		}

	};
