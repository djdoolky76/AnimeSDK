#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HBLDGJCDJPF.h"
class ICCLDNDNHPD;
class KNFCEJEJINK;
namespace RPG::GameCore { class ChimeraDuelWaitReplaceEffectNode; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LJEBKOIENMG_CTOR_OFFSET UNITYSDK_OFFSET(0xB6E1B50)
#define LJEBKOIENMG_HJMLOLJBBPH_OFFSET UNITYSDK_OFFSET(0xB6E1A50)

inline static constexpr unsigned int LJEBKOIENMG_TypeDefinitionIndex = 77701;

	class LJEBKOIENMG : public ::HBLDGJCDJPF
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* KPJHIOKBJEI; // 0x10
		::RPG::GameCore::ChimeraDuelWaitReplaceEffectNode* EABKOHGCHFP; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJEBKOIENMG_CTOR_OFFSET))(this);
		}

		::KNFCEJEJINK* HJMLOLJBBPH(::ICCLDNDNHPD* a1)
		{
			return ((::KNFCEJEJINK*(*)(::PVOID, ::ICCLDNDNHPD*))((::PBYTE)hIl2Cpp + LJEBKOIENMG_HJMLOLJBBPH_OFFSET))(this, a1);
		}

	};
