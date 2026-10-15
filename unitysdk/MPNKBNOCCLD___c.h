#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MPNKBNOCCLD;
namespace System { class Object; }

#define MPNKBNOCCLD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EABB870)
#define MPNKBNOCCLD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EABB8B0)
#define MPNKBNOCCLD___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EABB8C0)

inline static constexpr unsigned int MPNKBNOCCLD___c_TypeDefinitionIndex = 26762;

	class MPNKBNOCCLD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5BBA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MPNKBNOCCLD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPNKBNOCCLD___C_CTOR_OFFSET))(this);
		}

		::MPNKBNOCCLD* __cctor_b__28_0()
		{
			return ((::MPNKBNOCCLD*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPNKBNOCCLD___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
