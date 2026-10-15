#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
class HEBOGJMNJIG;
namespace RPG::GameCore { class FloatCurve; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JJGIIBLBDMA_CTOR_OFFSET UNITYSDK_OFFSET(0xB204DA0)
#define JJGIIBLBDMA_EOEPHPNHMKD_OFFSET UNITYSDK_OFFSET(0xB204FC0)
#define JJGIIBLBDMA_LPMHFAHJLFF_OFFSET UNITYSDK_OFFSET(0xB205110)
#define JJGIIBLBDMA_MGKIMDPHINJ_OFFSET UNITYSDK_OFFSET(0xB205290)
#define JJGIIBLBDMA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB204E50)

	class JJGIIBLBDMA
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::FloatCurve*>* KGBMKDCECOJ; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::HEBOGJMNJIG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::HEBOGJMNJIG*))((::PBYTE)hIl2Cpp + JJGIIBLBDMA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJGIIBLBDMA_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void EOEPHPNHMKD(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + JJGIIBLBDMA_EOEPHPNHMKD_OFFSET))(this, a1);
		}

		::RPG::MVector3 LPMHFAHJLFF()
		{
			return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + JJGIIBLBDMA_LPMHFAHJLFF_OFFSET))(this);
		}

		::RPG::GameCore::FloatCurve* MGKIMDPHINJ(::System::String* a1)
		{
			return ((::RPG::GameCore::FloatCurve*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JJGIIBLBDMA_MGKIMDPHINJ_OFFSET))(this, a1);
		}

	};
