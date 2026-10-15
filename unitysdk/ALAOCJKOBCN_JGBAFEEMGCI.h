#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ALAOCJKOBCN;
class HLOIALNOIHF;
class KKGMHJNMOID;
namespace System { class String; }

#define ALAOCJKOBCN_JGBAFEEMGCI_BPLPBPMEODA_1_OFFSET UNITYSDK_OFFSET(0x12CE1790)
#define ALAOCJKOBCN_JGBAFEEMGCI_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x12CE16D0)
#define ALAOCJKOBCN_JGBAFEEMGCI_CTOR_OFFSET UNITYSDK_OFFSET(0x12CE16C0)

inline static constexpr unsigned int ALAOCJKOBCN_JGBAFEEMGCI_TypeDefinitionIndex = 79421;

	class ALAOCJKOBCN_JGBAFEEMGCI : public ::System::Object
	{
	public:
		::HLOIALNOIHF* DPBCDLAANPH; // 0x10
		::System::Void _ctor(::HLOIALNOIHF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HLOIALNOIHF*))((::PBYTE)hIl2Cpp + ALAOCJKOBCN_JGBAFEEMGCI_CTOR_OFFSET))(this, a1);
		}

		::ALAOCJKOBCN* BPLPBPMEODA(::KKGMHJNMOID* a1)
		{
			return ((::ALAOCJKOBCN*(*)(::PVOID, ::KKGMHJNMOID*))((::PBYTE)hIl2Cpp + ALAOCJKOBCN_JGBAFEEMGCI_BPLPBPMEODA_OFFSET))(this, a1);
		}

		::ALAOCJKOBCN* BPLPBPMEODA_1(::System::String* a1)
		{
			return ((::ALAOCJKOBCN*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ALAOCJKOBCN_JGBAFEEMGCI_BPLPBPMEODA_1_OFFSET))(this, a1);
		}

	};
