#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigBigSceneGroupEntityPriority; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JNCOIOPBFKI_DKANFBCGHAN_FLIAEJGDMLI_OFFSET UNITYSDK_OFFSET(0x1A47F9D0)
#define JNCOIOPBFKI_DKANFBCGHAN__CTOR_OFFSET UNITYSDK_OFFSET(0x1A47F9C0)

inline static constexpr unsigned int JNCOIOPBFKI_DKANFBCGHAN_TypeDefinitionIndex = 71990;

class JNCOIOPBFKI_DKANFBCGHAN : public ::System::Object
{
public:
	::System::Int32 GIBDHABECBD; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNCOIOPBFKI_DKANFBCGHAN__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLIAEJGDMLI(::System::Collections::Generic::List_1<::MoleMole::ConfigBigSceneGroupEntityPriority*>* KEJJKECGLOP)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::ConfigBigSceneGroupEntityPriority*>*))((::PBYTE)hIl2Cpp + JNCOIOPBFKI_DKANFBCGHAN_FLIAEJGDMLI_OFFSET))(this, KEJJKECGLOP);
	}
};
