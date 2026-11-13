#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ILFJIIDEEBI;
namespace System { class Object; }

#define ILFJIIDEEBI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x206B2E10)
#define ILFJIIDEEBI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x206B2E50)
#define ILFJIIDEEBI___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x206B2E60)

inline static constexpr unsigned int ILFJIIDEEBI___c_TypeDefinitionIndex = 27121;

	class ILFJIIDEEBI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4C700);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ILFJIIDEEBI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILFJIIDEEBI___C_CTOR_OFFSET))(this);
		}

		::ILFJIIDEEBI* __cctor_b__18_0()
		{
			return ((::ILFJIIDEEBI*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILFJIIDEEBI___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
