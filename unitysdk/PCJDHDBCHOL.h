#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define PCJDHDBCHOL_BJMOKEFLPHC_OFFSET UNITYSDK_OFFSET(0x11B579A0)
#define PCJDHDBCHOL_ELOKKPDMBCH_OFFSET UNITYSDK_OFFSET(0x11B57A40)
#define PCJDHDBCHOL_GGDLDGIMIOB_OFFSET UNITYSDK_OFFSET(0x11B57C30)
#define PCJDHDBCHOL_KJCACAHMCEO_OFFSET UNITYSDK_OFFSET(0x11B57D50)
#define PCJDHDBCHOL_NLPGOOGFJKE_OFFSET UNITYSDK_OFFSET(0x11B57900)
#define PCJDHDBCHOL__CCTOR_OFFSET UNITYSDK_OFFSET(0x11B57830)

inline static constexpr unsigned int PCJDHDBCHOL_TypeDefinitionIndex = 66725;

class PCJDHDBCHOL : public ::System::Object
{
public:
	static ::System::Collections::Generic::HashSet_1<::System::String*>** StaticGet_PAJJPIDLJCI()
	{
		return (::System::Collections::Generic::HashSet_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(PCJDHDBCHOL_TypeDefinitionIndex)->GetStaticField(0x328C0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PCJDHDBCHOL__CCTOR_OFFSET))();
	}

	static ::Il2CppArray<::System::String*>* NLPGOOGFJKE(::System::String* AIILALNEBLN)
	{
		return ((::Il2CppArray<::System::String*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + PCJDHDBCHOL_NLPGOOGFJKE_OFFSET))(AIILALNEBLN);
	}

	static ::System::Boolean BJMOKEFLPHC()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PCJDHDBCHOL_BJMOKEFLPHC_OFFSET))();
	}

	static ::System::Void ELOKKPDMBCH()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PCJDHDBCHOL_ELOKKPDMBCH_OFFSET))();
	}

	static ::System::Void GGDLDGIMIOB(::System::String* AIILALNEBLN)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + PCJDHDBCHOL_GGDLDGIMIOB_OFFSET))(AIILALNEBLN);
	}

	static ::System::Void KJCACAHMCEO(::System::String* AIILALNEBLN, ::System::Collections::Generic::HashSet_1<::System::String*>* HGGAJCGEKBI)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Generic::HashSet_1<::System::String*>*))((::PBYTE)hIl2Cpp + PCJDHDBCHOL_KJCACAHMCEO_OFFSET))(AIILALNEBLN, HGGAJCGEKBI);
	}
};
