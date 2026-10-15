#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OBFADADBJHB_LDHPKHDCGAB.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class EDHPIGIAOLE;
class EFODGECFLLC;
class HIOEAKHGILF;
class PEEDLCHFAFL;
namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define OBFADADBJHB_AAJNAFJEDHB_OFFSET UNITYSDK_OFFSET(0xBD34D10)
#define OBFADADBJHB_BKLGFNBDELC_OFFSET UNITYSDK_OFFSET(0xBD35C90)
#define OBFADADBJHB_CBNADNNKIEG_OFFSET UNITYSDK_OFFSET(0xBD35A50)
#define OBFADADBJHB_CFPMLIGLAMB_OFFSET UNITYSDK_OFFSET(0xBD33AB0)
#define OBFADADBJHB_CLJGDMAMPFL_OFFSET UNITYSDK_OFFSET(0xBD33BA0)
#define OBFADADBJHB_CTOR_OFFSET UNITYSDK_OFFSET(0xBD334B0)
#define OBFADADBJHB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBD33580)
#define OBFADADBJHB_DPOJIPHHJKL_OFFSET UNITYSDK_OFFSET(0xBD34E70)
#define OBFADADBJHB_EHJPGBJOPJN_OFFSET UNITYSDK_OFFSET(0xBD34C90)
#define OBFADADBJHB_ELLFMGCCMPK_OFFSET UNITYSDK_OFFSET(0xBD35980)
#define OBFADADBJHB_FCAKDGDDNPM_OFFSET UNITYSDK_OFFSET(0xBD355D0)
#define OBFADADBJHB_FDFDACJGEOK_OFFSET UNITYSDK_OFFSET(0xBD33990)
#define OBFADADBJHB_FILEDMDNIBC_OFFSET UNITYSDK_OFFSET(0xBD354A0)
#define OBFADADBJHB_FKHPMAHIBEI_OFFSET UNITYSDK_OFFSET(0xBD350D0)
#define OBFADADBJHB_FLCLCKKDCDP_OFFSET UNITYSDK_OFFSET(0xBD33690)
#define OBFADADBJHB_IHJBCGFENGC_OFFSET UNITYSDK_OFFSET(0xBD34740)
#define OBFADADBJHB_JALABEAAGBK_OFFSET UNITYSDK_OFFSET(0xBD357B0)
#define OBFADADBJHB_JFLLLHBBONK_OFFSET UNITYSDK_OFFSET(0xBD34930)
#define OBFADADBJHB_MFDECFHNFNC_OFFSET UNITYSDK_OFFSET(0xBD33920)
#define OBFADADBJHB_NNKPMJICHBD_OFFSET UNITYSDK_OFFSET(0xBD352A0)
#define OBFADADBJHB_OGNBMBKFDGG_OFFSET UNITYSDK_OFFSET(0xBD340D0)

inline static constexpr unsigned int OBFADADBJHB_TypeDefinitionIndex = 76883;

	class OBFADADBJHB : public ::System::Object
	{
	public:
		::PEEDLCHFAFL* PDENFEFCAGN; // 0x10
		::OBFADADBJHB_LDHPKHDCGAB IALMHOAGKIK; // 0x18
		::EFODGECFLLC* EEFMDEHLLFI; // 0x20
		::System::Void _ctor(::EFODGECFLLC* a1, ::PEEDLCHFAFL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::EFODGECFLLC*, ::PEEDLCHFAFL*))((::PBYTE)hIl2Cpp + OBFADADBJHB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBFADADBJHB_DISPOSE_OFFSET))(this);
		}

		::System::Void FLCLCKKDCDP(::System::UInt32 a1, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::String*))((::PBYTE)hIl2Cpp + OBFADADBJHB_FLCLCKKDCDP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void MFDECFHNFNC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OBFADADBJHB_MFDECFHNFNC_OFFSET))(this, a1);
		}

		::System::Boolean CLJGDMAMPFL(::HIOEAKHGILF* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::HIOEAKHGILF*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + OBFADADBJHB_CLJGDMAMPFL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OGNBMBKFDGG(::HIOEAKHGILF* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::System::Boolean))((::PBYTE)hIl2Cpp + OBFADADBJHB_OGNBMBKFDGG_OFFSET))(this, a1, a2);
		}

		::System::Void JFLLLHBBONK(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + OBFADADBJHB_JFLLLHBBONK_OFFSET))(this, a1);
		}

		::System::Void EHJPGBJOPJN(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + OBFADADBJHB_EHJPGBJOPJN_OFFSET))(this, a1);
		}

		::System::Void AAJNAFJEDHB(::Entitas::IContext* a1, ::Entitas::IEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + OBFADADBJHB_AAJNAFJEDHB_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::GameEntity* FDFDACJGEOK(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + OBFADADBJHB_FDFDACJGEOK_OFFSET))(this, a1);
		}

		::EDHPIGIAOLE* CFPMLIGLAMB(::RPG::GameCore::GameEntity* a1)
		{
			return ((::EDHPIGIAOLE*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + OBFADADBJHB_CFPMLIGLAMB_OFFSET))(this, a1);
		}

		::System::Void DPOJIPHHJKL(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + OBFADADBJHB_DPOJIPHHJKL_OFFSET))(this, a1);
		}

		::System::Void NNKPMJICHBD(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + OBFADADBJHB_NNKPMJICHBD_OFFSET))(this, a1);
		}

		::System::Void FILEDMDNIBC(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + OBFADADBJHB_FILEDMDNIBC_OFFSET))(this, a1);
		}

		::System::Void FCAKDGDDNPM(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + OBFADADBJHB_FCAKDGDDNPM_OFFSET))(this, a1);
		}

		::System::Void ELLFMGCCMPK(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + OBFADADBJHB_ELLFMGCCMPK_OFFSET))(this, a1);
		}

		::System::Void IHJBCGFENGC(::HIOEAKHGILF* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::System::Boolean))((::PBYTE)hIl2Cpp + OBFADADBJHB_IHJBCGFENGC_OFFSET))(this, a1, a2);
		}

		::System::Void FKHPMAHIBEI(::HIOEAKHGILF* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::System::Boolean))((::PBYTE)hIl2Cpp + OBFADADBJHB_FKHPMAHIBEI_OFFSET))(this, a1, a2);
		}

		::System::Void JALABEAAGBK(::HIOEAKHGILF* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::System::Boolean))((::PBYTE)hIl2Cpp + OBFADADBJHB_JALABEAAGBK_OFFSET))(this, a1, a2);
		}

		::System::Void CBNADNNKIEG(::HIOEAKHGILF* a1, ::HIOEAKHGILF* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::HIOEAKHGILF*, ::System::Boolean))((::PBYTE)hIl2Cpp + OBFADADBJHB_CBNADNNKIEG_OFFSET))(this, a1, a2, a3);
		}

		::System::Void BKLGFNBDELC(::HIOEAKHGILF* a1, ::HIOEAKHGILF* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::HIOEAKHGILF*, ::System::Boolean))((::PBYTE)hIl2Cpp + OBFADADBJHB_BKLGFNBDELC_OFFSET))(this, a1, a2, a3);
		}

	};
