#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FKFPKFPHBJO;
namespace CriWare::CriMana { class MovieInfo; }
namespace UnityEngine { class Shader; }

#define FKFPKFPHBJO___C__DISPLAYCLASS24_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1AA9D620)
#define FKFPKFPHBJO___C__DISPLAYCLASS24_0__SPAWNUICONTROLLER_B__0_OFFSET UNITYSDK_OFFSET(0x1AA9E0A0)

inline static constexpr unsigned int FKFPKFPHBJO___c__DisplayClass24_0_TypeDefinitionIndex = 75330;

	class FKFPKFPHBJO___c__DisplayClass24_0 : public ::System::Object
	{
	public:
		::FKFPKFPHBJO* __4__this; // 0x10
		::System::Boolean isDebugVideo; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKFPKFPHBJO___C__DISPLAYCLASS24_0_CTOR_OFFSET))(this);
		}

		::UnityEngine::Shader* _SpawnUIController_b__0(::CriWare::CriMana::MovieInfo* a1, ::System::Boolean a2)
		{
			return ((::UnityEngine::Shader*(*)(::PVOID, ::CriWare::CriMana::MovieInfo*, ::System::Boolean))((::PBYTE)hIl2Cpp + FKFPKFPHBJO___C__DISPLAYCLASS24_0__SPAWNUICONTROLLER_B__0_OFFSET))(this, a1, a2);
		}

	};
