#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HBLDGJCDJPF.h"
class HBLDGJCDJPF;
class ICCLDNDNHPD;
class KNFCEJEJINK;
namespace RPG::GameCore { class ChimeraDuelRepeatNode; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CAGDMMGCFBA_CTOR_OFFSET UNITYSDK_OFFSET(0xC474AB0)
#define CAGDMMGCFBA_HJMLOLJBBPH_OFFSET UNITYSDK_OFFSET(0xC474AC0)

inline static constexpr unsigned int CAGDMMGCFBA_TypeDefinitionIndex = 77693;

	class CAGDMMGCFBA : public ::HBLDGJCDJPF
	{
	public:
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::HBLDGJCDJPF*>*>* HAPEFBKFFOA; // 0x10
		::RPG::GameCore::ChimeraDuelRepeatNode* EABKOHGCHFP; // 0x18
		::System::Void _ctor(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::HBLDGJCDJPF*>*>* a1, ::RPG::GameCore::ChimeraDuelRepeatNode* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::HBLDGJCDJPF*>*>*, ::RPG::GameCore::ChimeraDuelRepeatNode*))((::PBYTE)hIl2Cpp + CAGDMMGCFBA_CTOR_OFFSET))(this, a1, a2);
		}

		::KNFCEJEJINK* HJMLOLJBBPH(::ICCLDNDNHPD* a1)
		{
			return ((::KNFCEJEJINK*(*)(::PVOID, ::ICCLDNDNHPD*))((::PBYTE)hIl2Cpp + CAGDMMGCFBA_HJMLOLJBBPH_OFFSET))(this, a1);
		}

	};
