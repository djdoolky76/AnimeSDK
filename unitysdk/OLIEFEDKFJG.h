#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MGGNGAELECK.h"
class HNBNHMOOBCD;
class LFKFJKMGOGH;
namespace RPG::GameCore { class GameWorld; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define OLIEFEDKFJG_CTOR_OFFSET UNITYSDK_OFFSET(0xBF0D490)
#define OLIEFEDKFJG_FMEJOKMCMKI_OFFSET UNITYSDK_OFFSET(0xBF0D310)
#define OLIEFEDKFJG_HGEAKAIDNNF_OFFSET UNITYSDK_OFFSET(0xBF0CDE0)
#define OLIEFEDKFJG_NIFCLLPJFPB_OFFSET UNITYSDK_OFFSET(0xBF0D120)
#define OLIEFEDKFJG_ONPLUGININIT_OFFSET UNITYSDK_OFFSET(0xBF0CD40)
#define OLIEFEDKFJG_ONPLUGINUNINIT_OFFSET UNITYSDK_OFFSET(0xBF0CD90)
#define OLIEFEDKFJG_PFKHGPABMJE_OFFSET UNITYSDK_OFFSET(0xBF0D430)

	class OLIEFEDKFJG : public ::System::Object
	{
	public:
		::Il2CppArray<::HNBNHMOOBCD*>* LOOCAOKEODD; // 0x10
		::RPG::GameCore::GameWorld* IMMBMILPPFB; // 0x18
		::System::Collections::Generic::Stack_1<::System::Int32>* BMALFGCIPLF; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLIEFEDKFJG_CTOR_OFFSET))(this);
		}

		::System::Void OnPluginInit(::RPG::GameCore::GameWorld* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + OLIEFEDKFJG_ONPLUGININIT_OFFSET))(this, a1);
		}

		::System::Void OnPluginUninit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLIEFEDKFJG_ONPLUGINUNINIT_OFFSET))(this);
		}

		::System::Void HGEAKAIDNNF(::System::Int32 a1, ::MGGNGAELECK a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::MGGNGAELECK))((::PBYTE)hIl2Cpp + OLIEFEDKFJG_HGEAKAIDNNF_OFFSET))(this, a1, a2);
		}

		::System::Void NIFCLLPJFPB(::LFKFJKMGOGH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LFKFJKMGOGH*))((::PBYTE)hIl2Cpp + OLIEFEDKFJG_NIFCLLPJFPB_OFFSET))(this, a1);
		}

		::System::Void FMEJOKMCMKI(::LFKFJKMGOGH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LFKFJKMGOGH*))((::PBYTE)hIl2Cpp + OLIEFEDKFJG_FMEJOKMCMKI_OFFSET))(this, a1);
		}

		::System::Int32 PFKHGPABMJE()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OLIEFEDKFJG_PFKHGPABMJE_OFFSET))(this);
		}

	};
