#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector4.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define PPDBLGMPMLB_CCJDEIIFNCO_OFFSET UNITYSDK_OFFSET(0xC37B7E0)
#define PPDBLGMPMLB_CTOR_OFFSET UNITYSDK_OFFSET(0xC37BD50)
#define PPDBLGMPMLB_EHFGFNEONHF_OFFSET UNITYSDK_OFFSET(0xC37B970)
#define PPDBLGMPMLB_IIKFLDECIOK_OFFSET UNITYSDK_OFFSET(0xC37B5F0)

	class PPDBLGMPMLB : public ::System::Object
	{
	public:
		::Il2CppArray<::UnityEngine::Vector4>* HODPFMNNFGP; // 0x10
		::Il2CppArray<::UnityEngine::Vector4>* MIDIPDKEKIN; // 0x18
		::Il2CppArray<::UnityEngine::Vector4>* BFKFMMEMKOM; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPDBLGMPMLB_CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 IIKFLDECIOK(::System::Single a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PPDBLGMPMLB_IIKFLDECIOK_OFFSET))(this, a1);
		}

		::System::Single CCJDEIIFNCO(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PPDBLGMPMLB_CCJDEIIFNCO_OFFSET))(this, a1);
		}

		::System::Void EHFGFNEONHF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPDBLGMPMLB_EHFGFNEONHF_OFFSET))(this);
		}

	};
