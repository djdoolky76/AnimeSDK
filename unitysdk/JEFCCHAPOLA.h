#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtPropertyModifyData.h"
#include "unitysdk/System/Object.h"
class JEFCCHAPOLA;

#define JEFCCHAPOLA_CTOR_OFFSET UNITYSDK_OFFSET(0x16610410)
#define JEFCCHAPOLA_EQUALS_OFFSET UNITYSDK_OFFSET(0x16610390)

inline static constexpr unsigned int JEFCCHAPOLA_TypeDefinitionIndex = 54274;

	class JEFCCHAPOLA : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::RtPropertyModifyData>* CDMKBCHLPAB; // 0x10
		::System::UInt32 PMIEAEGJNMJ; // 0x18
		::System::UInt32 AAGKEBFHLMC; // 0x1C
		::System::UInt32 IHALFHPNNGL; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEFCCHAPOLA_CTOR_OFFSET))(this);
		}

		::System::Boolean Equals(::JEFCCHAPOLA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JEFCCHAPOLA*))((::PBYTE)hIl2Cpp + JEFCCHAPOLA_EQUALS_OFFSET))(this, a1);
		}

	};
