#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ODGPPIHLOFF;
namespace RPG { template <typename T> class PoolList_1; }

#define BDDAELGEKFF___C__DISPLAYCLASS39_0_CTOR_OFFSET UNITYSDK_OFFSET(0x162F02D0)
#define BDDAELGEKFF___C__DISPLAYCLASS39_0__SUBMITSTACK_B__0_OFFSET UNITYSDK_OFFSET(0x162F1860)

inline static constexpr unsigned int BDDAELGEKFF___c__DisplayClass39_0_TypeDefinitionIndex = 49447;

	class BDDAELGEKFF___c__DisplayClass39_0 : public ::System::Object
	{
	public:
		::RPG::PoolList_1<::ODGPPIHLOFF*>* _asyncHandles; // 0x10
		::System::Boolean hasAsyncApply; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDDAELGEKFF___C__DISPLAYCLASS39_0_CTOR_OFFSET))(this);
		}

		::System::Void _SubmitStack_b__0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BDDAELGEKFF___C__DISPLAYCLASS39_0__SUBMITSTACK_B__0_OFFSET))(this, a1);
		}

	};
