#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HAHEOGIBNHL;
namespace System { class Object; }

#define HAHEOGIBNHL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E504A20)
#define HAHEOGIBNHL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E504A60)
#define HAHEOGIBNHL___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E504A70)

inline static constexpr unsigned int HAHEOGIBNHL___c_TypeDefinitionIndex = 26644;

	class HAHEOGIBNHL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2CB40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HAHEOGIBNHL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAHEOGIBNHL___C_CTOR_OFFSET))(this);
		}

		::HAHEOGIBNHL* __cctor_b__28_0()
		{
			return ((::HAHEOGIBNHL*(*)(::PVOID))((::PBYTE)hIl2Cpp + HAHEOGIBNHL___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
