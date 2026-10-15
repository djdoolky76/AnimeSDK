#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KOHONNJJMOL;
namespace System { class Object; }

#define KOHONNJJMOL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8B1640)
#define KOHONNJJMOL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8B1680)
#define KOHONNJJMOL___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E8B1690)

inline static constexpr unsigned int KOHONNJJMOL___c_TypeDefinitionIndex = 30115;

	class KOHONNJJMOL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2B8A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KOHONNJJMOL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOHONNJJMOL___C_CTOR_OFFSET))(this);
		}

		::KOHONNJJMOL* __cctor_b__28_0()
		{
			return ((::KOHONNJJMOL*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOHONNJJMOL___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
