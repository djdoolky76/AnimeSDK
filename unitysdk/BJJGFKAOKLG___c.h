#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BJJGFKAOKLG;
namespace System { class Object; }

#define BJJGFKAOKLG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FAD1F10)
#define BJJGFKAOKLG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FAD1F50)
#define BJJGFKAOKLG___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1FAD1F60)

inline static constexpr unsigned int BJJGFKAOKLG___c_TypeDefinitionIndex = 26825;

	class BJJGFKAOKLG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x54A00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BJJGFKAOKLG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJJGFKAOKLG___C_CTOR_OFFSET))(this);
		}

		::BJJGFKAOKLG* __cctor_b__18_0()
		{
			return ((::BJJGFKAOKLG*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJJGFKAOKLG___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
