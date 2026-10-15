#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JLBDIAMCOME;
namespace System { class Object; }

#define JLBDIAMCOME___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E774160)
#define JLBDIAMCOME___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E774190)
#define JLBDIAMCOME___C___CCTOR_B__36_0_OFFSET UNITYSDK_OFFSET(0x1E7741A0)

inline static constexpr unsigned int JLBDIAMCOME___c_TypeDefinitionIndex = 33909;

	class JLBDIAMCOME___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x66420);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JLBDIAMCOME___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLBDIAMCOME___C_CTOR_OFFSET))(this);
		}

		::JLBDIAMCOME* __cctor_b__36_0()
		{
			return ((::JLBDIAMCOME*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLBDIAMCOME___C___CCTOR_B__36_0_OFFSET))(this);
		}

	};
