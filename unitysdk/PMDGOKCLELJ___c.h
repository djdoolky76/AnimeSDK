#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PMDGOKCLELJ;
namespace System { class Object; }

#define PMDGOKCLELJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF7C200)
#define PMDGOKCLELJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF7C240)
#define PMDGOKCLELJ___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DF7C250)

inline static constexpr unsigned int PMDGOKCLELJ___c_TypeDefinitionIndex = 30800;

	class PMDGOKCLELJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3F110);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PMDGOKCLELJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMDGOKCLELJ___C_CTOR_OFFSET))(this);
		}

		::PMDGOKCLELJ* __cctor_b__23_0()
		{
			return ((::PMDGOKCLELJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + PMDGOKCLELJ___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
