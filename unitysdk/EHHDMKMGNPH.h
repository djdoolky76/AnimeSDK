#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MEEFEIADCOE.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple.h"
namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace RPG { template <typename T> class PoolHashSet_1; }
namespace System { class Action; }
namespace System { class String; }

#define EHHDMKMGNPH_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CA50520)
#define EHHDMKMGNPH_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA50690)

inline static constexpr unsigned int EHHDMKMGNPH_TypeDefinitionIndex = 42019;

	class EHHDMKMGNPH : public ::System::Object
	{
	public:
		::RPG::PoolDictionary_2<::System::ValueTuple, ::System::Action*>* PJOEHACIIJO; // 0x10
		::RPG::PoolDictionary_2<::System::ValueTuple, ::System::Action*>* IFFINOBAHLE; // 0x18
		::RPG::PoolDictionary_2<::System::Int32, ::RPG::PoolHashSet_1<::MEEFEIADCOE>*>* AOPGPJBIHPF; // 0x20
		::System::Action* LGPFAMLMIGD; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHHDMKMGNPH_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHHDMKMGNPH_CLEAR_OFFSET))(this);
		}

	};
