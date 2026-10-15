#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IHEBJJKGBOH;
namespace System { class Object; }

#define IHEBJJKGBOH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E62D480)
#define IHEBJJKGBOH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E62D4C0)
#define IHEBJJKGBOH___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E62D4D0)

inline static constexpr unsigned int IHEBJJKGBOH___c_TypeDefinitionIndex = 26479;

	class IHEBJJKGBOH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4CF40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IHEBJJKGBOH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHEBJJKGBOH___C_CTOR_OFFSET))(this);
		}

		::IHEBJJKGBOH* __cctor_b__33_0()
		{
			return ((::IHEBJJKGBOH*(*)(::PVOID))((::PBYTE)hIl2Cpp + IHEBJJKGBOH___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
