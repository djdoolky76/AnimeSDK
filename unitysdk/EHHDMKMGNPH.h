#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MEEFEIADCOE.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace RPG { template <typename T> class PoolHashSet_1; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }

#define EHHDMKMGNPH_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CA21EE0)
#define EHHDMKMGNPH_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA22060)

inline static constexpr unsigned int EHHDMKMGNPH_TypeDefinitionIndex = 42019;

	class EHHDMKMGNPH : public ::System::Object
	{
	public:
		::System::Action_3<::System::String*, ::System::UInt32, ::System::Int32>* LGPFAMLMIGD; // 0x10
		::RPG::PoolDictionary_2<::System::ValueTuple_2<::System::String*, ::System::Int32>, ::System::Action*>* PJOEHACIIJO; // 0x18
		::RPG::PoolDictionary_2<::System::ValueTuple_2<::System::String*, ::System::UInt32>, ::System::Action*>* IFFINOBAHLE; // 0x20
		::RPG::PoolDictionary_2<::System::Int32, ::RPG::PoolHashSet_1<::MEEFEIADCOE>*>* AOPGPJBIHPF; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHHDMKMGNPH_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHHDMKMGNPH_CLEAR_OFFSET))(this);
		}

	};
