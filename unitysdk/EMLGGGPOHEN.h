#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LGHJLJPOEPL;
namespace MoleMole { class UITabBtn03RowScrollViewWidgetController; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EMLGGGPOHEN_EOJPKGFEKEH_OFFSET UNITYSDK_OFFSET(0x13550EB0)
#define EMLGGGPOHEN__CTOR_OFFSET UNITYSDK_OFFSET(0x13550F90)

inline static constexpr unsigned int EMLGGGPOHEN_TypeDefinitionIndex = 80973;

class EMLGGGPOHEN : public ::System::Object
{
public:
	::System::String* ONOAGAPJNCG; // 0x10
	::System::Collections::Generic::List_1<::LGHJLJPOEPL*>* LOIACNOEANN; // 0x18
	::System::Int32 MGNMJMACKLO; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMLGGGPOHEN__CTOR_OFFSET))(this);
	}

	::System::Void EOJPKGFEKEH(::MoleMole::UITabBtn03RowScrollViewWidgetController* IPKLKAFOGAN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UITabBtn03RowScrollViewWidgetController*))((::PBYTE)hIl2Cpp + EMLGGGPOHEN_EOJPKGFEKEH_OFFSET))(this, IPKLKAFOGAN);
	}
};
