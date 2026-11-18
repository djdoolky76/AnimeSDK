#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class NADNOPDELGL;
namespace MoleMole { class MonoEffectPluginGroundLighting; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GJHAOFIJKEM_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x125D4DC0)
#define GJHAOFIJKEM_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x125D4EA0)
#define GJHAOFIJKEM_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x125D4F20)
#define GJHAOFIJKEM_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x125D4C50)
#define GJHAOFIJKEM__CCTOR_OFFSET UNITYSDK_OFFSET(0x125D4E10)
#define GJHAOFIJKEM__CTOR_OFFSET UNITYSDK_OFFSET(0x125D4E90)

inline static constexpr unsigned int GJHAOFIJKEM_TypeDefinitionIndex = 82409;

class GJHAOFIJKEM : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0xC0; // 0x0
	::MoleMole::MonoEffectPluginGroundLighting* GOBCMBALLDF; // 0x48
	::System::Collections::Generic::List_1<::NADNOPDELGL*>* EMHNDOCGADP; // 0x50
	::MoleMole::EntityHandle KLGDOPDOGGP; // 0x58

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GJHAOFIJKEM__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJHAOFIJKEM__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJHAOFIJKEM_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GJHAOFIJKEM_GETCLASSID_OFFSET))(this);
	}

	static ::GJHAOFIJKEM* JFDOOELFAOA()
	{
		return ((::GJHAOFIJKEM*(*)())((::PBYTE)hIl2Cpp + GJHAOFIJKEM_JFDOOELFAOA_OFFSET))();
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GJHAOFIJKEM_MEFBHFEOKGH_OFFSET))(this);
	}
};
