#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DNNLHFKKNLM;
namespace System { class Object; }

#define DNNLHFKKNLM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1F9BD0)
#define DNNLHFKKNLM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1F9C10)
#define DNNLHFKKNLM___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E1F9C20)

	class DNNLHFKKNLM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x40DD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DNNLHFKKNLM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNNLHFKKNLM___C_CTOR_OFFSET))(this);
		}

		::DNNLHFKKNLM* __cctor_b__23_0()
		{
			return ((::DNNLHFKKNLM*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNNLHFKKNLM___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
