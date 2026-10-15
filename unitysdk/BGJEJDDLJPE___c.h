#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BGJEJDDLJPE;
namespace System { class Object; }

#define BGJEJDDLJPE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA799B0)
#define BGJEJDDLJPE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA799F0)
#define BGJEJDDLJPE___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EA79A00)

inline static constexpr unsigned int BGJEJDDLJPE___c_TypeDefinitionIndex = 30181;

	class BGJEJDDLJPE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x42F50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BGJEJDDLJPE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGJEJDDLJPE___C_CTOR_OFFSET))(this);
		}

		::BGJEJDDLJPE* __cctor_b__28_0()
		{
			return ((::BGJEJDDLJPE*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGJEJDDLJPE___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
