#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ICABANFEIHJ;
namespace System { class Object; }

#define ICABANFEIHJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5F04D0)
#define ICABANFEIHJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5F0510)
#define ICABANFEIHJ___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E5F0520)

inline static constexpr unsigned int ICABANFEIHJ___c_TypeDefinitionIndex = 28016;

	class ICABANFEIHJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x443C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ICABANFEIHJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICABANFEIHJ___C_CTOR_OFFSET))(this);
		}

		::ICABANFEIHJ* __cctor_b__28_0()
		{
			return ((::ICABANFEIHJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICABANFEIHJ___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
