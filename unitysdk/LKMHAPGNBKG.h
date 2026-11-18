#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Variable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class GEIHCPAOKKK;
class JOOHBDMHGCA;
class MGBPBGBHKFB;
class MMBKAKPDHIF;
namespace MoleMole::Battle { class Entity; }
namespace System { class Action; }

#define LKMHAPGNBKG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A611170)
#define LKMHAPGNBKG_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1A6111D0)
#define LKMHAPGNBKG_OACCMJGMDCH_OFFSET UNITYSDK_OFFSET(0x1A6121B0)
#define LKMHAPGNBKG_OCMCJHBPENI_OFFSET UNITYSDK_OFFSET(0x1A6122C0)
#define LKMHAPGNBKG_PROCESS_1_OFFSET UNITYSDK_OFFSET(0x1A611CD0)
#define LKMHAPGNBKG_PROCESS_OFFSET UNITYSDK_OFFSET(0x1A6116D0)
#define LKMHAPGNBKG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A611140)

inline static constexpr unsigned int LKMHAPGNBKG_TypeDefinitionIndex = 45567;

class LKMHAPGNBKG : public ::System::Object
{
public:
	::MMBKAKPDHIF* LFAFBNODJBN; // 0x10
	::System::Action* EGBBBMAIKNP; // 0x18
	::GEIHCPAOKKK* EKHKNFILMGJ; // 0x20
	::Foundation::Variable_1<::UnityEngine::Quaternion> ABHPOOGNKHK; // 0x28
	::System::Byte _padding0[0x20];
	::JOOHBDMHGCA* ADPGHCMLFPH; // 0x50
	::UnityEngine::Vector2 JMLHHALFIGK; // 0x58
	::System::Boolean IFJMDDJIAPD; // 0x60
	::System::Byte _padding1[0x3];
	::System::Int32 OIPDGAPFJFD; // 0x64
	::UnityEngine::Vector2 DIICBCLACCD; // 0x68

	::System::Void _ctor(::UnityEngine::Vector2 CAHOFLNDPJL, ::Foundation::Variable_1<::UnityEngine::Quaternion> BAEBNBNJCDC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::Foundation::Variable_1<::UnityEngine::Quaternion>))((::PBYTE)hIl2Cpp + LKMHAPGNBKG__CTOR_OFFSET))(this, CAHOFLNDPJL, BAEBNBNJCDC);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKMHAPGNBKG_DISPOSE_OFFSET))(this);
	}

	::System::Void Initialize(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + LKMHAPGNBKG_INITIALIZE_OFFSET))(this, KECKGDFIALJ);
	}

	::UnityEngine::Vector3 Process(::MGBPBGBHKFB* HLFFCMIFFIB, ::UnityEngine::Vector3 OHOGDOMNHNK, ::UnityEngine::Quaternion BFBELMDIAHI)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::MGBPBGBHKFB*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + LKMHAPGNBKG_PROCESS_OFFSET))(this, HLFFCMIFFIB, OHOGDOMNHNK, BFBELMDIAHI);
	}

	::UnityEngine::Quaternion Process_1(::UnityEngine::Vector3 OHOGDOMNHNK, ::UnityEngine::Quaternion BFBELMDIAHI)
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + LKMHAPGNBKG_PROCESS_1_OFFSET))(this, OHOGDOMNHNK, BFBELMDIAHI);
	}

	::UnityEngine::Vector2 OACCMJGMDCH()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + LKMHAPGNBKG_OACCMJGMDCH_OFFSET))(this);
	}

	::System::Void OCMCJHBPENI(::UnityEngine::Vector2 HLFFCMIFFIB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + LKMHAPGNBKG_OCMCJHBPENI_OFFSET))(this, HLFFCMIFFIB);
	}
};
