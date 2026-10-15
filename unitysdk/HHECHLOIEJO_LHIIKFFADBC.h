#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/AnimatorUpdateMode.h"
#include "unitysdk/FMJEMKMNOAI.h"
class IBEJMEEEJMB;
namespace System { class String; }
namespace UnityEngine { class RuntimeAnimatorController; }

#define HHECHLOIEJO_LHIIKFFADBC_AKBBAOJMOIG_OFFSET UNITYSDK_OFFSET(0x15CB5A70)
#define HHECHLOIEJO_LHIIKFFADBC_ALIGOEFFLJG_OFFSET UNITYSDK_OFFSET(0x15CBCF20)
#define HHECHLOIEJO_LHIIKFFADBC_BEOJIAJJCCB_OFFSET UNITYSDK_OFFSET(0x15CBCF10)
#define HHECHLOIEJO_LHIIKFFADBC_CTOR_OFFSET UNITYSDK_OFFSET(0x15CB1660)
#define HHECHLOIEJO_LHIIKFFADBC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15CBCEC0)
#define HHECHLOIEJO_LHIIKFFADBC_GKGKHAIKHMA_OFFSET UNITYSDK_OFFSET(0x15CBC470)
#define HHECHLOIEJO_LHIIKFFADBC_HHFHIEPKJHM_OFFSET UNITYSDK_OFFSET(0x15CB6D00)
#define HHECHLOIEJO_LHIIKFFADBC_JNOFMABGNAL_OFFSET UNITYSDK_OFFSET(0x15CBB280)
#define HHECHLOIEJO_LHIIKFFADBC_OLLKAADMIBK_OFFSET UNITYSDK_OFFSET(0x15CB6E40)

inline static constexpr unsigned int HHECHLOIEJO_LHIIKFFADBC_TypeDefinitionIndex = 57141;

	class HHECHLOIEJO_LHIIKFFADBC : public ::System::Object
	{
	public:
		::IBEJMEEEJMB* CMGGMAGPMEA; // 0x10
		::System::Void _ctor(::IBEJMEEEJMB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IBEJMEEEJMB*))((::PBYTE)hIl2Cpp + HHECHLOIEJO_LHIIKFFADBC_CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHECHLOIEJO_LHIIKFFADBC_DISPOSE_OFFSET))(this);
		}

		::System::Int32 HHFHIEPKJHM()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HHECHLOIEJO_LHIIKFFADBC_HHFHIEPKJHM_OFFSET))(this);
		}

		::System::Int32 OLLKAADMIBK(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HHECHLOIEJO_LHIIKFFADBC_OLLKAADMIBK_OFFSET))(this, a1);
		}

		::System::Boolean AKBBAOJMOIG(::System::Int32 a1, ::System::Boolean a2, ::FMJEMKMNOAI a3, ::FMJEMKMNOAI a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Boolean, ::FMJEMKMNOAI, ::FMJEMKMNOAI))((::PBYTE)hIl2Cpp + HHECHLOIEJO_LHIIKFFADBC_AKBBAOJMOIG_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Int32 JNOFMABGNAL()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HHECHLOIEJO_LHIIKFFADBC_JNOFMABGNAL_OFFSET))(this);
		}

		::UnityEngine::RuntimeAnimatorController* GKGKHAIKHMA()
		{
			return ((::UnityEngine::RuntimeAnimatorController*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHECHLOIEJO_LHIIKFFADBC_GKGKHAIKHMA_OFFSET))(this);
		}

		::IBEJMEEEJMB* BEOJIAJJCCB()
		{
			return ((::IBEJMEEEJMB*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHECHLOIEJO_LHIIKFFADBC_BEOJIAJJCCB_OFFSET))(this);
		}

		::UnityEngine::AnimatorUpdateMode ALIGOEFFLJG()
		{
			return ((::UnityEngine::AnimatorUpdateMode(*)(::PVOID))((::PBYTE)hIl2Cpp + HHECHLOIEJO_LHIIKFFADBC_ALIGOEFFLJG_OFFSET))(this);
		}

	};
