#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DBLILHCLPPL;
namespace System { class Object; }

#define DBLILHCLPPL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1332D0)
#define DBLILHCLPPL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E133300)
#define DBLILHCLPPL___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1E133310)

inline static constexpr unsigned int DBLILHCLPPL___c_TypeDefinitionIndex = 34233;

	class DBLILHCLPPL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x23040);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DBLILHCLPPL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBLILHCLPPL___C_CTOR_OFFSET))(this);
		}

		::DBLILHCLPPL* __cctor_b__48_0()
		{
			return ((::DBLILHCLPPL*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBLILHCLPPL___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
