#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ELBEHADNLBB;
namespace System { class Object; }

#define ELBEHADNLBB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FE5F630)
#define ELBEHADNLBB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FE5F670)
#define ELBEHADNLBB___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1FE5F680)

inline static constexpr unsigned int ELBEHADNLBB___c_TypeDefinitionIndex = 30235;

	class ELBEHADNLBB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x436F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ELBEHADNLBB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELBEHADNLBB___C_CTOR_OFFSET))(this);
		}

		::ELBEHADNLBB* __cctor_b__28_0()
		{
			return ((::ELBEHADNLBB*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELBEHADNLBB___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
