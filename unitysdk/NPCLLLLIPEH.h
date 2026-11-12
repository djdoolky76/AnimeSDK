#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CKCJOCJGHKC;
class CLAKIACAACO;
class ILDNJGBJGPF;
class KHNBFDNKLHE;
class LILDMGCIAKD;

#define NPCLLLLIPEH_CDDOOCHNNJA_OFFSET UNITYSDK_OFFSET(0xC5E9930)
#define NPCLLLLIPEH_CTOR_OFFSET UNITYSDK_OFFSET(0xC5E9920)
#define NPCLLLLIPEH_DEDGMILEJNK_OFFSET UNITYSDK_OFFSET(0xC5E98D0)
#define NPCLLLLIPEH_GET_ENGAGEMENT_OFFSET UNITYSDK_OFFSET(0xC5E98B0)
#define NPCLLLLIPEH_HOBJBLOIODM_OFFSET UNITYSDK_OFFSET(0xC5E9AE0)
#define NPCLLLLIPEH_NJOGOMGHIEA_OFFSET UNITYSDK_OFFSET(0xC5E9BE0)
#define NPCLLLLIPEH_SET_ENGAGEMENT_OFFSET UNITYSDK_OFFSET(0xC5E98C0)

inline static constexpr unsigned int NPCLLLLIPEH_TypeDefinitionIndex = 84231;

	class NPCLLLLIPEH : public ::System::Object
	{
	public:
		::ILDNJGBJGPF* _Engagement_k__BackingField; // 0x10
		::LILDMGCIAKD* ECKBBFILCDB; // 0x18
		::System::Void _ctor(::LILDMGCIAKD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LILDMGCIAKD*))((::PBYTE)hIl2Cpp + NPCLLLLIPEH_CTOR_OFFSET))(this, a1);
		}

		::ILDNJGBJGPF* get_Engagement()
		{
			return ((::ILDNJGBJGPF*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCLLLLIPEH_GET_ENGAGEMENT_OFFSET))(this);
		}

		::System::Void set_Engagement(::ILDNJGBJGPF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ILDNJGBJGPF*))((::PBYTE)hIl2Cpp + NPCLLLLIPEH_SET_ENGAGEMENT_OFFSET))(this, a1);
		}

		::System::Boolean DEDGMILEJNK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCLLLLIPEH_DEDGMILEJNK_OFFSET))(this);
		}

		::System::Void CDDOOCHNNJA(::CKCJOCJGHKC* a1, ::CLAKIACAACO* a2, ::KHNBFDNKLHE* a3)
		{
			return ((::System::Void(*)(::PVOID, ::CKCJOCJGHKC*, ::CLAKIACAACO*, ::KHNBFDNKLHE*))((::PBYTE)hIl2Cpp + NPCLLLLIPEH_CDDOOCHNNJA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void HOBJBLOIODM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCLLLLIPEH_HOBJBLOIODM_OFFSET))(this);
		}

		::System::Void NJOGOMGHIEA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCLLLLIPEH_NJOGOMGHIEA_OFFSET))(this);
		}

	};
