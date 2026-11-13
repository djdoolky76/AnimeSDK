#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
class PIIOAKOEACN;

#define KHHHOLADJBF_KHFPAMHCCOA_OFFSET UNITYSDK_OFFSET(0x1E77B4A0)
#define KHHHOLADJBF_MDPCGICJPHK_OFFSET UNITYSDK_OFFSET(0x1E77F2B0)

inline static constexpr unsigned int KHHHOLADJBF_TypeDefinitionIndex = 42666;

	class KHHHOLADJBF : public ::System::Object
	{
	public:
		static ::UnityEngine::Vector2Int MDPCGICJPHK(::PIIOAKOEACN* a1)
		{
			return ((::UnityEngine::Vector2Int(*)(::PIIOAKOEACN*))((::PBYTE)hIl2Cpp + KHHHOLADJBF_MDPCGICJPHK_OFFSET))(a1);
		}

		static ::System::Boolean KHFPAMHCCOA(::PIIOAKOEACN* a1)
		{
			return ((::System::Boolean(*)(::PIIOAKOEACN*))((::PBYTE)hIl2Cpp + KHHHOLADJBF_KHFPAMHCCOA_OFFSET))(a1);
		}

	};
