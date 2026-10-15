#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarSkinType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/AHHNGJGLOKA.h"
#include "unitysdk/PPMELJBNKPF___c__DisplayClass3_0.h"
class BLIBHFKMKML;
class DEHBFNOEMIF;
class IDACDDHLPKI;

#define PPMELJBNKPF_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xC3935C0)
#define PPMELJBNKPF_CTOR_OFFSET UNITYSDK_OFFSET(0xC393530)
#define PPMELJBNKPF__CREATE_G__ADDSKINID_3_1_OFFSET UNITYSDK_OFFSET(0xC393C10)
#define PPMELJBNKPF__CREATE_G__ISTARGET_3_0_OFFSET UNITYSDK_OFFSET(0xC393880)

inline static constexpr unsigned int PPMELJBNKPF_TypeDefinitionIndex = 62623;

	class PPMELJBNKPF : public ::System::Object
	{
	public:
		::DEHBFNOEMIF* ONAJFBCPFGO; // 0x10
		::BLIBHFKMKML* LJGCFGEGICI; // 0x18
		::System::Void _ctor(::BLIBHFKMKML* a1, ::DEHBFNOEMIF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::BLIBHFKMKML*, ::DEHBFNOEMIF*))((::PBYTE)hIl2Cpp + PPMELJBNKPF_CTOR_OFFSET))(this, a1, a2);
		}

		::IDACDDHLPKI* BPLPBPMEODA(::AHHNGJGLOKA a1)
		{
			return ((::IDACDDHLPKI*(*)(::PVOID, ::AHHNGJGLOKA))((::PBYTE)hIl2Cpp + PPMELJBNKPF_BPLPBPMEODA_OFFSET))(this, a1);
		}

		static ::System::Boolean _Create_g__IsTarget_3_0(::System::UInt32 a1, ::PPMELJBNKPF___c__DisplayClass3_0 a2)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::PPMELJBNKPF___c__DisplayClass3_0))((::PBYTE)hIl2Cpp + PPMELJBNKPF__CREATE_G__ISTARGET_3_0_OFFSET))(a1, a2);
		}

		static ::System::Void _Create_g__AddSkinID_3_1(::RPG::GameCore::AvatarSkinType a1, ::System::UInt32 a2, ::PPMELJBNKPF___c__DisplayClass3_0 a3)
		{
			return ((::System::Void(*)(::RPG::GameCore::AvatarSkinType, ::System::UInt32, ::PPMELJBNKPF___c__DisplayClass3_0))((::PBYTE)hIl2Cpp + PPMELJBNKPF__CREATE_G__ADDSKINID_3_1_OFFSET))(a1, a2, a3);
		}

	};
