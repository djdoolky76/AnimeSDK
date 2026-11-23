#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class GameObject; }

#define AKRADIALEMITTER_BF13C91AD80643D2_OFFSET UNITYSDK_OFFSET(0x291BA80)
#define AKRADIALEMITTER_EEA317C16D4FE9F7_OFFSET UNITYSDK_OFFSET(0x291BBA0)
#define AKRADIALEMITTER_F9CF25ACF0DD85C5_1_OFFSET UNITYSDK_OFFSET(0x291BA80)
#define AKRADIALEMITTER_F9CF25ACF0DD85C5_2_OFFSET UNITYSDK_OFFSET(0x291BCA0)
#define AKRADIALEMITTER_F9CF25ACF0DD85C5_OFFSET UNITYSDK_OFFSET(0x291BC30)
#define AKRADIALEMITTER_FB6EFE3461008D90_OFFSET UNITYSDK_OFFSET(0x291BB10)
#define AKRADIALEMITTER__CTOR_OFFSET UNITYSDK_OFFSET(0x176D770)

inline static constexpr unsigned int AkRadialEmitter_TypeDefinitionIndex = 20476;

class AkRadialEmitter : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Single outerRadius; // 0x20
	::System::Single innerRadius; // 0x24
	::System::Single E7C1281AA2E1B518; // 0x28
	::System::Single B9BCFDC41F4E15A4; // 0x2C

	::System::Void BF13C91AD80643D2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKRADIALEMITTER_BF13C91AD80643D2_OFFSET))(this);
	}

	::System::Void F9CF25ACF0DD85C5(::UnityEngine::GameObject* AACD1FD78C470A3F)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + AKRADIALEMITTER_F9CF25ACF0DD85C5_OFFSET))(this, AACD1FD78C470A3F);
	}

	::System::Void F9CF25ACF0DD85C5_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKRADIALEMITTER_F9CF25ACF0DD85C5_1_OFFSET))(this);
	}

	::System::Void F9CF25ACF0DD85C5_2(::System::Single EEB98EB76323B396, ::System::Single BAF1608F03A7CEC2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + AKRADIALEMITTER_F9CF25ACF0DD85C5_2_OFFSET))(this, EEB98EB76323B396, BAF1608F03A7CEC2);
	}

	::System::Void FB6EFE3461008D90(::System::Single BAF1608F03A7CEC2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AKRADIALEMITTER_FB6EFE3461008D90_OFFSET))(this, BAF1608F03A7CEC2);
	}

	::System::Void EEA317C16D4FE9F7(::System::Single EEB98EB76323B396)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AKRADIALEMITTER_EEA317C16D4FE9F7_OFFSET))(this, EEB98EB76323B396);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKRADIALEMITTER__CTOR_OFFSET))(this);
	}
};
