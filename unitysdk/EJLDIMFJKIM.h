#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ICCLDNDNHPD;
namespace RPG::Client::Prop { class ChimeraDuelBubbleEvent; }
namespace System { class Action; }
namespace System { template <typename T> class Func_1; }

#define EJLDIMFJKIM_CTOR_OFFSET UNITYSDK_OFFSET(0x154E1130)
#define EJLDIMFJKIM_EXECUTE_OFFSET UNITYSDK_OFFSET(0x154E1140)
#define EJLDIMFJKIM_TICK_OFFSET UNITYSDK_OFFSET(0x154E1220)

inline static constexpr unsigned int EJLDIMFJKIM_TypeDefinitionIndex = 77668;

	class EJLDIMFJKIM : public ::System::Object
	{
	public:
		::RPG::Client::Prop::ChimeraDuelBubbleEvent* FLPMDDEMIBJ; // 0x10
		::System::Func_1<::RPG::Client::Prop::ChimeraDuelBubbleEvent*>* PHKEALDENKI; // 0x18
		::System::Action* LGAOOKPFIMF; // 0x20
		::System::Boolean LNPALNBIBFK; // 0x28
		::System::Boolean OELBLBCINNB; // 0x29
		::System::Byte _padding0[0x2];
		::System::Single HBDJCFFDGDD; // 0x2C
		::System::Void _ctor(::System::Func_1<::RPG::Client::Prop::ChimeraDuelBubbleEvent*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_1<::RPG::Client::Prop::ChimeraDuelBubbleEvent*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + EJLDIMFJKIM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Execute(::ICCLDNDNHPD* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::ICCLDNDNHPD*, ::System::Action*))((::PBYTE)hIl2Cpp + EJLDIMFJKIM_EXECUTE_OFFSET))(this, a1, a2);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EJLDIMFJKIM_TICK_OFFSET))(this, a1);
		}

	};
