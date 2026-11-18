#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MEHGHOLKPJG.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MonoEffectPluginTransform; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Renderer; }

#define FFMKPDPCPDC_BBPCBEEHALC_OFFSET UNITYSDK_OFFSET(0x11D047E0)
#define FFMKPDPCPDC_DAPCBDMHKJA_OFFSET UNITYSDK_OFFSET(0x11C48890)
#define FFMKPDPCPDC_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x11D04900)
#define FFMKPDPCPDC__CTOR_OFFSET UNITYSDK_OFFSET(0x11D047D0)

inline static constexpr unsigned int FFMKPDPCPDC_TypeDefinitionIndex = 57656;

class FFMKPDPCPDC : public ::System::Object
{
public:
	::UnityEngine::Animation* AOKJEGNBALI; // 0x10
	::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* AEPONOJONAA; // 0x18
	::MoleMole::MonoEffectPluginTransform* LELAMILJCOD; // 0x20
	::System::Collections::Generic::List_1<::MEHGHOLKPJG>* NAFCIEDAFNO; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFMKPDPCPDC__CTOR_OFFSET))(this);
	}

	static ::FFMKPDPCPDC* BBPCBEEHALC()
	{
		return ((::FFMKPDPCPDC*(*)())((::PBYTE)hIl2Cpp + FFMKPDPCPDC_BBPCBEEHALC_OFFSET))();
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFMKPDPCPDC_NPOLNFDBOOD_OFFSET))(this);
	}

	static ::System::Void DAPCBDMHKJA(::FFMKPDPCPDC* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::FFMKPDPCPDC*))((::PBYTE)hIl2Cpp + FFMKPDPCPDC_DAPCBDMHKJA_OFFSET))(LJBPECKCCEA);
	}
};
