#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JMKCMFMGBJO;
namespace System { class Object; }

#define JMKCMFMGBJO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FFF6BA0)
#define JMKCMFMGBJO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FFF6BE0)
#define JMKCMFMGBJO___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1FFF6BF0)

inline static constexpr unsigned int JMKCMFMGBJO___c_TypeDefinitionIndex = 34853;

	class JMKCMFMGBJO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x66AF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JMKCMFMGBJO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMKCMFMGBJO___C_CTOR_OFFSET))(this);
		}

		::JMKCMFMGBJO* __cctor_b__48_0()
		{
			return ((::JMKCMFMGBJO*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMKCMFMGBJO___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
