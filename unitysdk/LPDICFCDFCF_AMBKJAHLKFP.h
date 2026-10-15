#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LPDICFCDFCF_ICHMEPEKPKE.h"
class NEOBJJIOBFP;
namespace RPG::GameCore { class GameWorld; }
namespace System { class String; }

#define LPDICFCDFCF_AMBKJAHLKFP_CTOR_OFFSET UNITYSDK_OFFSET(0xB81D400)
#define LPDICFCDFCF_AMBKJAHLKFP_LHGBNJGEHKO_OFFSET UNITYSDK_OFFSET(0xB81DE30)

inline static constexpr unsigned int LPDICFCDFCF_AMBKJAHLKFP_TypeDefinitionIndex = 60751;

	class LPDICFCDFCF_AMBKJAHLKFP : public ::LPDICFCDFCF_ICHMEPEKPKE
	{
	public:
		::System::Int32 IDKBBKPDANN; // 0x30
		::System::Void _ctor(::System::Int32 a1, ::System::String* a2, ::System::String* a3, ::NEOBJJIOBFP* a4, ::RPG::GameCore::GameWorld* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*, ::NEOBJJIOBFP*, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + LPDICFCDFCF_AMBKJAHLKFP_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void LHGBNJGEHKO(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + LPDICFCDFCF_AMBKJAHLKFP_LHGBNJGEHKO_OFFSET))(this, a1, a2);
		}

	};
