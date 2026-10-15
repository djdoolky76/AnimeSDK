#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JOGKBLIDLOC;
namespace System { class Object; }

#define JOGKBLIDLOC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7751A0)
#define JOGKBLIDLOC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7751E0)
#define JOGKBLIDLOC___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E7751F0)

inline static constexpr unsigned int JOGKBLIDLOC___c_TypeDefinitionIndex = 34120;

	class JOGKBLIDLOC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x689C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JOGKBLIDLOC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOGKBLIDLOC___C_CTOR_OFFSET))(this);
		}

		::JOGKBLIDLOC* __cctor_b__28_0()
		{
			return ((::JOGKBLIDLOC*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOGKBLIDLOC___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
