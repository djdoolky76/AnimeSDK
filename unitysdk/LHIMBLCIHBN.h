#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateTraitType.h"
#include "unitysdk/System/Object.h"
class ACLMDNMDHLE;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LHIMBLCIHBN_CTOR_OFFSET UNITYSDK_OFFSET(0xB6B43A0)
#define LHIMBLCIHBN_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB6B4300)

inline static constexpr unsigned int LHIMBLCIHBN_TypeDefinitionIndex = 56092;

	class LHIMBLCIHBN : public ::System::Object
	{
	public:
		::ACLMDNMDHLE* IBAADNINFCG; // 0x10
		::System::Collections::Generic::List_1<::ACLMDNMDHLE*>* AGMDLHDNBGK; // 0x18
		::RPG::GameCore::FateTraitType FBFCPNADPKB; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHIMBLCIHBN_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHIMBLCIHBN_DISPOSE_OFFSET))(this);
		}

	};
