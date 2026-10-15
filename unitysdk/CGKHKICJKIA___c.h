#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CGKHKICJKIA;
namespace System { class Object; }

#define CGKHKICJKIA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E083050)
#define CGKHKICJKIA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E083080)
#define CGKHKICJKIA___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E083090)

inline static constexpr unsigned int CGKHKICJKIA___c_TypeDefinitionIndex = 34126;

	class CGKHKICJKIA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x131C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CGKHKICJKIA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGKHKICJKIA___C_CTOR_OFFSET))(this);
		}

		::CGKHKICJKIA* __cctor_b__28_0()
		{
			return ((::CGKHKICJKIA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGKHKICJKIA___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
