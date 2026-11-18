#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/Foundation/AssetPath.h"

class HNLACBJDCGI;
namespace MoleMole { class MonoSurfSingleDigit; }

#define MOLEMOLE_MONOSURFDOUBLEDIGIT_SETVALUE_OFFSET UNITYSDK_OFFSET(0x139F8AF0)
#define MOLEMOLE_MONOSURFDOUBLEDIGIT__CTOR_OFFSET UNITYSDK_OFFSET(0x139F8C00)

namespace MoleMole
{
	inline static constexpr unsigned int MonoSurfDoubleDigit_TypeDefinitionIndex = 65523;

	class MonoSurfDoubleDigit : public ::UnityEngine::MonoBehaviour
	{
	public:
		::MoleMole::MonoSurfSingleDigit* high; // 0x18
		::MoleMole::MonoSurfSingleDigit* low; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSURFDOUBLEDIGIT__CTOR_OFFSET))(this);
		}

		::System::Void SetValue(::System::Int32 EGEGIMGMJHN, ::HNLACBJDCGI* CENDLIKDNJA, ::Il2CppArray<::Foundation::AssetPath>* BNMNDKJFMGK)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::HNLACBJDCGI*, ::Il2CppArray<::Foundation::AssetPath>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSURFDOUBLEDIGIT_SETVALUE_OFFSET))(this, EGEGIMGMJHN, CENDLIKDNJA, BNMNDKJFMGK);
		}
	};
}
