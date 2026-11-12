#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ICCLDNDNHPD;
namespace RPG::Client::Prop { class ChimeraDuelBubbleEvent; }
namespace System { class Action; }
namespace System { template <typename T> class Func_1; }

#define EJLDIMFJKIM_CTOR_OFFSET UNITYSDK_OFFSET(0x16428AF0)
#define EJLDIMFJKIM_EXECUTE_OFFSET UNITYSDK_OFFSET(0x16428B00)
#define EJLDIMFJKIM_TICK_OFFSET UNITYSDK_OFFSET(0x16428BE0)

inline static constexpr unsigned int EJLDIMFJKIM_TypeDefinitionIndex = 80403;

	class EJLDIMFJKIM : public ::System::Object
	{
	public:
		::System::Func_1<::RPG::Client::Prop::ChimeraDuelBubbleEvent*>* PHKEALDENKI; // 0x10
		::System::Action* LGAOOKPFIMF; // 0x18
		::RPG::Client::Prop::ChimeraDuelBubbleEvent* FLPMDDEMIBJ; // 0x20
		::System::Boolean OELBLBCINNB; // 0x28
		::System::Boolean LNPALNBIBFK; // 0x29
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
