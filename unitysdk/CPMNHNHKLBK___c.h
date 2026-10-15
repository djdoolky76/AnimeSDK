#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CPMNHNHKLBK;
namespace System { class Object; }

#define CPMNHNHKLBK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E117AD0)
#define CPMNHNHKLBK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E117B10)
#define CPMNHNHKLBK___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E117B20)

inline static constexpr unsigned int CPMNHNHKLBK___c_TypeDefinitionIndex = 25514;

	class CPMNHNHKLBK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x200B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CPMNHNHKLBK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPMNHNHKLBK___C_CTOR_OFFSET))(this);
		}

		::CPMNHNHKLBK* __cctor_b__23_0()
		{
			return ((::CPMNHNHKLBK*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPMNHNHKLBK___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
