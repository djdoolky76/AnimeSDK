#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
class ECNIOCBEDOM;
class EJFOOBLIKNH;
class NGFHCJIAOLH;
namespace RPG::GameCore { class ChenLingFesPosition; }

#define ECNIOCBEDOM_AKAGGECCMFC_OFFSET UNITYSDK_OFFSET(0x1C3E0D30)
#define ECNIOCBEDOM_BCJNIKILNIK_OFFSET UNITYSDK_OFFSET(0x1C3E0820)
#define ECNIOCBEDOM_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1C3E04F0)
#define ECNIOCBEDOM_COFJDFOIIOL_OFFSET UNITYSDK_OFFSET(0x1C3E09D0)
#define ECNIOCBEDOM_CTOR_OFFSET UNITYSDK_OFFSET(0x1C3E05D0)
#define ECNIOCBEDOM_DCFKBCJJKMJ_OFFSET UNITYSDK_OFFSET(0x1C3E0A50)
#define ECNIOCBEDOM_EJHPDBIKGHF_OFFSET UNITYSDK_OFFSET(0x1C3E05E0)
#define ECNIOCBEDOM_HOEKDHBPGAI_OFFSET UNITYSDK_OFFSET(0x1C3E0730)
#define ECNIOCBEDOM_IHIEDGHFPDI_OFFSET UNITYSDK_OFFSET(0x1C3E0BA0)
#define ECNIOCBEDOM_KLCONGAIILG_OFFSET UNITYSDK_OFFSET(0x1C3E0CB0)
#define ECNIOCBEDOM_LPELGFKMIPD_OFFSET UNITYSDK_OFFSET(0x1C3E0670)
#define ECNIOCBEDOM_MEBMMDCKNHE_OFFSET UNITYSDK_OFFSET(0x1C3E08C0)
#define ECNIOCBEDOM_NCPGAGEHCOL_OFFSET UNITYSDK_OFFSET(0x1C3E0680)
#define ECNIOCBEDOM_PDLJGFDCBLM_OFFSET UNITYSDK_OFFSET(0x1C3E07A0)

inline static constexpr unsigned int ECNIOCBEDOM_TypeDefinitionIndex = 80479;

	class ECNIOCBEDOM : public ::System::Object
	{
	public:
		::RPG::GameCore::ChenLingFesPosition* DHCFELAFHAK; // 0x10
		::EJFOOBLIKNH* FDDFBEJCGJJ; // 0x18
		::RPG::GameCore::ChenLingFesPosition* JGAIJEKPIOD; // 0x20
		::NGFHCJIAOLH* ALEOKJFCADL; // 0x28
		::UnityEngine::Quaternion MLFAIBELAKN; // 0x30
		::System::Boolean HEAOJKNFEGH; // 0x40
		::System::Boolean NMMAOMKHBDC; // 0x41
		::System::Byte _padding0[0x2];
		::UnityEngine::Quaternion AIHIMEAAMNC; // 0x44
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECNIOCBEDOM_CTOR_OFFSET))(this);
		}

		static ::ECNIOCBEDOM* BPLPBPMEODA(::NGFHCJIAOLH* a1, ::RPG::GameCore::ChenLingFesPosition* a2, ::UnityEngine::Quaternion a3, ::EJFOOBLIKNH* a4)
		{
			return ((::ECNIOCBEDOM*(*)(::NGFHCJIAOLH*, ::RPG::GameCore::ChenLingFesPosition*, ::UnityEngine::Quaternion, ::EJFOOBLIKNH*))((::PBYTE)hIl2Cpp + ECNIOCBEDOM_BPLPBPMEODA_OFFSET))(a1, a2, a3, a4);
		}

		::NGFHCJIAOLH* LPELGFKMIPD()
		{
			return ((::NGFHCJIAOLH*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECNIOCBEDOM_LPELGFKMIPD_OFFSET))(this);
		}

		::System::Boolean NCPGAGEHCOL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ECNIOCBEDOM_NCPGAGEHCOL_OFFSET))(this);
		}

		::System::Boolean HOEKDHBPGAI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ECNIOCBEDOM_HOEKDHBPGAI_OFFSET))(this);
		}

		::System::Boolean MEBMMDCKNHE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ECNIOCBEDOM_MEBMMDCKNHE_OFFSET))(this);
		}

		::System::Boolean IHIEDGHFPDI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ECNIOCBEDOM_IHIEDGHFPDI_OFFSET))(this);
		}

		::System::Void KLCONGAIILG(::RPG::GameCore::ChenLingFesPosition* a1, ::UnityEngine::Quaternion a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChenLingFesPosition*, ::UnityEngine::Quaternion, ::System::Boolean))((::PBYTE)hIl2Cpp + ECNIOCBEDOM_KLCONGAIILG_OFFSET))(this, a1, a2, a3);
		}

		::System::Void AKAGGECCMFC(::RPG::GameCore::ChenLingFesPosition* a1, ::UnityEngine::Quaternion a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChenLingFesPosition*, ::UnityEngine::Quaternion, ::System::Boolean))((::PBYTE)hIl2Cpp + ECNIOCBEDOM_AKAGGECCMFC_OFFSET))(this, a1, a2, a3);
		}

		static ::RPG::GameCore::ChenLingFesPosition* EJHPDBIKGHF(::RPG::GameCore::ChenLingFesPosition* a1)
		{
			return ((::RPG::GameCore::ChenLingFesPosition*(*)(::RPG::GameCore::ChenLingFesPosition*))((::PBYTE)hIl2Cpp + ECNIOCBEDOM_EJHPDBIKGHF_OFFSET))(a1);
		}

		::System::Void PDLJGFDCBLM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECNIOCBEDOM_PDLJGFDCBLM_OFFSET))(this);
		}

		::System::Void BCJNIKILNIK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECNIOCBEDOM_BCJNIKILNIK_OFFSET))(this);
		}

		::System::Void COFJDFOIIOL(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ECNIOCBEDOM_COFJDFOIIOL_OFFSET))(this, a1);
		}

		::System::Void DCFKBCJJKMJ(::RPG::GameCore::ChenLingFesPosition* a1, ::UnityEngine::Quaternion a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChenLingFesPosition*, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + ECNIOCBEDOM_DCFKBCJJKMJ_OFFSET))(this, a1, a2);
		}

	};
