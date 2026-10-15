#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LLFIKHHPJEB;
namespace System { class Object; }

#define LLFIKHHPJEB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E96DC50)
#define LLFIKHHPJEB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E96DC90)
#define LLFIKHHPJEB___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E96DCA0)

inline static constexpr unsigned int LLFIKHHPJEB___c_TypeDefinitionIndex = 28785;

	class LLFIKHHPJEB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3C430);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LLFIKHHPJEB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLFIKHHPJEB___C_CTOR_OFFSET))(this);
		}

		::LLFIKHHPJEB* __cctor_b__33_0()
		{
			return ((::LLFIKHHPJEB*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLFIKHHPJEB___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
