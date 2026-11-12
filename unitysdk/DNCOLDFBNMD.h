#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MKHNMHOHEAK.h"
#include "unitysdk/RPG/Client/LittleGame/TransformInterpolateMode.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class KPCDEJGJHBK;
namespace UnityEngine { class Transform; }

#define DNCOLDFBNMD_CGNOBOOCGNB_OFFSET UNITYSDK_OFFSET(0x126D2500)
#define DNCOLDFBNMD_CTOR_OFFSET UNITYSDK_OFFSET(0x126D2840)
#define DNCOLDFBNMD_IGKLKLJCMBI_OFFSET UNITYSDK_OFFSET(0x126D2380)
#define DNCOLDFBNMD_LJOLGCNKIEH_OFFSET UNITYSDK_OFFSET(0x126D2550)

inline static constexpr unsigned int DNCOLDFBNMD_TypeDefinitionIndex = 78876;

	class DNCOLDFBNMD : public ::MKHNMHOHEAK
	{
	public:
		::UnityEngine::Transform* PDJGEDNLBKJ; // 0x18
		::UnityEngine::Vector3 PGJJCGGBCKK; // 0x20
		::UnityEngine::Quaternion NMBCMMJMIPA; // 0x2C
		::RPG::Client::LittleGame::TransformInterpolateMode PHOKGMINOOB; // 0x3C
		::System::Single GGBKHGGBIBA; // 0x40
		::UnityEngine::Vector3 PIDMDPCMHKE; // 0x44
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNCOLDFBNMD_CTOR_OFFSET))(this);
		}

		::System::Void IGKLKLJCMBI(::KPCDEJGJHBK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KPCDEJGJHBK*))((::PBYTE)hIl2Cpp + DNCOLDFBNMD_IGKLKLJCMBI_OFFSET))(this, a1);
		}

		::System::Void CGNOBOOCGNB(::KPCDEJGJHBK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KPCDEJGJHBK*))((::PBYTE)hIl2Cpp + DNCOLDFBNMD_CGNOBOOCGNB_OFFSET))(this, a1);
		}

		::System::Void LJOLGCNKIEH(::KPCDEJGJHBK* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::KPCDEJGJHBK*, ::System::Single))((::PBYTE)hIl2Cpp + DNCOLDFBNMD_LJOLGCNKIEH_OFFSET))(this, a1, a2);
		}

	};
