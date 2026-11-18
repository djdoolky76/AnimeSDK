#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MEMPIHFBILL;
namespace MoleMole::Battle { class Entity; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define BOKKOCFLOPI_BMDKEFLMHPF_OFFSET UNITYSDK_OFFSET(0x13987310)
#define BOKKOCFLOPI_GILMDHKKELC_OFFSET UNITYSDK_OFFSET(0x13987460)
#define BOKKOCFLOPI_OKIBCPJABLD_OFFSET UNITYSDK_OFFSET(0x13987500)

inline static constexpr unsigned int BOKKOCFLOPI_TypeDefinitionIndex = 65886;

class BOKKOCFLOPI : public ::System::Object
{
public:
	static ::System::Boolean BMDKEFLMHPF(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + BOKKOCFLOPI_BMDKEFLMHPF_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Boolean GILMDHKKELC(::MoleMole::Battle::Entity* KECKGDFIALJ, ::MEMPIHFBILL* PAAKENELHJL)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::MEMPIHFBILL*))((::PBYTE)hIl2Cpp + BOKKOCFLOPI_GILMDHKKELC_OFFSET))(KECKGDFIALJ, PAAKENELHJL);
	}

	static ::System::Boolean OKIBCPJABLD(::System::Collections::Generic::IReadOnlyList_1<::MoleMole::Battle::Entity*>* BCOHNMFEPJH, ::System::Collections::Generic::IReadOnlyList_1<::MEMPIHFBILL*>* DMBNDKHEIGD, ::System::Action* PJCLFMFBCBG)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::IReadOnlyList_1<::MoleMole::Battle::Entity*>*, ::System::Collections::Generic::IReadOnlyList_1<::MEMPIHFBILL*>*, ::System::Action*))((::PBYTE)hIl2Cpp + BOKKOCFLOPI_OKIBCPJABLD_OFFSET))(BCOHNMFEPJH, DMBNDKHEIGD, PJCLFMFBCBG);
	}
};
