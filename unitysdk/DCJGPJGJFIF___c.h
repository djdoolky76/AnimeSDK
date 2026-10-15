#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DCJGPJGJFIF;
namespace System { class Object; }

#define DCJGPJGJFIF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E145340)
#define DCJGPJGJFIF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E145380)
#define DCJGPJGJFIF___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E145390)

inline static constexpr unsigned int DCJGPJGJFIF___c_TypeDefinitionIndex = 32562;

	class DCJGPJGJFIF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x24ED0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DCJGPJGJFIF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCJGPJGJFIF___C_CTOR_OFFSET))(this);
		}

		::DCJGPJGJFIF* __cctor_b__23_0()
		{
			return ((::DCJGPJGJFIF*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCJGPJGJFIF___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
