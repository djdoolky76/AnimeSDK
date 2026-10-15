#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IGMOKOENLDK;
namespace System { class Object; }

#define IGMOKOENLDK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E625AB0)
#define IGMOKOENLDK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E625AE0)
#define IGMOKOENLDK___C___CCTOR_B__53_0_OFFSET UNITYSDK_OFFSET(0x1E625AF0)

inline static constexpr unsigned int IGMOKOENLDK___c_TypeDefinitionIndex = 25464;

	class IGMOKOENLDK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4C020);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IGMOKOENLDK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGMOKOENLDK___C_CTOR_OFFSET))(this);
		}

		::IGMOKOENLDK* __cctor_b__53_0()
		{
			return ((::IGMOKOENLDK*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGMOKOENLDK___C___CCTOR_B__53_0_OFFSET))(this);
		}

	};
