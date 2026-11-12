#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class HDKJJLANJIN;
class OBOAGAFHIJO;

#define FCLMONFLHFP_CLEAR_OFFSET UNITYSDK_OFFSET(0x165E8010)
#define FCLMONFLHFP_CTOR_OFFSET UNITYSDK_OFFSET(0x165E8150)
#define FCLMONFLHFP_DDFKGBCOEMH_OFFSET UNITYSDK_OFFSET(0x165E7EE0)
#define FCLMONFLHFP_JNDOGMFFOIM_OFFSET UNITYSDK_OFFSET(0x165E7D20)

inline static constexpr unsigned int FCLMONFLHFP_TypeDefinitionIndex = 76109;

	class FCLMONFLHFP : public ::System::Object
	{
	public:
		::HDKJJLANJIN* LEFCNOJGDBP; // 0x10
		::OBOAGAFHIJO* GOHGJMFAMLH; // 0x18
		::System::Int32 AMFJIHAABBP; // 0x20
		::System::Byte _padding0[0x4];
		::System::Int64 EOBMFJGOIHB; // 0x28
		::System::Boolean DFHHKFNDECI; // 0x30
		::System::Byte _padding1[0x3];
		::System::Int32 IBOIJPFPBIF; // 0x34
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
