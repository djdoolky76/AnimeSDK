#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class BaseChimeraDuelNode; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define HAMNJNDCEEH_CTOR_OFFSET UNITYSDK_OFFSET(0x16B1DEB0)
#define HAMNJNDCEEH_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0x16B1CF00)
#define HAMNJNDCEEH_PHMGIKGGMHA_OFFSET UNITYSDK_OFFSET(0x16B1D990)

inline static constexpr unsigned int HAMNJNDCEEH_TypeDefinitionIndex = 80352;

	class HAMNJNDCEEH : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAMNJNDCEEH_CTOR_OFFSET))(this);
		}

		::System::Boolean KFGJEKJHIMB(::RPG::GameCore::BaseChimeraDuelNode* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::BaseChimeraDuelNode*))((::PBYTE)hIl2Cpp + HAMNJNDCEEH_KFGJEKJHIMB_OFFSET))(this, a1);
		}

		::System::Boolean PHMGIKGGMHA(::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::BaseChimeraDuelNode*>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::BaseChimeraDuelNode*>*))((::PBYTE)hIl2Cpp + HAMNJNDCEEH_PHMGIKGGMHA_OFFSET))(this, a1);
		}

	};
