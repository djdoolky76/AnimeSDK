#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CGKPFHIANDF;
namespace System { class Object; }

#define CGKPFHIANDF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0B1DA0)
#define CGKPFHIANDF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0B1DD0)
#define CGKPFHIANDF___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E0B1DE0)

inline static constexpr unsigned int CGKPFHIANDF___c_TypeDefinitionIndex = 34731;

	class CGKPFHIANDF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x14450);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CGKPFHIANDF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGKPFHIANDF___C_CTOR_OFFSET))(this);
		}

		::CGKPFHIANDF* __cctor_b__28_0()
		{
			return ((::CGKPFHIANDF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGKPFHIANDF___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
