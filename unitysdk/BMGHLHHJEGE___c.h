#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BMGHLHHJEGE;
namespace System { class Object; }

#define BMGHLHHJEGE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFF8A40)
#define BMGHLHHJEGE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFF8A80)
#define BMGHLHHJEGE___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DFF8A90)

inline static constexpr unsigned int BMGHLHHJEGE___c_TypeDefinitionIndex = 31887;

	class BMGHLHHJEGE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5CB90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BMGHLHHJEGE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMGHLHHJEGE___C_CTOR_OFFSET))(this);
		}

		::BMGHLHHJEGE* __cctor_b__28_0()
		{
			return ((::BMGHLHHJEGE*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMGHLHHJEGE___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
