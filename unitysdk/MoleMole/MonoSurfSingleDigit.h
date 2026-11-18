#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/Foundation/AssetPath.h"

class HNLACBJDCGI;
namespace UnityEngine::UI { class Image; }

#define MOLEMOLE_MONOSURFSINGLEDIGIT_SETVALUE_OFFSET UNITYSDK_OFFSET(0x1469D6C0)
#define MOLEMOLE_MONOSURFSINGLEDIGIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1469D760)

namespace MoleMole
{
	inline static constexpr unsigned int MonoSurfSingleDigit_TypeDefinitionIndex = 51046;

	class MonoSurfSingleDigit : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::UI::Image* outer; // 0x18
		::UnityEngine::UI::Image* inner; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSURFSINGLEDIGIT__CTOR_OFFSET))(this);
		}

		::System::Void SetValue(::HNLACBJDCGI* CENDLIKDNJA, ::Foundation::AssetPath FPJDBPJCCPM)
		{
			return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSURFSINGLEDIGIT_SETVALUE_OFFSET))(this, CENDLIKDNJA, FPJDBPJCCPM);
		}
	};
}
