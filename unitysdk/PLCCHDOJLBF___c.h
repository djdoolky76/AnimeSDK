#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JBONEPEMJGJ;
class NLNIIPDCABP;
namespace System { template <typename T1, typename T2> class Action_2; }

#define PLCCHDOJLBF___C_ENIOFHLABCG_OFFSET UNITYSDK_OFFSET(0x150D51A0)
#define PLCCHDOJLBF___C_HIDEBPKMDEH_OFFSET UNITYSDK_OFFSET(0x150D5460)
#define PLCCHDOJLBF___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x150D5150)
#define PLCCHDOJLBF___C__CTOR_OFFSET UNITYSDK_OFFSET(0x150D5190)

inline static constexpr unsigned int PLCCHDOJLBF___c_TypeDefinitionIndex = 64056;

class PLCCHDOJLBF___c : public ::System::Object
{
public:
	static ::System::Action_2<::JBONEPEMJGJ*, ::NLNIIPDCABP*>** StaticGet___9__4_0()
	{
		return (::System::Action_2<::JBONEPEMJGJ*, ::NLNIIPDCABP*>**)Il2CppClass::FromTypeDefinitionIndex(PLCCHDOJLBF___c_TypeDefinitionIndex)->GetStaticField(0x47930);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(PLCCHDOJLBF___c_TypeDefinitionIndex)->GetStaticField(0x47938);
	}
	static ::System::Action_2<::JBONEPEMJGJ*, ::NLNIIPDCABP*>** StaticGet___9__5_0()
	{
		return (::System::Action_2<::JBONEPEMJGJ*, ::NLNIIPDCABP*>**)Il2CppClass::FromTypeDefinitionIndex(PLCCHDOJLBF___c_TypeDefinitionIndex)->GetStaticField(0x47940);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PLCCHDOJLBF___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLCCHDOJLBF___C__CTOR_OFFSET))(this);
	}

	::System::Void ENIOFHLABCG(::JBONEPEMJGJ* HIMKEMPGPLA, ::NLNIIPDCABP* OEGIGIFPOCJ)
	{
		return ((::System::Void(*)(::PVOID, ::JBONEPEMJGJ*, ::NLNIIPDCABP*))((::PBYTE)hIl2Cpp + PLCCHDOJLBF___C_ENIOFHLABCG_OFFSET))(this, HIMKEMPGPLA, OEGIGIFPOCJ);
	}

	::System::Void HIDEBPKMDEH(::JBONEPEMJGJ* HIMKEMPGPLA, ::NLNIIPDCABP* OEGIGIFPOCJ)
	{
		return ((::System::Void(*)(::PVOID, ::JBONEPEMJGJ*, ::NLNIIPDCABP*))((::PBYTE)hIl2Cpp + PLCCHDOJLBF___C_HIDEBPKMDEH_OFFSET))(this, HIMKEMPGPLA, OEGIGIFPOCJ);
	}
};
