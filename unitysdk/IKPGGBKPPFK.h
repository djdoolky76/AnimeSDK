#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FKCPBAAEJJO.h"
#include "unitysdk/MJHDNMKGLBJ.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/RaycastHit.h"

class FOLOGHLENFB;
namespace MoleMole::Config { class ItemDropEffectSetting; }
namespace System { class Object; }

#define IKPGGBKPPFK_GALGFCPKMGC_OFFSET UNITYSDK_OFFSET(0x141F0830)
#define IKPGGBKPPFK_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x141F0660)
#define IKPGGBKPPFK_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x141F0780)
#define IKPGGBKPPFK_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x141F0900)
#define IKPGGBKPPFK_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x141F05D0)
#define IKPGGBKPPFK__CCTOR_OFFSET UNITYSDK_OFFSET(0x141F06B0)
#define IKPGGBKPPFK__CTOR_OFFSET UNITYSDK_OFFSET(0x141F0730)

inline static constexpr unsigned int IKPGGBKPPFK_TypeDefinitionIndex = 47067;

class IKPGGBKPPFK : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x49; // 0x0
	::MoleMole::Config::ItemDropEffectSetting* HABGMKGAILD; // 0x48
	::FOLOGHLENFB* EEBHGDHLABE; // 0x50
	::Il2CppArray<::UnityEngine::RaycastHit>* ACBMIMOLCHN; // 0x58
	::System::Boolean EJGMNJPJDFL; // 0x60
	::System::Boolean FCCLKJDIIGK; // 0x61
	::System::Byte _padding0[0x2];
	::System::Int32 IMNJPOHHJNI; // 0x64
	::System::Nullable_1<::System::Object*> FCPKJAMLCJJ; // 0x68
	::System::Byte _padding1[0x4];
	::UnityEngine::Bounds FMHCDDIKLHG; // 0x74
	::FKCPBAAEJJO OFOIOBOFLMG; // 0x8C
	::System::Int32 LONDMNEMFKN; // 0x90

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IKPGGBKPPFK__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKPGGBKPPFK__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKPGGBKPPFK_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IKPGGBKPPFK_GETCLASSID_OFFSET))(this);
	}

	static ::IKPGGBKPPFK* JFDOOELFAOA()
	{
		return ((::IKPGGBKPPFK*(*)())((::PBYTE)hIl2Cpp + IKPGGBKPPFK_JFDOOELFAOA_OFFSET))();
	}

	::System::Void GALGFCPKMGC(::System::Int32 JFMJMHDMNOK, ::System::Int32 JHFKDGBCOBA, ::FKCPBAAEJJO ANABLMFCGBH, ::System::Nullable_1<::System::Object*> KMGJPMEJDJJ, ::FOLOGHLENFB* CIOIFPFELFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::FKCPBAAEJJO, ::System::Nullable_1<::System::Object*>, ::FOLOGHLENFB*))((::PBYTE)hIl2Cpp + IKPGGBKPPFK_GALGFCPKMGC_OFFSET))(this, JFMJMHDMNOK, JHFKDGBCOBA, ANABLMFCGBH, KMGJPMEJDJJ, CIOIFPFELFM);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IKPGGBKPPFK_MEFBHFEOKGH_OFFSET))(this);
	}
};
