#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/CMOPPAAGJLK.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/HFPLNFLBBKI.h"
#include "unitysdk/PHAHJCOGLJK.h"

class FPKMCDJIKEB;
class MMDOKAHEMKG;
class NILAHGKDJNN;
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ONHAMCEJKAM_AMAOMNENEOK_OFFSET UNITYSDK_OFFSET(0xFB9B4F0)
#define ONHAMCEJKAM_FGCFIIMAJFP_OFFSET UNITYSDK_OFFSET(0xFB9CD70)
#define ONHAMCEJKAM_FMNNNCNNPJH_OFFSET UNITYSDK_OFFSET(0xFB9BF70)
#define ONHAMCEJKAM_GHJEJGOBDPG_OFFSET UNITYSDK_OFFSET(0xFB9C110)
#define ONHAMCEJKAM_GLEJMKLOMBP_OFFSET UNITYSDK_OFFSET(0xFB9C320)
#define ONHAMCEJKAM_JPOLBPCHLHK_OFFSET UNITYSDK_OFFSET(0xFB9C0C0)
#define ONHAMCEJKAM_NPLNJLKFEPB_OFFSET UNITYSDK_OFFSET(0xFB9B7C0)
#define ONHAMCEJKAM_OLLNNCMNNKN_OFFSET UNITYSDK_OFFSET(0xFB9C600)
#define ONHAMCEJKAM_PNOGCAHFEOK_OFFSET UNITYSDK_OFFSET(0xFB9BC90)
#define ONHAMCEJKAM__CTOR_OFFSET UNITYSDK_OFFSET(0xFB9B4E0)

inline static constexpr unsigned int ONHAMCEJKAM_TypeDefinitionIndex = 66998;

class ONHAMCEJKAM : public ::System::Object
{
public:
	static ::System::String** StaticGet_AOGHOMIOONK()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ONHAMCEJKAM_TypeDefinitionIndex)->GetStaticField(0x42900);
	}
	::MMDOKAHEMKG* AHDBODFHDDN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONHAMCEJKAM__CTOR_OFFSET))(this);
	}

	::System::Void AMAOMNENEOK(::Foundation::AssetPath CEKNHIDPNNA, ::FPKMCDJIKEB* KCDGPMPEPBC)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::FPKMCDJIKEB*))((::PBYTE)hIl2Cpp + ONHAMCEJKAM_AMAOMNENEOK_OFFSET))(this, CEKNHIDPNNA, KCDGPMPEPBC);
	}

	::System::Void PNOGCAHFEOK(::System::Collections::Generic::List_1<::PHAHJCOGLJK>* HPANBGPMIID)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::PHAHJCOGLJK>*))((::PBYTE)hIl2Cpp + ONHAMCEJKAM_PNOGCAHFEOK_OFFSET))(this, HPANBGPMIID);
	}

	::Cysharp::Threading::Tasks::UniTask_1<::MMDOKAHEMKG*> FMNNNCNNPJH(::System::String* INHDAAAMAAL, ::Foundation::AssetPath CEKNHIDPNNA, ::FPKMCDJIKEB* KCDGPMPEPBC)
	{
		return ((::Cysharp::Threading::Tasks::UniTask_1<::MMDOKAHEMKG*>(*)(::PVOID, ::System::String*, ::Foundation::AssetPath, ::FPKMCDJIKEB*))((::PBYTE)hIl2Cpp + ONHAMCEJKAM_FMNNNCNNPJH_OFFSET))(this, INHDAAAMAAL, CEKNHIDPNNA, KCDGPMPEPBC);
	}

	static ::System::Void JPOLBPCHLHK()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ONHAMCEJKAM_JPOLBPCHLHK_OFFSET))();
	}

	::System::Void GHJEJGOBDPG(::SimpleJSON::JSONNode* ONGAKGHIGFO)
	{
		return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + ONHAMCEJKAM_GHJEJGOBDPG_OFFSET))(this, ONGAKGHIGFO);
	}

	::MMDOKAHEMKG* GLEJMKLOMBP(::Foundation::AssetPath CEKNHIDPNNA, ::FPKMCDJIKEB* KCDGPMPEPBC)
	{
		return ((::MMDOKAHEMKG*(*)(::PVOID, ::Foundation::AssetPath, ::FPKMCDJIKEB*))((::PBYTE)hIl2Cpp + ONHAMCEJKAM_GLEJMKLOMBP_OFFSET))(this, CEKNHIDPNNA, KCDGPMPEPBC);
	}

	static ::System::Void OLLNNCMNNKN(::System::String* INHDAAAMAAL, ::System::Collections::Generic::List_1<::HFPLNFLBBKI>* MLGPECCAHOH, ::NILAHGKDJNN* GAPEENBKDAK)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Generic::List_1<::HFPLNFLBBKI>*, ::NILAHGKDJNN*))((::PBYTE)hIl2Cpp + ONHAMCEJKAM_OLLNNCMNNKN_OFFSET))(INHDAAAMAAL, MLGPECCAHOH, GAPEENBKDAK);
	}

	static ::System::String* FGCFIIMAJFP()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + ONHAMCEJKAM_FGCFIIMAJFP_OFFSET))();
	}

	::System::Void NPLNJLKFEPB(::CMOPPAAGJLK CPFFPLPPDDI)
	{
		return ((::System::Void(*)(::PVOID, ::CMOPPAAGJLK))((::PBYTE)hIl2Cpp + ONHAMCEJKAM_NPLNJLKFEPB_OFFSET))(this, CPFFPLPPDDI);
	}
};
