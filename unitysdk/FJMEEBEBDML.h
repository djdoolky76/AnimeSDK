#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class AnimationState; }

#define FJMEEBEBDML_AKBBGLNJIHA_OFFSET UNITYSDK_OFFSET(0x14AD72F0)
#define FJMEEBEBDML_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14AD7050)
#define FJMEEBEBDML_EPMNIJOAOOG_OFFSET UNITYSDK_OFFSET(0x14AD73C0)
#define FJMEEBEBDML_JLKJGBEAFGN_OFFSET UNITYSDK_OFFSET(0x14AD7190)
#define FJMEEBEBDML__CTOR_OFFSET UNITYSDK_OFFSET(0x14AD7100)

inline static constexpr unsigned int FJMEEBEBDML_TypeDefinitionIndex = 92441;

class FJMEEBEBDML : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::AnimationState*>* EGENKJPKJEI; // 0x10
	::System::Int32 GKIJEGFIDMN; // 0x18
	::System::Boolean FMGFDKKICPE; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJMEEBEBDML__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJMEEBEBDML_DISPOSE_OFFSET))(this);
	}

	::System::Boolean JLKJGBEAFGN(::System::Int32 CABDIDKDFPJ, ::UnityEngine::AnimationState* ECMJCBIFBHE)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::UnityEngine::AnimationState*))((::PBYTE)hIl2Cpp + FJMEEBEBDML_JLKJGBEAFGN_OFFSET))(this, CABDIDKDFPJ, ECMJCBIFBHE);
	}

	::System::Boolean AKBBGLNJIHA(::System::Int32 CABDIDKDFPJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FJMEEBEBDML_AKBBGLNJIHA_OFFSET))(this, CABDIDKDFPJ);
	}

	::System::Single EPMNIJOAOOG()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FJMEEBEBDML_EPMNIJOAOOG_OFFSET))(this);
	}
};
