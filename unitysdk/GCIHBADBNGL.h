#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GLJBGHBCCJG;
class PEKIKENNIOK;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GCIHBADBNGL_AINFLGPIJJN_OFFSET UNITYSDK_OFFSET(0x11C9DD50)
#define GCIHBADBNGL_KKDNLCKDHLM_OFFSET UNITYSDK_OFFSET(0x11C9E070)
#define GCIHBADBNGL_LJBBKDBHEGD_OFFSET UNITYSDK_OFFSET(0x11C9DB20)
#define GCIHBADBNGL_MFJKCJJDLFE_OFFSET UNITYSDK_OFFSET(0x11C9D840)
#define GCIHBADBNGL_OOAIABJGLON_OFFSET UNITYSDK_OFFSET(0x11C9DCD0)
#define GCIHBADBNGL_PFBNAKCOJFH_OFFSET UNITYSDK_OFFSET(0x11C9D970)
#define GCIHBADBNGL__CTOR_OFFSET UNITYSDK_OFFSET(0x11C9D7C0)

inline static constexpr unsigned int GCIHBADBNGL_TypeDefinitionIndex = 66437;

class GCIHBADBNGL : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::GLJBGHBCCJG*>* GBGLOIEIFOC; // 0x10
	::PEKIKENNIOK* DDBELEJJDMD; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCIHBADBNGL__CTOR_OFFSET))(this);
	}

	::System::Void MFJKCJJDLFE(::System::Action_1<::System::Single>* DMPEOJCCCLO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + GCIHBADBNGL_MFJKCJJDLFE_OFFSET))(this, DMPEOJCCCLO);
	}

	::System::Boolean PFBNAKCOJFH(::System::Single AHNOFGPKHFB)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GCIHBADBNGL_PFBNAKCOJFH_OFFSET))(this, AHNOFGPKHFB);
	}

	::System::Boolean LJBBKDBHEGD(::System::Single AHNOFGPKHFB, ::System::Single EPFANKNOEHF)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + GCIHBADBNGL_LJBBKDBHEGD_OFFSET))(this, AHNOFGPKHFB, EPFANKNOEHF);
	}

	::System::Boolean OOAIABJGLON(::System::Single AHNOFGPKHFB, ::System::Single EPFANKNOEHF)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + GCIHBADBNGL_OOAIABJGLON_OFFSET))(this, AHNOFGPKHFB, EPFANKNOEHF);
	}

	::System::Void AINFLGPIJJN(::System::Single JNDDJMAHNAI, ::System::Action* DMPEOJCCCLO, ::System::Int32 JCHEMFNBMKC, ::System::Boolean KKKGFIGGPHE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Action*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + GCIHBADBNGL_AINFLGPIJJN_OFFSET))(this, JNDDJMAHNAI, DMPEOJCCCLO, JCHEMFNBMKC, KKKGFIGGPHE);
	}

	::System::Void KKDNLCKDHLM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCIHBADBNGL_KKDNLCKDHLM_OFFSET))(this);
	}
};
