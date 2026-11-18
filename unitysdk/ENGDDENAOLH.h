#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GNOIAKONJDH;
class JADIDMDHGJJ;
class KOMCOFFIFMD;
namespace System { class String; }
namespace UnityEngine::UI { class Text; }

#define ENGDDENAOLH_AMDNEOKMMHP_OFFSET UNITYSDK_OFFSET(0x158C22D0)
#define ENGDDENAOLH_KFKLNMPNOIP_OFFSET UNITYSDK_OFFSET(0x158C20F0)
#define ENGDDENAOLH_PFEFCOEPIMJ_OFFSET UNITYSDK_OFFSET(0x158C2140)
#define ENGDDENAOLH__CTOR_OFFSET UNITYSDK_OFFSET(0x158C20E0)

inline static constexpr unsigned int ENGDDENAOLH_TypeDefinitionIndex = 82052;

class ENGDDENAOLH : public ::System::Object
{
public:
	::JADIDMDHGJJ* LIOLLANGLOJ; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENGDDENAOLH__CTOR_OFFSET))(this);
	}

	::System::Void KFKLNMPNOIP(::JADIDMDHGJJ* GMNICLPIGGL)
	{
		return ((::System::Void(*)(::PVOID, ::JADIDMDHGJJ*))((::PBYTE)hIl2Cpp + ENGDDENAOLH_KFKLNMPNOIP_OFFSET))(this, GMNICLPIGGL);
	}

	::KOMCOFFIFMD* PFEFCOEPIMJ(::UnityEngine::UI::Text* GFKCABHFFEE, ::System::String* BMIAMOFNOMK, ::System::Single IAKPGBCAAKM, ::System::String* KNDONPHAAHM, ::System::Single DLBFEAOALML)
	{
		return ((::KOMCOFFIFMD*(*)(::PVOID, ::UnityEngine::UI::Text*, ::System::String*, ::System::Single, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + ENGDDENAOLH_PFEFCOEPIMJ_OFFSET))(this, GFKCABHFFEE, BMIAMOFNOMK, IAKPGBCAAKM, KNDONPHAAHM, DLBFEAOALML);
	}

	::System::Void AMDNEOKMMHP(::UnityEngine::UI::Text* GFKCABHFFEE, ::System::String* BMIAMOFNOMK, ::System::Single IAKPGBCAAKM, ::System::String* KNDONPHAAHM, ::System::Single DLBFEAOALML, ::System::Int32 AOGOCDMGFDK, ::GNOIAKONJDH* EJLIBCHMBGJ)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Text*, ::System::String*, ::System::Single, ::System::String*, ::System::Single, ::System::Int32, ::GNOIAKONJDH*))((::PBYTE)hIl2Cpp + ENGDDENAOLH_AMDNEOKMMHP_OFFSET))(this, GFKCABHFFEE, BMIAMOFNOMK, IAKPGBCAAKM, KNDONPHAAHM, DLBFEAOALML, AOGOCDMGFDK, EJLIBCHMBGJ);
	}
};
