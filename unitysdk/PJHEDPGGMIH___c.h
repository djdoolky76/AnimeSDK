#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation::AssetLoadTask { template <typename T> class AssetLoadTask_1; }
namespace System { template <typename T> class Func_1; }

#define PJHEDPGGMIH___C_JFNPHKAHEJF_OFFSET UNITYSDK_OFFSET(0x1847A1A0)
#define PJHEDPGGMIH___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1847A150)
#define PJHEDPGGMIH___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1847A190)

inline static constexpr unsigned int PJHEDPGGMIH___c_TypeDefinitionIndex = 86308;

class PJHEDPGGMIH___c : public ::System::Object
{
public:
	static ::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Object*>*>** StaticGet___9__1_0()
	{
		return (::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Object*>*>**)Il2CppClass::FromTypeDefinitionIndex(PJHEDPGGMIH___c_TypeDefinitionIndex)->GetStaticField(0x429F0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(PJHEDPGGMIH___c_TypeDefinitionIndex)->GetStaticField(0x429F8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PJHEDPGGMIH___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJHEDPGGMIH___C__CTOR_OFFSET))(this);
	}

	::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Object*>* JFNPHKAHEJF()
	{
		return ((::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJHEDPGGMIH___C_JFNPHKAHEJF_OFFSET))(this);
	}
};
