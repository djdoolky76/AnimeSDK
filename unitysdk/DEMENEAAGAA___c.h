#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DEMENEAAGAA;
namespace System { class Object; }

#define DEMENEAAGAA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E169F70)
#define DEMENEAAGAA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E169FB0)
#define DEMENEAAGAA___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E169FC0)

inline static constexpr unsigned int DEMENEAAGAA___c_TypeDefinitionIndex = 32835;

	class DEMENEAAGAA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2C960);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DEMENEAAGAA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEMENEAAGAA___C_CTOR_OFFSET))(this);
		}

		::DEMENEAAGAA* __cctor_b__18_0()
		{
			return ((::DEMENEAAGAA*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEMENEAAGAA___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
