#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KMOMKAJJCKC_EIBKOHANOHD;
namespace Cinemachine { class CinemachineFreeLook; }
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace UnityEngine { class Animation; }

#define KMOMKAJJCKC_EIBKOHANOHD_CTOR_OFFSET UNITYSDK_OFFSET(0xB5737C0)
#define KMOMKAJJCKC_EIBKOHANOHD_GET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0xB5737A0)
#define KMOMKAJJCKC_EIBKOHANOHD_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xB56F8C0)
#define KMOMKAJJCKC_EIBKOHANOHD_HJIPBDNPKPP_OFFSET UNITYSDK_OFFSET(0xB573E70)
#define KMOMKAJJCKC_EIBKOHANOHD_HLLJJDJIDHO_OFFSET UNITYSDK_OFFSET(0xB574070)
#define KMOMKAJJCKC_EIBKOHANOHD_JKLFOPBEHFI_OFFSET UNITYSDK_OFFSET(0xB5741C0)
#define KMOMKAJJCKC_EIBKOHANOHD_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xB571E00)
#define KMOMKAJJCKC_EIBKOHANOHD_LHCEBEPDAPL_OFFSET UNITYSDK_OFFSET(0xB5738C0)
#define KMOMKAJJCKC_EIBKOHANOHD_LHLALAKKKKJ_OFFSET UNITYSDK_OFFSET(0xB571C80)
#define KMOMKAJJCKC_EIBKOHANOHD_NFFONAFOPLA_OFFSET UNITYSDK_OFFSET(0xB5737F0)
#define KMOMKAJJCKC_EIBKOHANOHD_NJFIAKMODJN_OFFSET UNITYSDK_OFFSET(0xB573980)
#define KMOMKAJJCKC_EIBKOHANOHD_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0xB571DA0)
#define KMOMKAJJCKC_EIBKOHANOHD_OEEADELLICL_OFFSET UNITYSDK_OFFSET(0xB574110)
#define KMOMKAJJCKC_EIBKOHANOHD_PDNIBGLPLHP_OFFSET UNITYSDK_OFFSET(0xB574000)
#define KMOMKAJJCKC_EIBKOHANOHD_SET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0xB5737B0)

inline static constexpr unsigned int KMOMKAJJCKC_EIBKOHANOHD_TypeDefinitionIndex = 75932;

	class KMOMKAJJCKC_EIBKOHANOHD : public ::System::Object
	{
	public:
		::Cinemachine::CinemachineFreeLook* JOKICPFJECI; // 0x10
		::UnityEngine::Animation* LEANIBLIFMO; // 0x18
		::Il2CppArray<::Cinemachine::CinemachineVirtualCamera*>* BJADIIKLOHI; // 0x20
		::System::Int32 BAAJGBEFIMH; // 0x28
		::System::Single HDDMHJDBBCA; // 0x2C
		::System::Single ABIFHKHHAKM; // 0x30
		::System::Boolean MKFLMFAMNFJ; // 0x34
		::System::Boolean _IsFinished_k__BackingField; // 0x35
		::System::Boolean JKJINIFBFIO; // 0x36
		::System::Boolean PDCGFPFMPIE; // 0x37
		::System::Void _ctor(::Il2CppArray<::Cinemachine::CinemachineVirtualCamera*>* a1, ::Cinemachine::CinemachineFreeLook* a2, ::System::Boolean a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Cinemachine::CinemachineVirtualCamera*>*, ::Cinemachine::CinemachineFreeLook*, ::System::Boolean, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + KMOMKAJJCKC_EIBKOHANOHD_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean get_IsFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KMOMKAJJCKC_EIBKOHANOHD_GET_ISFINISHED_OFFSET))(this);
		}

		::System::Void set_IsFinished(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KMOMKAJJCKC_EIBKOHANOHD_SET_ISFINISHED_OFFSET))(this, a1);
		}

		static ::KMOMKAJJCKC_EIBKOHANOHD* LHLALAKKKKJ(::Il2CppArray<::Cinemachine::CinemachineVirtualCamera*>* a1, ::Cinemachine::CinemachineFreeLook* a2, ::System::Boolean a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::KMOMKAJJCKC_EIBKOHANOHD*(*)(::Il2CppArray<::Cinemachine::CinemachineVirtualCamera*>*, ::Cinemachine::CinemachineFreeLook*, ::System::Boolean, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + KMOMKAJJCKC_EIBKOHANOHD_LHLALAKKKKJ_OFFSET))(a1, a2, a3, a4, a5);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMOMKAJJCKC_EIBKOHANOHD_NPAFMEBNFOB_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMOMKAJJCKC_EIBKOHANOHD_JLANKNHFKCN_OFFSET))(this);
		}

		::System::Void HJIPBDNPKPP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMOMKAJJCKC_EIBKOHANOHD_HJIPBDNPKPP_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMOMKAJJCKC_EIBKOHANOHD_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void HLLJJDJIDHO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMOMKAJJCKC_EIBKOHANOHD_HLLJJDJIDHO_OFFSET))(this);
		}

		::System::Boolean NFFONAFOPLA(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KMOMKAJJCKC_EIBKOHANOHD_NFFONAFOPLA_OFFSET))(this, a1);
		}

		::System::Void OEEADELLICL(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KMOMKAJJCKC_EIBKOHANOHD_OEEADELLICL_OFFSET))(this, a1);
		}

		::System::Void JKLFOPBEHFI(::Cinemachine::CinemachineVirtualCamera* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCamera*))((::PBYTE)hIl2Cpp + KMOMKAJJCKC_EIBKOHANOHD_JKLFOPBEHFI_OFFSET))(this, a1);
		}

		::System::Boolean PDNIBGLPLHP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KMOMKAJJCKC_EIBKOHANOHD_PDNIBGLPLHP_OFFSET))(this);
		}

		::System::Boolean LHCEBEPDAPL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KMOMKAJJCKC_EIBKOHANOHD_LHCEBEPDAPL_OFFSET))(this);
		}

		::System::Single NJFIAKMODJN()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KMOMKAJJCKC_EIBKOHANOHD_NJFIAKMODJN_OFFSET))(this);
		}

	};
