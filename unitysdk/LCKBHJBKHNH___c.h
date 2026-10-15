#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LCKBHJBKHNH;
namespace System { class Object; }

#define LCKBHJBKHNH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8C16F0)
#define LCKBHJBKHNH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8C1730)
#define LCKBHJBKHNH___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E8C1740)

inline static constexpr unsigned int LCKBHJBKHNH___c_TypeDefinitionIndex = 27171;

	class LCKBHJBKHNH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2CB40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LCKBHJBKHNH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCKBHJBKHNH___C_CTOR_OFFSET))(this);
		}

		::LCKBHJBKHNH* __cctor_b__28_0()
		{
			return ((::LCKBHJBKHNH*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCKBHJBKHNH___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
