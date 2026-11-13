#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BKPFBNADBFO;
namespace System { class Object; }

#define BKPFBNADBFO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC5F4F0)
#define BKPFBNADBFO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FC5F520)
#define BKPFBNADBFO___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1FC5F530)

inline static constexpr unsigned int BKPFBNADBFO___c_TypeDefinitionIndex = 31375;

	class BKPFBNADBFO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x573D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BKPFBNADBFO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKPFBNADBFO___C_CTOR_OFFSET))(this);
		}

		::BKPFBNADBFO* __cctor_b__18_0()
		{
			return ((::BKPFBNADBFO*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKPFBNADBFO___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
