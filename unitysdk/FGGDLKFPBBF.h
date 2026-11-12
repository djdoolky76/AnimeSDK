#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MMNMMKNDPGN.h"
class HIOEAKHGILF;
class NDDFLGNNMDK;
class PEEDLCHFAFL;
namespace RPG::GameCore { class MiniGameFlappyBirdBlockConfig; }

#define FGGDLKFPBBF_CTOR_OFFSET UNITYSDK_OFFSET(0x1667C230)
#define FGGDLKFPBBF_ELEBFCEAMOC_OFFSET UNITYSDK_OFFSET(0x1667CA10)
#define FGGDLKFPBBF_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1667C290)
#define FGGDLKFPBBF_HAPFLBLBMGP_OFFSET UNITYSDK_OFFSET(0x1667C320)
#define FGGDLKFPBBF_IHFOJLLJBPH_OFFSET UNITYSDK_OFFSET(0x1667C520)
#define FGGDLKFPBBF_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1667C240)
#define FGGDLKFPBBF_JDMNFBHKBME_OFFSET UNITYSDK_OFFSET(0x1667D350)
#define FGGDLKFPBBF_KFJJEJIFLEE_OFFSET UNITYSDK_OFFSET(0x1667C420)
#define FGGDLKFPBBF_LCINCJMOOEH_OFFSET UNITYSDK_OFFSET(0x1667CA70)
#define FGGDLKFPBBF_OABDJEBKACD_OFFSET UNITYSDK_OFFSET(0x1667C2E0)
#define FGGDLKFPBBF_PAMGIMGPEFB_OFFSET UNITYSDK_OFFSET(0x1667C9B0)

inline static constexpr unsigned int FGGDLKFPBBF_TypeDefinitionIndex = 79263;

	class FGGDLKFPBBF : public ::MMNMMKNDPGN
	{
	public:
		::System::Void _ctor(::NDDFLGNNMDK* a1, ::PEEDLCHFAFL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NDDFLGNNMDK*, ::PEEDLCHFAFL*))((::PBYTE)hIl2Cpp + FGGDLKFPBBF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGGDLKFPBBF_INITIALIZE_OFFSET))(this);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGGDLKFPBBF_EXECUTE_OFFSET))(this);
		}

		::System::Void OABDJEBKACD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGGDLKFPBBF_OABDJEBKACD_OFFSET))(this);
		}

		::System::Void HAPFLBLBMGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGGDLKFPBBF_HAPFLBLBMGP_OFFSET))(this);
		}

		::System::Void KFJJEJIFLEE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGGDLKFPBBF_KFJJEJIFLEE_OFFSET))(this);
		}

		::System::Void IHFOJLLJBPH(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FGGDLKFPBBF_IHFOJLLJBPH_OFFSET))(this, a1);
		}

		::System::Void PAMGIMGPEFB(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FGGDLKFPBBF_PAMGIMGPEFB_OFFSET))(this, a1);
		}

		::System::Void ELEBFCEAMOC(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FGGDLKFPBBF_ELEBFCEAMOC_OFFSET))(this, a1);
		}

		::System::Boolean LCINCJMOOEH(::System::Int32 a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FGGDLKFPBBF_LCINCJMOOEH_OFFSET))(this, a1, a2, a3, a4);
		}

		::HIOEAKHGILF* JDMNFBHKBME(::System::Int32 a1, ::RPG::GameCore::MiniGameFlappyBirdBlockConfig* a2, ::HIOEAKHGILF* a3, ::System::Single a4)
		{
			return ((::HIOEAKHGILF*(*)(::PVOID, ::System::Int32, ::RPG::GameCore::MiniGameFlappyBirdBlockConfig*, ::HIOEAKHGILF*, ::System::Single))((::PBYTE)hIl2Cpp + FGGDLKFPBBF_JDMNFBHKBME_OFFSET))(this, a1, a2, a3, a4);
		}

	};
