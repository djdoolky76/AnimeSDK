#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ExeCode.h"
#include "unitysdk/System/Object.h"
class CEOABLKMPKE;
class HGCEOEHGPPE;
class JIAFOPELMJJ;
class KGPCBBIOGLB;
namespace System { class Object; }

#define JIAFOPELMJJ___C__DISPLAYCLASS11_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB1CF260)
#define JIAFOPELMJJ___C__DISPLAYCLASS11_0___MAKEAUDIOPACKPROGRESS_B__0_OFFSET UNITYSDK_OFFSET(0xB1E5020)

inline static constexpr unsigned int JIAFOPELMJJ___c__DisplayClass11_0_TypeDefinitionIndex = 59501;

	class JIAFOPELMJJ___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::CEOABLKMPKE* audioHPatch; // 0x10
		::JIAFOPELMJJ* __4__this; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIAFOPELMJJ___C__DISPLAYCLASS11_0_CTOR_OFFSET))(this);
		}

		::System::Void __MakeAudioPackProgress_b__0(::HGCEOEHGPPE* a1, ::KGPCBBIOGLB* a2, ::System::Object* a3, ::RPG::Client::ExeCode a4)
		{
			return ((::System::Void(*)(::PVOID, ::HGCEOEHGPPE*, ::KGPCBBIOGLB*, ::System::Object*, ::RPG::Client::ExeCode))((::PBYTE)hIl2Cpp + JIAFOPELMJJ___C__DISPLAYCLASS11_0___MAKEAUDIOPACKPROGRESS_B__0_OFFSET))(this, a1, a2, a3, a4);
		}

	};
