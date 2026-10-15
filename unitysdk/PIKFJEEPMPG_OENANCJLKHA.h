#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define PIKFJEEPMPG_OENANCJLKHA_CTOR_OFFSET UNITYSDK_OFFSET(0xC26CC40)
#define PIKFJEEPMPG_OENANCJLKHA_DEFOLDBLKKM_OFFSET UNITYSDK_OFFSET(0xC26D3F0)
#define PIKFJEEPMPG_OENANCJLKHA_FHPAOJGFHHE_OFFSET UNITYSDK_OFFSET(0xC26D240)
#define PIKFJEEPMPG_OENANCJLKHA_GLHOCPGKOEA_OFFSET UNITYSDK_OFFSET(0xC26CFC0)
#define PIKFJEEPMPG_OENANCJLKHA_NEKMKLLJPFD_OFFSET UNITYSDK_OFFSET(0xC26CDA0)
#define PIKFJEEPMPG_OENANCJLKHA_NFDNHGMCHML_OFFSET UNITYSDK_OFFSET(0xC26D380)

	class PIKFJEEPMPG_OENANCJLKHA : public ::System::Object
	{
	public:
		::UnityEngine::Vector2 DGHNBLMLBDL; // 0x10
		::UnityEngine::Vector2 IDKONBFPBLH; // 0x18
		::UnityEngine::Vector2 PGJLBGPJOCK; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIKFJEEPMPG_OENANCJLKHA_CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 NEKMKLLJPFD(::System::Int32 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PIKFJEEPMPG_OENANCJLKHA_NEKMKLLJPFD_OFFSET))(this, a1);
		}

		::System::Boolean GLHOCPGKOEA(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + PIKFJEEPMPG_OENANCJLKHA_GLHOCPGKOEA_OFFSET))(this, a1);
		}

		::System::Void FHPAOJGFHHE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIKFJEEPMPG_OENANCJLKHA_FHPAOJGFHHE_OFFSET))(this);
		}

		::System::Boolean NFDNHGMCHML(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + PIKFJEEPMPG_OENANCJLKHA_NFDNHGMCHML_OFFSET))(this, a1, a2);
		}

		::System::Void DEFOLDBLKKM(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PIKFJEEPMPG_OENANCJLKHA_DEFOLDBLKKM_OFFSET))(this, a1);
		}

	};
