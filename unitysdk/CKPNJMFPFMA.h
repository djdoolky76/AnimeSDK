#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MKINHDIFEBD.h"
class KAKADGHNMFK;
class MKINHDIFEBD;
namespace RPG::GameCore { class ChimeraDuelEntityCompositeComparer; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CKPNJMFPFMA_CTOR_OFFSET UNITYSDK_OFFSET(0xD770910)
#define CKPNJMFPFMA_DDAIPDEDJBK_OFFSET UNITYSDK_OFFSET(0xD7709F0)

inline static constexpr unsigned int CKPNJMFPFMA_TypeDefinitionIndex = 77443;

	class CKPNJMFPFMA : public ::MKINHDIFEBD
	{
	public:
		::System::Collections::Generic::List_1<::MKINHDIFEBD*>* AAMPDBBPEBD; // 0x18
		::System::Void _ctor(::RPG::GameCore::ChimeraDuelEntityCompositeComparer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraDuelEntityCompositeComparer*))((::PBYTE)hIl2Cpp + CKPNJMFPFMA_CTOR_OFFSET))(this, a1);
		}

		::System::Int32 DDAIPDEDJBK(::KAKADGHNMFK* a1, ::KAKADGHNMFK* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::KAKADGHNMFK*, ::KAKADGHNMFK*))((::PBYTE)hIl2Cpp + CKPNJMFPFMA_DDAIPDEDJBK_OFFSET))(this, a1, a2);
		}

	};
