#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define ALNEOFKDBEP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x197CC620)
#define ALNEOFKDBEP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x197CC660)
#define ALNEOFKDBEP___C__ONTASKBEGIN_B__1_0_OFFSET UNITYSDK_OFFSET(0x197CC670)

inline static constexpr unsigned int ALNEOFKDBEP___c_TypeDefinitionIndex = 53783;

	class ALNEOFKDBEP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x54020);
		}

		static ::System::Func_2<::System::Int32, ::System::Single>** StaticGet___9__1_0()
		{
			return (::System::Func_2<::System::Int32, ::System::Single>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x54028);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ALNEOFKDBEP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALNEOFKDBEP___C_CTOR_OFFSET))(this);
		}

		::System::Single _OnTaskBegin_b__1_0(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ALNEOFKDBEP___C__ONTASKBEGIN_B__1_0_OFFSET))(this, a1);
		}

	};
