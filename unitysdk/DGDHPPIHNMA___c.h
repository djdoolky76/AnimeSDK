#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DGDHPPIHNMA;
namespace System { class Object; }

#define DGDHPPIHNMA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E17DA30)
#define DGDHPPIHNMA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E17DA60)
#define DGDHPPIHNMA___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E17DA70)

inline static constexpr unsigned int DGDHPPIHNMA___c_TypeDefinitionIndex = 30922;

	class DGDHPPIHNMA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2F1A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DGDHPPIHNMA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGDHPPIHNMA___C_CTOR_OFFSET))(this);
		}

		::DGDHPPIHNMA* __cctor_b__33_0()
		{
			return ((::DGDHPPIHNMA*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGDHPPIHNMA___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
