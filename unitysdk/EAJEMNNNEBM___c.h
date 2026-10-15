#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EAJEMNNNEBM;
namespace System { class Object; }

#define EAJEMNNNEBM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E22C600)
#define EAJEMNNNEBM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E22C630)
#define EAJEMNNNEBM___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E22C640)

inline static constexpr unsigned int EAJEMNNNEBM___c_TypeDefinitionIndex = 29741;

	class EAJEMNNNEBM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x49680);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EAJEMNNNEBM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAJEMNNNEBM___C_CTOR_OFFSET))(this);
		}

		::EAJEMNNNEBM* __cctor_b__28_0()
		{
			return ((::EAJEMNNNEBM*(*)(::PVOID))((::PBYTE)hIl2Cpp + EAJEMNNNEBM___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
