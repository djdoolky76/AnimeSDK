#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation::AssetLoadTask { template <typename T> class AssetLoadTask_1; }
namespace System { template <typename T> class Func_1; }

#define HJEKMCBGNIN___C_KJIMAGGPDCB_OFFSET UNITYSDK_OFFSET(0x1818FCA0)
#define HJEKMCBGNIN___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1818FC50)
#define HJEKMCBGNIN___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1818FC90)

inline static constexpr unsigned int HJEKMCBGNIN___c_TypeDefinitionIndex = 74287;

class HJEKMCBGNIN___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HJEKMCBGNIN___c_TypeDefinitionIndex)->GetStaticField(0x4D090);
	}
	static ::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::Il2CppArray<::Il2CppArray<::System::Object*>*>*>*>** StaticGet___9__4_0()
	{
		return (::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::Il2CppArray<::Il2CppArray<::System::Object*>*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(HJEKMCBGNIN___c_TypeDefinitionIndex)->GetStaticField(0x4D098);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HJEKMCBGNIN___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJEKMCBGNIN___C__CTOR_OFFSET))(this);
	}

	::Foundation::AssetLoadTask::AssetLoadTask_1<::Il2CppArray<::Il2CppArray<::System::Object*>*>*>* KJIMAGGPDCB()
	{
		return ((::Foundation::AssetLoadTask::AssetLoadTask_1<::Il2CppArray<::Il2CppArray<::System::Object*>*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJEKMCBGNIN___C_KJIMAGGPDCB_OFFSET))(this);
	}
};
