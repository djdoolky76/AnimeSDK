#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::GameCore { class CharacterInputData; }

#define FEIBCGELFAJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1660CD20)
#define FEIBCGELFAJ_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x1660CCB0)

inline static constexpr unsigned int FEIBCGELFAJ_TypeDefinitionIndex = 58329;

	class FEIBCGELFAJ : public ::System::Object
	{
	public:
		::RPG::GameCore::CharacterInputData* IEALNDAHMBG; // 0x10
		::UnityEngine::Quaternion HGLBGLANIIO; // 0x18
		::UnityEngine::Vector3 OAKCBDDKNKL; // 0x28
		::UnityEngine::RaycastHit NAFAJIMJFEL; // 0x34
		::System::Boolean LCEIFCIKKAN; // 0x64
		::System::Boolean OPOKHGOBMDI; // 0x65
		::System::Boolean KNIDMFAAIFN; // 0x66
		::System::Byte _padding0[0x1];
		::UnityEngine::Vector3 GABNHNIMFIB; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEIBCGELFAJ_CTOR_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEIBCGELFAJ_KHGIKBFDLFB_OFFSET))(this);
		}

	};
