#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class LOHPBEPDLOG;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define LDAAFECCIBK_BEHCEAAJIJF_1_OFFSET UNITYSDK_OFFSET(0x15DEE6E0)
#define LDAAFECCIBK_BEHCEAAJIJF_OFFSET UNITYSDK_OFFSET(0x15DEE590)

inline static constexpr unsigned int LDAAFECCIBK_TypeDefinitionIndex = 67563;

class LDAAFECCIBK : public ::System::Object
{
public:
	static ::System::ValueTuple_2<::System::Boolean, ::System::String*> BEHCEAAJIJF(::System::String*& CLKHJCBNIBJ, ::System::Boolean HEMNKLJEKJA, ::System::Action_1<::LOHPBEPDLOG*>* JFJGGEGMFML)
	{
		return ((::System::ValueTuple_2<::System::Boolean, ::System::String*>(*)(::System::String*&, ::System::Boolean, ::System::Action_1<::LOHPBEPDLOG*>*))((::PBYTE)hIl2Cpp + LDAAFECCIBK_BEHCEAAJIJF_OFFSET))(CLKHJCBNIBJ, HEMNKLJEKJA, JFJGGEGMFML);
	}

	static ::System::ValueTuple_2<::System::Boolean, ::System::String*> BEHCEAAJIJF_1(::System::String*& CLKHJCBNIBJ, ::System::Boolean HEMNKLJEKJA, ::MoleMole::Battle::Entity* KECKGDFIALJ, ::System::Action_1<::LOHPBEPDLOG*>* JFJGGEGMFML)
	{
		return ((::System::ValueTuple_2<::System::Boolean, ::System::String*>(*)(::System::String*&, ::System::Boolean, ::MoleMole::Battle::Entity*, ::System::Action_1<::LOHPBEPDLOG*>*))((::PBYTE)hIl2Cpp + LDAAFECCIBK_BEHCEAAJIJF_1_OFFSET))(CLKHJCBNIBJ, HEMNKLJEKJA, KECKGDFIALJ, JFJGGEGMFML);
	}
};
