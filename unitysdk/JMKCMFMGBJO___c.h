#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JMKCMFMGBJO;
namespace System { class Object; }

#define JMKCMFMGBJO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E78EF50)
#define JMKCMFMGBJO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E78EF90)
#define JMKCMFMGBJO___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1E78EFA0)

inline static constexpr unsigned int JMKCMFMGBJO___c_TypeDefinitionIndex = 33938;

	class JMKCMFMGBJO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6C360);
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
