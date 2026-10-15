#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class HDKJJLANJIN;
class OBOAGAFHIJO;

#define FCLMONFLHFP_CLEAR_OFFSET UNITYSDK_OFFSET(0x156C2E70)
#define FCLMONFLHFP_CTOR_OFFSET UNITYSDK_OFFSET(0x156C2FC0)
#define FCLMONFLHFP_DDFKGBCOEMH_OFFSET UNITYSDK_OFFSET(0x156C2D40)
#define FCLMONFLHFP_JNDOGMFFOIM_OFFSET UNITYSDK_OFFSET(0x156C2B80)

inline static constexpr unsigned int FCLMONFLHFP_TypeDefinitionIndex = 73972;

	class FCLMONFLHFP : public ::System::Object
	{
	public:
		::OBOAGAFHIJO* GOHGJMFAMLH; // 0x10
		::HDKJJLANJIN* LEFCNOJGDBP; // 0x18
		::System::Int64 EOBMFJGOIHB; // 0x20
		::System::Int32 IBOIJPFPBIF; // 0x28
		::System::Int32 AMFJIHAABBP; // 0x2C
		::System::Boolean DFHHKFNDECI; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCLMONFLHFP_CTOR_OFFSET))(this);
		}

		::System::Boolean JNDOGMFFOIM(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + FCLMONFLHFP_JNDOGMFFOIM_OFFSET))(this, a1, a2);
		}

		::System::Boolean DDFKGBCOEMH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FCLMONFLHFP_DDFKGBCOEMH_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCLMONFLHFP_CLEAR_OFFSET))(this);
		}

	};
