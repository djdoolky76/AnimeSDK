#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FTransform3D.h"
#include "unitysdk/MoleMole/HollowChessboard/ChessboardView/LineInfo.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/PIHKNACMKIC.h"

class CEIAAPADPPO;
class FBAMLABJMKF;
class MDPPENCOFEI;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class MaterialPropertyBlock; }

#define HMIMFKLIHFO_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x12E8B060)
#define HMIMFKLIHFO_BJANDJKKNCD_OFFSET UNITYSDK_OFFSET(0x12E8A9D0)
#define HMIMFKLIHFO_CGLCOECLDDP_OFFSET UNITYSDK_OFFSET(0x12E8A240)
#define HMIMFKLIHFO_DCOFOBOFKFA_OFFSET UNITYSDK_OFFSET(0x12E8AE50)
#define HMIMFKLIHFO_HLOEOHIILAC_OFFSET UNITYSDK_OFFSET(0x12E8ABC0)
#define HMIMFKLIHFO_KLJFKLHGPBE_OFFSET UNITYSDK_OFFSET(0x12E8AE00)
#define HMIMFKLIHFO_NIBNFJGLJFF_OFFSET UNITYSDK_OFFSET(0x12E8A400)
#define HMIMFKLIHFO_OGPPCHOCDMP_OFFSET UNITYSDK_OFFSET(0x12E8A910)
#define HMIMFKLIHFO_OPKDILFHHPM_OFFSET UNITYSDK_OFFSET(0x12E8B250)
#define HMIMFKLIHFO_PCGNOBLNBBO_OFFSET UNITYSDK_OFFSET(0x12E8A680)
#define HMIMFKLIHFO__CCTOR_OFFSET UNITYSDK_OFFSET(0x12E8A200)
#define HMIMFKLIHFO__CTOR_OFFSET UNITYSDK_OFFSET(0x12E8A100)

inline static constexpr unsigned int HMIMFKLIHFO_TypeDefinitionIndex = 88238;

class HMIMFKLIHFO : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_CPIPCGNAGAG()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(HMIMFKLIHFO_TypeDefinitionIndex)->GetStaticField(0x12100);
	}
	::UnityEngine::MaterialPropertyBlock* LMKAPKIGCPC; // 0x10
	::FBAMLABJMKF* GFFCBBDKCGC; // 0x18
	::System::Func_2<::MoleMole::HollowChessboard::ChessboardView::LineInfo, ::Foundation::Unreal::FTransform3D>* IHGBMOHILAK; // 0x20
	::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::ChessboardView::LineInfo, ::MDPPENCOFEI*>* HJBJEPGMDPH; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::String*>* LLHFFGGJOJB; // 0x30
	::UnityEngine::Vector3 DHCHCCPOHDB; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMIMFKLIHFO__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HMIMFKLIHFO__CCTOR_OFFSET))();
	}

	::System::Void CGLCOECLDDP(::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::String*>* NFBGFHDACPD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::String*>*))((::PBYTE)hIl2Cpp + HMIMFKLIHFO_CGLCOECLDDP_OFFSET))(this, NFBGFHDACPD);
	}

	::MDPPENCOFEI* NIBNFJGLJFF(::MoleMole::HollowChessboard::ChessboardView::LineInfo KBACEFCPNPM, ::System::Boolean KOPBDLBEPPA)
	{
		return ((::MDPPENCOFEI*(*)(::PVOID, ::MoleMole::HollowChessboard::ChessboardView::LineInfo, ::System::Boolean))((::PBYTE)hIl2Cpp + HMIMFKLIHFO_NIBNFJGLJFF_OFFSET))(this, KBACEFCPNPM, KOPBDLBEPPA);
	}

	::System::Void OGPPCHOCDMP(::MDPPENCOFEI* DDMAKIPBKOG, ::System::Boolean JPIPHCNAEOC)
	{
		return ((::System::Void(*)(::PVOID, ::MDPPENCOFEI*, ::System::Boolean))((::PBYTE)hIl2Cpp + HMIMFKLIHFO_OGPPCHOCDMP_OFFSET))(this, DDMAKIPBKOG, JPIPHCNAEOC);
	}

	::System::Void BJANDJKKNCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMIMFKLIHFO_BJANDJKKNCD_OFFSET))(this);
	}

	::System::Void HLOEOHIILAC(::CEIAAPADPPO* ECMMKCJLBMD)
	{
		return ((::System::Void(*)(::PVOID, ::CEIAAPADPPO*))((::PBYTE)hIl2Cpp + HMIMFKLIHFO_HLOEOHIILAC_OFFSET))(this, ECMMKCJLBMD);
	}

	::System::Void KLJFKLHGPBE(::System::Func_2<::MoleMole::HollowChessboard::ChessboardView::LineInfo, ::Foundation::Unreal::FTransform3D>* OCLBCACECHK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_2<::MoleMole::HollowChessboard::ChessboardView::LineInfo, ::Foundation::Unreal::FTransform3D>*))((::PBYTE)hIl2Cpp + HMIMFKLIHFO_KLJFKLHGPBE_OFFSET))(this, OCLBCACECHK);
	}

	::System::Void DCOFOBOFKFA(::MoleMole::HollowChessboard::ChessboardView::LineInfo KBACEFCPNPM, ::System::Boolean KOPBDLBEPPA)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::ChessboardView::LineInfo, ::System::Boolean))((::PBYTE)hIl2Cpp + HMIMFKLIHFO_DCOFOBOFKFA_OFFSET))(this, KBACEFCPNPM, KOPBDLBEPPA);
	}

	::PIHKNACMKIC PCGNOBLNBBO(::MoleMole::HollowChessboard::ChessboardView::LineInfo KBACEFCPNPM, ::Foundation::Unreal::FTransform3D HHMGKPIHDPJ, ::System::Boolean KOPBDLBEPPA)
	{
		return ((::PIHKNACMKIC(*)(::PVOID, ::MoleMole::HollowChessboard::ChessboardView::LineInfo, ::Foundation::Unreal::FTransform3D, ::System::Boolean))((::PBYTE)hIl2Cpp + HMIMFKLIHFO_PCGNOBLNBBO_OFFSET))(this, KBACEFCPNPM, HHMGKPIHDPJ, KOPBDLBEPPA);
	}

	::System::Void BBOMJDBNHIC(::FBAMLABJMKF* COBEJJHGMPO, ::UnityEngine::Vector3 GBEBMKFCODC)
	{
		return ((::System::Void(*)(::PVOID, ::FBAMLABJMKF*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + HMIMFKLIHFO_BBOMJDBNHIC_OFFSET))(this, COBEJJHGMPO, GBEBMKFCODC);
	}

	::System::Void OPKDILFHHPM(::MoleMole::HollowChessboard::ChessboardView::LineInfo KBACEFCPNPM, ::System::Boolean JPIPHCNAEOC)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::ChessboardView::LineInfo, ::System::Boolean))((::PBYTE)hIl2Cpp + HMIMFKLIHFO_OPKDILFHHPM_OFFSET))(this, KBACEFCPNPM, JPIPHCNAEOC);
	}
};
