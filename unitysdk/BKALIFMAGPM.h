#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BMAGJGLPIIF.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"
class BKALIFMAGPM;
class FCOEMCEDLNL;
namespace RPG::GameCore { class MeshBound; }

#define BKALIFMAGPM_CTOR_OFFSET UNITYSDK_OFFSET(0x1F19D020)
#define BKALIFMAGPM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1F19CE60)

inline static constexpr unsigned int BKALIFMAGPM_TypeDefinitionIndex = 16979;

	class BKALIFMAGPM : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::BMAGJGLPIIF>* OCHDMBJBIIC; // 0x10
		::Il2CppArray<::System::UInt32>* PAEPOONBKAD; // 0x18
		::RPG::GameCore::MeshBound* PAMFCEDOEMO; // 0x20
		::RPG::MVector3 EEBDABHHABC; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKALIFMAGPM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::BKALIFMAGPM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::BKALIFMAGPM*))((::PBYTE)hIl2Cpp + BKALIFMAGPM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
