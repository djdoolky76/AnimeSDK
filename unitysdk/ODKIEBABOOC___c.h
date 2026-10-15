#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ODKIEBABOOC;
namespace System { class Object; }

#define ODKIEBABOOC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDF1D30)
#define ODKIEBABOOC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDF1D70)
#define ODKIEBABOOC___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DDF1D80)

inline static constexpr unsigned int ODKIEBABOOC___c_TypeDefinitionIndex = 31162;

	class ODKIEBABOOC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x12740);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ODKIEBABOOC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODKIEBABOOC___C_CTOR_OFFSET))(this);
		}

		::ODKIEBABOOC* __cctor_b__23_0()
		{
			return ((::ODKIEBABOOC*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODKIEBABOOC___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
