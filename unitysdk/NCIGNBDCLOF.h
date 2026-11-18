#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CLGLEEGCBFK;
namespace System { template <typename T> class Comparison_1; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Collections { template <typename T> class IndexedSet_1; }

#define NCIGNBDCLOF_BDJACJHKECL_OFFSET UNITYSDK_OFFSET(0x1157F260)
#define NCIGNBDCLOF_CCINPJLLCMF_OFFSET UNITYSDK_OFFSET(0x1157E680)
#define NCIGNBDCLOF_FFJCPPPJAGG_OFFSET UNITYSDK_OFFSET(0x1157ECB0)
#define NCIGNBDCLOF_GBPOIDGDMCO_OFFSET UNITYSDK_OFFSET(0x1157ED50)
#define NCIGNBDCLOF_GMIOGPDMGOB_OFFSET UNITYSDK_OFFSET(0x1157F1A0)
#define NCIGNBDCLOF_MALNBKMLONO_OFFSET UNITYSDK_OFFSET(0x1157E8C0)
#define NCIGNBDCLOF_OMMECAFKPJN_OFFSET UNITYSDK_OFFSET(0x1157E590)
#define NCIGNBDCLOF__CCTOR_OFFSET UNITYSDK_OFFSET(0x1157E530)
#define NCIGNBDCLOF__CTOR_OFFSET UNITYSDK_OFFSET(0x1157E430)

inline static constexpr unsigned int NCIGNBDCLOF_TypeDefinitionIndex = 63325;

class NCIGNBDCLOF : public ::System::Object
{
public:
	static ::System::Comparison_1<::CLGLEEGCBFK*>** StaticGet_KINIHJAGDJF()
	{
		return (::System::Comparison_1<::CLGLEEGCBFK*>**)Il2CppClass::FromTypeDefinitionIndex(NCIGNBDCLOF_TypeDefinitionIndex)->GetStaticField(0x359E0);
	}
	static ::NCIGNBDCLOF** StaticGet_ALFEGKJPDFO()
	{
		return (::NCIGNBDCLOF**)Il2CppClass::FromTypeDefinitionIndex(NCIGNBDCLOF_TypeDefinitionIndex)->GetStaticField(0x359E8);
	}
	::UnityEngine::UI::Collections::IndexedSet_1<::CLGLEEGCBFK*>* DEJKCDKFKGB; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCIGNBDCLOF__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NCIGNBDCLOF__CCTOR_OFFSET))();
	}

	static ::NCIGNBDCLOF* OMMECAFKPJN()
	{
		return ((::NCIGNBDCLOF*(*)())((::PBYTE)hIl2Cpp + NCIGNBDCLOF_OMMECAFKPJN_OFFSET))();
	}

	static ::System::Int32 CCINPJLLCMF(::UnityEngine::Transform* LMHNJIBCLJF)
	{
		return ((::System::Int32(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + NCIGNBDCLOF_CCINPJLLCMF_OFFSET))(LMHNJIBCLJF);
	}

	::System::Void MALNBKMLONO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCIGNBDCLOF_MALNBKMLONO_OFFSET))(this);
	}

	static ::System::Void FFJCPPPJAGG(::CLGLEEGCBFK* HELLOIIPKGF)
	{
		return ((::System::Void(*)(::CLGLEEGCBFK*))((::PBYTE)hIl2Cpp + NCIGNBDCLOF_FFJCPPPJAGG_OFFSET))(HELLOIIPKGF);
	}

	static ::System::Int32 GMIOGPDMGOB(::CLGLEEGCBFK* HAAEBCOBKFF, ::CLGLEEGCBFK* BFMMEICFNCD)
	{
		return ((::System::Int32(*)(::CLGLEEGCBFK*, ::CLGLEEGCBFK*))((::PBYTE)hIl2Cpp + NCIGNBDCLOF_GMIOGPDMGOB_OFFSET))(HAAEBCOBKFF, BFMMEICFNCD);
	}

	static ::System::Boolean BDJACJHKECL(::CLGLEEGCBFK* HELLOIIPKGF)
	{
		return ((::System::Boolean(*)(::CLGLEEGCBFK*))((::PBYTE)hIl2Cpp + NCIGNBDCLOF_BDJACJHKECL_OFFSET))(HELLOIIPKGF);
	}

	::System::Boolean GBPOIDGDMCO(::CLGLEEGCBFK* HELLOIIPKGF)
	{
		return ((::System::Boolean(*)(::PVOID, ::CLGLEEGCBFK*))((::PBYTE)hIl2Cpp + NCIGNBDCLOF_GBPOIDGDMCO_OFFSET))(this, HELLOIIPKGF);
	}
};
