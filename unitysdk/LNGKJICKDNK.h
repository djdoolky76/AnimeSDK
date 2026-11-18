#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BBDCAGEKHAJ.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

class FKDBFFKIOFN;
namespace MoleMole::Battle { class Entity; }

#define LNGKJICKDNK_DNKCHIOOBDL_OFFSET UNITYSDK_OFFSET(0x18510FA0)
#define LNGKJICKDNK_HNOOCCLOANE_OFFSET UNITYSDK_OFFSET(0x18510F50)
#define LNGKJICKDNK_NLIECBDKDDE_OFFSET UNITYSDK_OFFSET(0x18511A70)
#define LNGKJICKDNK__CTOR_OFFSET UNITYSDK_OFFSET(0x18510F00)

inline static constexpr unsigned int LNGKJICKDNK_TypeDefinitionIndex = 78741;

class LNGKJICKDNK : public ::BBDCAGEKHAJ
{
public:
	::Il2CppArray<::UnityEngine::RaycastHit>* GPEFFIBECIC; // 0x40
	::System::Single PBFBDBCMALP; // 0x48
	::System::Single OGIHENKICBP; // 0x4C
	::System::Single NEEGKNOOOLI; // 0x50

	::System::Void _ctor(::MoleMole::Battle::Entity* AMNIHACKELI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + LNGKJICKDNK__CTOR_OFFSET))(this, AMNIHACKELI);
	}

	::System::Int32 HNOOCCLOANE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LNGKJICKDNK_HNOOCCLOANE_OFFSET))(this);
	}

	::UnityEngine::Vector3 DNKCHIOOBDL(::FKDBFFKIOFN* LJBPECKCCEA)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::FKDBFFKIOFN*))((::PBYTE)hIl2Cpp + LNGKJICKDNK_DNKCHIOOBDL_OFFSET))(this, LJBPECKCCEA);
	}

	::UnityEngine::Vector3 NLIECBDKDDE(::UnityEngine::Vector3 CFJFMMGPGKE, ::UnityEngine::Vector3 KBHFBLJPFJH)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + LNGKJICKDNK_NLIECBDKDDE_OFFSET))(this, CFJFMMGPGKE, KBHFBLJPFJH);
	}
};
