#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DPKPGPPHHBM;
namespace System { class Object; }

#define DPKPGPPHHBM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F4F24D0)
#define DPKPGPPHHBM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F4F2510)
#define DPKPGPPHHBM___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F4F2520)

inline static constexpr unsigned int DPKPGPPHHBM___c_TypeDefinitionIndex = 26196;

	class DPKPGPPHHBM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x41380);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DPKPGPPHHBM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPKPGPPHHBM___C_CTOR_OFFSET))(this);
		}

		::DPKPGPPHHBM* __cctor_b__28_0()
		{
			return ((::DPKPGPPHHBM*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPKPGPPHHBM___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
