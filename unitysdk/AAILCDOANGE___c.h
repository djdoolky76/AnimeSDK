#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation::AssetLoadTask { template <typename T> class AssetLoadTask_1; }
namespace System { template <typename T> class Func_1; }

#define AAILCDOANGE___C_JFNPHKAHEJF_OFFSET UNITYSDK_OFFSET(0x16D59C50)
#define AAILCDOANGE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16D59C00)
#define AAILCDOANGE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16D59C40)

inline static constexpr unsigned int AAILCDOANGE___c_TypeDefinitionIndex = 61233;

class AAILCDOANGE___c : public ::System::Object
{
public:
	static ::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Object*>*>** StaticGet___9__1_0()
	{
		return (::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Object*>*>**)Il2CppClass::FromTypeDefinitionIndex(AAILCDOANGE___c_TypeDefinitionIndex)->GetStaticField(0x4DFF0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(AAILCDOANGE___c_TypeDefinitionIndex)->GetStaticField(0x4DFF8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AAILCDOANGE___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAILCDOANGE___C__CTOR_OFFSET))(this);
	}

	::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Object*>* JFNPHKAHEJF()
	{
		return ((::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AAILCDOANGE___C_JFNPHKAHEJF_OFFSET))(this);
	}
};
