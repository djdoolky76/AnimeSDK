#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CHMKCMHHEFA_BEMOOJKFCJE_OFFSET UNITYSDK_OFFSET(0x18DD0C90)
#define CHMKCMHHEFA_BHDPHMOPBMA_OFFSET UNITYSDK_OFFSET(0x18DD0ED0)
#define CHMKCMHHEFA_ECOPMIOIMPJ_OFFSET UNITYSDK_OFFSET(0x18DD0C00)
#define CHMKCMHHEFA__CTOR_OFFSET UNITYSDK_OFFSET(0x18DD0BF0)

inline static constexpr unsigned int CHMKCMHHEFA_TypeDefinitionIndex = 62669;

class CHMKCMHHEFA : public ::System::Object
{
public:
	// static const ::System::String* CIDMEEFMPKG; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHMKCMHHEFA__CTOR_OFFSET))(this);
	}

	static ::System::Void ECOPMIOIMPJ(::System::String* DEJNMAAOCNK, ::System::String* NGHLLDAJJJE)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CHMKCMHHEFA_ECOPMIOIMPJ_OFFSET))(DEJNMAAOCNK, NGHLLDAJJJE);
	}

	static ::System::Void BEMOOJKFCJE(::System::String* DEJNMAAOCNK)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CHMKCMHHEFA_BEMOOJKFCJE_OFFSET))(DEJNMAAOCNK);
	}

	static ::Il2CppArray<::System::String*>* BHDPHMOPBMA(::System::String* DEJNMAAOCNK)
	{
		return ((::Il2CppArray<::System::String*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + CHMKCMHHEFA_BHDPHMOPBMA_OFFSET))(DEJNMAAOCNK);
	}
};
