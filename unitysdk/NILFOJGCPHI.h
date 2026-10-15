#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"
namespace RPG::Client { class TAComponetPositonPasterMonoPlugin; }

#define NILFOJGCPHI_CGEJMGFOLMP_OFFSET UNITYSDK_OFFSET(0xBBF8F70)
#define NILFOJGCPHI_CTOR_OFFSET UNITYSDK_OFFSET(0xBBF9170)
#define NILFOJGCPHI_GJDAFMODKLO_OFFSET UNITYSDK_OFFSET(0xBBF8040)
#define NILFOJGCPHI_JJINILFDJOF_OFFSET UNITYSDK_OFFSET(0xBBF90F0)
#define NILFOJGCPHI_JPKHCNDFAEL_OFFSET UNITYSDK_OFFSET(0xBBF8FD0)
#define NILFOJGCPHI_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xBBF7B20)
#define NILFOJGCPHI_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0xBBF8F10)
#define NILFOJGCPHI_OIBPOPCFDHA_OFFSET UNITYSDK_OFFSET(0xBBF9030)
#define NILFOJGCPHI_OPAHJFNDBBN_OFFSET UNITYSDK_OFFSET(0xBBF7BC0)
#define NILFOJGCPHI_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0xBBF8EB0)
#define NILFOJGCPHI_TICK_OFFSET UNITYSDK_OFFSET(0xBBF9090)

	class NILFOJGCPHI : public ::RPG::Client::TABehaviorBase
	{
	public:
		::UnityEngine::Vector3 JOHNHJNDNOP; // 0x38
		::System::Single MMNJLJDDNJP; // 0x44
		::UnityEngine::Vector3 GDCAOIKNJND; // 0x48
		::UnityEngine::Vector3 NFBLJCEJGDL; // 0x54
		::System::Int32 DEBBGMNKOHJ; // 0x60
		::UnityEngine::Vector4 NHDIELLPBLD; // 0x64
		::System::Int32 KDOFAOCGKJH; // 0x74
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NILFOJGCPHI_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NILFOJGCPHI_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void PCNAKDOLCCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NILFOJGCPHI_PCNAKDOLCCD_OFFSET))(this);
		}

		::System::Void MFCDKJIHDEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NILFOJGCPHI_MFCDKJIHDEH_OFFSET))(this);
		}

		::System::Void CGEJMGFOLMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NILFOJGCPHI_CGEJMGFOLMP_OFFSET))(this);
		}

		::System::Void JPKHCNDFAEL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NILFOJGCPHI_JPKHCNDFAEL_OFFSET))(this);
		}

		::System::Void OIBPOPCFDHA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NILFOJGCPHI_OIBPOPCFDHA_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NILFOJGCPHI_TICK_OFFSET))(this, a1);
		}

		::System::Void OPAHJFNDBBN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NILFOJGCPHI_OPAHJFNDBBN_OFFSET))(this);
		}

		::System::Void GJDAFMODKLO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NILFOJGCPHI_GJDAFMODKLO_OFFSET))(this);
		}

		::RPG::Client::TAComponetPositonPasterMonoPlugin* JJINILFDJOF()
		{
			return ((::RPG::Client::TAComponetPositonPasterMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + NILFOJGCPHI_JJINILFDJOF_OFFSET))(this);
		}

	};
