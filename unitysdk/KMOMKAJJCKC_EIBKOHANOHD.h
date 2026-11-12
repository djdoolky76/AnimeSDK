#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KMOMKAJJCKC_EIBKOHANOHD;
namespace Cinemachine { class CinemachineFreeLook; }
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace UnityEngine { class Animation; }

#define KMOMKAJJCKC_EIBKOHANOHD_CTOR_OFFSET UNITYSDK_OFFSET(0xBDBF730)
#define KMOMKAJJCKC_EIBKOHANOHD_GET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0xBDBF710)
#define KMOMKAJJCKC_EIBKOHANOHD_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xBDBB800)
#define KMOMKAJJCKC_EIBKOHANOHD_HJIPBDNPKPP_OFFSET UNITYSDK_OFFSET(0xBDBFDE0)
#define KMOMKAJJCKC_EIBKOHANOHD_HLLJJDJIDHO_OFFSET UNITYSDK_OFFSET(0xBDBFFE0)
#define KMOMKAJJCKC_EIBKOHANOHD_JKLFOPBEHFI_OFFSET UNITYSDK_OFFSET(0xBDC0130)
#define KMOMKAJJCKC_EIBKOHANOHD_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xBDBDD70)
#define KMOMKAJJCKC_EIBKOHANOHD_LHCEBEPDAPL_OFFSET UNITYSDK_OFFSET(0xBDBF830)
#define KMOMKAJJCKC_EIBKOHANOHD_LHLALAKKKKJ_OFFSET UNITYSDK_OFFSET(0xBDBDBF0)
#define KMOMKAJJCKC_EIBKOHANOHD_NFFONAFOPLA_OFFSET UNITYSDK_OFFSET(0xBDBF760)
#define KMOMKAJJCKC_EIBKOHANOHD_NJFIAKMODJN_OFFSET UNITYSDK_OFFSET(0xBDBF8F0)
#define KMOMKAJJCKC_EIBKOHANOHD_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0xBDBDD10)
#define KMOMKAJJCKC_EIBKOHANOHD_OEEADELLICL_OFFSET UNITYSDK_OFFSET(0xBDC0080)
#define KMOMKAJJCKC_EIBKOHANOHD_PDNIBGLPLHP_OFFSET UNITYSDK_OFFSET(0xBDBFF70)
#define KMOMKAJJCKC_EIBKOHANOHD_SET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0xBDBF720)

inline static constexpr unsigned int KMOMKAJJCKC_EIBKOHANOHD_TypeDefinitionIndex = 78259;

	class KMOMKAJJCKC_EIBKOHANOHD : public ::System::Object
	{
	public:
		::Il2CppArray<::Cinemachine::CinemachineVirtualCamera*>* BJADIIKLOHI; // 0x10
		::Cinemachine::CinemachineFreeLook* JOKICPFJECI; // 0x18
		::UnityEngine::Animation* LEANIBLIFMO; // 0x20
		::System::Single HDDMHJDBBCA; // 0x28
		::System::Single ABIFHKHHAKM; // 0x2C
		::System::Boolean MKFLMFAMNFJ; // 0x30
		::System::Boolean _IsFinished_k__BackingField; // 0x31
		::System::Boolean JKJINIFBFIO; // 0x32
		::System::Boolean PDCGFPFMPIE; // 0x33
		::System::Int32 BAAJGBEFIMH; // 0x34
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
