#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MDGPIJNKMLO;
namespace System { class Object; }

#define MDGPIJNKMLO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9D5D70)
#define MDGPIJNKMLO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9D5DA0)
#define MDGPIJNKMLO___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E9D5DB0)

inline static constexpr unsigned int MDGPIJNKMLO___c_TypeDefinitionIndex = 30526;

	class MDGPIJNKMLO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4BF40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MDGPIJNKMLO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDGPIJNKMLO___C_CTOR_OFFSET))(this);
		}

		::MDGPIJNKMLO* __cctor_b__18_0()
		{
			return ((::MDGPIJNKMLO*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDGPIJNKMLO___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
