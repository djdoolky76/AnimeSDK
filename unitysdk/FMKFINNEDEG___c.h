#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FMKFINNEDEG;
namespace System { class Object; }

#define FMKFINNEDEG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3E8AB0)
#define FMKFINNEDEG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3E8AE0)
#define FMKFINNEDEG___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E3E8AF0)

inline static constexpr unsigned int FMKFINNEDEG___c_TypeDefinitionIndex = 32057;

	class FMKFINNEDEG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x64E60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FMKFINNEDEG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMKFINNEDEG___C_CTOR_OFFSET))(this);
		}

		::FMKFINNEDEG* __cctor_b__18_0()
		{
			return ((::FMKFINNEDEG*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMKFINNEDEG___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
