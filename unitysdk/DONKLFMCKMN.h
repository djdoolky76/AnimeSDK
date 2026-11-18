#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DONKLFMCKMN_DHJFONOHDAO_OFFSET UNITYSDK_OFFSET(0x10F184E0)
#define DONKLFMCKMN__CTOR_OFFSET UNITYSDK_OFFSET(0x10F184D0)

inline static constexpr unsigned int DONKLFMCKMN_TypeDefinitionIndex = 88235;

class DONKLFMCKMN : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::String*>* _IIAOAIBBOAF_k__BackingField; // 0x10

	::System::Void _ctor(::System::Collections::Generic::List_1<::System::String*>* PILELGPBCLL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + DONKLFMCKMN__CTOR_OFFSET))(this, PILELGPBCLL);
	}

	::System::Collections::Generic::List_1<::System::String*>* DHJFONOHDAO()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DONKLFMCKMN_DHJFONOHDAO_OFFSET))(this);
	}
};
