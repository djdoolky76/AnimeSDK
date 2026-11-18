#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"

class AENICMHEIBH_ICGFKDPMBBN;
namespace MoleMole::Battle { class Entity; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Transform; }

#define AENICMHEIBH_HJDCPFCKBAN_BOCNGCBBLLN_OFFSET UNITYSDK_OFFSET(0x17DD13A0)
#define AENICMHEIBH_HJDCPFCKBAN_EHCAEAKCPKP_OFFSET UNITYSDK_OFFSET(0x17DD0F10)
#define AENICMHEIBH_HJDCPFCKBAN_ENPGEOHOFHG_OFFSET UNITYSDK_OFFSET(0x17DD13D0)
#define AENICMHEIBH_HJDCPFCKBAN_IIEHICDLBBO_OFFSET UNITYSDK_OFFSET(0x17DD1390)
#define AENICMHEIBH_HJDCPFCKBAN_NFGFPKGAPNB_OFFSET UNITYSDK_OFFSET(0x17DD13F0)
#define AENICMHEIBH_HJDCPFCKBAN__CTOR_OFFSET UNITYSDK_OFFSET(0x17DD0F00)

inline static constexpr unsigned int AENICMHEIBH_HJDCPFCKBAN_TypeDefinitionIndex = 85665;

class AENICMHEIBH_HJDCPFCKBAN : public ::System::Object
{
public:
	::UnityEngine::GameObject* IGAAKDOIPNN; // 0x10
	::UnityEngine::Transform* NGFKNPOHHLJ; // 0x18
	::MoleMole::Battle::Entity* KECKGDFIALJ; // 0x20
	::AENICMHEIBH_ICGFKDPMBBN* HMMMOCJAEOA; // 0x28
	::System::Int32 LBPBANPFBHE; // 0x30
	::System::Boolean IBNICCGMILF; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AENICMHEIBH_HJDCPFCKBAN__CTOR_OFFSET))(this);
	}

	::System::Void EHCAEAKCPKP(::UnityEngine::Object* NGLKIKLLLFL, ::Foundation::AssetRequestHandle BEDJECEBHNG)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + AENICMHEIBH_HJDCPFCKBAN_EHCAEAKCPKP_OFFSET))(this, NGLKIKLLLFL, BEDJECEBHNG);
	}

	::System::Boolean IIEHICDLBBO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AENICMHEIBH_HJDCPFCKBAN_IIEHICDLBBO_OFFSET))(this);
	}

	::System::Boolean BOCNGCBBLLN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AENICMHEIBH_HJDCPFCKBAN_BOCNGCBBLLN_OFFSET))(this);
	}

	::System::Boolean ENPGEOHOFHG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AENICMHEIBH_HJDCPFCKBAN_ENPGEOHOFHG_OFFSET))(this);
	}

	::System::Void NFGFPKGAPNB(::UnityEngine::GameObject* PAAOJEMGCFJ)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + AENICMHEIBH_HJDCPFCKBAN_NFGFPKGAPNB_OFFSET))(this, PAAOJEMGCFJ);
	}
};
