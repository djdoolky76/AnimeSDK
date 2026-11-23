#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class GameObject; }

#define TA_HINGEJOINTUNITTEST_A28D6A0C3E793E7D_OFFSET UNITYSDK_OFFSET(0x2A26C90)
#define TA_HINGEJOINTUNITTEST_A6C2CE0D75012839_OFFSET UNITYSDK_OFFSET(0x2A26C50)
#define TA_HINGEJOINTUNITTEST_AA94F3444D6205AB_OFFSET UNITYSDK_OFFSET(0x2A26E10)
#define TA_HINGEJOINTUNITTEST_BF13C91AD80643D2_OFFSET UNITYSDK_OFFSET(0x2A26DF0)
#define TA_HINGEJOINTUNITTEST_E18155E901D11AB9_OFFSET UNITYSDK_OFFSET(0x2A26CA0)
#define TA_HINGEJOINTUNITTEST_E2D95E01D8D8111A_OFFSET UNITYSDK_OFFSET(0x2A267A0)
#define TA_HINGEJOINTUNITTEST_EE07AFD4D20154A3_OFFSET UNITYSDK_OFFSET(0x2A26B70)
#define TA_HINGEJOINTUNITTEST_FBFE47B4D33CEFF6_OFFSET UNITYSDK_OFFSET(0x2A26A10)
#define TA_HINGEJOINTUNITTEST__CTOR_OFFSET UNITYSDK_OFFSET(0x2A271D0)

inline static constexpr unsigned int TA_HingeJointUnitTest_TypeDefinitionIndex = 21599;

class TA_HingeJointUnitTest : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::GameObject* objectPrefab; // 0x20
	::UnityEngine::Vector3 centerPoint; // 0x28
	::System::Single radius; // 0x34
	::System::Int32 numberOfObjects; // 0x38

	::System::Void E18155E901D11AB9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_HINGEJOINTUNITTEST_E18155E901D11AB9_OFFSET))(this);
	}

	::System::Single A6C2CE0D75012839(::System::Int32 B48C66E5FB2449C6, ::System::Int32 AE40CAA6BBFEAD2C)
	{
		return ((::System::Single(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + TA_HINGEJOINTUNITTEST_A6C2CE0D75012839_OFFSET))(this, B48C66E5FB2449C6, AE40CAA6BBFEAD2C);
	}

	::UnityEngine::Vector3 FBFE47B4D33CEFF6(::System::Int32 B48C66E5FB2449C6)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + TA_HINGEJOINTUNITTEST_FBFE47B4D33CEFF6_OFFSET))(this, B48C66E5FB2449C6);
	}

	::System::Void A28D6A0C3E793E7D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_HINGEJOINTUNITTEST_A28D6A0C3E793E7D_OFFSET))(this);
	}

	::System::Void AA94F3444D6205AB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_HINGEJOINTUNITTEST_AA94F3444D6205AB_OFFSET))(this);
	}

	::System::Void E2D95E01D8D8111A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_HINGEJOINTUNITTEST_E2D95E01D8D8111A_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_HINGEJOINTUNITTEST__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector3 EE07AFD4D20154A3()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_HINGEJOINTUNITTEST_EE07AFD4D20154A3_OFFSET))(this);
	}

	::System::Void BF13C91AD80643D2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_HINGEJOINTUNITTEST_BF13C91AD80643D2_OFFSET))(this);
	}
};
