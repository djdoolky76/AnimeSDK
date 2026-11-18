#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HODNLFIBLOO.h"

class ABDNHCCOFAN;
class IIKNLDKMGGB;
namespace MoleMole { class SceneObjectStateWidget; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NOLNCCBKMJD_PANNEGHPMJF_OFFSET UNITYSDK_OFFSET(0xFD15820)
#define NOLNCCBKMJD__CTOR_OFFSET UNITYSDK_OFFSET(0xFD15690)

inline static constexpr unsigned int NOLNCCBKMJD_TypeDefinitionIndex = 62353;

class NOLNCCBKMJD : public ::HODNLFIBLOO
{
public:
	::System::Collections::Generic::List_1<::MoleMole::SceneObjectStateWidget*>* BBIICGAHBNP; // 0x20
	::ABDNHCCOFAN* DGKGMMFLIDH; // 0x28
	::System::Int32 ANCDHGFIFHO; // 0x30
	::System::Int32 NNLHPCBPDJC; // 0x34

	::System::Void _ctor(::System::Int32 NNLHPCBPDJC, ::IIKNLDKMGGB* AMNIHACKELI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::IIKNLDKMGGB*))((::PBYTE)hIl2Cpp + NOLNCCBKMJD__CTOR_OFFSET))(this, NNLHPCBPDJC, AMNIHACKELI);
	}

	::System::Void PANNEGHPMJF(::System::Int32 KBNIOABPILH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NOLNCCBKMJD_PANNEGHPMJF_OFFSET))(this, KBNIOABPILH);
	}
};
