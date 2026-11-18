#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ILKICKDDECB;
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace UnityEngine { class Animation; }

#define AFLGIPMHGLM_ADPJEOKEDND_OFFSET UNITYSDK_OFFSET(0x154EF8B0)
#define AFLGIPMHGLM__CTOR_OFFSET UNITYSDK_OFFSET(0x154EF7F0)

inline static constexpr unsigned int AFLGIPMHGLM_TypeDefinitionIndex = 53570;

class AFLGIPMHGLM : public ::System::Object
{
public:
	::System::String* MDBLOJINLDA; // 0x10
	::ILKICKDDECB* EEFOCCNFJCO; // 0x18
	::System::Func_1<::UnityEngine::Animation*>* LIDDPJKNKPM; // 0x20
	::System::String* NADCAMGMGIO; // 0x28

	::System::Void _ctor(::System::Func_1<::UnityEngine::Animation*>* BOMNJGMIDPN, ::System::String* HMFMOAAKDLD, ::System::String* HFHMOAONGGH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_1<::UnityEngine::Animation*>*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + AFLGIPMHGLM__CTOR_OFFSET))(this, BOMNJGMIDPN, HMFMOAAKDLD, HFHMOAONGGH);
	}

	::System::Void ADPJEOKEDND(::System::Boolean FIPHFGHNNBE, ::System::Boolean IOKNPLAMIKB, ::System::Action* NJJPAJNJFOJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + AFLGIPMHGLM_ADPJEOKEDND_OFFSET))(this, FIPHFGHNNBE, IOKNPLAMIKB, NJJPAJNJFOJ);
	}
};
