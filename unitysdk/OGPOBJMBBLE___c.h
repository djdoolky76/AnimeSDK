#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OGPOBJMBBLE;
namespace System { class Object; }

#define OGPOBJMBBLE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F100770)
#define OGPOBJMBBLE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F1007B0)
#define OGPOBJMBBLE___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F1007C0)

inline static constexpr unsigned int OGPOBJMBBLE___c_TypeDefinitionIndex = 33065;

	class OGPOBJMBBLE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x14F30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OGPOBJMBBLE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGPOBJMBBLE___C_CTOR_OFFSET))(this);
		}

		::OGPOBJMBBLE* __cctor_b__28_0()
		{
			return ((::OGPOBJMBBLE*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGPOBJMBBLE___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
