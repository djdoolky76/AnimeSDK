#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class ALKALGGMOGJ;
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Text; }

#define MOLEMOLE_MONOGENETALCOUNTDOWN_HASTIMESWITCHING_OFFSET UNITYSDK_OFFSET(0x12B63FC0)
#define MOLEMOLE_MONOGENETALCOUNTDOWN_OCCIKJCMAAN_OFFSET UNITYSDK_OFFSET(0x12B62C00)
#define MOLEMOLE_MONOGENETALCOUNTDOWN_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x12B644E0)
#define MOLEMOLE_MONOGENETALCOUNTDOWN_RESET_OFFSET UNITYSDK_OFFSET(0x12B62860)
#define MOLEMOLE_MONOGENETALCOUNTDOWN_SETTIMEFORCE_OFFSET UNITYSDK_OFFSET(0x12B62B20)
#define MOLEMOLE_MONOGENETALCOUNTDOWN_SETTIMEICONFORCE_OFFSET UNITYSDK_OFFSET(0x12B62F20)
#define MOLEMOLE_MONOGENETALCOUNTDOWN_SETTIMEICON_OFFSET UNITYSDK_OFFSET(0x12B63860)
#define MOLEMOLE_MONOGENETALCOUNTDOWN_SETTIME_OFFSET UNITYSDK_OFFSET(0x12B63760)
#define MOLEMOLE_MONOGENETALCOUNTDOWN_WILLCHANGETIMEICON_OFFSET UNITYSDK_OFFSET(0x12B63400)
#define MOLEMOLE_MONOGENETALCOUNTDOWN__CTOR_OFFSET UNITYSDK_OFFSET(0x12B64750)

namespace MoleMole
{
	inline static constexpr unsigned int MonoGenetalCountDown_TypeDefinitionIndex = 69934;

	class MonoGenetalCountDown : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::UI::Text* hourTex; // 0x18
		::UnityEngine::UI::Text* minuteTex; // 0x20
		::UnityEngine::GameObject* dayTimeIcon; // 0x28
		::UnityEngine::GameObject* nightTimeIcon; // 0x30
		::System::Int32 LNIEAOBBCPL; // 0x38
		::System::Int32 JFCAGJLBGJN; // 0x3C
		::System::String* HJBEMDMFDJC; // 0x40
		::System::String* MACIJCEJFPB; // 0x48
		::System::Int32 LLHEBAJMNKM; // 0x50
		::System::Int32 OCGLINGOFNG; // 0x54
		::System::Boolean IJNIKGOGNDL; // 0x58
		::System::Byte _padding0[0x7];
		::UnityEngine::Animation* ChangeTimeAnimation; // 0x60
		::System::Boolean CanChangeTimeText; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGENETALCOUNTDOWN__CTOR_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGENETALCOUNTDOWN_RESET_OFFSET))(this);
		}

		::System::Void SetTimeForce(::System::Single HCOJLFECINK)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGENETALCOUNTDOWN_SETTIMEFORCE_OFFSET))(this, HCOJLFECINK);
		}

		::System::Boolean WillChangeTimeIcon(::System::Single HCOJLFECINK)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGENETALCOUNTDOWN_WILLCHANGETIMEICON_OFFSET))(this, HCOJLFECINK);
		}

		::System::Void SetTime(::System::Single HCOJLFECINK, ::System::Boolean BAMNMBLGGBL)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGENETALCOUNTDOWN_SETTIME_OFFSET))(this, HCOJLFECINK, BAMNMBLGGBL);
		}

		::System::Boolean HasTimeSwitching(::ALKALGGMOGJ*& DEKJDEPKKLH)
		{
			return ((::System::Boolean(*)(::PVOID, ::ALKALGGMOGJ*&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGENETALCOUNTDOWN_HASTIMESWITCHING_OFFSET))(this, DEKJDEPKKLH);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGENETALCOUNTDOWN_ONDISABLE_OFFSET))(this);
		}

		::System::Void SetTimeIconForce(::System::Int32 DMIAICJPPDL, ::System::Int32 MDLNMDJMMJP)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGENETALCOUNTDOWN_SETTIMEICONFORCE_OFFSET))(this, DMIAICJPPDL, MDLNMDJMMJP);
		}

		::System::Void SetTimeIcon(::System::Int32 DMIAICJPPDL, ::System::Int32 MDLNMDJMMJP)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGENETALCOUNTDOWN_SETTIMEICON_OFFSET))(this, DMIAICJPPDL, MDLNMDJMMJP);
		}

		::System::Void OCCIKJCMAAN(::System::Int32 DMIAICJPPDL, ::System::Int32 MDLNMDJMMJP, ::System::Boolean NPPMJEIPMFC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGENETALCOUNTDOWN_OCCIKJCMAAN_OFFSET))(this, DMIAICJPPDL, MDLNMDJMMJP, NPPMJEIPMFC);
		}
	};
}
