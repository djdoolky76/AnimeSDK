#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ABDJMGPOAOK;
namespace System { class Object; }

#define ABDJMGPOAOK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DD9AF10)
#define ABDJMGPOAOK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DD9AF50)
#define ABDJMGPOAOK___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DD9AF60)

inline static constexpr unsigned int ABDJMGPOAOK___c_TypeDefinitionIndex = 27622;

	class ABDJMGPOAOK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x30770);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ABDJMGPOAOK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABDJMGPOAOK___C_CTOR_OFFSET))(this);
		}

		::ABDJMGPOAOK* __cctor_b__28_0()
		{
			return ((::ABDJMGPOAOK*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABDJMGPOAOK___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
