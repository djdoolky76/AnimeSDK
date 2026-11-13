#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MFGGGCLCOLD_IntersectType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class MFGGGCLCOLD_HEECDJDMACG;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MFGGGCLCOLD_HEECDJDMACG_AEOIKFNKAAP_OFFSET UNITYSDK_OFFSET(0x17C845F0)
#define MFGGGCLCOLD_HEECDJDMACG_CTOR_OFFSET UNITYSDK_OFFSET(0x17C82B40)

inline static constexpr unsigned int MFGGGCLCOLD_HEECDJDMACG_TypeDefinitionIndex = 63586;

	class MFGGGCLCOLD_HEECDJDMACG : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* EPLHAPLELCI; // 0x10
		::MFGGGCLCOLD_IntersectType GMPGDEINODK; // 0x18
		::UnityEngine::Vector3 ODFBGABAEBM; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFGGGCLCOLD_HEECDJDMACG_CTOR_OFFSET))(this);
		}

		::System::Void AEOIKFNKAAP(::MFGGGCLCOLD_HEECDJDMACG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MFGGGCLCOLD_HEECDJDMACG*))((::PBYTE)hIl2Cpp + MFGGGCLCOLD_HEECDJDMACG_AEOIKFNKAAP_OFFSET))(this, a1);
		}

	};
