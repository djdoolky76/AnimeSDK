#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CKENOHMEEGI;
namespace System { template <typename T1, typename T2> class Func_2; }

#define AEMCCCKKMCG___C_HLOOGMIAIDG_OFFSET UNITYSDK_OFFSET(0x11B91B80)
#define AEMCCCKKMCG___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11B91B30)
#define AEMCCCKKMCG___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11B91B70)

inline static constexpr unsigned int AEMCCCKKMCG___c_TypeDefinitionIndex = 71128;

class AEMCCCKKMCG___c : public ::System::Object
{
public:
	static ::System::Func_2<::CKENOHMEEGI*, ::CKENOHMEEGI*>** StaticGet___9__0_0()
	{
		return (::System::Func_2<::CKENOHMEEGI*, ::CKENOHMEEGI*>**)Il2CppClass::FromTypeDefinitionIndex(AEMCCCKKMCG___c_TypeDefinitionIndex)->GetStaticField(0x3FF40);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(AEMCCCKKMCG___c_TypeDefinitionIndex)->GetStaticField(0x3FF48);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AEMCCCKKMCG___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEMCCCKKMCG___C__CTOR_OFFSET))(this);
	}

	::CKENOHMEEGI* HLOOGMIAIDG(::CKENOHMEEGI* NCPCOAEFCON)
	{
		return ((::CKENOHMEEGI*(*)(::PVOID, ::CKENOHMEEGI*))((::PBYTE)hIl2Cpp + AEMCCCKKMCG___C_HLOOGMIAIDG_OFFSET))(this, NCPCOAEFCON);
	}
};
