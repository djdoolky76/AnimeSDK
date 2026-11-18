#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation::AssetLoadTask { template <typename T> class AssetLoadTask_1; }
namespace System { template <typename T> class Func_1; }

#define GCAHFBFFBHE___C_JFNPHKAHEJF_OFFSET UNITYSDK_OFFSET(0xBB81540)
#define GCAHFBFFBHE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xBB814F0)
#define GCAHFBFFBHE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xBB81530)

inline static constexpr unsigned int GCAHFBFFBHE___c_TypeDefinitionIndex = 50686;

class GCAHFBFFBHE___c : public ::System::Object
{
public:
	static ::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Object*>*>** StaticGet___9__1_0()
	{
		return (::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Object*>*>**)Il2CppClass::FromTypeDefinitionIndex(GCAHFBFFBHE___c_TypeDefinitionIndex)->GetStaticField(0x3AE50);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(GCAHFBFFBHE___c_TypeDefinitionIndex)->GetStaticField(0x3AE58);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GCAHFBFFBHE___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCAHFBFFBHE___C__CTOR_OFFSET))(this);
	}

	::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Object*>* JFNPHKAHEJF()
	{
		return ((::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCAHFBFFBHE___C_JFNPHKAHEJF_OFFSET))(this);
	}
};
