#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NPEBOLNHFAL;
namespace System { class Object; }

#define NPEBOLNHFAL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB68F90)
#define NPEBOLNHFAL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB68FD0)
#define NPEBOLNHFAL___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1EB68FE0)

inline static constexpr unsigned int NPEBOLNHFAL___c_TypeDefinitionIndex = 34910;

	class NPEBOLNHFAL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xC9B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPEBOLNHFAL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPEBOLNHFAL___C_CTOR_OFFSET))(this);
		}

		::NPEBOLNHFAL* __cctor_b__23_0()
		{
			return ((::NPEBOLNHFAL*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPEBOLNHFAL___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
