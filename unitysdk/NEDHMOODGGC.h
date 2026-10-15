#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HBLDGJCDJPF.h"
class ICCLDNDNHPD;
class KNFCEJEJINK;
namespace RPG::Client::Prop { class ChimeraDuelBubbleEvent; }
namespace System { template <typename T> class Func_1; }

#define NEDHMOODGGC_CTOR_OFFSET UNITYSDK_OFFSET(0xBB52B90)
#define NEDHMOODGGC_HJMLOLJBBPH_OFFSET UNITYSDK_OFFSET(0xBB52BA0)

inline static constexpr unsigned int NEDHMOODGGC_TypeDefinitionIndex = 77698;

	class NEDHMOODGGC : public ::HBLDGJCDJPF
	{
	public:
		::System::Func_1<::RPG::Client::Prop::ChimeraDuelBubbleEvent*>* PHKEALDENKI; // 0x10
		::System::Boolean MFLJMFPCNFL; // 0x18
		::System::Void _ctor(::System::Func_1<::RPG::Client::Prop::ChimeraDuelBubbleEvent*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_1<::RPG::Client::Prop::ChimeraDuelBubbleEvent*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + NEDHMOODGGC_CTOR_OFFSET))(this, a1, a2);
		}

		::KNFCEJEJINK* HJMLOLJBBPH(::ICCLDNDNHPD* a1)
		{
			return ((::KNFCEJEJINK*(*)(::PVOID, ::ICCLDNDNHPD*))((::PBYTE)hIl2Cpp + NEDHMOODGGC_HJMLOLJBBPH_OFFSET))(this, a1);
		}

	};
