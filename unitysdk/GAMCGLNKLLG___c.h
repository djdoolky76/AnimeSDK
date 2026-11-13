#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GAMCGLNKLLG;
namespace System { class Object; }

#define GAMCGLNKLLG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC42670)
#define GAMCGLNKLLG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FC426B0)
#define GAMCGLNKLLG___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1FC426C0)

inline static constexpr unsigned int GAMCGLNKLLG___c_TypeDefinitionIndex = 27089;

	class GAMCGLNKLLG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x56280);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GAMCGLNKLLG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAMCGLNKLLG___C_CTOR_OFFSET))(this);
		}

		::GAMCGLNKLLG* __cctor_b__28_0()
		{
			return ((::GAMCGLNKLLG*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAMCGLNKLLG___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
