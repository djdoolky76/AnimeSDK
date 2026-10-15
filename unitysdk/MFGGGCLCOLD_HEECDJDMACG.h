#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MFGGGCLCOLD_IntersectType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class MFGGGCLCOLD_HEECDJDMACG;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MFGGGCLCOLD_HEECDJDMACG_AEOIKFNKAAP_OFFSET UNITYSDK_OFFSET(0xB8F43A0)
#define MFGGGCLCOLD_HEECDJDMACG_CTOR_OFFSET UNITYSDK_OFFSET(0xB8F28F0)

inline static constexpr unsigned int MFGGGCLCOLD_HEECDJDMACG_TypeDefinitionIndex = 62173;

	class MFGGGCLCOLD_HEECDJDMACG : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* EPLHAPLELCI; // 0x10
		::UnityEngine::Vector3 ODFBGABAEBM; // 0x18
		::MFGGGCLCOLD_IntersectType GMPGDEINODK; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFGGGCLCOLD_HEECDJDMACG_CTOR_OFFSET))(this);
		}

		::System::Void AEOIKFNKAAP(::MFGGGCLCOLD_HEECDJDMACG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MFGGGCLCOLD_HEECDJDMACG*))((::PBYTE)hIl2Cpp + MFGGGCLCOLD_HEECDJDMACG_AEOIKFNKAAP_OFFSET))(this, a1);
		}

	};
