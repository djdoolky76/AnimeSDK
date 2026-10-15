#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
class PELBIOHDLCJ;
class WaveSimPanel;
namespace RPG::Client::DynamicFloatingObject { class DynamicFloatingManagerMono; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define PELBIOHDLCJ_ALPKLNGECFF_OFFSET UNITYSDK_OFFSET(0xC1EBE90)
#define PELBIOHDLCJ_CGEJMGFOLMP_OFFSET UNITYSDK_OFFSET(0xC1EBBA0)
#define PELBIOHDLCJ_CTOR_OFFSET UNITYSDK_OFFSET(0xC1EBF30)
#define PELBIOHDLCJ_GGBLHEHJBDO_OFFSET UNITYSDK_OFFSET(0xC1EB800)
#define PELBIOHDLCJ_HBCCLFGLMFG_OFFSET UNITYSDK_OFFSET(0xC1EBDF0)
#define PELBIOHDLCJ_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xC1EB810)
#define PELBIOHDLCJ_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0xC1EBA20)
#define PELBIOHDLCJ_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0xC1EB9C0)
#define PELBIOHDLCJ_TICK_OFFSET UNITYSDK_OFFSET(0xC1EBD20)

inline static constexpr unsigned int PELBIOHDLCJ_TypeDefinitionIndex = 73571;

	class PELBIOHDLCJ : public ::RPG::Client::TABehaviorBase
	{
	public:
		::RPG::Client::DynamicFloatingObject::DynamicFloatingManagerMono* DILGJEAEKGL; // 0x38
		::WaveSimPanel* AOOPKMPKDDF; // 0x40
		::System::Boolean DCAMGHCDDHE; // 0x48
		static ::PELBIOHDLCJ** StaticGet_EMLNOINPICJ()
		{
			return (::PELBIOHDLCJ**)UnitySDK::FromName("", "PELBIOHDLCJ")->GetStaticField(0x6F600);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PELBIOHDLCJ_CTOR_OFFSET))(this);
		}

		static ::PELBIOHDLCJ* GGBLHEHJBDO()
		{
			return ((::PELBIOHDLCJ*(*)())((::PBYTE)hIl2Cpp + PELBIOHDLCJ_GGBLHEHJBDO_OFFSET))();
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PELBIOHDLCJ_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void PCNAKDOLCCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PELBIOHDLCJ_PCNAKDOLCCD_OFFSET))(this);
		}

		::System::Void MFCDKJIHDEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PELBIOHDLCJ_MFCDKJIHDEH_OFFSET))(this);
		}

		::System::Void CGEJMGFOLMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PELBIOHDLCJ_CGEJMGFOLMP_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PELBIOHDLCJ_TICK_OFFSET))(this, a1);
		}

		::System::Void HBCCLFGLMFG(::System::Collections::Generic::List_1<::UnityEngine::Transform*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Transform*>*))((::PBYTE)hIl2Cpp + PELBIOHDLCJ_HBCCLFGLMFG_OFFSET))(this, a1);
		}

		::System::Void ALPKLNGECFF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PELBIOHDLCJ_ALPKLNGECFF_OFFSET))(this);
		}

	};
