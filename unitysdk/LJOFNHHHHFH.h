#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define LJOFNHHHHFH_AKHNPKCKGGK_OFFSET UNITYSDK_OFFSET(0x168538D0)
#define LJOFNHHHHFH_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x16853840)
#define LJOFNHHHHFH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x168536A0)
#define LJOFNHHHHFH_JJEJHGOJOII_OFFSET UNITYSDK_OFFSET(0x168536F0)
#define LJOFNHHHHFH_MOCDFBMIBCH_OFFSET UNITYSDK_OFFSET(0x16853830)
#define LJOFNHHHHFH__CTOR_OFFSET UNITYSDK_OFFSET(0x168537F0)

inline static constexpr unsigned int LJOFNHHHHFH_TypeDefinitionIndex = 66447;

class LJOFNHHHHFH : public ::System::Object
{
public:
	// static const ::System::Int32 HCDDEDEOBPA = 0x20; // 0x0
	::Il2CppArray<::UnityEngine::RaycastHit>* LGHAHHMJPHI; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJOFNHHHHFH__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJOFNHHHHFH_DISPOSE_OFFSET))(this);
	}

	::Il2CppArray<::UnityEngine::RaycastHit>* MOCDFBMIBCH()
	{
		return ((::Il2CppArray<::UnityEngine::RaycastHit>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJOFNHHHHFH_MOCDFBMIBCH_OFFSET))(this);
	}

	static ::LJOFNHHHHFH* COKNIICCODC()
	{
		return ((::LJOFNHHHHFH*(*)())((::PBYTE)hIl2Cpp + LJOFNHHHHFH_COKNIICCODC_OFFSET))();
	}

	::System::Void JJEJHGOJOII()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJOFNHHHHFH_JJEJHGOJOII_OFFSET))(this);
	}

	::System::Int32 AKHNPKCKGGK(::UnityEngine::Vector3 EIIDOADGOIF, ::UnityEngine::Vector3 JBCNPOHMGPE, ::System::Single OGIHENKICBP, ::System::Int32 FBNGKPGLADH)
	{
		return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + LJOFNHHHHFH_AKHNPKCKGGK_OFFSET))(this, EIIDOADGOIF, JBCNPOHMGPE, OGIHENKICBP, FBNGKPGLADH);
	}
};
