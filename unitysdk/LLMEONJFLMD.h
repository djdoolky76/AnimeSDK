#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HBLDGJCDJPF.h"
class ICCLDNDNHPD;
class KNFCEJEJINK;
namespace RPG::GameCore { class ChimeraDuelPlayAnimationNode; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LLMEONJFLMD_CTOR_OFFSET UNITYSDK_OFFSET(0xB7749A0)
#define LLMEONJFLMD_HJMLOLJBBPH_OFFSET UNITYSDK_OFFSET(0xB774900)

inline static constexpr unsigned int LLMEONJFLMD_TypeDefinitionIndex = 77691;

	class LLMEONJFLMD : public ::HBLDGJCDJPF
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* KPJHIOKBJEI; // 0x10
		::RPG::GameCore::ChimeraDuelPlayAnimationNode* EABKOHGCHFP; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLMEONJFLMD_CTOR_OFFSET))(this);
		}

		::KNFCEJEJINK* HJMLOLJBBPH(::ICCLDNDNHPD* a1)
		{
			return ((::KNFCEJEJINK*(*)(::PVOID, ::ICCLDNDNHPD*))((::PBYTE)hIl2Cpp + LLMEONJFLMD_HJMLOLJBBPH_OFFSET))(this, a1);
		}

	};
