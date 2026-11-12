#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LEHBIBDGEHG;
namespace System { class Object; }

#define LEHBIBDGEHG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC4FC70)
#define LEHBIBDGEHG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FC4FCA0)
#define LEHBIBDGEHG___C___CCTOR_B__40_0_OFFSET UNITYSDK_OFFSET(0x1FC4FCB0)

inline static constexpr unsigned int LEHBIBDGEHG___c_TypeDefinitionIndex = 34181;

	class LEHBIBDGEHG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2E490);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LEHBIBDGEHG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEHBIBDGEHG___C_CTOR_OFFSET))(this);
		}

		::LEHBIBDGEHG* __cctor_b__40_0()
		{
			return ((::LEHBIBDGEHG*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEHBIBDGEHG___C___CCTOR_B__40_0_OFFSET))(this);
		}

	};
